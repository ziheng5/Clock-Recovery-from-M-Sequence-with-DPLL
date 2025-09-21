module bin2bcd (
    input [19:0] bin,       // 
    output reg [3:0] bcd5,  // 
    output reg [3:0] bcd4,
    output reg [3:0] bcd3,
    output reg [3:0] bcd2,
    output reg [3:0] bcd1,
    output reg [3:0] bcd0   // 
);

    integer i;
    reg [39:0] shift_reg; //  BCD + 

    always @(*) begin
        shift_reg = {20'd0, bin}; // 
        for (i = 0; i < 20; i = i + 1) begin
            //  BCD digit >= 5  +3
            if(shift_reg[23:20] >= 5) shift_reg[23:20] = shift_reg[23:20] + 3;
            if(shift_reg[27:24] >= 5) shift_reg[27:24] = shift_reg[27:24] + 3;
            if(shift_reg[31:28] >= 5) shift_reg[31:28] = shift_reg[31:28] + 3;
            if(shift_reg[35:32] >= 5) shift_reg[35:32] = shift_reg[35:32] + 3;
            if(shift_reg[39:36] >= 5) shift_reg[39:36] = shift_reg[39:36] + 3;
            // 
            shift_reg = shift_reg << 1;
        end

        bcd5 = shift_reg[39:36];
        bcd4 = shift_reg[35:32];
        bcd3 = shift_reg[31:28];
        bcd2 = shift_reg[27:24];
        bcd1 = shift_reg[23:20];
        bcd0 = shift_reg[19:16];
    end
endmodule
