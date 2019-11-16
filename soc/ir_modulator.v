module ir_modulator #(
	parameter CLOCK_SPEED=8000000 // 8MHz
)(
	input clk,
	output out
);

reg [23:0] carrier; // 24-bit counter
reg carrier_out = 0;

always @(posedge clk) begin
	if (carrier < CLOCK_SPEED / 2 / 38000) // 38KHz. i.e. 8MHz is 8000000 / 2 / 38000 = 105
	begin
		carrier <= carrier + 1;
	end else 
	begin
		carrier <= 0;
		carrier_out <= ~carrier_out;
	end
end

assign out = carrier_out;

endmodule