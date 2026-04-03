`include "dram.v"
module main(clk, we, ras, cas, ba, addr, dq);
    input clk, we, ras, cas;
    input [1:0] ba;
    input [11:0] addr;
    inout [15:0] dq;


    DRAM dram(.we_N(we), .cs_N(0), .cke(1), .clk(clk),
            .ras_N(ras), .cas_N(cas), .udqm(0), .ldqm(0), .ba(ba),
            .addr(addr), .dq(dq));
endmodule;
