// Generated with `xb buildshaders`.
#if 0
; SPIR-V
; Version: 1.0
; Generator: Khronos Glslang Reference Front End; 10
; Bound: 25179
; Schema: 0
               OpCapability Shader
          %1 = OpExtInstImport "GLSL.std.450"
               OpMemoryModel Logical GLSL450
               OpEntryPoint GLCompute %5663 "main" %gl_GlobalInvocationID
               OpExecutionMode %5663 LocalSize 2 32 1
               OpMemberDecorate %_struct_1161 0 Offset 0
               OpMemberDecorate %_struct_1161 1 Offset 4
               OpMemberDecorate %_struct_1161 2 Offset 8
               OpMemberDecorate %_struct_1161 3 Offset 12
               OpMemberDecorate %_struct_1161 4 Offset 16
               OpMemberDecorate %_struct_1161 5 Offset 28
               OpMemberDecorate %_struct_1161 6 Offset 32
               OpMemberDecorate %_struct_1161 7 Offset 36
               OpDecorate %_struct_1161 Block
               OpDecorate %5245 DescriptorSet 2
               OpDecorate %5245 Binding 0
               OpDecorate %gl_GlobalInvocationID BuiltIn GlobalInvocationId
               OpDecorate %_runtimearr_v4uint ArrayStride 16
               OpMemberDecorate %_struct_1972 0 NonReadable
               OpMemberDecorate %_struct_1972 0 Offset 0
               OpDecorate %_struct_1972 BufferBlock
               OpDecorate %5134 DescriptorSet 0
               OpDecorate %5134 Binding 0
               OpDecorate %_runtimearr_v4uint_0 ArrayStride 16
               OpMemberDecorate %_struct_1973 0 NonWritable
               OpMemberDecorate %_struct_1973 0 Offset 0
               OpDecorate %_struct_1973 BufferBlock
               OpDecorate %4218 DescriptorSet 1
               OpDecorate %4218 Binding 0
               OpDecorate %gl_WorkGroupSize BuiltIn WorkgroupSize
       %void = OpTypeVoid
       %1282 = OpTypeFunction %void
       %uint = OpTypeInt 32 0
     %v4uint = OpTypeVector %uint 4
        %int = OpTypeInt 32 1
      %v2int = OpTypeVector %int 2
      %v3int = OpTypeVector %int 3
       %bool = OpTypeBool
     %v3uint = OpTypeVector %uint 3
%uint_4042322160 = OpConstant %uint 4042322160
%uint_983055 = OpConstant %uint 983055
     %uint_8 = OpConstant %uint 8
%uint_251662080 = OpConstant %uint 251662080
     %uint_1 = OpConstant %uint 1
%uint_16711935 = OpConstant %uint 16711935
%uint_4278255360 = OpConstant %uint 4278255360
     %uint_0 = OpConstant %uint 0
      %int_5 = OpConstant %int 5
     %uint_5 = OpConstant %uint 5
     %uint_7 = OpConstant %uint 7
      %int_7 = OpConstant %int 7
     %int_14 = OpConstant %int 14
      %int_2 = OpConstant %int 2
    %int_n16 = OpConstant %int -16
      %int_1 = OpConstant %int 1
     %int_15 = OpConstant %int 15
      %int_4 = OpConstant %int 4
   %int_n512 = OpConstant %int -512
      %int_3 = OpConstant %int 3
     %int_16 = OpConstant %int 16
    %int_448 = OpConstant %int 448
      %int_8 = OpConstant %int 8
      %int_6 = OpConstant %int 6
     %int_63 = OpConstant %int 63
     %uint_2 = OpConstant %uint 2
     %uint_4 = OpConstant %uint 4
%int_268435455 = OpConstant %int 268435455
     %int_n2 = OpConstant %int -2
     %uint_3 = OpConstant %uint 3
    %uint_32 = OpConstant %uint 32
    %uint_64 = OpConstant %uint 64
%_struct_1161 = OpTypeStruct %uint %uint %uint %uint %v3uint %uint %uint %uint
%_ptr_Uniform__struct_1161 = OpTypePointer Uniform %_struct_1161
       %5245 = OpVariable %_ptr_Uniform__struct_1161 Uniform
      %int_0 = OpConstant %int 0
%_ptr_Uniform_uint = OpTypePointer Uniform %uint
%_ptr_Uniform_v3uint = OpTypePointer Uniform %v3uint
     %v2uint = OpTypeVector %uint 2
%_ptr_Input_v3uint = OpTypePointer Input %v3uint
%gl_GlobalInvocationID = OpVariable %_ptr_Input_v3uint Input
       %2612 = OpConstantComposite %v3uint %uint_4 %uint_0 %uint_0
     %v2bool = OpTypeVector %bool 2
%_runtimearr_v4uint = OpTypeRuntimeArray %v4uint
%_struct_1972 = OpTypeStruct %_runtimearr_v4uint
%_ptr_Uniform__struct_1972 = OpTypePointer Uniform %_struct_1972
       %5134 = OpVariable %_ptr_Uniform__struct_1972 Uniform
%_runtimearr_v4uint_0 = OpTypeRuntimeArray %v4uint
%_struct_1973 = OpTypeStruct %_runtimearr_v4uint_0
%_ptr_Uniform__struct_1973 = OpTypePointer Uniform %_struct_1973
       %4218 = OpVariable %_ptr_Uniform__struct_1973 Uniform
%_ptr_Uniform_v4uint = OpTypePointer Uniform %v4uint
%gl_WorkGroupSize = OpConstantComposite %v3uint %uint_2 %uint_32 %uint_1
       %2510 = OpConstantComposite %v4uint %uint_16711935 %uint_16711935 %uint_16711935 %uint_16711935
        %317 = OpConstantComposite %v4uint %uint_8 %uint_8 %uint_8 %uint_8
       %1838 = OpConstantComposite %v4uint %uint_4278255360 %uint_4278255360 %uint_4278255360 %uint_4278255360
        %992 = OpConstantComposite %v4uint %uint_4042322160 %uint_4042322160 %uint_4042322160 %uint_4042322160
        %925 = OpConstantComposite %v4uint %uint_983055 %uint_983055 %uint_983055 %uint_983055
       %2316 = OpConstantComposite %v4uint %uint_251662080 %uint_251662080 %uint_251662080 %uint_251662080
    %uint_16 = OpConstant %uint 16
       %5663 = OpFunction %void None %1282
      %15110 = OpLabel
               OpSelectionMerge %19578 None
               OpSwitch %uint_0 %15137
      %15137 = OpLabel
      %12591 = OpLoad %v3uint %gl_GlobalInvocationID
      %10229 = OpShiftLeftLogical %v3uint %12591 %2612
      %25178 = OpAccessChain %_ptr_Uniform_v3uint %5245 %int_4
      %22965 = OpLoad %v3uint %25178
      %18835 = OpVectorShuffle %v2uint %10229 %10229 0 1
       %6626 = OpVectorShuffle %v2uint %22965 %22965 0 1
      %17032 = OpUGreaterThanEqual %v2bool %18835 %6626
      %24679 = OpAny %bool %17032
               OpSelectionMerge %6282 DontFlatten
               OpBranchConditional %24679 %21992 %6282
      %21992 = OpLabel
               OpBranch %19578
       %6282 = OpLabel
       %6795 = OpBitcast %v3int %10229
      %18792 = OpAccessChain %_ptr_Uniform_uint %5245 %int_6
       %9788 = OpLoad %uint %18792
      %20376 = OpCompositeExtract %uint %22965 1
      %14692 = OpCompositeExtract %int %6795 0
      %22810 = OpIMul %int %14692 %int_2
       %6362 = OpCompositeExtract %int %6795 2
      %14505 = OpBitcast %int %20376
      %11279 = OpIMul %int %6362 %14505
      %17598 = OpCompositeExtract %int %6795 1
      %22228 = OpIAdd %int %11279 %17598
      %22405 = OpBitcast %int %9788
      %24535 = OpIMul %int %22228 %22405
       %7061 = OpIAdd %int %22810 %24535
      %19270 = OpBitcast %uint %7061
      %19460 = OpAccessChain %_ptr_Uniform_uint %5245 %int_5
      %22875 = OpLoad %uint %19460
       %8517 = OpIAdd %uint %19270 %22875
      %21670 = OpShiftRightLogical %uint %8517 %uint_4
      %20950 = OpAccessChain %_ptr_Uniform_uint %5245 %int_0
      %21411 = OpLoad %uint %20950
       %6381 = OpBitwiseAnd %uint %21411 %uint_1
      %10467 = OpINotEqual %bool %6381 %uint_0
               OpSelectionMerge %23266 DontFlatten
               OpBranchConditional %10467 %10108 %10765
      %10108 = OpLabel
      %23508 = OpBitwiseAnd %uint %21411 %uint_2
      %16300 = OpINotEqual %bool %23508 %uint_0
               OpSelectionMerge %7691 DontFlatten
               OpBranchConditional %16300 %12129 %25128
      %12129 = OpLabel
      %18210 = OpAccessChain %_ptr_Uniform_uint %5245 %int_2
      %15627 = OpLoad %uint %18210
      %22624 = OpAccessChain %_ptr_Uniform_uint %5245 %int_3
      %21535 = OpLoad %uint %22624
      %14923 = OpShiftRightArithmetic %int %17598 %int_4
      %18773 = OpShiftRightArithmetic %int %6362 %int_2
      %18759 = OpShiftRightLogical %uint %21535 %uint_4
       %6314 = OpBitcast %int %18759
      %21281 = OpIMul %int %18773 %6314
      %15143 = OpIAdd %int %14923 %21281
       %9032 = OpShiftRightLogical %uint %15627 %uint_5
      %14593 = OpBitcast %int %9032
       %8436 = OpIMul %int %15143 %14593
      %12986 = OpShiftRightArithmetic %int %14692 %int_5
      %24558 = OpIAdd %int %12986 %8436
       %8797 = OpShiftLeftLogical %int %24558 %uint_7
      %11510 = OpBitwiseAnd %int %8797 %int_268435455
      %18938 = OpShiftLeftLogical %int %11510 %int_1
      %19768 = OpBitwiseAnd %int %14692 %int_7
      %12600 = OpBitwiseAnd %int %17598 %int_6
      %17741 = OpShiftLeftLogical %int %12600 %int_2
      %17227 = OpIAdd %int %19768 %17741
       %7048 = OpShiftLeftLogical %int %17227 %uint_7
      %24035 = OpShiftRightArithmetic %int %7048 %int_6
       %8725 = OpShiftRightArithmetic %int %17598 %int_3
      %13731 = OpIAdd %int %8725 %18773
      %23052 = OpBitwiseAnd %int %13731 %int_1
      %16658 = OpShiftRightArithmetic %int %14692 %int_3
      %18794 = OpShiftLeftLogical %int %23052 %int_1
      %13501 = OpIAdd %int %16658 %18794
      %19165 = OpBitwiseAnd %int %13501 %int_3
      %21578 = OpShiftLeftLogical %int %19165 %int_1
      %15435 = OpIAdd %int %23052 %21578
      %13150 = OpBitwiseAnd %int %24035 %int_n16
      %20336 = OpIAdd %int %18938 %13150
      %23345 = OpShiftLeftLogical %int %20336 %int_1
      %23274 = OpBitwiseAnd %int %24035 %int_15
      %10332 = OpIAdd %int %23345 %23274
      %18356 = OpBitwiseAnd %int %6362 %int_3
      %21579 = OpShiftLeftLogical %int %18356 %uint_7
      %16727 = OpIAdd %int %10332 %21579
      %19166 = OpBitwiseAnd %int %17598 %int_1
      %21580 = OpShiftLeftLogical %int %19166 %int_4
      %16728 = OpIAdd %int %16727 %21580
      %20438 = OpBitwiseAnd %int %15435 %int_1
       %9987 = OpShiftLeftLogical %int %20438 %int_3
      %13106 = OpShiftRightArithmetic %int %16728 %int_6
      %14038 = OpBitwiseAnd %int %13106 %int_7
      %13330 = OpIAdd %int %9987 %14038
      %23346 = OpShiftLeftLogical %int %13330 %int_3
      %23217 = OpBitwiseAnd %int %15435 %int_n2
      %10908 = OpIAdd %int %23346 %23217
      %23347 = OpShiftLeftLogical %int %10908 %int_2
      %23218 = OpBitwiseAnd %int %16728 %int_n512
      %10909 = OpIAdd %int %23347 %23218
      %23348 = OpShiftLeftLogical %int %10909 %int_3
      %24224 = OpBitwiseAnd %int %16728 %int_63
      %21741 = OpIAdd %int %23348 %24224
               OpBranch %7691
      %25128 = OpLabel
       %6796 = OpBitcast %v2int %18835
      %18793 = OpAccessChain %_ptr_Uniform_uint %5245 %int_2
      %11954 = OpLoad %uint %18793
      %18756 = OpCompositeExtract %int %6796 0
      %19701 = OpShiftRightArithmetic %int %18756 %int_5
      %10055 = OpCompositeExtract %int %6796 1
      %16476 = OpShiftRightArithmetic %int %10055 %int_5
      %23373 = OpShiftRightLogical %uint %11954 %uint_5
       %6315 = OpBitcast %int %23373
      %21319 = OpIMul %int %16476 %6315
      %16222 = OpIAdd %int %19701 %21319
      %19086 = OpShiftLeftLogical %int %16222 %uint_8
      %10934 = OpBitwiseAnd %int %18756 %int_7
      %12601 = OpBitwiseAnd %int %10055 %int_14
      %17742 = OpShiftLeftLogical %int %12601 %int_2
      %17303 = OpIAdd %int %10934 %17742
       %6375 = OpShiftLeftLogical %int %17303 %uint_1
      %10161 = OpBitwiseAnd %int %6375 %int_n16
      %12150 = OpShiftLeftLogical %int %10161 %int_1
      %15436 = OpIAdd %int %19086 %12150
      %13207 = OpBitwiseAnd %int %6375 %int_15
      %19760 = OpIAdd %int %15436 %13207
      %18357 = OpBitwiseAnd %int %10055 %int_1
      %21581 = OpShiftLeftLogical %int %18357 %int_4
      %16729 = OpIAdd %int %19760 %21581
      %20514 = OpBitwiseAnd %int %16729 %int_n512
       %9238 = OpShiftLeftLogical %int %20514 %int_3
      %18995 = OpBitwiseAnd %int %10055 %int_16
      %12151 = OpShiftLeftLogical %int %18995 %int_7
      %16730 = OpIAdd %int %9238 %12151
      %19167 = OpBitwiseAnd %int %16729 %int_448
      %21582 = OpShiftLeftLogical %int %19167 %int_2
      %16708 = OpIAdd %int %16730 %21582
      %20611 = OpBitwiseAnd %int %10055 %int_8
      %16831 = OpShiftRightArithmetic %int %20611 %int_2
       %7916 = OpShiftRightArithmetic %int %18756 %int_3
      %13750 = OpIAdd %int %16831 %7916
      %21587 = OpBitwiseAnd %int %13750 %int_3
      %21583 = OpShiftLeftLogical %int %21587 %int_6
      %15437 = OpIAdd %int %16708 %21583
      %14157 = OpBitwiseAnd %int %16729 %int_63
      %12098 = OpIAdd %int %15437 %14157
               OpBranch %7691
       %7691 = OpLabel
      %10540 = OpPhi %int %21741 %12129 %12098 %25128
               OpBranch %23266
      %10765 = OpLabel
      %20632 = OpAccessChain %_ptr_Uniform_uint %5245 %int_2
      %15628 = OpLoad %uint %20632
      %21275 = OpAccessChain %_ptr_Uniform_uint %5245 %int_3
      %13550 = OpLoad %uint %21275
      %15070 = OpBitcast %int %13550
      %18927 = OpIMul %int %6362 %15070
       %8334 = OpIAdd %int %18927 %17598
       %8952 = OpBitcast %int %15628
       %7839 = OpIMul %int %8334 %8952
       %7984 = OpIAdd %int %22810 %7839
               OpBranch %23266
      %23266 = OpLabel
      %19748 = OpPhi %int %10540 %7691 %7984 %10765
      %24922 = OpAccessChain %_ptr_Uniform_uint %5245 %int_1
       %7502 = OpLoad %uint %24922
      %15686 = OpBitcast %int %7502
      %15579 = OpIAdd %int %15686 %19748
      %18556 = OpBitcast %uint %15579
      %21493 = OpShiftRightLogical %uint %18556 %uint_4
      %14997 = OpShiftRightLogical %uint %21411 %uint_2
       %8394 = OpBitwiseAnd %uint %14997 %uint_3
      %20727 = OpAccessChain %_ptr_Uniform_v4uint %4218 %int_0 %21493
       %9605 = OpLoad %v4uint %20727
      %21106 = OpIEqual %bool %8394 %uint_1
               OpSelectionMerge %13962 None
               OpBranchConditional %21106 %10583 %13962
      %10583 = OpLabel
      %18271 = OpBitwiseAnd %v4uint %9605 %2510
       %9425 = OpShiftLeftLogical %v4uint %18271 %317
      %20652 = OpBitwiseAnd %v4uint %9605 %1838
      %17549 = OpShiftRightLogical %v4uint %20652 %317
      %16376 = OpBitwiseOr %v4uint %9425 %17549
               OpBranch %13962
      %13962 = OpLabel
      %18259 = OpPhi %v4uint %9605 %23266 %16376 %10583
      %23286 = OpBitwiseAnd %v4uint %18259 %992
      %24373 = OpBitwiseAnd %v4uint %18259 %925
      %24932 = OpShiftLeftLogical %v4uint %24373 %317
      %17045 = OpBitwiseOr %v4uint %23286 %24932
      %21212 = OpBitwiseAnd %v4uint %18259 %2316
      %18088 = OpShiftRightLogical %v4uint %21212 %317
       %6532 = OpBitwiseOr %v4uint %17045 %18088
      %20254 = OpAccessChain %_ptr_Uniform_v4uint %5134 %int_0 %21670
               OpStore %20254 %6532
      %15044 = OpIAdd %uint %21670 %int_1
      %18776 = OpSelect %uint %10467 %uint_64 %uint_16
      %11803 = OpShiftRightLogical %uint %18776 %uint_4
      %13947 = OpIAdd %uint %21493 %11803
      %22298 = OpAccessChain %_ptr_Uniform_v4uint %4218 %int_0 %13947
       %6578 = OpLoad %v4uint %22298
               OpSelectionMerge %13963 None
               OpBranchConditional %21106 %10584 %13963
      %10584 = OpLabel
      %18272 = OpBitwiseAnd %v4uint %6578 %2510
       %9426 = OpShiftLeftLogical %v4uint %18272 %317
      %20653 = OpBitwiseAnd %v4uint %6578 %1838
      %17550 = OpShiftRightLogical %v4uint %20653 %317
      %16377 = OpBitwiseOr %v4uint %9426 %17550
               OpBranch %13963
      %13963 = OpLabel
      %18260 = OpPhi %v4uint %6578 %13962 %16377 %10584
      %23287 = OpBitwiseAnd %v4uint %18260 %992
      %24374 = OpBitwiseAnd %v4uint %18260 %925
      %24933 = OpShiftLeftLogical %v4uint %24374 %317
      %17046 = OpBitwiseOr %v4uint %23287 %24933
      %21213 = OpBitwiseAnd %v4uint %18260 %2316
      %18089 = OpShiftRightLogical %v4uint %21213 %317
       %6533 = OpBitwiseOr %v4uint %17046 %18089
      %22553 = OpAccessChain %_ptr_Uniform_v4uint %5134 %int_0 %15044
               OpStore %22553 %6533
               OpBranch %19578
      %19578 = OpLabel
               OpReturn
               OpFunctionEnd
#endif

const uint32_t texture_load_r4g4b4a4_b4g4r4a4_cs[] = {
    0x07230203, 0x00010000, 0x0008000A, 0x0000625B, 0x00000000, 0x00020011,
    0x00000001, 0x0006000B, 0x00000001, 0x4C534C47, 0x6474732E, 0x3035342E,
    0x00000000, 0x0003000E, 0x00000000, 0x00000001, 0x0006000F, 0x00000005,
    0x0000161F, 0x6E69616D, 0x00000000, 0x00000F48, 0x00060010, 0x0000161F,
    0x00000011, 0x00000002, 0x00000020, 0x00000001, 0x00050048, 0x00000489,
    0x00000000, 0x00000023, 0x00000000, 0x00050048, 0x00000489, 0x00000001,
    0x00000023, 0x00000004, 0x00050048, 0x00000489, 0x00000002, 0x00000023,
    0x00000008, 0x00050048, 0x00000489, 0x00000003, 0x00000023, 0x0000000C,
    0x00050048, 0x00000489, 0x00000004, 0x00000023, 0x00000010, 0x00050048,
    0x00000489, 0x00000005, 0x00000023, 0x0000001C, 0x00050048, 0x00000489,
    0x00000006, 0x00000023, 0x00000020, 0x00050048, 0x00000489, 0x00000007,
    0x00000023, 0x00000024, 0x00030047, 0x00000489, 0x00000002, 0x00040047,
    0x0000147D, 0x00000022, 0x00000002, 0x00040047, 0x0000147D, 0x00000021,
    0x00000000, 0x00040047, 0x00000F48, 0x0000000B, 0x0000001C, 0x00040047,
    0x000007DC, 0x00000006, 0x00000010, 0x00040048, 0x000007B4, 0x00000000,
    0x00000019, 0x00050048, 0x000007B4, 0x00000000, 0x00000023, 0x00000000,
    0x00030047, 0x000007B4, 0x00000003, 0x00040047, 0x0000140E, 0x00000022,
    0x00000000, 0x00040047, 0x0000140E, 0x00000021, 0x00000000, 0x00040047,
    0x000007DD, 0x00000006, 0x00000010, 0x00040048, 0x000007B5, 0x00000000,
    0x00000018, 0x00050048, 0x000007B5, 0x00000000, 0x00000023, 0x00000000,
    0x00030047, 0x000007B5, 0x00000003, 0x00040047, 0x0000107A, 0x00000022,
    0x00000001, 0x00040047, 0x0000107A, 0x00000021, 0x00000000, 0x00040047,
    0x00000BB1, 0x0000000B, 0x00000019, 0x00020013, 0x00000008, 0x00030021,
    0x00000502, 0x00000008, 0x00040015, 0x0000000B, 0x00000020, 0x00000000,
    0x00040017, 0x00000017, 0x0000000B, 0x00000004, 0x00040015, 0x0000000C,
    0x00000020, 0x00000001, 0x00040017, 0x00000012, 0x0000000C, 0x00000002,
    0x00040017, 0x00000016, 0x0000000C, 0x00000003, 0x00020014, 0x00000009,
    0x00040017, 0x00000014, 0x0000000B, 0x00000003, 0x0004002B, 0x0000000B,
    0x000002CA, 0xF0F0F0F0, 0x0004002B, 0x0000000B, 0x000003BB, 0x000F000F,
    0x0004002B, 0x0000000B, 0x00000A22, 0x00000008, 0x0004002B, 0x0000000B,
    0x00000665, 0x0F000F00, 0x0004002B, 0x0000000B, 0x00000A0D, 0x00000001,
    0x0004002B, 0x0000000B, 0x000008A6, 0x00FF00FF, 0x0004002B, 0x0000000B,
    0x000005FD, 0xFF00FF00, 0x0004002B, 0x0000000B, 0x00000A0A, 0x00000000,
    0x0004002B, 0x0000000C, 0x00000A1A, 0x00000005, 0x0004002B, 0x0000000B,
    0x00000A19, 0x00000005, 0x0004002B, 0x0000000B, 0x00000A1F, 0x00000007,
    0x0004002B, 0x0000000C, 0x00000A20, 0x00000007, 0x0004002B, 0x0000000C,
    0x00000A35, 0x0000000E, 0x0004002B, 0x0000000C, 0x00000A11, 0x00000002,
    0x0004002B, 0x0000000C, 0x000009DB, 0xFFFFFFF0, 0x0004002B, 0x0000000C,
    0x00000A0E, 0x00000001, 0x0004002B, 0x0000000C, 0x00000A38, 0x0000000F,
    0x0004002B, 0x0000000C, 0x00000A17, 0x00000004, 0x0004002B, 0x0000000C,
    0x0000040B, 0xFFFFFE00, 0x0004002B, 0x0000000C, 0x00000A14, 0x00000003,
    0x0004002B, 0x0000000C, 0x00000A3B, 0x00000010, 0x0004002B, 0x0000000C,
    0x00000388, 0x000001C0, 0x0004002B, 0x0000000C, 0x00000A23, 0x00000008,
    0x0004002B, 0x0000000C, 0x00000A1D, 0x00000006, 0x0004002B, 0x0000000C,
    0x00000AC8, 0x0000003F, 0x0004002B, 0x0000000B, 0x00000A10, 0x00000002,
    0x0004002B, 0x0000000B, 0x00000A16, 0x00000004, 0x0004002B, 0x0000000C,
    0x0000078B, 0x0FFFFFFF, 0x0004002B, 0x0000000C, 0x00000A05, 0xFFFFFFFE,
    0x0004002B, 0x0000000B, 0x00000A13, 0x00000003, 0x0004002B, 0x0000000B,
    0x00000A6A, 0x00000020, 0x0004002B, 0x0000000B, 0x00000ACA, 0x00000040,
    0x000A001E, 0x00000489, 0x0000000B, 0x0000000B, 0x0000000B, 0x0000000B,
    0x00000014, 0x0000000B, 0x0000000B, 0x0000000B, 0x00040020, 0x00000706,
    0x00000002, 0x00000489, 0x0004003B, 0x00000706, 0x0000147D, 0x00000002,
    0x0004002B, 0x0000000C, 0x00000A0B, 0x00000000, 0x00040020, 0x00000288,
    0x00000002, 0x0000000B, 0x00040020, 0x00000291, 0x00000002, 0x00000014,
    0x00040017, 0x00000011, 0x0000000B, 0x00000002, 0x00040020, 0x00000292,
    0x00000001, 0x00000014, 0x0004003B, 0x00000292, 0x00000F48, 0x00000001,
    0x0006002C, 0x00000014, 0x00000A34, 0x00000A16, 0x00000A0A, 0x00000A0A,
    0x00040017, 0x0000000F, 0x00000009, 0x00000002, 0x0003001D, 0x000007DC,
    0x00000017, 0x0003001E, 0x000007B4, 0x000007DC, 0x00040020, 0x00000A31,
    0x00000002, 0x000007B4, 0x0004003B, 0x00000A31, 0x0000140E, 0x00000002,
    0x0003001D, 0x000007DD, 0x00000017, 0x0003001E, 0x000007B5, 0x000007DD,
    0x00040020, 0x00000A32, 0x00000002, 0x000007B5, 0x0004003B, 0x00000A32,
    0x0000107A, 0x00000002, 0x00040020, 0x00000294, 0x00000002, 0x00000017,
    0x0006002C, 0x00000014, 0x00000BB1, 0x00000A10, 0x00000A6A, 0x00000A0D,
    0x0007002C, 0x00000017, 0x000009CE, 0x000008A6, 0x000008A6, 0x000008A6,
    0x000008A6, 0x0007002C, 0x00000017, 0x0000013D, 0x00000A22, 0x00000A22,
    0x00000A22, 0x00000A22, 0x0007002C, 0x00000017, 0x0000072E, 0x000005FD,
    0x000005FD, 0x000005FD, 0x000005FD, 0x0007002C, 0x00000017, 0x000003E0,
    0x000002CA, 0x000002CA, 0x000002CA, 0x000002CA, 0x0007002C, 0x00000017,
    0x0000039D, 0x000003BB, 0x000003BB, 0x000003BB, 0x000003BB, 0x0007002C,
    0x00000017, 0x0000090C, 0x00000665, 0x00000665, 0x00000665, 0x00000665,
    0x0004002B, 0x0000000B, 0x00000A3A, 0x00000010, 0x00050036, 0x00000008,
    0x0000161F, 0x00000000, 0x00000502, 0x000200F8, 0x00003B06, 0x000300F7,
    0x00004C7A, 0x00000000, 0x000300FB, 0x00000A0A, 0x00003B21, 0x000200F8,
    0x00003B21, 0x0004003D, 0x00000014, 0x0000312F, 0x00000F48, 0x000500C4,
    0x00000014, 0x000027F5, 0x0000312F, 0x00000A34, 0x00050041, 0x00000291,
    0x0000625A, 0x0000147D, 0x00000A17, 0x0004003D, 0x00000014, 0x000059B5,
    0x0000625A, 0x0007004F, 0x00000011, 0x00004993, 0x000027F5, 0x000027F5,
    0x00000000, 0x00000001, 0x0007004F, 0x00000011, 0x000019E2, 0x000059B5,
    0x000059B5, 0x00000000, 0x00000001, 0x000500AE, 0x0000000F, 0x00004288,
    0x00004993, 0x000019E2, 0x0004009A, 0x00000009, 0x00006067, 0x00004288,
    0x000300F7, 0x0000188A, 0x00000002, 0x000400FA, 0x00006067, 0x000055E8,
    0x0000188A, 0x000200F8, 0x000055E8, 0x000200F9, 0x00004C7A, 0x000200F8,
    0x0000188A, 0x0004007C, 0x00000016, 0x00001A8B, 0x000027F5, 0x00050041,
    0x00000288, 0x00004968, 0x0000147D, 0x00000A1D, 0x0004003D, 0x0000000B,
    0x0000263C, 0x00004968, 0x00050051, 0x0000000B, 0x00004F98, 0x000059B5,
    0x00000001, 0x00050051, 0x0000000C, 0x00003964, 0x00001A8B, 0x00000000,
    0x00050084, 0x0000000C, 0x0000591A, 0x00003964, 0x00000A11, 0x00050051,
    0x0000000C, 0x000018DA, 0x00001A8B, 0x00000002, 0x0004007C, 0x0000000C,
    0x000038A9, 0x00004F98, 0x00050084, 0x0000000C, 0x00002C0F, 0x000018DA,
    0x000038A9, 0x00050051, 0x0000000C, 0x000044BE, 0x00001A8B, 0x00000001,
    0x00050080, 0x0000000C, 0x000056D4, 0x00002C0F, 0x000044BE, 0x0004007C,
    0x0000000C, 0x00005785, 0x0000263C, 0x00050084, 0x0000000C, 0x00005FD7,
    0x000056D4, 0x00005785, 0x00050080, 0x0000000C, 0x00001B95, 0x0000591A,
    0x00005FD7, 0x0004007C, 0x0000000B, 0x00004B46, 0x00001B95, 0x00050041,
    0x00000288, 0x00004C04, 0x0000147D, 0x00000A1A, 0x0004003D, 0x0000000B,
    0x0000595B, 0x00004C04, 0x00050080, 0x0000000B, 0x00002145, 0x00004B46,
    0x0000595B, 0x000500C2, 0x0000000B, 0x000054A6, 0x00002145, 0x00000A16,
    0x00050041, 0x00000288, 0x000051D6, 0x0000147D, 0x00000A0B, 0x0004003D,
    0x0000000B, 0x000053A3, 0x000051D6, 0x000500C7, 0x0000000B, 0x000018ED,
    0x000053A3, 0x00000A0D, 0x000500AB, 0x00000009, 0x000028E3, 0x000018ED,
    0x00000A0A, 0x000300F7, 0x00005AE2, 0x00000002, 0x000400FA, 0x000028E3,
    0x0000277C, 0x00002A0D, 0x000200F8, 0x0000277C, 0x000500C7, 0x0000000B,
    0x00005BD4, 0x000053A3, 0x00000A10, 0x000500AB, 0x00000009, 0x00003FAC,
    0x00005BD4, 0x00000A0A, 0x000300F7, 0x00001E0B, 0x00000002, 0x000400FA,
    0x00003FAC, 0x00002F61, 0x00006228, 0x000200F8, 0x00002F61, 0x00050041,
    0x00000288, 0x00004722, 0x0000147D, 0x00000A11, 0x0004003D, 0x0000000B,
    0x00003D0B, 0x00004722, 0x00050041, 0x00000288, 0x00005860, 0x0000147D,
    0x00000A14, 0x0004003D, 0x0000000B, 0x0000541F, 0x00005860, 0x000500C3,
    0x0000000C, 0x00003A4B, 0x000044BE, 0x00000A17, 0x000500C3, 0x0000000C,
    0x00004955, 0x000018DA, 0x00000A11, 0x000500C2, 0x0000000B, 0x00004947,
    0x0000541F, 0x00000A16, 0x0004007C, 0x0000000C, 0x000018AA, 0x00004947,
    0x00050084, 0x0000000C, 0x00005321, 0x00004955, 0x000018AA, 0x00050080,
    0x0000000C, 0x00003B27, 0x00003A4B, 0x00005321, 0x000500C2, 0x0000000B,
    0x00002348, 0x00003D0B, 0x00000A19, 0x0004007C, 0x0000000C, 0x00003901,
    0x00002348, 0x00050084, 0x0000000C, 0x000020F4, 0x00003B27, 0x00003901,
    0x000500C3, 0x0000000C, 0x000032BA, 0x00003964, 0x00000A1A, 0x00050080,
    0x0000000C, 0x00005FEE, 0x000032BA, 0x000020F4, 0x000500C4, 0x0000000C,
    0x0000225D, 0x00005FEE, 0x00000A1F, 0x000500C7, 0x0000000C, 0x00002CF6,
    0x0000225D, 0x0000078B, 0x000500C4, 0x0000000C, 0x000049FA, 0x00002CF6,
    0x00000A0E, 0x000500C7, 0x0000000C, 0x00004D38, 0x00003964, 0x00000A20,
    0x000500C7, 0x0000000C, 0x00003138, 0x000044BE, 0x00000A1D, 0x000500C4,
    0x0000000C, 0x0000454D, 0x00003138, 0x00000A11, 0x00050080, 0x0000000C,
    0x0000434B, 0x00004D38, 0x0000454D, 0x000500C4, 0x0000000C, 0x00001B88,
    0x0000434B, 0x00000A1F, 0x000500C3, 0x0000000C, 0x00005DE3, 0x00001B88,
    0x00000A1D, 0x000500C3, 0x0000000C, 0x00002215, 0x000044BE, 0x00000A14,
    0x00050080, 0x0000000C, 0x000035A3, 0x00002215, 0x00004955, 0x000500C7,
    0x0000000C, 0x00005A0C, 0x000035A3, 0x00000A0E, 0x000500C3, 0x0000000C,
    0x00004112, 0x00003964, 0x00000A14, 0x000500C4, 0x0000000C, 0x0000496A,
    0x00005A0C, 0x00000A0E, 0x00050080, 0x0000000C, 0x000034BD, 0x00004112,
    0x0000496A, 0x000500C7, 0x0000000C, 0x00004ADD, 0x000034BD, 0x00000A14,
    0x000500C4, 0x0000000C, 0x0000544A, 0x00004ADD, 0x00000A0E, 0x00050080,
    0x0000000C, 0x00003C4B, 0x00005A0C, 0x0000544A, 0x000500C7, 0x0000000C,
    0x0000335E, 0x00005DE3, 0x000009DB, 0x00050080, 0x0000000C, 0x00004F70,
    0x000049FA, 0x0000335E, 0x000500C4, 0x0000000C, 0x00005B31, 0x00004F70,
    0x00000A0E, 0x000500C7, 0x0000000C, 0x00005AEA, 0x00005DE3, 0x00000A38,
    0x00050080, 0x0000000C, 0x0000285C, 0x00005B31, 0x00005AEA, 0x000500C7,
    0x0000000C, 0x000047B4, 0x000018DA, 0x00000A14, 0x000500C4, 0x0000000C,
    0x0000544B, 0x000047B4, 0x00000A1F, 0x00050080, 0x0000000C, 0x00004157,
    0x0000285C, 0x0000544B, 0x000500C7, 0x0000000C, 0x00004ADE, 0x000044BE,
    0x00000A0E, 0x000500C4, 0x0000000C, 0x0000544C, 0x00004ADE, 0x00000A17,
    0x00050080, 0x0000000C, 0x00004158, 0x00004157, 0x0000544C, 0x000500C7,
    0x0000000C, 0x00004FD6, 0x00003C4B, 0x00000A0E, 0x000500C4, 0x0000000C,
    0x00002703, 0x00004FD6, 0x00000A14, 0x000500C3, 0x0000000C, 0x00003332,
    0x00004158, 0x00000A1D, 0x000500C7, 0x0000000C, 0x000036D6, 0x00003332,
    0x00000A20, 0x00050080, 0x0000000C, 0x00003412, 0x00002703, 0x000036D6,
    0x000500C4, 0x0000000C, 0x00005B32, 0x00003412, 0x00000A14, 0x000500C7,
    0x0000000C, 0x00005AB1, 0x00003C4B, 0x00000A05, 0x00050080, 0x0000000C,
    0x00002A9C, 0x00005B32, 0x00005AB1, 0x000500C4, 0x0000000C, 0x00005B33,
    0x00002A9C, 0x00000A11, 0x000500C7, 0x0000000C, 0x00005AB2, 0x00004158,
    0x0000040B, 0x00050080, 0x0000000C, 0x00002A9D, 0x00005B33, 0x00005AB2,
    0x000500C4, 0x0000000C, 0x00005B34, 0x00002A9D, 0x00000A14, 0x000500C7,
    0x0000000C, 0x00005EA0, 0x00004158, 0x00000AC8, 0x00050080, 0x0000000C,
    0x000054ED, 0x00005B34, 0x00005EA0, 0x000200F9, 0x00001E0B, 0x000200F8,
    0x00006228, 0x0004007C, 0x00000012, 0x00001A8C, 0x00004993, 0x00050041,
    0x00000288, 0x00004969, 0x0000147D, 0x00000A11, 0x0004003D, 0x0000000B,
    0x00002EB2, 0x00004969, 0x00050051, 0x0000000C, 0x00004944, 0x00001A8C,
    0x00000000, 0x000500C3, 0x0000000C, 0x00004CF5, 0x00004944, 0x00000A1A,
    0x00050051, 0x0000000C, 0x00002747, 0x00001A8C, 0x00000001, 0x000500C3,
    0x0000000C, 0x0000405C, 0x00002747, 0x00000A1A, 0x000500C2, 0x0000000B,
    0x00005B4D, 0x00002EB2, 0x00000A19, 0x0004007C, 0x0000000C, 0x000018AB,
    0x00005B4D, 0x00050084, 0x0000000C, 0x00005347, 0x0000405C, 0x000018AB,
    0x00050080, 0x0000000C, 0x00003F5E, 0x00004CF5, 0x00005347, 0x000500C4,
    0x0000000C, 0x00004A8E, 0x00003F5E, 0x00000A22, 0x000500C7, 0x0000000C,
    0x00002AB6, 0x00004944, 0x00000A20, 0x000500C7, 0x0000000C, 0x00003139,
    0x00002747, 0x00000A35, 0x000500C4, 0x0000000C, 0x0000454E, 0x00003139,
    0x00000A11, 0x00050080, 0x0000000C, 0x00004397, 0x00002AB6, 0x0000454E,
    0x000500C4, 0x0000000C, 0x000018E7, 0x00004397, 0x00000A0D, 0x000500C7,
    0x0000000C, 0x000027B1, 0x000018E7, 0x000009DB, 0x000500C4, 0x0000000C,
    0x00002F76, 0x000027B1, 0x00000A0E, 0x00050080, 0x0000000C, 0x00003C4C,
    0x00004A8E, 0x00002F76, 0x000500C7, 0x0000000C, 0x00003397, 0x000018E7,
    0x00000A38, 0x00050080, 0x0000000C, 0x00004D30, 0x00003C4C, 0x00003397,
    0x000500C7, 0x0000000C, 0x000047B5, 0x00002747, 0x00000A0E, 0x000500C4,
    0x0000000C, 0x0000544D, 0x000047B5, 0x00000A17, 0x00050080, 0x0000000C,
    0x00004159, 0x00004D30, 0x0000544D, 0x000500C7, 0x0000000C, 0x00005022,
    0x00004159, 0x0000040B, 0x000500C4, 0x0000000C, 0x00002416, 0x00005022,
    0x00000A14, 0x000500C7, 0x0000000C, 0x00004A33, 0x00002747, 0x00000A3B,
    0x000500C4, 0x0000000C, 0x00002F77, 0x00004A33, 0x00000A20, 0x00050080,
    0x0000000C, 0x0000415A, 0x00002416, 0x00002F77, 0x000500C7, 0x0000000C,
    0x00004ADF, 0x00004159, 0x00000388, 0x000500C4, 0x0000000C, 0x0000544E,
    0x00004ADF, 0x00000A11, 0x00050080, 0x0000000C, 0x00004144, 0x0000415A,
    0x0000544E, 0x000500C7, 0x0000000C, 0x00005083, 0x00002747, 0x00000A23,
    0x000500C3, 0x0000000C, 0x000041BF, 0x00005083, 0x00000A11, 0x000500C3,
    0x0000000C, 0x00001EEC, 0x00004944, 0x00000A14, 0x00050080, 0x0000000C,
    0x000035B6, 0x000041BF, 0x00001EEC, 0x000500C7, 0x0000000C, 0x00005453,
    0x000035B6, 0x00000A14, 0x000500C4, 0x0000000C, 0x0000544F, 0x00005453,
    0x00000A1D, 0x00050080, 0x0000000C, 0x00003C4D, 0x00004144, 0x0000544F,
    0x000500C7, 0x0000000C, 0x0000374D, 0x00004159, 0x00000AC8, 0x00050080,
    0x0000000C, 0x00002F42, 0x00003C4D, 0x0000374D, 0x000200F9, 0x00001E0B,
    0x000200F8, 0x00001E0B, 0x000700F5, 0x0000000C, 0x0000292C, 0x000054ED,
    0x00002F61, 0x00002F42, 0x00006228, 0x000200F9, 0x00005AE2, 0x000200F8,
    0x00002A0D, 0x00050041, 0x00000288, 0x00005098, 0x0000147D, 0x00000A11,
    0x0004003D, 0x0000000B, 0x00003D0C, 0x00005098, 0x00050041, 0x00000288,
    0x0000531B, 0x0000147D, 0x00000A14, 0x0004003D, 0x0000000B, 0x000034EE,
    0x0000531B, 0x0004007C, 0x0000000C, 0x00003ADE, 0x000034EE, 0x00050084,
    0x0000000C, 0x000049EF, 0x000018DA, 0x00003ADE, 0x00050080, 0x0000000C,
    0x0000208E, 0x000049EF, 0x000044BE, 0x0004007C, 0x0000000C, 0x000022F8,
    0x00003D0C, 0x00050084, 0x0000000C, 0x00001E9F, 0x0000208E, 0x000022F8,
    0x00050080, 0x0000000C, 0x00001F30, 0x0000591A, 0x00001E9F, 0x000200F9,
    0x00005AE2, 0x000200F8, 0x00005AE2, 0x000700F5, 0x0000000C, 0x00004D24,
    0x0000292C, 0x00001E0B, 0x00001F30, 0x00002A0D, 0x00050041, 0x00000288,
    0x0000615A, 0x0000147D, 0x00000A0E, 0x0004003D, 0x0000000B, 0x00001D4E,
    0x0000615A, 0x0004007C, 0x0000000C, 0x00003D46, 0x00001D4E, 0x00050080,
    0x0000000C, 0x00003CDB, 0x00003D46, 0x00004D24, 0x0004007C, 0x0000000B,
    0x0000487C, 0x00003CDB, 0x000500C2, 0x0000000B, 0x000053F5, 0x0000487C,
    0x00000A16, 0x000500C2, 0x0000000B, 0x00003A95, 0x000053A3, 0x00000A10,
    0x000500C7, 0x0000000B, 0x000020CA, 0x00003A95, 0x00000A13, 0x00060041,
    0x00000294, 0x000050F7, 0x0000107A, 0x00000A0B, 0x000053F5, 0x0004003D,
    0x00000017, 0x00002585, 0x000050F7, 0x000500AA, 0x00000009, 0x00005272,
    0x000020CA, 0x00000A0D, 0x000300F7, 0x0000368A, 0x00000000, 0x000400FA,
    0x00005272, 0x00002957, 0x0000368A, 0x000200F8, 0x00002957, 0x000500C7,
    0x00000017, 0x0000475F, 0x00002585, 0x000009CE, 0x000500C4, 0x00000017,
    0x000024D1, 0x0000475F, 0x0000013D, 0x000500C7, 0x00000017, 0x000050AC,
    0x00002585, 0x0000072E, 0x000500C2, 0x00000017, 0x0000448D, 0x000050AC,
    0x0000013D, 0x000500C5, 0x00000017, 0x00003FF8, 0x000024D1, 0x0000448D,
    0x000200F9, 0x0000368A, 0x000200F8, 0x0000368A, 0x000700F5, 0x00000017,
    0x00004753, 0x00002585, 0x00005AE2, 0x00003FF8, 0x00002957, 0x000500C7,
    0x00000017, 0x00005AF6, 0x00004753, 0x000003E0, 0x000500C7, 0x00000017,
    0x00005F35, 0x00004753, 0x0000039D, 0x000500C4, 0x00000017, 0x00006164,
    0x00005F35, 0x0000013D, 0x000500C5, 0x00000017, 0x00004295, 0x00005AF6,
    0x00006164, 0x000500C7, 0x00000017, 0x000052DC, 0x00004753, 0x0000090C,
    0x000500C2, 0x00000017, 0x000046A8, 0x000052DC, 0x0000013D, 0x000500C5,
    0x00000017, 0x00001984, 0x00004295, 0x000046A8, 0x00060041, 0x00000294,
    0x00004F1E, 0x0000140E, 0x00000A0B, 0x000054A6, 0x0003003E, 0x00004F1E,
    0x00001984, 0x00050080, 0x0000000B, 0x00003AC4, 0x000054A6, 0x00000A0E,
    0x000600A9, 0x0000000B, 0x00004958, 0x000028E3, 0x00000ACA, 0x00000A3A,
    0x000500C2, 0x0000000B, 0x00002E1B, 0x00004958, 0x00000A16, 0x00050080,
    0x0000000B, 0x0000367B, 0x000053F5, 0x00002E1B, 0x00060041, 0x00000294,
    0x0000571A, 0x0000107A, 0x00000A0B, 0x0000367B, 0x0004003D, 0x00000017,
    0x000019B2, 0x0000571A, 0x000300F7, 0x0000368B, 0x00000000, 0x000400FA,
    0x00005272, 0x00002958, 0x0000368B, 0x000200F8, 0x00002958, 0x000500C7,
    0x00000017, 0x00004760, 0x000019B2, 0x000009CE, 0x000500C4, 0x00000017,
    0x000024D2, 0x00004760, 0x0000013D, 0x000500C7, 0x00000017, 0x000050AD,
    0x000019B2, 0x0000072E, 0x000500C2, 0x00000017, 0x0000448E, 0x000050AD,
    0x0000013D, 0x000500C5, 0x00000017, 0x00003FF9, 0x000024D2, 0x0000448E,
    0x000200F9, 0x0000368B, 0x000200F8, 0x0000368B, 0x000700F5, 0x00000017,
    0x00004754, 0x000019B2, 0x0000368A, 0x00003FF9, 0x00002958, 0x000500C7,
    0x00000017, 0x00005AF7, 0x00004754, 0x000003E0, 0x000500C7, 0x00000017,
    0x00005F36, 0x00004754, 0x0000039D, 0x000500C4, 0x00000017, 0x00006165,
    0x00005F36, 0x0000013D, 0x000500C5, 0x00000017, 0x00004296, 0x00005AF7,
    0x00006165, 0x000500C7, 0x00000017, 0x000052DD, 0x00004754, 0x0000090C,
    0x000500C2, 0x00000017, 0x000046A9, 0x000052DD, 0x0000013D, 0x000500C5,
    0x00000017, 0x00001985, 0x00004296, 0x000046A9, 0x00060041, 0x00000294,
    0x00005819, 0x0000140E, 0x00000A0B, 0x00003AC4, 0x0003003E, 0x00005819,
    0x00001985, 0x000200F9, 0x00004C7A, 0x000200F8, 0x00004C7A, 0x000100FD,
    0x00010038,
};
