module sign_extend_pip (
    input logic[31:7] InstrD,
    input logic [1:0] ImmSrcD,
    output logic [31:0] ImmExtD
);

always_comb begin
    if(ImmSrcD==0)  //I-type
        assign ImmExtD = {{21{InstrD[31]}},InstrD[30:20]};
    // else if(ImmSrcD==1)   //S-type (not needed)
        // assign ImmExtD = {{21{InstrD[31]}},InstrD[30:25],InstrD[11:7]};
    else if(ImmSrcD==1)   //B-type
        assign ImmExtD = {{20{InstrD[31]}},InstrD[7],InstrD[30:25],InstrD[11:8],0};
    else if(ImmSrcD==2)   //U-type
        assign ImmExtD = {InstrD[31],InstrD[30:20],InstrD[19:12],{12{1'b0}}};
    else if(ImmSrcD==3)   //J-type
        assign ImmExtD = {{12{InstrD[31]}},InstrD[19:12],InstrD[20],InstrD[30:25],InstrD[24:21],1'b0};
end



endmodule