module mux_2 #(
    parameter VALUE_WIDTH = 32
)(
    input  logic                  sel,
    input  logic[VALUE_WIDTH-1:0] in0,
    input  logic[VALUE_WIDTH-1:0] in1,
    output logic[VALUE_WIDTH-1:0] out
);

assign out = sel ? in1 : in0;
    
endmodule
