#include <SFML/Graphics.hpp>

#include "Vhvsync_generator.h"
#include "Vhvsync_test.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <SFML/Graphics/Texture.hpp>
#include <cstdio>



#define H_DISPLAY        640 // horizontal display width
#define H_BACK            48 // horizontal left border (back porch)
#define H_FRONT           16 // horizontal right border (front porch)
#define H_SYNC            96 // horizontal sync width
// vertical constants
#define V_DISPLAY        480 // vertical display height
#define V_TOP             33 // vertical top border
#define V_BOTTOM          10 // vertical bottom border
#define V_SYNC             2 // vertical sync # lines
// derived constants
#define H_SYNC_START     H_DISPLAY + H_FRONT
#define H_SYNC_END       H_DISPLAY + H_FRONT + H_SYNC - 1
#define H_MAX            H_DISPLAY + H_BACK + H_FRONT + H_SYNC - 1
#define V_SYNC_START     V_DISPLAY + V_BOTTOM
#define V_SYNC_END       V_DISPLAY + V_BOTTOM + V_SYNC - 1
#define V_MAX            V_DISPLAY + V_TOP + V_BOTTOM + V_SYNC - 1

#define CLOCKS_PER_FRAME V_MAX * H_MAX

uint8_t buffer[640*480*4];


struct vec4 {
    uint r, g, b, a;
};



int main() {
    // Verilated::traceEverOn(true);  // VERY IMPORTANT

    Vhvsync_test* top = new Vhvsync_test;
    sf::Texture texture({640, 480});

    sf::Sprite sprite(texture);
    // VerilatedVcdC* tfp = new VerilatedVcdC;
    // top->trace(tfp, 99);

    for(int i = 0; i < 480; i++) {
        buffer[4*(i + i*640)] = 255;
        buffer[4*(i + i*640) + 3] = 255;
    }

    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML window");

    while (window.isOpen())
    {
        for(int i = 0; i < CLOCKS_PER_FRAME; i++) {
            top->clk = !top->clk;   // example clock
            top->eval();
            uint32_t a = 4*(top->out_hpos + 640 * top->out_vpos);
            buffer[a] = 255 * (top->rgb &0b1);
            buffer[a + 1] = 255 * (top->rgb &0b10);
            buffer[a + 2] = 255 * (top->rgb &0b100);
            // buffer[a] = 255;
            // buffer[a + 1] = 1;
            // buffer[a + 2] = 1;
            buffer[a + 3] = 255;
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
    }


    window.close();
    // tfp->close();
    delete top;
}
