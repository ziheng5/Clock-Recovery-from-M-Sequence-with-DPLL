module freq_counter (
    input clk_sys,          // 12 MHz 
    input clk_recovered,    // dpll 
    output reg [19:0] freq_value //  ( < 1,000,000)
);

    reg [23:0] sec_counter = 0; 
    reg [19:0] pulse_counter = 0;
    reg [19:0] pulse_latch = 0;

    //  1  (12 MHz)
    always @(posedge clk_sys) begin
        if(sec_counter >= 12000000-1) begin
            sec_counter <= 0;
            pulse_latch <= pulse_counter; // 
            pulse_counter <= 0;           // 
        end else begin
            sec_counter <= sec_counter + 1;
        end
    end

    //  recovered clock 
    always @(posedge clk_recovered) begin
        pulse_counter <= pulse_counter + 1;
    end

    always @(*) begin
        freq_value = pulse_latch;
    end

endmodule
