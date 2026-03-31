`include "hvsync_generator.v"

/*
A simple test pattern using the hvsync_generator module.
*/

module test_hvsync_top(clk, reset, hsync, vsync, rgb, out_hpos, out_vpos);

  input clk, reset;
  output hsync, vsync;
  output [2:0] rgb;
  output [9:0] out_hpos;
  output [9:0] out_vpos;
  wire display_on;
  wire [9:0] hpos;
  wire [9:0] vpos;

  hvsync_generator hvsync_gen(
    .clk(clk),
    .reset(0),
    .hsync(hsync),
    .vsync(vsync),
    .display_on(display_on),
    .hpos(hpos),
    .vpos(vpos)
  );

  wire r = display_on && (((hpos&7)==0) || ((vpos&7)==0));
  wire g = display_on && vpos[4];
  wire b = display_on && hpos[4];
  assign rgb = {b,g,r};
  assign out_hpos = hpos;
  assign out_vpos = vpos;
endmodule
