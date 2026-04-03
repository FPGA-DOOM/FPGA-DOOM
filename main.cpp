
#include "Vmain.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>
#include <unistd.h>




int main() {
    // Verilated::traceEverOn(true);  // VERY IMPORTANT

    Vmain* top = new Vmain;

    // VerilatedVcdC* tfp = new VerilatedVcdC;
    // top->trace(tfp, 99);


    unsigned int i = 0;
    while (1)
    {
        top->clk = !top->clk;   // example clock
        top->eval();
        top->clk = !top->clk;   // example clock

        switch (i) {
            case 0: {
                // RAS CAS WE 0 1 1
                top->ras = 0;
                top->cas = 1;
                top->we  = 1;
                top->ba = 0;
                top->addr = 5;
                top->dq = 0;

                break;
            };
            case 1: {
                // RAS CAS WE 1 00
                top->ras = 1;
                top->cas = 0;
                top->we  = 0;
                top->ba = 0;
                top->addr = 5;
                top->dq = 3;
                break;
            };
            case 2: {
                // RAS CAS WE 0 1 1
                top->ras = 0;
                top->cas = 1;
                top->we  = 1;
                top->ba = 0;
                top->addr = 5;
                top->dq = 0;

                break;
            };
            case 3: {
                // RAS CAS WE 1 0 0
                top->ras = 1;
                top->cas = 0;
                top->we  = 1;
                top->ba = 0;
                top->addr = 5;
                top->dq = 0;
                break;
            };
            case 4: {
                printf("result = %d\n", top->dq);
                top->ras = 1;
                top->cas = 1;
                top->we  = 1;
                break;
            }
            default: {
                break;
            }
        }
        top->eval();
        if(i > 5)
            break;
        i++;
    }


    // tfp->close();
    delete top;
    return 0;
}
