#include <SFML/Graphics.hpp>

#include "Vstarfield.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <SFML/Graphics/Texture.hpp>
#include <cstdio>
#include <unistd.h>


const uint H_DISPLAY   =     640; // horizontal display width
const uint H_BACK      =      48; // horizontal left border (back porch)
const uint H_FRONT     =      16; // horizontal right border (front porch)
const uint H_SYNC       =     96; // horizontal sync width
// vertical constants
const uint V_DISPLAY   =     480; // vertical display height
const uint V_TOP       =      33; // vertical top border
const uint V_BOTTOM    =      10; // vertical bottom border
const uint V_SYNC      =       2; // vertical sync # lines
// derived constants
const uint H_SYNC_START  =   H_DISPLAY + H_FRONT;
const uint H_SYNC_END    =   H_DISPLAY + H_FRONT + H_SYNC - 1;
const uint H_MAX        =    H_DISPLAY + H_BACK + H_FRONT + H_SYNC - 1;
const uint V_SYNC_START =    V_DISPLAY + V_BOTTOM;
const uint V_SYNC_END    =   V_DISPLAY + V_BOTTOM + V_SYNC - 1;
const uint V_MAX         =   V_DISPLAY + V_TOP + V_BOTTOM + V_SYNC - 1;

const uint CLOCKS_PER_FRAME = V_MAX * H_MAX;

uint8_t buffer[H_DISPLAY*V_DISPLAY*4];


struct vec4 {
    uint r, g, b, a;
};



int main() {
    // Verilated::traceEverOn(true);  // VERY IMPORTANT

    Vstarfield* top = new Vstarfield;
    sf::Texture texture({640, 480});

    sf::Sprite sprite(texture);
    // VerilatedVcdC* tfp = new VerilatedVcdC;
    // top->trace(tfp, 99);
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML window");



    while (window.isOpen())
    {
        for(int i = 0; i < CLOCKS_PER_FRAME; i++) {
            top->clk = !top->clk;   // example clock
            top->eval();
            top->clk = !top->clk;   // example clock
            top->eval();
            if(top->out_hpos < 640 && top->out_vpos < 480){
                uint32_t a = 4*(top->out_hpos + 640 * top->out_vpos);
                buffer[a] = 255 * (top->rgb &0b1);
                buffer[a + 1] = 255 * (top->rgb &0b10);
                buffer[a + 2] = 255 * (top->rgb &0b100);
                buffer[a + 3] = 255;
            }
        }
        // printf("(%d %d %d):%b\n",top->out_hpos, top->out_vpos , a, top->rgb);
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear();

        texture.update(buffer);

        window.draw(sprite);

        window.display();

    }


    window.close();
    // tfp->close();
    delete top;
}
