`ifdenf MULTIPLEXER
`define MULTIPLEXER

module multiplexer(clk, number, bus);

input clk;
input [7:0] number;
output[255:0] bus;

bus[number] = 1;


endmodule;

`endif
