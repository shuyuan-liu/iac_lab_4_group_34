module sign_extend (
    input logic[31:7] immediate,
    input logic [1:0] ImmSrc,
    output logic [31:0] ImmExt
);

always_comb begin
    if(ImmSrc==0)  //I-type
        assign ImmExt = {{21{immediate[31]}},immediate[30:20]};
    else if(ImmSrc==1)   //S-type
        assign ImmExt = {{21{immediate[31]}},immediate[30:25],immediate[11:7]};
    else if(ImmSrc==2)   //B-type
        assign ImmExt = {{20{immediate[31]}},immediate[7],immediate[30:25],immediate[11:8],0};
    else if(ImmSrc==3)   //U-type
        assign ImmExt = {immediate[31],immediate[30:20],immediate[19:12],{12{1'b0}}};
    else if(ImmSrc==4)   //J-type
        assign ImmExt = {{12{immediate[31]}},immediate[19:12],immediate[20],immediate[30:25],immediate[24:21],1'b0};
end



endmodule
