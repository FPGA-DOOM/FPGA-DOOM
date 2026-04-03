`ifndef DRAM
`define DRAM

`define WRITE_CMD 3'b100
`define READ_CMD 3'b101
`define ACTIVE_CMD 3'b011

reg [15:0] DRAM[0:4194303];//64Mbs

module DRAM(we_N, cs_N, cke, clk,
            ras_N, cas_N, udqm, ldqm, ba, addr, dq);

    input we_N;
    input cas_N;
    input ras_N;

    input cs_N;

    input cke;
    input clk;

    input udqm;
    input ldqm;

    input [1:0] ba;
    input [11:0] addr;
    inout [15:0] dq;

    reg is_out;
    reg [15:0] out_data;

    reg [2:0] opcode;
    reg [13:0] pre_addr;
    reg [21:0] full_addr;

    assign dq = is_out ? out_data : 'z;

    always @ (posedge clk) begin
        if (cke) begin
            if (!cs_N) begin
                opcode = {ras_N, cas_N, we_N};
                case (opcode)
                    `ACTIVE_CMD: begin
                        pre_addr = {ba, addr};
                    end
                    `READ_CMD: begin
                        full_addr = {pre_addr, 8'(addr)};
                        out_data = DRAM[full_addr];
                        is_out = 1;
                    end
                    `WRITE_CMD: begin
                        full_addr = {pre_addr, 8'(addr)};
                        is_out = 0;
                        DRAM[full_addr] <= dq;
                    end
                    default: begin
                        //NOP
                    end
                endcase
            end
        end
    end

endmodule;
`endif
