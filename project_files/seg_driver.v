module seg_driver_bcd (
    input clk_sys,                  // 12 MHz 
    input [3:0] bcd5, bcd4, bcd3, bcd2, bcd1, bcd0,
    output reg [3:0] bcd_out,       //  PA,PB,PC,PD
    output reg [5:0] digit_sel      //  PW1-PW6
);

    reg [2:0] scan_sel = 0;
    reg [15:0] refresh_counter = 0;

    //  ( 1kHz)
    always @(posedge clk_sys) begin
        refresh_counter <= refresh_counter + 1;
        if(refresh_counter == 0)
            scan_sel <= scan_sel + 1;
    end

    // 
    always @(*) begin
        case(scan_sel)
            3'd0: begin digit_sel = 6'b000001; bcd_out = bcd0; end
            3'd1: begin digit_sel = 6'b000010; bcd_out = bcd1; end
            3'd2: begin digit_sel = 6'b000100; bcd_out = bcd2; end
            3'd3: begin digit_sel = 6'b001000; bcd_out = bcd3; end
            3'd4: begin digit_sel = 6'b010000; bcd_out = bcd4; end
            3'd5: begin digit_sel = 6'b100000; bcd_out = bcd5; end
            default: begin digit_sel = 6'b000000; bcd_out = 4'd0; end
        endcase
    end

endmodule
