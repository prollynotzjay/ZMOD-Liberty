#include "gta4_init.h"

DEFINE_REX_FUNC(sub_82120700) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82257b58
	ctx.lr = 0x8212072C;
	sub_82257B58(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82120744
	if (cr6.eq) goto loc_82120744;
	// bl 0x8218be78
	ctx.lr = 0x82120740;
	sub_8218BE78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82120744:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82139790) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab8
	ctx.lr = 0x82139798;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x829900f4
	ctx.lr = 0x821397A0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-32065
	r24.s64 = -2101411840;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lbz r10,-14240(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + -14240);
	// lfs f28,-7996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7996);
	f28.f64 = double(temp.f32);
	// fmr f27,f28
	f27.f64 = f28.f64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82139b08
	if (!cr6.eq) goto loc_82139B08;
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// lis r29,-32072
	r29.s64 = -2101870592;
	// lwz r11,11524(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 11524);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82139838
	if (cr6.eq) goto loc_82139838;
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// mulli r11,r11,188
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(188));
	// addi r10,r10,-17056
	ctx.r10.s64 = ctx.r10.s64 + -17056;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82139838
	if (cr6.eq) goto loc_82139838;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82139838
	if (cr6.eq) goto loc_82139838;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82139838
	if (!cr6.eq) goto loc_82139838;
	// bl 0x82674588
	ctx.lr = 0x82139808;
	sub_82674588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82139838
	if (!cr6.eq) goto loc_82139838;
	// lwz r11,1764(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1764);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82139838
	if (!cr6.eq) goto loc_82139838;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lbz r11,30312(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 30312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82139838
	if (!cr6.eq) goto loc_82139838;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f27,-6388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6388);
	f27.f64 = double(temp.f32);
loc_82139838:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8227f678
	ctx.lr = 0x82139840;
	sub_8227F678(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,-31860
	r30.s64 = ctx.r11.s64 + -31860;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lfs f29,22780(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 22780);
	f29.f64 = double(temp.f32);
	// beq cr6,0x821398d4
	if (cr6.eq) goto loc_821398D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139874;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f31,f0
	f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x82674588
	ctx.lr = 0x82139894;
	sub_82674588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-6392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6392);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x821398c0
	if (!cr6.eq) goto loc_821398C0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,-6472(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6472);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f31,f0,f13
	ctx.f0.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, ctx.f13.f64)));
	// fsubs f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 - f29.f64));
	// fsel f31,f13,f29,f0
	f31.f64 = ctx.f13.f64 >= 0.0 ? f29.f64 : ctx.f0.f64;
	// b 0x82139964
	goto loc_82139964;
loc_821398C0:
	// lfs f13,2208(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 2208);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f31,f0,f13
	ctx.f0.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, ctx.f13.f64)));
	// fsubs f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 - f29.f64));
	// fsel f31,f13,f29,f0
	f31.f64 = ctx.f13.f64 >= 0.0 ? f29.f64 : ctx.f0.f64;
	// b 0x82139964
	goto loc_82139964;
loc_821398D4:
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// lbz r11,1870(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1870);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8213995c
	if (!cr6.eq) goto loc_8213995C;
	// bl 0x8227f600
	ctx.lr = 0x821398E8;
	sub_8227F600(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82139938
	if (cr6.eq) goto loc_82139938;
	// bl 0x8227f600
	ctx.lr = 0x821398F4;
	sub_8227F600(ctx, base);
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82139910
	if (cr6.eq) goto loc_82139910;
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82139914
	if (cr6.gt) goto loc_82139914;
loc_82139910:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82139914:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82139938
	if (cr6.eq) goto loc_82139938;
	// bl 0x8227f600
	ctx.lr = 0x82139924;
	sub_8227F600(ctx, base);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x821386b8
	ctx.lr = 0x8213992C;
	sub_821386B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8213995c
	if (cr6.eq) goto loc_8213995C;
loc_82139938:
	// bl 0x82674588
	ctx.lr = 0x8213993C;
	sub_82674588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82139954
	if (!cr6.eq) goto loc_82139954;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f31,-6472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6472);
	f31.f64 = double(temp.f32);
	// b 0x82139964
	goto loc_82139964;
loc_82139954:
	// lfs f31,2208(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 2208);
	f31.f64 = double(temp.f32);
	// b 0x82139964
	goto loc_82139964;
loc_8213995C:
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// lfs f31,1012(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	f31.f64 = double(temp.f32);
loc_82139964:
	// lis r10,-32086
	ctx.r10.s64 = -2102788096;
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// addi r11,r11,11840
	ctx.r11.s64 = ctx.r11.s64 + 11840;
	// lfs f0,820(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 820);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,-8272(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -8272, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821399a8
	if (cr6.eq) goto loc_821399A8;
	// lbz r10,316(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 316);
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x821399a8
	if (cr6.eq) goto loc_821399A8;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x823d8e90
	ctx.lr = 0x821399A0;
	sub_823D8E90(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// b 0x821399ac
	goto loc_821399AC;
loc_821399A8:
	// fmr f30,f28
	ctx.fpscr.disableFlushMode();
	f30.f64 = f28.f64;
loc_821399AC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227f850
	ctx.lr = 0x821399B4;
	sub_8227F850(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-7248
	ctx.r11.s64 = ctx.r11.s64 + -7248;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// stfs f30,-8268(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + -8268, temp.u32);
	// bl 0x8227f738
	ctx.lr = 0x821399D4;
	sub_8227F738(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8230aef0
	ctx.lr = 0x821399DC;
	sub_8230AEF0(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82139a20
	if (cr6.lt) goto loc_82139A20;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// lfs f0,244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-3428
	ctx.r11.s64 = ctx.r11.s64 + -3428;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f31.f64)));
	// bne cr6,0x82139a18
	if (!cr6.eq) goto loc_82139A18;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f13,-6588(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6588);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f31,f12,f13,f0
	f31.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// b 0x82139a20
	goto loc_82139A20;
loc_82139A18:
	// fsubs f13,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - f29.f64));
	// fsel f31,f13,f29,f0
	f31.f64 = ctx.f13.f64 >= 0.0 ? f29.f64 : ctx.f0.f64;
loc_82139A20:
	// bl 0x82674588
	ctx.lr = 0x82139A24;
	sub_82674588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82139a3c
	if (cr6.eq) goto loc_82139A3C;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-6396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6396);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
loc_82139A3C:
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// lwz r11,-32104(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -32104);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lis r9,-32056
	ctx.r9.s64 = -2100822016;
	// lwz r9,-7564(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -7564);
	// bne cr6,0x82139a70
	if (!cr6.eq) goto loc_82139A70;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-32104(r10)
	REX_STORE_U32(ctx.r10.u32 + -32104, ctx.r11.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r11,-32108(r8)
	REX_STORE_U32(ctx.r8.u32 + -32108, ctx.r11.u32);
	// b 0x82139a74
	goto loc_82139A74;
loc_82139A70:
	// lwz r11,-32108(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -32108);
loc_82139A74:
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// ble cr6,0x82139b90
	if (!cr6.gt) goto loc_82139B90;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lfs f0,-8276(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8276);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, ctx.f0.f64);
	// beq cr6,0x82139abc
	if (cr6.eq) goto loc_82139ABC;
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82139aac
	if (!cr6.lt) goto loc_82139AAC;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82139abc
	if (!cr6.lt) goto loc_82139ABC;
	// b 0x82139ab8
	goto loc_82139AB8;
loc_82139AAC:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82139abc
	if (!cr6.gt) goto loc_82139ABC;
loc_82139AB8:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
loc_82139ABC:
	// fcmpu cr6,f27,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(f27.f64, f28.f64);
	// bne cr6,0x82139afc
	if (!cr6.eq) goto loc_82139AFC;
	// lwz r11,1764(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1764);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82139af0
	if (cr6.eq) goto loc_82139AF0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stw r9,-32108(r8)
	REX_STORE_U32(ctx.r8.u32 + -32108, ctx.r9.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,-8276(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -8276, temp.u32);
	// b 0x82139b90
	goto loc_82139B90;
loc_82139AF0:
	// stfs f31,-8276(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + -8276, temp.u32);
	// stw r9,-32108(r8)
	REX_STORE_U32(ctx.r8.u32 + -32108, ctx.r9.u32);
	// b 0x82139b90
	goto loc_82139B90;
loc_82139AFC:
	// stfs f27,-8276(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r10.u32 + -8276, temp.u32);
	// stw r9,-32108(r8)
	REX_STORE_U32(ctx.r8.u32 + -32108, ctx.r9.u32);
	// b 0x82139b90
	goto loc_82139B90;
loc_82139B08:
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// addi r11,r11,-13704
	ctx.r11.s64 = ctx.r11.s64 + -13704;
	// lwz r10,1764(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1764);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,-15148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -15148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,820(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 820);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,-8272(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -8272, temp.u32);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// stfs f28,-8268(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + -8268, temp.u32);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r11,r11,-7248
	ctx.r11.s64 = ctx.r11.s64 + -7248;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x82139b80
	if (cr6.eq) goto loc_82139B80;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// b 0x82139b88
	goto loc_82139B88;
loc_82139B80:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f0,-6472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6472);
	ctx.f0.f64 = double(temp.f32);
loc_82139B88:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// stfs f0,-8276(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -8276, temp.u32);
loc_82139B90:
	// bl 0x8213a1f8
	ctx.lr = 0x82139B94;
	sub_8213A1F8(ctx, base);
	// lbz r10,-14240(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + -14240);
	// li r27,0
	r27.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lis r25,-32086
	r25.s64 = -2102788096;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82139bb8
	if (!cr6.eq) goto loc_82139BB8;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,2528(r25)
	REX_STORE_U32(r25.u32 + 2528, ctx.r9.u32);
	// beq cr6,0x82139bc8
	if (cr6.eq) goto loc_82139BC8;
loc_82139BB8:
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// lbz r11,-22636(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -22636);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82139ce8
	if (!cr6.eq) goto loc_82139CE8;
loc_82139BC8:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,-14720
	r30.s64 = ctx.r11.s64 + -14720;
	// lis r28,-32093
	r28.s64 = -2103246848;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lis r26,-32072
	r26.s64 = -2101870592;
loc_82139BE0:
	// lwz r11,-7528(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -7528);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, ctx.r11.s32, xer);
	// beq cr6,0x82139cd0
	if (cr6.eq) goto loc_82139CD0;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82139cd0
	if (cr6.eq) goto loc_82139CD0;
	// lbz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82139c0c
	if (cr6.eq) goto loc_82139C0C;
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// b 0x82139c1c
	goto loc_82139C1C;
loc_82139C0C:
	// lwz r11,-7528(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -7528);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
loc_82139C1C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82139cd0
	if (cr6.eq) goto loc_82139CD0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82139c34
	if (cr6.eq) goto loc_82139C34;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// b 0x82139c44
	goto loc_82139C44;
loc_82139C34:
	// lwz r11,-7528(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -7528);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
loc_82139C44:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(ctx.r11.u32, 7, xer);
	// bgt cr6,0x82139cd0
	if (cr6.gt) goto loc_82139CD0;
	// lis r12,-32236
	ctx.r12.s64 = -2112618496;
	// addi r12,r12,-25496
	ctx.r12.s64 = ctx.r12.s64 + -25496;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82139CA0;
	case 1:
		goto loc_82139CA0;
	case 2:
		goto loc_82139CA0;
	case 3:
		goto loc_82139C94;
	case 4:
		goto loc_82139C88;
	case 5:
		goto loc_82139CA0;
	case 6:
		goto loc_82139CAC;
	case 7:
		goto loc_82139CB8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82139C88:
	// lbz r11,-16082(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + -16082);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82139cd0
	if (!cr6.eq) goto loc_82139CD0;
loc_82139C94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821389d0
	ctx.lr = 0x82139C9C;
	sub_821389D0(ctx, base);
	// b 0x82139cc0
	goto loc_82139CC0;
loc_82139CA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82139108
	ctx.lr = 0x82139CA8;
	sub_82139108(ctx, base);
	// b 0x82139cc0
	goto loc_82139CC0;
loc_82139CAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82138e58
	ctx.lr = 0x82139CB4;
	sub_82138E58(ctx, base);
	// b 0x82139cc0
	goto loc_82139CC0;
loc_82139CB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82138c90
	ctx.lr = 0x82139CC0;
	sub_82138C90(ctx, base);
loc_82139CC0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82139cd0
	if (cr6.eq) goto loc_82139CD0;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_82139CD0:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r11,r30,6000
	ctx.r11.s64 = r30.s64 + 6000;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x82139be0
	if (cr6.lt) goto loc_82139BE0;
	// lbz r10,-14240(r24)
	ctx.r10.u64 = REX_LOAD_U8(r24.u32 + -14240);
loc_82139CE8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82139d08
	if (!cr6.eq) goto loc_82139D08;
	// bl 0x822ca588
	ctx.lr = 0x82139CF8;
	sub_822CA588(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82990140
	ctx.lr = 0x82139D04;
	// b 0x8298eb08
	return;
loc_82139D08:
	// lwz r11,2528(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 2528);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, ctx.r11.s32, xer);
	// beq cr6,0x82139d20
	if (cr6.eq) goto loc_82139D20;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-14744(r10)
	REX_STORE_U32(ctx.r10.u32 + -14744, ctx.r11.u32);
loc_82139D20:
	// stw r27,2528(r25)
	REX_STORE_U32(r25.u32 + 2528, r27.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82990140
	ctx.lr = 0x82139D30;
	// b 0x8298eb08
	return;
}

DEFINE_REX_FUNC(sub_82172E90) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82172ec8
	if (!cr6.eq) goto loc_82172EC8;
loc_82172EB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82172EC8:
	// stw r4,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// bl 0x8218bf20
	ctx.lr = 0x82172ED0;
	sub_8218BF20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// bne cr6,0x82172eb0
	if (!cr6.eq) goto loc_82172EB0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82176E38) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8217b758
	ctx.lr = 0x82176E54;
	sub_8217B758(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82176e84
	if (cr6.lt) goto loc_82176E84;
	// lbz r9,196(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 196);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lbz r8,197(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 197);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-7968
	ctx.r11.s64 = ctx.r11.s64 + -7968;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// sth r10,110(r31)
	REX_STORE_U16(r31.u32 + 110, ctx.r10.u16);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// sth r11,108(r31)
	REX_STORE_U16(r31.u32 + 108, ctx.r11.u16);
loc_82176E84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217DC88) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298ea9c
	ctx.lr = 0x8217DC90;
	// addi r8,r3,13
	ctx.r8.s64 = ctx.r3.s64 + 13;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r3,20
	ctx.r7.s64 = ctx.r3.s64 + 20;
	// lbz r10,13(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 13);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r8,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r8.u32);
	// stw r7,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r7.u32);
	// stw r9,-164(r1)
	REX_STORE_U32(ctx.r1.u32 + -164, ctx.r9.u32);
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// addi r7,r3,24
	ctx.r7.s64 = ctx.r3.s64 + 24;
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// addi r6,r3,52
	ctx.r6.s64 = ctx.r3.s64 + 52;
	// stw r8,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r8.u32);
	// addi r8,r3,28
	ctx.r8.s64 = ctx.r3.s64 + 28;
	// stw r7,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r11.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// subf r5,r9,r31
	ctx.r5.u64 = r31.u64 - ctx.r9.u64;
	// stw r8,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r5,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r5.u32);
	// dcbt r0,r11
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r7,r1,-188
	ctx.r7.s64 = ctx.r1.s64 + -188;
	// lfs f13,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f12,44(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r3,36
	ctx.r8.s64 = ctx.r3.s64 + 36;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// lvlx v0,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r3,48
	ctx.r7.s64 = ctx.r3.s64 + 48;
	// std r9,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r9.u64);
	// vcfsx v0,v0,0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// addi r30,r1,-152
	r30.s64 = ctx.r1.s64 + -152;
	// lvlx v13,r3,r4
	temp.u32 = ctx.r3.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r28,r1,-160
	r28.s64 = ctx.r1.s64 + -160;
	// addi r4,r1,-152
	ctx.r4.s64 = ctx.r1.s64 + -152;
	// stw r7,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r7.u32);
	// li r29,0
	r29.s64 = 0;
	// vrefp v10,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v0.f32)));
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vmulfp128 v13,v13,v10
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vspltw v10,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// lfd f0,-144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfd f13,-6912(r8)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r8.u32 + -6912);
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fdiv f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 / ctx.f0.f64;
	// fctidz f0,f11
	ctx.f0.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f0,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.f0.u64);
	// fctidz f0,f12
	ctx.f0.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// ld r7,-160(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// stfd f0,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.f0.u64);
	// ld r30,-152(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lvlx v12,r9,r28
	temp.u32 = ctx.r9.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpdi cr6,r7,0
	cr6.compare<int64_t>(ctx.r7.s64, 0, xer);
	// lvlx v11,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v11,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// li r31,2
	r31.s64 = 2;
	// bge cr6,0x8217def0
	if (!cr6.lt) goto loc_8217DEF0;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r4,12
	ctx.r4.s64 = 12;
loc_8217DDC4:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x8217def0
	if (!cr6.gt) goto loc_8217DEF0;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// li r26,10
	r26.s64 = 10;
	// vspltisb v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_set1_epi8(char(0x1)));
	// li r25,20
	r25.s64 = 20;
	// addi r28,r10,5120
	r28.s64 = ctx.r10.s64 + 5120;
	// li r27,16
	r27.s64 = 16;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// addi r24,r10,3072
	r24.s64 = ctx.r10.s64 + 3072;
	// vsr v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// lvlx v8,r11,r26
	temp.u32 = ctx.r11.u32 + r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16))));
	// lvlx v7,r6,r25
	temp.u32 = ctx.r6.u32 + r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v7,v7,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), 0xFF));
	// addi r26,r10,4096
	r26.s64 = ctx.r10.s64 + 4096;
	// li r25,6
	r25.s64 = 6;
	// vadduwm v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vcfux v9,v9,31
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// addi r23,r10,2048
	r23.s64 = ctx.r10.s64 + 2048;
	// vcfsx v8,v8,15
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// addi r22,r10,1024
	r22.s64 = ctx.r10.s64 + 1024;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// add r7,r30,r7
	ctx.r7.u64 = r30.u64 + ctx.r7.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmpdi cr6,r7,0
	cr6.compare<int64_t>(ctx.r7.s64, 0, xer);
	// vsldoi v13,v0,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// vmulfp128 v13,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v7,v8,8,0
	simde_mm_store_ps(ctx.v7.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 228), 8));
	// vsldoi v13,v13,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// vaddfp v0,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmsum3fp128 v9,v7,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v9,r0,r28
	ea = (r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx v9,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16))));
	// lvlx v8,r6,r27
	temp.u32 = ctx.r6.u32 + r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vrlimi128 v8,v9,8,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 8));
	// vmsum3fp128 v9,v8,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v9,r0,r26
	ea = (r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx v9,r11,r25
	temp.u32 = ctx.r11.u32 + r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16))));
	// lvlx v8,r6,r4
	temp.u32 = ctx.r6.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vrlimi128 v8,v9,8,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 8));
	// vmsum3fp128 v9,v8,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v9,r0,r24
	ea = (r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx v9,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16))));
	// lvlx v8,r6,r8
	temp.u32 = ctx.r6.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vrlimi128 v8,v9,8,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 8));
	// vmsum3fp128 v9,v8,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v9,r0,r23
	ea = (r23.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx v9,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16))));
	// lvlx v8,r6,r9
	temp.u32 = ctx.r6.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vrlimi128 v8,v9,8,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 8));
	// vmsum3fp128 v9,v8,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v9,r0,r22
	ea = (r22.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx v9,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16))));
	// lvlx v8,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vrlimi128 v8,v9,8,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 8));
	// vmsum3fp128 v13,v8,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v13,r0,r21
	ea = (r21.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// blt cr6,0x8217ddc4
	if (cr6.lt) goto loc_8217DDC4;
loc_8217DEF0:
	// lwz r26,-184(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// sradi r9,r7,63
	xer.ca = (ctx.r7.s64 < 0) & ((ctx.r7.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s64 >> 63;
	// sradi r8,r7,32
	xer.ca = (ctx.r7.s64 < 0) & ((ctx.r7.u64 & 0xFFFFFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s64 >> 32;
	// addi r27,r26,-1
	r27.s64 = r26.s64 + -1;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// extsw r28,r27
	r28.s64 = r27.s32;
	// cmpd cr6,r9,r28
	cr6.compare<int64_t>(ctx.r9.s64, r28.s64, xer);
	// bge cr6,0x8217e100
	if (!cr6.lt) goto loc_8217E100;
loc_8217DF10:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8217e208
	if (cr6.eq) goto loc_8217E208;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// vspltisb v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_set1_epi8(char(0x1)));
	// addi r25,r10,5120
	r25.s64 = ctx.r10.s64 + 5120;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vsr v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_vsr(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)));
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// vadduwm v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_add_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// addi r4,r9,5
	ctx.r4.s64 = ctx.r9.s64 + 5;
	// vcfux v9,v9,31
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(rex::ppc::simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x30000000)))));
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r21,r9,4
	r21.s64 = ctx.r9.s64 + 4;
	// addi r19,r8,4
	r19.s64 = ctx.r8.s64 + 4;
	// rlwinm r21,r21,1,0,30
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r19,1,0,30
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r20,r9,3
	r20.s64 = ctx.r9.s64 + 3;
	// vsldoi v13,v0,v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), 12));
	// addi r24,r10,4096
	r24.s64 = ctx.r10.s64 + 4096;
	// rlwinm r20,r20,1,0,30
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r18,r8,3
	r18.s64 = ctx.r8.s64 + 3;
	// addi r17,r8,2
	r17.s64 = ctx.r8.s64 + 2;
	// rlwinm r18,r18,1,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// vmulfp128 v13,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvlx v9,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r8,5
	ctx.r4.s64 = ctx.r8.s64 + 5;
	// vupkhsh v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16))));
	// addi r23,r10,3072
	r23.s64 = ctx.r10.s64 + 3072;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// addi r22,r10,2048
	r22.s64 = ctx.r10.s64 + 2048;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvlx v8,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r4,r17,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// vupkhsh v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16))));
	// vsldoi v13,v13,v0,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 8));
	// vaddfp v0,v0,v10
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vcfsx v8,v8,15
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw v9,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vrlimi128 v9,v8,8,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 228), 8));
	// vmsum3fp128 v9,v9,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v9,r0,r25
	ea = (r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// lvlx v9,r21,r11
	temp.u32 = r21.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16))));
	// lvlx v8,r19,r11
	temp.u32 = r19.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16))));
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vcfsx v8,v8,15
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw v9,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vrlimi128 v9,v8,8,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 228), 8));
	// vmsum3fp128 v9,v9,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v9,r0,r24
	ea = (r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx v9,r20,r11
	temp.u32 = r20.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16))));
	// lvlx v8,r18,r11
	temp.u32 = r18.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16))));
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vcfsx v8,v8,15
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw v9,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vrlimi128 v9,v8,8,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 228), 8));
	// vmsum3fp128 v9,v9,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v9,r0,r23
	ea = (r23.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx v9,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// vupkhsh v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16))));
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// lvlx v8,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r10,1024
	ctx.r4.s64 = ctx.r10.s64 + 1024;
	// vupkhsh v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16))));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// vcfsx v8,v8,15
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw v8,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// add r7,r30,r7
	ctx.r7.u64 = r30.u64 + ctx.r7.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// vrlimi128 v8,v9,8,0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v9.f32), 228), 8));
	// vmsum3fp128 v9,v8,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v9,r0,r22
	ea = (r22.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx v9,r9,r31
	temp.u32 = ctx.r9.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16))));
	// lvlx v8,r8,r31
	temp.u32 = ctx.r8.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16))));
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vcfsx v8,v8,15
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vspltw v9,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vrlimi128 v9,v8,8,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 228), 8));
	// vmsum3fp128 v9,v9,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v9,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v9.u32[3 - ((ea & 0xF) >> 2)]);
	// lvlx v9,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// sradi r9,r7,32
	xer.ca = (ctx.r7.s64 < 0) & ((ctx.r7.u64 & 0xFFFFFFFF) != 0);
	ctx.r9.s64 = ctx.r7.s64 >> 32;
	// vupkhsh v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16))));
	// lvlx v8,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16))));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vcfsx v9,v9,15
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v9.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vcfsx v8,v8,15
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v8.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// xor r4,r8,r29
	ctx.r4.u64 = ctx.r8.u64 ^ r29.u64;
	// rlwinm r4,r4,0,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// vspltw v9,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vrlimi128 v9,v8,8,0
	simde_mm_store_ps(ctx.v9.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v8.f32), 228), 8));
	// vmsum3fp128 v13,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v13,r0,r25
	ea = (r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// beq cr6,0x8217e0f4
	if (cr6.eq) goto loc_8217E0F4;
	// li r4,128
	ctx.r4.s64 = 128;
	// dcbt r4,r8
loc_8217E0F4:
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// cmpd cr6,r9,r28
	cr6.compare<int64_t>(ctx.r9.s64, r28.s64, xer);
	// blt cr6,0x8217df10
	if (cr6.lt) goto loc_8217DF10;
loc_8217E100:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8217e208
	if (cr6.eq) goto loc_8217E208;
	// cmpd cr6,r9,r28
	cr6.compare<int64_t>(ctx.r9.s64, r28.s64, xer);
	// bne cr6,0x8217e1f0
	if (!cr6.eq) goto loc_8217E1F0;
	// rlwinm r8,r27,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r27,r8
	ctx.r8.u64 = r27.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhz r5,10(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 10);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r5,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r5.u64);
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// lfd f0,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-6988(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -6988);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,20(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lhz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 8);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r5,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r5.u64);
	// lfd f12,-144(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,16(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lhz r5,6(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 6);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r5,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r5.u64);
	// lfd f12,-144(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lhz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 4);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r5,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r5.u64);
	// lfd f12,-144(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lhz r5,2(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r5,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r5.u64);
	// lfd f12,-144(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// std r8,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r8.u64);
	// lfd f12,-144(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x8217e208
	goto loc_8217E208;
loc_8217E1F0:
	// extsw r8,r26
	ctx.r8.s64 = r26.s32;
	// cmpd cr6,r9,r8
	cr6.compare<int64_t>(ctx.r9.s64, ctx.r8.s64, xer);
	// ble cr6,0x8217e208
	if (!cr6.gt) goto loc_8217E208;
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// rldicr r8,r8,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_8217E208:
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rldicr r9,r9,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// subf r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	// addi r7,r3,36
	ctx.r7.s64 = ctx.r3.s64 + 36;
	// std r9,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r9.u64);
	// lwz r9,-180(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// stvewx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lwz r9,-176(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// rotlwi r5,r7,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// twllei r5,0
	if (ctx.r5.s32 == 0 || ctx.r5.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,-188(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// divwu r11,r11,r5
	ctx.r11.u64 = uint32_t(ctx.r5.u32 ? ctx.r11.u32 / ctx.r5.u32 : 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// lfd f0,-144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// blt cr6,0x8217e278
	if (cr6.lt) goto loc_8217E278;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8217E278:
	// lwz r9,-172(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r8,-168(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r9,-164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -164);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,-192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// bge cr6,0x8217e2ac
	if (!cr6.lt) goto loc_8217E2AC;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8298eaec
	return;
loc_8217E2AC:
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x8298eaec
	return;
}

DEFINE_REX_FUNC(sub_821D1490) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f13,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821d14cc
	if (!cr6.lt) goto loc_821D14CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237aa40
	ctx.lr = 0x821D14C4;
	sub_8237AA40(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// blt cr6,0x821d14e4
	if (cr6.lt) goto loc_821D14E4;
loc_821D14CC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f13,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821d150c
	if (!cr6.lt) goto loc_821D150C;
loc_821D14E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,412(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D14FC;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x821d1510
	if (!cr6.eq) goto loc_821D1510;
loc_821D150C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D1510:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D6DE0) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821d64c0
	ctx.lr = 0x821D6DF4;
	sub_821D64C0(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x821d6e20
	if (cr6.eq) goto loc_821D6E20;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2944
	ctx.r11.s64 = ctx.r11.s64 + 2944;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_821D6E20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DA248) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,-13676
	ctx.r11.s64 = ctx.r11.s64 + -13676;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821d94b8
	ctx.lr = 0x821DA268;
	sub_821D94B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// addi r4,r11,13984
	ctx.r4.s64 = ctx.r11.s64 + 13984;
	// lis r11,-32061
	ctx.r11.s64 = -2101149696;
	// addi r10,r10,-12008
	ctx.r10.s64 = ctx.r10.s64 + -12008;
	// addi r3,r11,12544
	ctx.r3.s64 = ctx.r11.s64 + 12544;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r11,-7564(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7564);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// bl 0x822735d0
	ctx.lr = 0x821DA290;
	sub_822735D0(ctx, base);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-12344(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -12344);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x821da2c0
	if (cr6.eq) goto loc_821DA2C0;
	// lis r10,-32059
	ctx.r10.s64 = -2101018624;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,7184
	ctx.r10.s64 = ctx.r10.s64 + 7184;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821da2c0
	if (cr6.eq) goto loc_821DA2C0;
	// bl 0x82213c48
	ctx.lr = 0x821DA2C0;
	sub_82213C48(ctx, base);
loc_821DA2C0:
	// bl 0x82674588
	ctx.lr = 0x821DA2C4;
	sub_82674588(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r10,23448
	ctx.r3.s64 = ctx.r10.s64 + 23448;
	// stb r9,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r9.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r11.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r11,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r11,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// bl 0x8221f458
	ctx.lr = 0x821DA30C;
	sub_8221F458(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E1180) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// lbz r11,17360(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 17360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821e11a4
	if (cr6.eq) goto loc_821E11A4;
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// lbz r11,17361(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 17361);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821e11a8
	if (!cr6.eq) goto loc_821E11A8;
loc_821E11A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E11A8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E47F8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32071
	r30.s64 = -2101805056;
	// lwz r11,17712(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 17712);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x821e482c
	if (cr6.lt) goto loc_821E482C;
	// beq cr6,0x821e4824
	if (cr6.eq) goto loc_821E4824;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
loc_821E4824:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821e48e0
	goto loc_821E48E0;
loc_821E482C:
	// lis r31,-32071
	r31.s64 = -2101805056;
	// lwz r11,17716(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 17716);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x821e48dc
	if (!cr6.eq) goto loc_821E48DC;
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// lbz r11,17360(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 17360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821e4884
	if (cr6.eq) goto loc_821E4884;
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mulli r9,r3,308
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(308));
	// addi r11,r11,-5480
	ctx.r11.s64 = ctx.r11.s64 + -5480;
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// addi r11,r11,264
	ctx.r11.s64 = ctx.r11.s64 + 264;
	// addi r10,r10,-6304
	ctx.r10.s64 = ctx.r10.s64 + -6304;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_821E486C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821e486c
	if (!cr6.eq) goto loc_821E486C;
	// b 0x821e48bc
	goto loc_821E48BC;
loc_821E4884:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x821e48b8
	if (!cr6.lt) goto loc_821E48B8;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// lwz r11,4468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4468);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x821e48b4
	if (cr6.eq) goto loc_821E48B4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x821e48ac
	if (cr6.eq) goto loc_821E48AC;
	// li r3,12
	ctx.r3.s64 = 12;
	// b 0x821e48b8
	goto loc_821E48B8;
loc_821E48AC:
	// li r3,14
	ctx.r3.s64 = 14;
	// b 0x821e48b8
	goto loc_821E48B8;
loc_821E48B4:
	// li r3,13
	ctx.r3.s64 = 13;
loc_821E48B8:
	// bl 0x821e35d0
	ctx.lr = 0x821E48BC;
	sub_821E35D0(ctx, base);
loc_821E48BC:
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,17695(r10)
	REX_STORE_U8(ctx.r10.u32 + 17695, ctx.r11.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,17716(r31)
	REX_STORE_U32(r31.u32 + 17716, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,17712(r30)
	REX_STORE_U32(r30.u32 + 17712, ctx.r11.u32);
	// bl 0x82206160
	ctx.lr = 0x821E48DC;
	sub_82206160(ctx, base);
loc_821E48DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E48E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EF708) {
	REX_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32015
	ctx.r11.s64 = -2098135040;
	// lfs f0,19708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19708);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8004(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8004);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821ef728
	if (!cr6.lt) goto loc_821EF728;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821EF728:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EFF10) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eabc
	ctx.lr = 0x821EFF18;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32070
	r29.s64 = -2101739520;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lbz r11,-16951(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + -16951);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r26,r11,-16288
	r26.s64 = ctx.r11.s64 + -16288;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r27,r11,-28296
	r27.s64 = ctx.r11.s64 + -28296;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r11,17264
	r28.s64 = ctx.r11.s64 + 17264;
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bne cr6,0x821effe0
	if (!cr6.eq) goto loc_821EFFE0;
	// li r30,0
	r30.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_821EFF58:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq cr6,0x821eff7c
	if (cr6.eq) goto loc_821EFF7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x821eff58
	if (cr6.eq) goto loc_821EFF58;
loc_821EFF7C:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x821effd8
	if (cr6.eq) goto loc_821EFFD8;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
loc_821EFF8C:
	// bl 0x82318f10
	ctx.lr = 0x821EFF90;
	sub_82318F10(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r3,r31,r26
	REX_STORE_U32(r31.u32 + r26.u32, ctx.r3.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r27
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821EFFA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq cr6,0x821effcc
	if (cr6.eq) goto loc_821EFFCC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x821effa8
	if (cr6.eq) goto loc_821EFFA8;
loc_821EFFCC:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x821eff8c
	if (!cr6.eq) goto loc_821EFF8C;
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_821EFFD8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-16951(r29)
	REX_STORE_U8(r29.u32 + -16951, ctx.r11.u8);
loc_821EFFE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_821EFFEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq cr6,0x821f0010
	if (cr6.eq) goto loc_821F0010;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x821effec
	if (cr6.eq) goto loc_821EFFEC;
loc_821F0010:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x821f0064
	if (cr6.eq) goto loc_821F0064;
	// li r7,0
	ctx.r7.s64 = 0;
loc_821F001C:
	// lwzx r11,r7,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + r26.u32);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, xer);
	// beq cr6,0x821f0068
	if (cr6.eq) goto loc_821F0068;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + r27.u32);
loc_821F0038:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq cr6,0x821f005c
	if (cr6.eq) goto loc_821F005C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x821f0038
	if (cr6.eq) goto loc_821F0038;
loc_821F005C:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x821f001c
	if (!cr6.eq) goto loc_821F001C;
loc_821F0064:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F0068:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8298eb0c
	return;
}

DEFINE_REX_FUNC(sub_821FECD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,4252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4252);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FF740) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab8
	ctx.lr = 0x821FF748;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x829900f8
	ctx.lr = 0x821FF750;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,48
	r27.s64 = 48;
	// addi r8,r30,368
	ctx.r8.s64 = r30.s64 + 368;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r25,-32256
	r25.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r28,r11,29072
	r28.s64 = ctx.r11.s64 + 29072;
	// lvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f11,-8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,4836(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4836);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r7,r27
	ea = (ctx.r7.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v13,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,8004(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8004);
	f29.f64 = double(temp.f32);
	// bne cr6,0x821ff7b0
	if (!cr6.eq) goto loc_821FF7B0;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lfs f11,2592(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 2592);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_821FF7B0:
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// ori r24,r11,65535
	r24.u64 = ctx.r11.u64 | 65535;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r26,r11,-7564
	r26.s64 = ctx.r11.s64 + -7564;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// lfs f30,2980(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2980);
	f30.f64 = double(temp.f32);
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// lfs f31,-28124(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -28124);
	f31.f64 = double(temp.f32);
	// lfs f28,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f28.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x821ffa0c
	if (!cr6.lt) goto loc_821FFA0C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,40(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23336(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23336);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821ff844
	if (!cr6.lt) goto loc_821FF844;
	// lfs f0,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lhz r10,352(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 352);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bge cr6,0x821ff83c
	if (!cr6.lt) goto loc_821FF83C;
	// sth r11,352(r30)
	REX_STORE_U16(r30.u32 + 352, ctx.r11.u16);
	// b 0x821ff848
	goto loc_821FF848;
loc_821FF83C:
	// sth r24,352(r30)
	REX_STORE_U16(r30.u32 + 352, r24.u16);
	// b 0x821ff848
	goto loc_821FF848;
loc_821FF844:
	// sth r29,352(r30)
	REX_STORE_U16(r30.u32 + 352, r29.u16);
loc_821FF848:
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,10524(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10524);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821ff8b0
	if (!cr6.gt) goto loc_821FF8B0;
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x821ff8b0
	if (!cr6.lt) goto loc_821FF8B0;
	// lwz r31,3956(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 3956);
	// bl 0x8237aa40
	ctx.lr = 0x821FF870;
	sub_8237AA40(ctx, base);
	// cmpw cr6,r3,r31
	cr6.compare<int32_t>(ctx.r3.s32, r31.s32, xer);
	// bge cr6,0x821ff8b0
	if (!cr6.lt) goto loc_821FF8B0;
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lhz r10,354(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 354);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bge cr6,0x821ff8a8
	if (!cr6.lt) goto loc_821FF8A8;
	// sth r11,354(r30)
	REX_STORE_U16(r30.u32 + 354, ctx.r11.u16);
	// b 0x821ff8b4
	goto loc_821FF8B4;
loc_821FF8A8:
	// sth r24,354(r30)
	REX_STORE_U16(r30.u32 + 354, r24.u16);
	// b 0x821ff8b4
	goto loc_821FF8B4;
loc_821FF8B0:
	// sth r29,354(r30)
	REX_STORE_U16(r30.u32 + 354, r29.u16);
loc_821FF8B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x821ff8e4
	if (!cr6.eq) goto loc_821FF8E4;
	// rlwinm r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x821ff8e4
	if (!cr6.eq) goto loc_821FF8E4;
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// beq cr6,0x821ff8e8
	if (cr6.eq) goto loc_821FF8E8;
loc_821FF8E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821FF8E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x821ffa1c
	if (!cr6.eq) goto loc_821FFA1C;
	// bl 0x823f5540
	ctx.lr = 0x821FF8F8;
	sub_823F5540(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821ffa1c
	if (cr6.eq) goto loc_821FFA1C;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,4836(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4836);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x821ff92c
	if (!cr6.eq) goto loc_821FF92C;
	// lfs f0,368(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x821ff9c8
	if (!cr6.gt) goto loc_821FF9C8;
	// lbz r11,4848(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 4848);
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// b 0x821ff9bc
	goto loc_821FF9BC;
loc_821FF92C:
	// lwz r11,3956(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3956);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x821ff9b8
	if (!cr6.gt) goto loc_821FF9B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r7,3956(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 3956);
loc_821FF94C:
	// lwz r11,3956(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3956);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// bge cr6,0x821ff964
	if (!cr6.lt) goto loc_821FF964;
	// lwz r11,3952(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3952);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x821ff968
	goto loc_821FF968;
loc_821FF964:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_821FF968:
	// lwz r11,356(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 356);
	// rlwinm r11,r11,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821ff9a8
	if (cr6.eq) goto loc_821FF9A8;
	// lwz r11,3956(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3956);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, xer);
	// bge cr6,0x821ff990
	if (!cr6.lt) goto loc_821FF990;
	// lwz r11,3952(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 3952);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x821ff994
	goto loc_821FF994;
loc_821FF990:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_821FF994:
	// lwz r11,356(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 356);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821ff9a8
	if (cr6.eq) goto loc_821FF9A8;
	// li r6,1
	ctx.r6.s64 = 1;
loc_821FF9A8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,368
	ctx.r9.s64 = ctx.r9.s64 + 368;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x821ff94c
	if (cr6.lt) goto loc_821FF94C;
loc_821FF9B8:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
loc_821FF9BC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x821ff9c8
	if (!cr6.eq) goto loc_821FF9C8;
	// li r5,1
	ctx.r5.s64 = 1;
loc_821FF9C8:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821ffa18
	if (cr6.eq) goto loc_821FFA18;
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lhz r10,356(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 356);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bge cr6,0x821ffa04
	if (!cr6.lt) goto loc_821FFA04;
	// sth r11,356(r30)
	REX_STORE_U16(r30.u32 + 356, ctx.r11.u16);
	// b 0x821ffa1c
	goto loc_821FFA1C;
loc_821FFA04:
	// sth r24,356(r30)
	REX_STORE_U16(r30.u32 + 356, r24.u16);
	// b 0x821ffa1c
	goto loc_821FFA1C;
loc_821FFA0C:
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r29,352(r30)
	REX_STORE_U16(r30.u32 + 352, r29.u16);
	// sth r29,354(r30)
	REX_STORE_U16(r30.u32 + 354, r29.u16);
loc_821FFA18:
	// sth r29,356(r30)
	REX_STORE_U16(r30.u32 + 356, r29.u16);
loc_821FFA1C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// lfs f11,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,4836(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4836);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// lvx128 v0,r9,r27
	ea = (ctx.r9.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vsubfp v13,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x821ffa58
	if (!cr6.eq) goto loc_821FFA58;
	// lfs f11,2592(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 2592);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
loc_821FFA58:
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x821ffb78
	if (!cr6.lt) goto loc_821FFB78;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x821ffaa0
	if (!cr6.eq) goto loc_821FFAA0;
	// rlwinm r9,r10,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x821ffaa0
	if (!cr6.eq) goto loc_821FFAA0;
	// rlwinm r10,r10,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// beq cr6,0x821ffaa4
	if (cr6.eq) goto loc_821FFAA4;
loc_821FFAA0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_821FFAA4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x821ffb80
	if (!cr6.eq) goto loc_821FFB80;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// rlwinm r9,r9,0,10,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3E0000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x821ffacc
	if (!cr6.eq) goto loc_821FFACC;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
	// b 0x821ffad0
	goto loc_821FFAD0;
loc_821FFACC:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64;
loc_821FFAD0:
	// lfs f13,4200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4200);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821ffb00
	if (!cr6.gt) goto loc_821FFB00;
	// lbz r9,3844(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3844);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x821ffb00
	if (!cr6.eq) goto loc_821FFB00;
	// lfs f0,4204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4204);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, f28.f64);
	// bne cr6,0x821ffb00
	if (!cr6.eq) goto loc_821FFB00;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821FFB00:
	// lfs f0,368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, f28.f64);
	// ble cr6,0x821ffb1c
	if (!cr6.gt) goto loc_821FFB1C;
	// lfs f0,392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x821ffb1c
	if (!cr6.gt) goto loc_821FFB1C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_821FFB1C:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821ffb80
	if (cr6.eq) goto loc_821FFB80;
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lhz r10,358(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 358);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bge cr6,0x821ffb64
	if (!cr6.lt) goto loc_821FFB64;
	// sth r11,358(r30)
	REX_STORE_U16(r30.u32 + 358, ctx.r11.u16);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82990144
	ctx.lr = 0x821FFB60;
	// b 0x8298eb08
	return;
loc_821FFB64:
	// sth r24,358(r30)
	REX_STORE_U16(r30.u32 + 358, r24.u16);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82990144
	ctx.lr = 0x821FFB74;
	// b 0x8298eb08
	return;
loc_821FFB78:
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r29,358(r30)
	REX_STORE_U16(r30.u32 + 358, r29.u16);
loc_821FFB80:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82990144
	ctx.lr = 0x821FFB8C;
	// b 0x8298eb08
	return;
}

DEFINE_REX_FUNC(sub_8222DC30) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32066
	ctx.r11.s64 = -2101477376;
	// addi r11,r11,14032
	ctx.r11.s64 = ctx.r11.s64 + 14032;
	// lwz r10,6932(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 6932);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,6940(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 6940);
	// cmpw cr6,r10,r3
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,6932(r11)
	REX_STORE_U32(ctx.r11.u32 + 6932, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222FF98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x8222FFA0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r11,r11,-10032
	ctx.r11.s64 = ctx.r11.s64 + -10032;
	// li r8,48
	ctx.r8.s64 = 48;
	// lhz r10,26(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 26);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8222fd78
	ctx.lr = 0x8222FFEC;
	sub_8222FD78(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8222fd78
	ctx.lr = 0x82230010;
	sub_8222FD78(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vmaxfp v0,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8222fd78
	ctx.lr = 0x82230050;
	sub_8222FD78(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaxfp v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8222fd78
	ctx.lr = 0x82230080;
	sub_8222FD78(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stfs f0,120(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// vmaxfp v0,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8222fd78
	ctx.lr = 0x822300C0;
	sub_8222FD78(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaxfp v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8222fd78
	ctx.lr = 0x822300F0;
	sub_8222FD78(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vmaxfp v0,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8222fd78
	ctx.lr = 0x82230130;
	sub_8222FD78(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaxfp v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8222fd78
	ctx.lr = 0x82230160;
	sub_8222FD78(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vminfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaxfp v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_82254B68) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82254bf4
	if (cr6.eq) goto loc_82254BF4;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// lvx128 v12,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r10,r10,-8432
	ctx.r10.s64 = ctx.r10.s64 + -8432;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,16
	ctx.r6.s64 = 16;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// vand v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,-8464
	ctx.r10.s64 = ctx.r10.s64 + -8464;
	// lvx128 v11,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v8,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglw v11,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v13,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v9,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrglw v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrglw v12,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v13,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v11,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmsum4fp128 v12,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v13,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v11,v0,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmrghw v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v13,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
loc_82254BF4:
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x823f42c0
	sub_823F42C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225E190) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,-90
	cr6.compare<int32_t>(ctx.r3.s32, -90, xer);
	// beq cr6,0x8225e1cc
	if (cr6.eq) goto loc_8225E1CC;
	// lis r11,-32062
	ctx.r11.s64 = -2101215232;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-27916
	ctx.r11.s64 = ctx.r11.s64 + -27916;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8225e1cc
	if (cr6.eq) goto loc_8225E1CC;
	// lis r11,-32062
	ctx.r11.s64 = -2101215232;
	// addi r11,r11,-27904
	ctx.r11.s64 = ctx.r11.s64 + -27904;
	// lbzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8225e1cc
	if (cr6.eq) goto loc_8225E1CC;
	// lwz r3,3116(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 3116);
	// blr 
	return;
loc_8225E1CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82260FB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab8
	ctx.lr = 0x82260FB8;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lbz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8226117c
	if (cr6.eq) goto loc_8226117C;
	// lbz r11,25(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 25);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// lfs f31,3068(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3068);
	f31.f64 = double(temp.f32);
	// addi r11,r11,-14744
	ctx.r11.s64 = ctx.r11.s64 + -14744;
	// beq cr6,0x822610a4
	if (cr6.eq) goto loc_822610A4;
	// li r29,16
	r29.s64 = 16;
loc_82260FFC:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// li r30,3
	r30.s64 = 3;
loc_82261004:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82261018;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82261048
	if (cr6.eq) goto loc_82261048;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82261034;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82261044;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8226104c
	goto loc_8226104C;
loc_82261048:
	// lwz r3,256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 256);
loc_8226104C:
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824328e0
	ctx.lr = 0x82261058;
	sub_824328E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82261068
	if (!cr6.gt) goto loc_82261068;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r11,r25
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + r25.u32, temp.u32);
loc_82261068:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82261004
	if (!cr6.eq) goto loc_82261004;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82260ffc
	if (!cr6.eq) goto loc_82260FFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,24(r24)
	REX_STORE_U8(r24.u32 + 24, ctx.r11.u8);
	// stb r11,25(r24)
	REX_STORE_U8(r24.u32 + 25, ctx.r11.u8);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8298eb08
	return;
loc_822610A4:
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// li r29,0
	r29.s64 = 0;
	// li r26,16
	r26.s64 = 16;
	// lfs f30,-6968(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -6968);
	f30.f64 = double(temp.f32);
loc_822610B4:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// li r28,3
	r28.s64 = 3;
loc_822610BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82261158
	if (cr6.eq) goto loc_82261158;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822610DC;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8226110c
	if (cr6.eq) goto loc_8226110C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822610F8;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82261108;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82261110
	goto loc_82261110;
loc_8226110C:
	// lwz r3,256(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 256);
loc_82261110:
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x824328e0
	ctx.lr = 0x8226111C;
	sub_824328E0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82261158
	if (!cr6.gt) goto loc_82261158;
	// lbzx r11,r29,r24
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + r24.u32);
	// rlwinm r31,r3,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfsx f0,r31,r25
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + r25.u32, temp.u32);
	// bl 0x82674588
	ctx.lr = 0x82261148;
	sub_82674588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82261158
	if (cr6.eq) goto loc_82261158;
	// stfsx f31,r31,r25
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + r25.u32, temp.u32);
loc_82261158:
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x822610bc
	if (!cr6.eq) goto loc_822610BC;
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x822610b4
	if (!cr6.eq) goto loc_822610B4;
loc_8226117C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8298eb08
	return;
}

DEFINE_REX_FUNC(sub_8226D720) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// addi r11,r11,11840
	ctx.r11.s64 = ctx.r11.s64 + 11840;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82262d10
	ctx.lr = 0x8226D73C;
	sub_82262D10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8226d764
	if (cr6.eq) goto loc_8226D764;
	// lbz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 316);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8226d764
	if (cr6.eq) goto loc_8226D764;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8226d768
	if (!cr6.eq) goto loc_8226D768;
loc_8226D764:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226D768:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822707E0) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac8
	ctx.lr = 0x822707E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32062
	r29.s64 = -2101215232;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,17008(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 17008);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82270838
	if (!cr6.gt) goto loc_82270838;
	// lis r11,-32062
	ctx.r11.s64 = -2101215232;
	// addi r30,r11,17024
	r30.s64 = ctx.r11.s64 + 17024;
loc_8227080C:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82991d00
	ctx.lr = 0x8227081C;
	sub_82991D00(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82270844
	if (cr6.eq) goto loc_82270844;
	// lwz r11,17008(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 17008);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,272
	r30.s64 = r30.s64 + 272;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x8227080c
	if (cr6.lt) goto loc_8227080C;
loc_82270838:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_82270844:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_82273118) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x82273120;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// bne cr6,0x8227314c
	if (!cr6.eq) goto loc_8227314C;
	// bl 0x821d2088
	ctx.lr = 0x82273140;
	sub_821D2088(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb1c
	return;
loc_8227314C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827df440
	ctx.lr = 0x82273154;
	sub_827DF440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82272ef0
	ctx.lr = 0x82273164;
	sub_82272EF0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8227317c
	if (cr6.eq) goto loc_8227317C;
loc_82273170:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb1c
	return;
loc_8227317C:
	// lbz r10,357(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 357);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x822731cc
	if (cr6.eq) goto loc_822731CC;
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
loc_8227318C:
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// bge cr6,0x822731cc
	if (!cr6.lt) goto loc_822731CC;
	// add r10,r31,r29
	ctx.r10.u64 = r31.u64 + r29.u64;
	// lbz r10,144(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 144);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x822731bc
	if (cr6.eq) goto loc_822731BC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82272ef0
	ctx.lr = 0x822731B0;
	sub_82272EF0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82273170
	if (!cr6.eq) goto loc_82273170;
loc_822731BC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8227318c
	if (cr6.eq) goto loc_8227318C;
loc_822731CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_82279910) {
	REX_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// ori r11,r11,54464
	ctx.r11.u64 = ctx.r11.u64 | 54464;
	// stw r11,-12376(r10)
	REX_STORE_U32(ctx.r10.u32 + -12376, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227A310) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32061
	ctx.r11.s64 = -2101149696;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r7,r11,19504
	ctx.r7.s64 = ctx.r11.s64 + 19504;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// addi r8,r10,-10032
	ctx.r8.s64 = ctx.r10.s64 + -10032;
	// lfs f0,8916(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8916);
	ctx.f0.f64 = double(temp.f32);
loc_8227A32C:
	// lbz r10,65(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 65);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8227a364
	if (!cr6.eq) goto loc_8227A364;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8227a364
	if (cr6.eq) goto loc_8227A364;
	// lhz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,44(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
loc_8227A364:
	// lbz r10,145(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 145);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8227a39c
	if (!cr6.eq) goto loc_8227A39C;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8227a39c
	if (cr6.eq) goto loc_8227A39C;
	// lhz r9,140(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 140);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,44(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
loc_8227A39C:
	// lbz r10,225(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 225);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8227a3d4
	if (!cr6.eq) goto loc_8227A3D4;
	// lwz r10,160(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8227a3d4
	if (cr6.eq) goto loc_8227A3D4;
	// lhz r9,220(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 220);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,44(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
loc_8227A3D4:
	// lbz r10,305(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 305);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8227a40c
	if (!cr6.eq) goto loc_8227A40C;
	// lwz r10,240(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8227a40c
	if (cr6.eq) goto loc_8227A40C;
	// lhz r9,300(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 300);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,44(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
loc_8227A40C:
	// lbz r10,385(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 385);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8227a444
	if (!cr6.eq) goto loc_8227A444;
	// lwz r10,320(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8227a444
	if (cr6.eq) goto loc_8227A444;
	// lhz r9,380(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 380);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,44(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
loc_8227A444:
	// lbz r10,465(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 465);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8227a47c
	if (!cr6.eq) goto loc_8227A47C;
	// lwz r10,400(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8227a47c
	if (cr6.eq) goto loc_8227A47C;
	// lhz r9,460(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 460);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,44(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
loc_8227A47C:
	// lbz r10,545(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 545);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8227a4b4
	if (!cr6.eq) goto loc_8227A4B4;
	// lwz r10,480(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 480);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8227a4b4
	if (cr6.eq) goto loc_8227A4B4;
	// lhz r9,540(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 540);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,44(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
loc_8227A4B4:
	// lbz r10,625(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 625);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8227a4ec
	if (!cr6.eq) goto loc_8227A4EC;
	// lwz r10,560(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 560);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8227a4ec
	if (cr6.eq) goto loc_8227A4EC;
	// lhz r9,620(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 620);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,44(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
loc_8227A4EC:
	// lbz r10,705(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 705);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8227a524
	if (!cr6.eq) goto loc_8227A524;
	// lwz r10,640(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 640);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8227a524
	if (cr6.eq) goto loc_8227A524;
	// lhz r9,700(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 700);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,44(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
loc_8227A524:
	// lbz r10,785(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 785);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8227a55c
	if (!cr6.eq) goto loc_8227A55C;
	// lwz r10,720(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 720);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8227a55c
	if (cr6.eq) goto loc_8227A55C;
	// lhz r9,780(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 780);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,44(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,80(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
loc_8227A55C:
	// addis r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 131072;
	// addi r11,r11,800
	ctx.r11.s64 = ctx.r11.s64 + 800;
	// addi r10,r10,-27068
	ctx.r10.s64 = ctx.r10.s64 + -27068;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8227a32c
	if (cr6.lt) goto loc_8227A32C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82298C88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x8298f118
	ctx.lr = 0x82298CA8;
	sub_8298F118(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8298f048
	ctx.lr = 0x82298CBC;
	sub_8298F048(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vspltw v13,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vmaddfp v0,v10,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vor v13,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vmulfp128 v13,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vnmsubfp v13,v12,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A4130) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822a40a0
	ctx.lr = 0x822A414C;
	sub_822A40A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f13,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f12,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f11.f64 = double(temp.f32);
loc_822A4168:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// srawi r9,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f10,r4,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f9,f8,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// fadds f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// fmadds f10,f7,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f10.f64)));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x822a4204
	if (cr6.lt) goto loc_822A4204;
	// lfs f10,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f8,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f9,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f10.f64)));
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fmadds f10,f8,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f10.f64)));
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x822a4224
	if (cr6.lt) goto loc_822A4224;
loc_822A4204:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// blt cr6,0x822a4168
	if (cr6.lt) goto loc_822A4168;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_822A4224:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B2910) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac4
	ctx.lr = 0x822B2918;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vspltisw v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_set1_epi32(int(0x0)));
	// rlwinm r31,r4,8,0,23
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// li r27,16
	r27.s64 = 16;
	// li r28,32
	r28.s64 = 32;
	// li r29,48
	r29.s64 = 48;
	// lfs f13,2592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f0,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r11,r11,-8288
	ctx.r11.s64 = ctx.r11.s64 + -8288;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// addi r11,r11,-704
	ctx.r11.s64 = ctx.r11.s64 + -704;
	// lvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// addi r11,r11,-720
	ctx.r11.s64 = ctx.r11.s64 + -720;
	// lvx128 v7,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// vpermwi128 v13,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v11,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v4,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lfs f12,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// vpermwi128 v6,v10,99
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x9C));
	// vpermwi128 v10,v10,135
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x78));
	// addi r30,r11,464
	r30.s64 = ctx.r11.s64 + 464;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r30,192
	ctx.r10.s64 = r30.s64 + 192;
	// vmulfp128 v13,v13,v6
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vnmsubfp v13,v11,v10,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v10,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// vmsum3fp128 v5,v13,v13
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v6,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v11,v10,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v6,v6,v4,v11
	simde_mm_store_ps(ctx.v6.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vrsqrtefp v10,v5
	simde_mm_store_ps(ctx.v10.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v5.f32))));
	// vmsum3fp128 v11,v6,v6
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v6.f32), 0xEF));
	// vor v1,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vrsqrtefp v4,v11
	simde_mm_store_ps(ctx.v4.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v11.f32))));
	// vor v11,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vcmpeqfp v10,v10,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vsel v11,v11,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vcmpeqfp v4,v4,v9
	simde_mm_store_ps(ctx.v4.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vsel v10,v10,v12,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vmulfp128 v4,v8,v11
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v3,v10,v10
	simde_mm_store_ps(ctx.v3.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v2,v8,v10
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vnmsubfp v3,v1,v3,v7
	simde_mm_store_ps(ctx.v3.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v7.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v1,v11,v11
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v3,v2,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// lvlx v2,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vnmsubfp v5,v5,v1,v7
	simde_mm_store_ps(ctx.v5.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v7.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// addi r11,r30,64
	ctx.r11.s64 = r30.s64 + 64;
	// vspltw v2,v2,0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), 0xFF));
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// vmulfp128 v10,v6,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vmsum3fp128 v6,v0,v0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmaddfp v11,v5,v4,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v4.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// lvx128 v5,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v11,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32)));
	// vrsqrtefp v13,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v6.f32))));
	// vor v4,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// stvx128 v11,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v6,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vcmpeqfp v13,v13,v9
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vsel v13,v6,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vmulfp128 v9,v13,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)));
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// vmulfp128 v8,v8,v13
	simde_mm_store_ps(ctx.v8.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// vnmsubfp v9,v4,v9,v7
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v7.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// stfs f13,136(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// vmaddfp v13,v9,v8,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v13,v2,v5
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// stvx128 v13,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v9,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// stvx128 v0,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// vmrghw v8,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmsum3fp128 v4,v11,v0
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r11,r11,-8432
	ctx.r11.s64 = ctx.r11.s64 + -8432;
	// vmsum3fp128 v6,v13,v0
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v5,v10,v0
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmrglw v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v13,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v7,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrglw v10,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// vmrghw v9,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// addi r11,r11,-8464
	ctx.r11.s64 = ctx.r11.s64 + -8464;
	// vand v8,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand v9,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// vmrghw v13,v5,v6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v10,v4,v13
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// vmrghw v13,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// vsubfp v13,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vand v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v0,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822af898
	ctx.lr = 0x822B2B54;
	sub_822AF898(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r9,r30,20
	ctx.r9.s64 = r30.s64 + 20;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r30,128
	ctx.r11.s64 = r30.s64 + 128;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r30,224
	ctx.r10.s64 = r30.s64 + 224;
	// stvx128 v13,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfsx f0,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r9.u32, temp.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_822E1418) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac4
	ctx.lr = 0x822E1420;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,-10032
	ctx.r11.s64 = ctx.r11.s64 + -10032;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lhz r10,46(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 46);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,296(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 296);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x822e149c
	if (!cr6.eq) goto loc_822E149C;
	// li r31,0
	r31.s64 = 0;
loc_822E1460:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e0280
	ctx.lr = 0x822E1480;
	sub_822E0280(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(r31.s32, 10, xer);
	// blt cr6,0x822e1460
	if (cr6.lt) goto loc_822E1460;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822df098
	ctx.lr = 0x822E149C;
	sub_822DF098(ctx, base);
loc_822E149C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_822E65A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x822E65B0;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x829900e8
	ctx.lr = 0x822E65B8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stfs f1,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,-6944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6944);
	f28.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - f28.f64));
	// lfd f31,9920(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 9920);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f29,-6912(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + -6912);
	// fsel f12,f13,f0,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsel f0,f13,f0,f31
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsub f13,f12,f29
	ctx.f13.f64 = ctx.f12.f64 - f29.f64;
	// fsel f0,f13,f29,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f29.f64 : ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82991548
	ctx.lr = 0x822E6608;
	sub_82991548(ctx, base);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// frsp f26,f1
	f26.f64 = double(float(ctx.f1.f64));
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - f28.f64));
	// fsel f12,f13,f0,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsel f0,f13,f0,f31
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsub f13,f12,f29
	ctx.f13.f64 = ctx.f12.f64 - f29.f64;
	// fsel f0,f13,f29,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f29.f64 : ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82991548
	ctx.lr = 0x822E662C;
	sub_82991548(ctx, base);
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// frsp f25,f1
	f25.f64 = double(float(ctx.f1.f64));
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - f28.f64));
	// fsel f12,f13,f0,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsel f0,f13,f0,f31
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsub f13,f12,f29
	ctx.f13.f64 = ctx.f12.f64 - f29.f64;
	// fsel f0,f13,f29,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f29.f64 : ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82991548
	ctx.lr = 0x822E6650;
	sub_82991548(ctx, base);
	// fadds f0,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f26.f64 + f30.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// frsp f24,f1
	f24.f64 = double(float(ctx.f1.f64));
	// lfs f27,18916(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 18916);
	f27.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - f27.f64));
	// lfd f31,-1480(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -1480);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f29,-1488(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + -1488);
	// fsel f12,f13,f0,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsel f0,f13,f0,f31
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsub f13,f12,f29
	ctx.f13.f64 = ctx.f12.f64 - f29.f64;
	// fsel f0,f13,f29,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f29.f64 : ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x8298f118
	ctx.lr = 0x822E668C;
	sub_8298F118(ctx, base);
	// fsubs f0,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f26.f64 - f30.f64));
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lfd f28,-6920(r11)
	f28.u64 = REX_LOAD_U64(ctx.r11.u32 + -6920);
	// fsel f13,f0,f0,f28
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f28.f64;
	// fsel f0,f0,f0,f28
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f28.f64;
	// fsub f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 - f31.f64;
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x8298f118
	ctx.lr = 0x822E66BC;
	sub_8298F118(ctx, base);
	// fadds f0,f25,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f25.f64 + f30.f64));
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - f27.f64));
	// fsel f12,f13,f0,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsel f0,f13,f0,f31
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsub f13,f12,f29
	ctx.f13.f64 = ctx.f12.f64 - f29.f64;
	// fsel f0,f13,f29,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f29.f64 : ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x8298f118
	ctx.lr = 0x822E66E4;
	sub_8298F118(ctx, base);
	// fsubs f0,f25,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f25.f64 - f30.f64));
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fsel f13,f0,f0,f28
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f28.f64;
	// fsel f0,f0,f0,f28
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f28.f64;
	// fsub f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 - f31.f64;
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x8298f118
	ctx.lr = 0x822E6708;
	sub_8298F118(ctx, base);
	// fadds f0,f24,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f24.f64 + f30.f64));
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - f27.f64));
	// fsel f12,f13,f0,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsel f0,f13,f0,f31
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsub f13,f12,f29
	ctx.f13.f64 = ctx.f12.f64 - f29.f64;
	// fsel f0,f13,f29,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f29.f64 : ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x8298f118
	ctx.lr = 0x822E6730;
	sub_8298F118(ctx, base);
	// fsubs f0,f24,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f24.f64 - f30.f64));
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fsel f13,f0,f0,f28
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f28.f64;
	// fsel f0,f0,f0,f28
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f28.f64;
	// fsub f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 - f31.f64;
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x8298f118
	ctx.lr = 0x822E6754;
	sub_8298F118(ctx, base);
	// addi r11,r1,212
	ctx.r11.s64 = ctx.r1.s64 + 212;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,212
	ctx.r10.s64 = ctx.r1.s64 + 212;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82990134
	ctx.lr = 0x822E67BC;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_82301148) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addis r10,r9,9
	ctx.r10.s64 = ctx.r9.s64 + 589824;
	// addi r10,r10,-4904
	ctx.r10.s64 = ctx.r10.s64 + -4904;
loc_82301168:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82301188
	if (cr6.eq) goto loc_82301188;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// blt cr6,0x82301168
	if (cr6.lt) goto loc_82301168;
	// blr 
	return;
loc_82301188:
	// addis r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 131072;
	// addi r11,r11,15158
	ctx.r11.s64 = ctx.r11.s64 + 15158;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// b 0x823e5630
	sub_823E5630(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823054E8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x823054F0;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x82301238
	ctx.lr = 0x8230550C;
	sub_82301238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823055cc
	if (cr6.eq) goto loc_823055CC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// lvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r10,0,6,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3C00000;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// lfs f0,-6828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6828);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lwz r11,-3656(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -3656);
	// bne cr6,0x8230559c
	if (!cr6.eq) goto loc_8230559C;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// b 0x823055a0
	goto loc_823055A0;
loc_8230559C:
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
loc_823055A0:
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// lis r11,-32048
	ctx.r11.s64 = -2100297728;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f31,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r3,r11,19456
	ctx.r3.s64 = ctx.r11.s64 + 19456;
	// stw r29,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stb r11,192(r1)
	REX_STORE_U8(ctx.r1.u32 + 192, ctx.r11.u8);
	// stb r11,193(r1)
	REX_STORE_U8(ctx.r1.u32 + 193, ctx.r11.u8);
	// bl 0x82304fc0
	ctx.lr = 0x823055CC;
	sub_82304FC0(ctx, base);
loc_823055CC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_8230FB20) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eabc
	ctx.lr = 0x8230FB28;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x829900c0
	ctx.lr = 0x8230FB30;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lfs f11,2592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,72(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f11
	f29.f64 = ctx.f11.f64;
	// lfs f13,36(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8230fb64
	if (!cr6.lt) goto loc_8230FB64;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x8230fba0
	goto loc_8230FBA0;
loc_8230FB64:
	// lfs f13,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8230fb7c
	if (cr6.lt) goto loc_8230FB7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8230fba0
	goto loc_8230FBA0;
loc_8230FB7C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,5904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5904);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8230fba8
	if (!cr6.gt) goto loc_8230FBA8;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,11544(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 11544);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_8230FBA0:
	// stfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f29,f13
	f29.f64 = ctx.f13.f64;
loc_8230FBA8:
	// lfs f12,28(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8230fbbc
	if (!cr6.lt) goto loc_8230FBBC;
	// fdivs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
loc_8230FBBC:
	// lfs f0,20(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32039
	ctx.r11.s64 = -2099707904;
	// lfs f12,24(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lwz r26,64(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 64);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// addi r31,r11,15104
	r31.s64 = ctx.r11.s64 + 15104;
	// lis r28,-31982
	r28.s64 = -2095972352;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// fdivs f30,f11,f0
	f30.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f30,144(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bne cr6,0x8230fc30
	if (!cr6.eq) goto loc_8230FC30;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r30,20(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(ctx.r11.s32, r30.s32, xer);
	// bge cr6,0x8230fc04
	if (!cr6.lt) goto loc_8230FC04;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_8230FC04:
	// li r6,52
	ctx.r6.s64 = 52;
	// lwz r3,19188(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 19188);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x829cc610
	ctx.lr = 0x8230FC18;
	sub_829CC610(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x8230fc34
	goto loc_8230FC34;
loc_8230FC30:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
loc_8230FC34:
	// lbz r11,15(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 15);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// lbz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + 16);
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// std r10,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r10.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// lfd f13,168(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-6400(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6400);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x823102c8
	if (cr6.eq) goto loc_823102C8;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f7,176(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// clrlwi r25,r29,24
	r25.u64 = r29.u32 & 0xFF;
	// ori r30,r9,65535
	r30.u64 = ctx.r9.u64 | 65535;
	// lfs f6,-6836(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6836);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,2980(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	f31.f64 = double(temp.f32);
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// b 0x8230fcb8
	goto loc_8230FCB8;
loc_8230FCA4:
	// lfs f7,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f30,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	f30.f64 = double(temp.f32);
	// lfs f29,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f29.f64 = double(temp.f32);
loc_8230FCB8:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r10,12(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r9,16(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lbz r8,44(r27)
	ctx.r8.u64 = REX_LOAD_U8(r27.u32 + 44);
	// lfs f12,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - f31.f64));
	// lfs f11,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 - f31.f64));
	// fsubs f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 - f31.f64));
	// lfs f0,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * f30.f64));
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f12,f11,f31
	ctx.f12.f64 = double(float(ctx.f11.f64 + f31.f64));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f12,f10,f31
	ctx.f12.f64 = double(float(ctx.f10.f64 + f31.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fsubs f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 - f31.f64));
	// fsubs f10,f9,f31
	ctx.f10.f64 = double(float(ctx.f9.f64 - f31.f64));
	// fmadds f0,f7,f0,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f8.f64)));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * f30.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f11,f31
	ctx.f12.f64 = double(float(ctx.f11.f64 + f31.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f12,f10,f31
	ctx.f12.f64 = double(float(ctx.f10.f64 + f31.f64));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bne cr6,0x8230fd58
	if (!cr6.eq) goto loc_8230FD58;
	// lfs f12,124(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_8230FD58:
	// fmuls f0,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f0,f7,f13,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f8.f64)));
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bne cr6,0x8230fd78
	if (!cr6.eq) goto loc_8230FD78;
	// lfs f13,124(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_8230FD78:
	// fmuls f0,f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmadds f0,f7,f9,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, ctx.f8.f64)));
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * f29.f64));
	// bne cr6,0x8230fd98
	if (!cr6.eq) goto loc_8230FD98;
	// lfs f0,124(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_8230FD98:
	// fmuls f13,f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lfs f19,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	f19.f64 = double(temp.f32);
	// lfs f18,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	f18.f64 = double(temp.f32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// lfs f17,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	f17.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f22,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	f22.f64 = double(temp.f32);
	// lfs f21,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	f21.f64 = double(temp.f32);
	// lfs f20,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	f20.f64 = double(temp.f32);
	// lfs f16,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	f16.f64 = double(temp.f32);
	// lfs f15,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	f15.f64 = double(temp.f32);
	// lfs f14,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	f14.f64 = double(temp.f32);
	// lfs f30,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	f30.f64 = double(temp.f32);
	// lfs f29,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	f29.f64 = double(temp.f32);
	// lfs f28,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	f28.f64 = double(temp.f32);
	// lfs f27,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	f27.f64 = double(temp.f32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// lfs f26,40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	f26.f64 = double(temp.f32);
	// lfs f25,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	f25.f64 = double(temp.f32);
	// lfs f24,48(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 48);
	f24.f64 = double(temp.f32);
	// lfs f23,52(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 52);
	f23.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f22,272(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfs f21,276(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f20,280(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f19,208(r1)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f18,212(r1)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f17,216(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f16,192(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f15,196(r1)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f14,200(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// beq cr6,0x82310084
	if (cr6.eq) goto loc_82310084;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v13,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp v12,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stfiwx f0,0,r11
	ctx.fpscr.disableFlushModeUnconditional();
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// rlwimi r10,r9,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lfs f0,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f12,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// lfs f22,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	f22.f64 = double(temp.f32);
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lfs f21,256(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	f21.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lfs f20,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	f20.f64 = double(temp.f32);
	// lfs f19,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	f19.f64 = double(temp.f32);
	// stfs f22,0(r11)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfiwx f0,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f21,0(r11)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f20,0(r11)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f19,0(r11)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stfiwx f0,0,r7
	REX_STORE_U32(ctx.r7.u32, ctx.f0.u32);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// rlwimi r9,r8,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// lfs f11,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f26,0(r11)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f25,0(r11)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f24,0(r11)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f23,0(r11)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// rlwimi r10,r9,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f30,0(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f29,0(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f28,0(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f27,0(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x8231024c
	goto loc_8231024C;
loc_82310084:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stfiwx f0,0,r11
	ctx.fpscr.disableFlushMode();
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lfs f0,156(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f22,0(r11)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f21,0(r11)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f20,0(r11)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// rlwimi r10,r8,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// stfiwx f0,0,r7
	REX_STORE_U32(ctx.r7.u32, ctx.f0.u32);
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r8,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f19,0(r11)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f18,0(r11)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f17,0(r11)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f30,0(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f29,0(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f28,0(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f27,0(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwimi r8,r10,24,0,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lfs f0,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f16,0(r11)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f15,0(r11)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f14,0(r11)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f26,0(r11)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f25,0(r11)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f24,0(r11)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f23,0(r11)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_8231024C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x823102b8
	if (!cr6.eq) goto loc_823102B8;
	// lwz r3,19188(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 19188);
	// bl 0x829ccab0
	ctx.lr = 0x82310268;
	sub_829CCAB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// ble cr6,0x823102bc
	if (!cr6.gt) goto loc_823102BC;
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x8231028c
	if (cr6.lt) goto loc_8231028C;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_8231028C:
	// li r6,52
	ctx.r6.s64 = 52;
	// lwz r3,19188(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 19188);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x829cc610
	ctx.lr = 0x823102A0;
	sub_829CC610(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x823102bc
	goto loc_823102BC;
loc_823102B8:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
loc_823102BC:
	// lwz r26,0(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x8230fca4
	if (!cr6.eq) goto loc_8230FCA4;
loc_823102C8:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8299010c
	ctx.lr = 0x823102D4;
	// b 0x8298eb0c
	return;
}

DEFINE_REX_FUNC(sub_8235A518) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eabc
	ctx.lr = 0x8235A520;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x823313b0
	ctx.lr = 0x8235A54C;
	sub_823313B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r29,52(r31)
	REX_STORE_U32(r31.u32 + 52, r29.u32);
	// addi r11,r11,16508
	ctx.r11.s64 = ctx.r11.s64 + 16508;
	// stw r28,56(r31)
	REX_STORE_U32(r31.u32 + 56, r28.u32);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lvx128 v0,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// stvx128 v0,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stw r26,72(r31)
	REX_STORE_U32(r31.u32 + 72, r26.u32);
	// stw r25,64(r31)
	REX_STORE_U32(r31.u32 + 64, r25.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r11,60(r31)
	REX_STORE_U8(r31.u32 + 60, ctx.r11.u8);
	// beq cr6,0x8235a5b0
	if (cr6.eq) goto loc_8235A5B0;
	// bl 0x823e5630
	ctx.lr = 0x8235A598;
	sub_823E5630(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
loc_8235A5B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
}

DEFINE_REX_FUNC(sub_82360548) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x82360550;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82360574;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,238
	cr6.compare<int32_t>(ctx.r3.s32, 238, xer);
	// beq cr6,0x823605e4
	if (cr6.eq) goto loc_823605E4;
	// cmpwi cr6,r3,734
	cr6.compare<int32_t>(ctx.r3.s32, 734, xer);
	// bne cr6,0x82360628
	if (!cr6.eq) goto loc_82360628;
	// lwz r11,556(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 556);
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// oris r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 2097152;
	// stw r11,556(r30)
	REX_STORE_U32(r30.u32 + 556, ctx.r11.u32);
	// stw r10,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,3904(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 3904);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823605d8
	if (cr6.eq) goto loc_823605D8;
	// lbz r10,529(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 529);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823605d8
	if (cr6.eq) goto loc_823605D8;
	// lwz r11,544(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bne cr6,0x823605cc
	if (!cr6.eq) goto loc_823605CC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823605CC:
	// lwz r10,1008(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1008);
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// stw r10,1008(r11)
	REX_STORE_U32(ctx.r11.u32 + 1008, ctx.r10.u32);
loc_823605D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
loc_823605E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x823605FC;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823605d8
	if (cr6.eq) goto loc_823605D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,27
	ctx.r6.s64 = 27;
	// li r5,-4
	ctx.r5.s64 = -4;
	// lfs f1,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236ea10
	ctx.lr = 0x82360620;
	sub_8236EA10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
loc_82360628:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_82368D98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,28
	ctx.r11.s64 = 28;
	// lvx128 v0,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8236CA68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac4
	ctx.lr = 0x8236CA70;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmr f30,f3
	f30.f64 = ctx.f3.f64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// fmr f29,f4
	f29.f64 = ctx.f4.f64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// bl 0x823315d0
	ctx.lr = 0x8236CAA4;
	sub_823315D0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,18988
	ctx.r11.s64 = ctx.r11.s64 + 18988;
	// addi r10,r10,18932
	ctx.r10.s64 = ctx.r10.s64 + 18932;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwimi r9,r28,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// lvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrlwi r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	// stvx128 v0,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r29,156(r31)
	REX_STORE_U32(r31.u32 + 156, r29.u32);
	// stfs f31,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stfs f30,84(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lbz r9,263(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 263);
	// stfs f31,88(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f29,92(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stb r11,168(r31)
	REX_STORE_U8(r31.u32 + 168, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,169(r31)
	REX_STORE_U8(r31.u32 + 169, ctx.r11.u8);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// rlwinm r10,r10,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// stb r11,180(r31)
	REX_STORE_U8(r31.u32 + 180, ctx.r11.u8);
	// stb r11,181(r31)
	REX_STORE_U8(r31.u32 + 181, ctx.r11.u8);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// stb r11,192(r31)
	REX_STORE_U8(r31.u32 + 192, ctx.r11.u8);
	// stb r11,193(r31)
	REX_STORE_U8(r31.u32 + 193, ctx.r11.u8);
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// stb r11,204(r31)
	REX_STORE_U8(r31.u32 + 204, ctx.r11.u8);
	// stb r11,205(r31)
	REX_STORE_U8(r31.u32 + 205, ctx.r11.u8);
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwz r8,244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// rlwinm r11,r11,0,6,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF3FFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r8,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r8.u32);
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// bl 0x8236a300
	ctx.lr = 0x8236CB74;
	sub_8236A300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_8237CE88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,4160
	ctx.r11.s64 = ctx.r3.s64 + 4160;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82380CB8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x82380CC0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// rlwinm r11,r11,0,10,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82380d30
	if (cr6.eq) goto loc_82380D30;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82380cf8
	if (cr6.eq) goto loc_82380CF8;
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82380cfc
	if (!cr6.eq) goto loc_82380CFC;
loc_82380CF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82380CFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82380d30
	if (!cr6.eq) goto loc_82380D30;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,484(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-23720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23720);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82380d20
	if (cr6.gt) goto loc_82380D20;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82380D20:
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82433470
	ctx.lr = 0x82380D30;
	sub_82433470(ctx, base);
loc_82380D30:
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,-31152
	ctx.r3.s64 = ctx.r11.s64 + -31152;
	// bl 0x8239a588
	ctx.lr = 0x82380D40;
	sub_8239A588(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lfs f11,24748(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24748);
	ctx.f11.f64 = double(temp.f32);
	// bge cr6,0x82380d68
	if (!cr6.lt) goto loc_82380D68;
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x82380d6c
	if (cr6.gt) goto loc_82380D6C;
loc_82380D68:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82380D6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82380da8
	if (!cr6.eq) goto loc_82380DA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,4296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4296);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-28124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28124);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82380d98
	if (!cr6.gt) goto loc_82380D98;
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82380d9c
	if (cr6.lt) goto loc_82380D9C;
loc_82380D98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82380D9C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82380db8
	if (cr6.eq) goto loc_82380DB8;
loc_82380DA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f11,4252(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 4252, temp.u32);
	// lfs f0,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4296(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4296, temp.u32);
loc_82380DB8:
	// lwz r11,3956(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3956);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82380e00
	if (!cr6.gt) goto loc_82380E00;
	// li r30,0
	r30.s64 = 0;
loc_82380DCC:
	// lwz r11,3956(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3956);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// bge cr6,0x82380de4
	if (!cr6.lt) goto loc_82380DE4;
	// lwz r11,3952(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3952);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// b 0x82380de8
	goto loc_82380DE8;
loc_82380DE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82380DE8:
	// bl 0x824a14f8
	ctx.lr = 0x82380DEC;
	sub_824A14F8(ctx, base);
	// lwz r11,3956(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3956);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,368
	r30.s64 = r30.s64 + 368;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x82380dcc
	if (cr6.lt) goto loc_82380DCC;
loc_82380E00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_8238EE60) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eaa4
	ctx.lr = 0x8238EE68;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lis r31,-32059
	r31.s64 = -2101018624;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,29996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29996);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r11,7252(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 7252);
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsubs f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// fadds f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// lfs f13,8400(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8400);
	ctx.f13.f64 = double(temp.f32);
	// fadds f8,f12,f1
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// fmadds f12,f11,f0,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f11,f10,f0,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f10,f9,f0,f13
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f9,f8,f0,f13
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f0,-6788(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6788);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfs f13,-6792(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6792);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsel f8,f12,f0,f13
	ctx.f8.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f7,f11,f0,f13
	ctx.f7.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f6,f10,f0,f13
	ctx.f6.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f0,f9,f0,f13
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsubs f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fsubs f4,f10,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fsubs f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fadds f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fadds f8,f5,f7
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f7,f4,f6
	ctx.f7.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fadds f6,f3,f0
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// lfs f0,2592(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2592);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsubs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsubs f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsel f13,f12,f13,f5
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fsel f12,f11,f8,f4
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f8.f64 : ctx.f4.f64;
	// fsel f11,f10,f7,f3
	ctx.f11.f64 = ctx.f10.f64 >= 0.0 ? ctx.f7.f64 : ctx.f3.f64;
	// fsel f0,f9,f6,f0
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f6.f64 : ctx.f0.f64;
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r9
	REX_STORE_U32(ctx.r9.u32, ctx.f13.u32);
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f13,0,r8
	REX_STORE_U32(ctx.r8.u32, ctx.f13.u32);
	// fctiwz f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfiwx f13,0,r7
	REX_STORE_U32(ctx.r7.u32, ctx.f13.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r6
	REX_STORE_U32(ctx.r6.u32, ctx.f0.u32);
	// bge cr6,0x8238ef70
	if (!cr6.lt) goto loc_8238EF70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8238ef78
	goto loc_8238EF78;
loc_8238EF70:
	// bl 0x8227ee18
	ctx.lr = 0x8238EF74;
	sub_8227EE18(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8238EF78:
	// sth r11,7252(r31)
	REX_STORE_U16(r31.u32 + 7252, ctx.r11.u16);
	// bl 0x8219b620
	ctx.lr = 0x8238EF80;
	sub_8219B620(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r19,84(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r21,8(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r19
	cr6.compare<int32_t>(ctx.r11.s32, r19.s32, xer);
	// bgt cr6,0x8238f0bc
	if (cr6.gt) goto loc_8238F0BC;
	// lis r11,-32059
	ctx.r11.s64 = -2101018624;
	// lwz r20,88(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r22,92(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r24,-32093
	r24.s64 = -2103246848;
	// addi r25,r11,7328
	r25.s64 = ctx.r11.s64 + 7328;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// li r27,0
	r27.s64 = 0;
	// addi r30,r11,24800
	r30.s64 = ctx.r11.s64 + 24800;
loc_8238EFB8:
	// mr r26,r20
	r26.u64 = r20.u64;
	// cmpw cr6,r20,r22
	cr6.compare<int32_t>(r20.s32, r22.s32, xer);
	// bgt cr6,0x8238f0b0
	if (cr6.gt) goto loc_8238F0B0;
loc_8238EFC4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bgt cr6,0x8238efdc
	if (cr6.gt) goto loc_8238EFDC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8238efe8
	goto loc_8238EFE8;
loc_8238EFDC:
	// cmpwi cr6,r26,119
	cr6.compare<int32_t>(r26.s32, 119, xer);
	// blt cr6,0x8238efe8
	if (cr6.lt) goto loc_8238EFE8;
	// li r10,119
	ctx.r10.s64 = 119;
loc_8238EFE8:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bgt cr6,0x8238eff8
	if (cr6.gt) goto loc_8238EFF8;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// b 0x8238f004
	goto loc_8238F004;
loc_8238EFF8:
	// cmpwi cr6,r23,119
	cr6.compare<int32_t>(r23.s32, 119, xer);
	// blt cr6,0x8238f004
	if (cr6.lt) goto loc_8238F004;
	// li r11,119
	ctx.r11.s64 = 119;
loc_8238F004:
	// mulli r11,r11,120
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(120));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + r25.u64;
	// lhz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 8);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt cr6,0x8238f0a4
	if (cr6.lt) goto loc_8238F0A4;
	// lhz r10,10(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// extsh r28,r10
	r28.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(ctx.r11.s32, r28.s32, xer);
	// bgt cr6,0x8238f0a4
	if (cr6.gt) goto loc_8238F0A4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r21
	r31.u64 = ctx.r11.u64 + r21.u64;
loc_8238F048:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238F05C;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(ctx.r11.u32, 17, xer);
	// bne cr6,0x8238f094
	if (!cr6.eq) goto loc_8238F094;
	// lwz r11,8256(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8256);
	// lwz r10,3896(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 3896);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8238f0bc
	if (!cr6.lt) goto loc_8238F0BC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r30,4
	ctx.r8.s64 = r30.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// stwx r27,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r27.u32);
	// stw r11,8256(r30)
	REX_STORE_U32(r30.u32 + 8256, ctx.r11.u32);
loc_8238F094:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r28
	cr6.compare<int32_t>(r29.s32, r28.s32, xer);
	// ble cr6,0x8238f048
	if (!cr6.gt) goto loc_8238F048;
loc_8238F0A4:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r22
	cr6.compare<int32_t>(r26.s32, r22.s32, xer);
	// ble cr6,0x8238efc4
	if (!cr6.gt) goto loc_8238EFC4;
loc_8238F0B0:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmpw cr6,r23,r19
	cr6.compare<int32_t>(r23.s32, r19.s32, xer);
	// ble cr6,0x8238efb8
	if (!cr6.gt) goto loc_8238EFB8;
loc_8238F0BC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eaf4
	return;
}

DEFINE_REX_FUNC(sub_823A3078) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r11,23856
	ctx.r6.s64 = ctx.r11.s64 + 23856;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828e0a68
	ctx.lr = 0x823A30B0;
	sub_828E0A68(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f3,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f2,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// addi r6,r11,26356
	ctx.r6.s64 = ctx.r11.s64 + 26356;
	// lfs f1,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfd f3,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f3.u64);
	// stfd f2,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f2.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f1,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x828e0a68
	ctx.lr = 0x823A30EC;
	sub_828E0A68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A7748) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4344(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4344);
	// bl 0x821250b0
	ctx.lr = 0x823A7768;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a778c
	if (cr6.eq) goto loc_823A778C;
	// lbz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 24);
	// bl 0x826ddce8
	ctx.lr = 0x823A7778;
	sub_826DDCE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823A778C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ADBE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,444(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 444);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x823adc3c
	if (cr6.eq) goto loc_823ADC3C;
	// bl 0x823caea8
	ctx.lr = 0x823ADC0C;
	sub_823CAEA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823adc3c
	if (cr6.eq) goto loc_823ADC3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ADC24;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,27
	cr6.compare<int32_t>(ctx.r3.s32, 27, xer);
	// bne cr6,0x823adc3c
	if (!cr6.eq) goto loc_823ADC3C;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,444(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 444);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
loc_823ADC3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823B4840) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x823b4888
	if (!cr6.eq) goto loc_823B4888;
	// lis r11,-32005
	ctx.r11.s64 = -2097479680;
	// lwz r3,-4836(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4836);
	// bl 0x821250b0
	ctx.lr = 0x823B486C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b4880
	if (cr6.eq) goto loc_823B4880;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// bl 0x825b8658
	ctx.lr = 0x823B487C;
	sub_825B8658(ctx, base);
	// b 0x823b4884
	goto loc_823B4884;
loc_823B4880:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4884:
	// stw r3,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r3.u32);
loc_823B4888:
	// lwz r3,604(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 604);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823b48a8
	if (!cr6.eq) goto loc_823B48A8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_823B48A8:
	// bl 0x825b8fb8
	ctx.lr = 0x823B48AC;
	sub_825B8FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823B91D8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8227f600
	ctx.lr = 0x823B91F0;
	sub_8227F600(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b9300
	if (cr6.eq) goto loc_823B9300;
	// bl 0x823c6a60
	ctx.lr = 0x823B91FC;
	sub_823C6A60(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,2448(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2448);
	// lbz r10,2450(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2450);
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// subfic r10,r10,127
	xer.ca = ctx.r10.u32 <= 127;
	ctx.r10.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b9248
	if (cr6.eq) goto loc_823B9248;
	// lbz r10,2451(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 2451);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r11,r11,127
	xer.ca = ctx.r11.u32 <= 127;
	ctx.r11.u64 = static_cast<uint64_t>(127) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823b924c
	if (cr6.eq) goto loc_823B924C;
loc_823B9248:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823B924C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823b9260
	if (cr6.eq) goto loc_823B9260;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823b9304
	goto loc_823B9304;
loc_823B9260:
	// bl 0x823b7f60
	ctx.lr = 0x823B9264;
	sub_823B7F60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823b9300
	if (cr6.eq) goto loc_823B9300;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// lbz r11,6366(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 6366);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823b9300
	if (cr6.eq) goto loc_823B9300;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821eece0
	ctx.lr = 0x823B9288;
	sub_821EECE0(ctx, base);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// lbz r30,6376(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 6376);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ld r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x821ee5c8
	ctx.lr = 0x823B92A0;
	sub_821EE5C8(ctx, base);
	// neg r11,r30
	ctx.r11.s64 = static_cast<int64_t>(-r30.u64);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bge cr6,0x823b9300
	if (!cr6.lt) goto loc_823B9300;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-7564
	ctx.r11.s64 = ctx.r11.s64 + -7564;
	// subfic r31,r30,128
	xer.ca = r30.u32 <= 128;
	r31.u64 = static_cast<uint64_t>(128) - r30.u64;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,5908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5908);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// bl 0x821eece0
	ctx.lr = 0x823B92DC;
	sub_821EECE0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r7,r31,24
	ctx.r7.u64 = r31.u32 & 0xFF;
	// bl 0x8237d658
	ctx.lr = 0x823B92F0;
	sub_8237D658(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x823b9304
	if (!cr6.eq) goto loc_823B9304;
loc_823B9300:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B9304:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C8ED8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-10032
	ctx.r11.s64 = ctx.r11.s64 + -10032;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lbz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x823c8f18
	if (!cr6.eq) goto loc_823C8F18;
	// bl 0x82245b38
	ctx.lr = 0x823C8F14;
	sub_82245B38(ctx, base);
	// b 0x823c8f44
	goto loc_823C8F44;
loc_823C8F18:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822de8e0
	ctx.lr = 0x823C8F20;
	sub_822DE8E0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82245b38
	ctx.lr = 0x823C8F2C;
	sub_82245B38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c7b08
	ctx.lr = 0x823C8F38;
	sub_823C7B08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,532(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 532);
	// bl 0x822e1640
	ctx.lr = 0x823C8F44;
	sub_822E1640(ctx, base);
loc_823C8F44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CBF70) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac8
	ctx.lr = 0x823CBF78;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// rlwinm r28,r11,28,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823cc058
	if (!cr6.eq) goto loc_823CC058;
	// lbz r11,554(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 554);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// beq cr6,0x823cc058
	if (cr6.eq) goto loc_823CC058;
	// lwz r3,100(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823cbfc0
	if (cr6.eq) goto loc_823CBFC0;
	// lbz r11,14(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 14);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x823cbfc4
	if (!cr6.eq) goto loc_823CBFC4;
loc_823CBFC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823CBFC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x823cc058
	if (!cr6.eq) goto loc_823CC058;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823cbff8
	if (cr6.eq) goto loc_823CBFF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CBFEC;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823cc058
	if (cr6.eq) goto loc_823CC058;
loc_823CBFF8:
	// lis r11,-32011
	ctx.r11.s64 = -2097872896;
	// lhz r10,92(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 92);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,-6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6096);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823cc024
	if (cr6.eq) goto loc_823CC024;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823cc034
	goto loc_823CC034;
loc_823CC024:
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r8,r10
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_823CC034:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x823cc064
	if (!cr6.eq) goto loc_823CC064;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,23984
	ctx.r3.s64 = ctx.r11.s64 + 23984;
	// bl 0x82195258
	ctx.lr = 0x823CC050;
	sub_82195258(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ce960
	ctx.lr = 0x823CC058;
	sub_822CE960(ctx, base);
loc_823CC058:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_823CC064:
	// lwz r31,632(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 632);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823cc0f8
	if (cr6.eq) goto loc_823CC0F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cbce0
	ctx.lr = 0x823CC078;
	sub_823CBCE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x823cc090
	if (!cr6.eq) goto loc_823CC090;
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823cc058
	if (cr6.eq) goto loc_823CC058;
loc_823CC090:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bl 0x824b8a30
	ctx.lr = 0x823CC0A8;
	sub_824B8A30(ctx, base);
	// lhz r11,66(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 66);
	// lhz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 68);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// sth r11,66(r31)
	REX_STORE_U16(r31.u32 + 66, ctx.r11.u16);
	// beq cr6,0x823cc0cc
	if (cr6.eq) goto loc_823CC0CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f2d30
	ctx.lr = 0x823CC0CC;
	sub_823F2D30(ctx, base);
loc_823CC0CC:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x823cc138
	if (cr6.eq) goto loc_823CC138;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x823cc138
	if (cr6.eq) goto loc_823CC138;
	// b 0x823cc12c
	goto loc_823CC12C;
loc_823CC0F8:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x823cc138
	if (cr6.eq) goto loc_823CC138;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x823cc138
	if (cr6.eq) goto loc_823CC138;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
loc_823CC12C:
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_823CC138:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822cdf70
	ctx.lr = 0x823CC140;
	sub_822CDF70(ctx, base);
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,23984
	ctx.r3.s64 = ctx.r11.s64 + 23984;
	// bl 0x82195258
	ctx.lr = 0x823CC150;
	sub_82195258(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ce960
	ctx.lr = 0x823CC158;
	sub_822CE960(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823cc234
	if (cr6.eq) goto loc_823CC234;
	// lhz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 92);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x823cc228
	if (!cr6.eq) goto loc_823CC228;
	// lis r11,-32015
	ctx.r11.s64 = -2098135040;
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// srawi r9,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r11,-3324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -3324);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bne cr6,0x823cc1a8
	if (!cr6.eq) goto loc_823CC1A8;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823cc1ac
	goto loc_823CC1AC;
loc_823CC1A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823CC1AC:
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823cc200
	if (cr6.eq) goto loc_823CC200;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823cc1cc
	if (cr6.eq) goto loc_823CC1CC;
	// lbz r9,115(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 115);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823cc200
	if (!cr6.eq) goto loc_823CC200;
loc_823CC1CC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,64(r31)
	REX_STORE_U8(r31.u32 + 64, ctx.r11.u8);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// sth r11,66(r31)
	REX_STORE_U16(r31.u32 + 66, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CC1F4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_823CC200:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823cc214
	if (cr6.eq) goto loc_823CC214;
	// lbz r11,115(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 115);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823cc1cc
	if (cr6.eq) goto loc_823CC1CC;
loc_823CC214:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823cc228
	if (!cr6.eq) goto loc_823CC228;
	// lhz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 68);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// bne cr6,0x823cc1cc
	if (!cr6.eq) goto loc_823CC1CC;
loc_823CC228:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e6f8
	ctx.lr = 0x823CC234;
	sub_8227E6F8(ctx, base);
loc_823CC234:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_823E3970) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab8
	ctx.lr = 0x823E3978;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// clrlwi r25,r11,24
	r25.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823e39b0
	if (!cr6.eq) goto loc_823E39B0;
loc_823E39A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb08
	return;
loc_823E39B0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823e39dc
	if (cr6.eq) goto loc_823E39DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E39D4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823e39a4
	if (cr6.eq) goto loc_823E39A4;
loc_823E39DC:
	// lhz r11,46(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 46);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// beq cr6,0x823e39f0
	if (cr6.eq) goto loc_823E39F0;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_823E39F0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x823e3a38
	if (!cr6.eq) goto loc_823E3A38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82155268
	ctx.lr = 0x823E3A0C;
	sub_82155268(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823e3a38
	if (!cr6.eq) goto loc_823E3A38;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f7618
	ctx.lr = 0x823E3A2C;
	sub_823F7618(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb08
	return;
loc_823E3A38:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bl 0x82432d90
	ctx.lr = 0x823E3A50;
	sub_82432D90(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823e3b90
	if (cr6.eq) goto loc_823E3B90;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E3A74;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823e3bf4
	if (cr6.eq) goto loc_823E3BF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E3A90;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x823e3bf4
	if (cr6.eq) goto loc_823E3BF4;
	// lhz r10,46(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 46);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r11,r11,-10032
	ctx.r11.s64 = ctx.r11.s64 + -10032;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E3AC4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(ctx.r11.u32, 6, xer);
	// beq cr6,0x823e3bf4
	if (cr6.eq) goto loc_823E3BF4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E3AE4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,96
	ctx.r3.s64 = 96;
	// beq cr6,0x823e3b40
	if (cr6.eq) goto loc_823E3B40;
	// bl 0x8218cb30
	ctx.lr = 0x823E3AF8;
	sub_8218CB30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823e3be8
	if (cr6.eq) goto loc_823E3BE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82155188
	ctx.lr = 0x823E3B0C;
	sub_82155188(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stb r11,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// bl 0x82191c40
	ctx.lr = 0x823E3B38;
	sub_82191C40(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823e3bec
	goto loc_823E3BEC;
loc_823E3B40:
	// bl 0x8218cb30
	ctx.lr = 0x823E3B44;
	sub_8218CB30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823e3be8
	if (cr6.eq) goto loc_823E3BE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82155140
	ctx.lr = 0x823E3B58;
	sub_82155140(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82155188
	ctx.lr = 0x823E3B64;
	sub_82155188(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// bl 0x8218da98
	ctx.lr = 0x823E3B88;
	sub_8218DA98(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823e3bec
	goto loc_823E3BEC;
loc_823E3B90:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8218cb30
	ctx.lr = 0x823E3B9C;
	sub_8218CB30(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823e3be8
	if (cr6.eq) goto loc_823E3BE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82155188
	ctx.lr = 0x823E3BB0;
	sub_82155188(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82155268
	ctx.lr = 0x823E3BBC;
	sub_82155268(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// bl 0x82191d98
	ctx.lr = 0x823E3BE0;
	sub_82191D98(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823e3bec
	goto loc_823E3BEC;
loc_823E3BE8:
	// li r30,0
	r30.s64 = 0;
loc_823E3BEC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821251a0
	ctx.lr = 0x823E3BF4;
	sub_821251A0(ctx, base);
loc_823E3BF4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// bl 0x82432dc0
	ctx.lr = 0x823E3C00;
	sub_82432DC0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb08
	return;
}

DEFINE_REX_FUNC(sub_823F7390) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x823F7398;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,-31376
	r29.s64 = ctx.r11.s64 + -31376;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82221358
	ctx.lr = 0x823F73B0;
	sub_82221358(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x823f7428
	if (!cr6.eq) goto loc_823F7428;
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// addi r31,r11,-31280
	r31.s64 = ctx.r11.s64 + -31280;
	// addi r10,r31,400
	ctx.r10.s64 = r31.s64 + 400;
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823f740c
	if (cr6.eq) goto loc_823F740C;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,68(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// stw r9,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, ctx.r9.u32);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// stw r9,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r9.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r11,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// stw r31,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r31.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// b 0x823f7420
	goto loc_823F7420;
loc_823F740C:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r3,64(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// bl 0x823f6850
	ctx.lr = 0x823F7418;
	sub_823F6850(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f4218
	ctx.lr = 0x823F7420;
	sub_823F4218(ctx, base);
loc_823F7420:
	// stw r30,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r30.u32);
	// stw r3,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r3.u32);
loc_823F7428:
	// lwsync 
	std::atomic_thread_fence(std::memory_order_acq_rel);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_823FFC28) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,200
	cr6.compare<int32_t>(ctx.r11.s32, 200, xer);
	// beq cr6,0x823ffc3c
	if (cr6.eq) goto loc_823FFC3C;
	// cmpwi cr6,r11,513
	cr6.compare<int32_t>(ctx.r11.s32, 513, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_823FFC3C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82401D70) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac8
	ctx.lr = 0x82401D78;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r30,24(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82402378
	if (cr6.eq) goto loc_82402378;
	// lwz r4,16(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmpwi cr6,r4,726
	cr6.compare<int32_t>(ctx.r4.s32, 726, xer);
	// bgt cr6,0x82401ea4
	if (cr6.gt) goto loc_82401EA4;
	// beq cr6,0x824021d0
	if (cr6.eq) goto loc_824021D0;
	// cmpwi cr6,r4,427
	cr6.compare<int32_t>(ctx.r4.s32, 427, xer);
	// bgt cr6,0x82401e68
	if (cr6.gt) goto loc_82401E68;
	// beq cr6,0x82401e30
	if (cr6.eq) goto loc_82401E30;
	// cmpwi cr6,r4,200
	cr6.compare<int32_t>(ctx.r4.s32, 200, xer);
	// beq cr6,0x82401e1c
	if (cr6.eq) goto loc_82401E1C;
	// cmpwi cr6,r4,415
	cr6.compare<int32_t>(ctx.r4.s32, 415, xer);
	// bne cr6,0x824021a8
	if (!cr6.eq) goto loc_824021A8;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x822341e0
	ctx.lr = 0x82401DC8;
	sub_822341E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82402378
	if (!cr6.eq) goto loc_82402378;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x82401DE0;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82401e08
	if (cr6.eq) goto loc_82401E08;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,3000
	ctx.r5.s64 = 3000;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8243fc80
	ctx.lr = 0x82401DF8;
	sub_8243FC80(ctx, base);
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
loc_82401E08:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
loc_82401E1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
loc_82401E30:
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x82401E3C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82401e08
	if (cr6.eq) goto loc_82401E08;
	// lis r5,152
	ctx.r5.s64 = 9961472;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r5,r5,38527
	ctx.r5.u64 = ctx.r5.u64 | 38527;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8243fc80
	ctx.lr = 0x82401E58;
	sub_8243FC80(ctx, base);
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
loc_82401E68:
	// cmpwi cr6,r4,708
	cr6.compare<int32_t>(ctx.r4.s32, 708, xer);
	// bne cr6,0x824021a8
	if (!cr6.eq) goto loc_824021A8;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x82401E7C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82401e08
	if (cr6.eq) goto loc_82401E08;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,2656(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 2656);
	// bl 0x82345d08
	ctx.lr = 0x82401E94;
	sub_82345D08(ctx, base);
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
loc_82401EA4:
	// cmpwi cr6,r4,1022
	cr6.compare<int32_t>(ctx.r4.s32, 1022, xer);
	// bgt cr6,0x824021a0
	if (cr6.gt) goto loc_824021A0;
	// beq cr6,0x82402028
	if (cr6.eq) goto loc_82402028;
	// cmpwi cr6,r4,911
	cr6.compare<int32_t>(ctx.r4.s32, 911, xer);
	// beq cr6,0x82401efc
	if (cr6.eq) goto loc_82401EFC;
	// cmpwi cr6,r4,920
	cr6.compare<int32_t>(ctx.r4.s32, 920, xer);
	// bne cr6,0x824021a8
	if (!cr6.eq) goto loc_824021A8;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x82401ECC;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82401e08
	if (cr6.eq) goto loc_82401E08;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f2,8116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8116);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,8112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82334040
	ctx.lr = 0x82401EEC;
	sub_82334040(ctx, base);
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
loc_82401EFC:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lis r10,192
	ctx.r10.s64 = 12582912;
	// rlwinm r11,r11,0,6,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C00000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// addi r31,r11,-21944
	r31.s64 = ctx.r11.s64 + -21944;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bne cr6,0x82401f68
	if (!cr6.eq) goto loc_82401F68;
	// bl 0x821250b0
	ctx.lr = 0x82401F20;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82401f3c
	if (cr6.eq) goto loc_82401F3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f1,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8244b7e8
	ctx.lr = 0x82401F38;
	sub_8244B7E8(ctx, base);
	// b 0x82401f40
	goto loc_82401F40;
loc_82401F3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82401F40:
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r3,540(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 540);
	// bl 0x823b48c0
	ctx.lr = 0x82401F64;
	sub_823B48C0(ctx, base);
	// b 0x82401fb8
	goto loc_82401FB8;
loc_82401F68:
	// bl 0x821250b0
	ctx.lr = 0x82401F6C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82401fa8
	if (cr6.eq) goto loc_82401FA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r8,-10240(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -10240);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f2,-10236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10236);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r7,-10244(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -10244);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-10248(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10248);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8247bc28
	ctx.lr = 0x82401FA4;
	sub_8247BC28(ctx, base);
	// b 0x82401fac
	goto loc_82401FAC;
loc_82401FA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82401FAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// stb r11,57(r3)
	REX_STORE_U8(ctx.r3.u32 + 57, ctx.r11.u8);
loc_82401FB8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82402378
	if (!cr6.eq) goto loc_82402378;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x8235b148
	ctx.lr = 0x82401FD0;
	sub_8235B148(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82402378
	if (cr6.eq) goto loc_82402378;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x821250b0
	ctx.lr = 0x82401FE4;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82402370
	if (cr6.eq) goto loc_82402370;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x8235b348
	ctx.lr = 0x82401FF8;
	sub_8235B348(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8235cf08
	ctx.lr = 0x82402018;
	sub_8235CF08(ctx, base);
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
loc_82402028:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lis r10,192
	ctx.r10.s64 = 12582912;
	// rlwinm r11,r11,0,6,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C00000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82402378
	if (!cr6.eq) goto loc_82402378;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,568(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 568);
	// rlwinm r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82402378
	if (cr6.eq) goto loc_82402378;
	// lwz r10,2656(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2656);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82402378
	if (cr6.eq) goto loc_82402378;
	// lwz r10,3904(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 3904);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82402378
	if (cr6.eq) goto loc_82402378;
	// lwz r11,540(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 540);
	// li r4,709
	ctx.r4.s64 = 709;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// bl 0x821282b0
	ctx.lr = 0x82402078;
	sub_821282B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82402378
	if (cr6.eq) goto loc_82402378;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 + 624;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82317268
	ctx.lr = 0x8240209C;
	sub_82317268(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82402378
	if (!cr6.eq) goto loc_82402378;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,540(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 540);
	// bl 0x823b2900
	ctx.lr = 0x824020B8;
	sub_823B2900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82402378
	if (!cr6.eq) goto loc_82402378;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 + 624;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82317268
	ctx.lr = 0x824020E0;
	sub_82317268(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lfs f31,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	f31.f64 = double(temp.f32);
	// lwz r11,540(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 540);
	// lfs f0,224(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82402100
	if (!cr6.gt) goto loc_82402100;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82402100:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f0,2232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2232);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x82402118
	if (cr6.gt) goto loc_82402118;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_82402118:
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// li r11,48
	ctx.r11.s64 = 48;
	// lwz r8,32(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lvx128 v0,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82401e1c
	if (!cr6.lt) goto loc_82401E1C;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lbz r31,760(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 760);
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x8240216C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82401e08
	if (cr6.eq) goto loc_82401E08;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82442ac8
	ctx.lr = 0x82402190;
	sub_82442AC8(ctx, base);
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
loc_824021A0:
	// cmpwi cr6,r4,1900
	cr6.compare<int32_t>(ctx.r4.s32, 1900, xer);
	// beq cr6,0x824021d0
	if (cr6.eq) goto loc_824021D0;
loc_824021A8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824021C4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
loc_824021D0:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lis r10,192
	ctx.r10.s64 = 12582912;
	// rlwinm r11,r11,0,6,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C00000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82402378
	if (!cr6.eq) goto loc_82402378;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,532(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// lwz r11,284(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f31.f64 = double(temp.f32);
	// bne cr6,0x824022c0
	if (!cr6.eq) goto loc_824022C0;
	// lbz r11,529(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 529);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824022c0
	if (cr6.eq) goto loc_824022C0;
	// lwz r11,544(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// bne cr6,0x82402220
	if (!cr6.eq) goto loc_82402220;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82402220:
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x824022c0
	if (!cr6.eq) goto loc_824022C0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// bne cr6,0x8240223c
	if (!cr6.eq) goto loc_8240223C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8240223C:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x824022c0
	if (!cr6.gt) goto loc_824022C0;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823c7258
	ctx.lr = 0x82402258;
	sub_823C7258(ctx, base);
	// addi r11,r30,624
	ctx.r11.s64 = r30.s64 + 624;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x82317268
	ctx.lr = 0x82402270;
	sub_82317268(ctx, base);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// bne cr6,0x82402288
	if (!cr6.eq) goto loc_82402288;
	// li r5,30
	ctx.r5.s64 = 30;
	// b 0x824022a8
	goto loc_824022A8;
loc_82402288:
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x824022a4
	if (!cr6.eq) goto loc_824022A4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// bne cr6,0x824022a4
	if (!cr6.eq) goto loc_824022A4;
	// li r6,6000
	ctx.r6.s64 = 6000;
	// li r5,22
	ctx.r5.s64 = 22;
	// b 0x824022ac
	goto loc_824022AC;
loc_824022A4:
	// li r5,28
	ctx.r5.s64 = 28;
loc_824022A8:
	// li r6,1000
	ctx.r6.s64 = 1000;
loc_824022AC:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lis r10,-32015
	ctx.r10.s64 = -2098135040;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r10,19744
	ctx.r3.s64 = ctx.r10.s64 + 19744;
	// bl 0x823f1bc8
	ctx.lr = 0x824022C0;
	sub_823F1BC8(ctx, base);
loc_824022C0:
	// lis r31,-32017
	r31.s64 = -2098266112;
	// lwz r3,-21944(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x824022CC;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824022e4
	if (cr6.eq) goto loc_824022E4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8244b7e8
	ctx.lr = 0x824022E0;
	sub_8244B7E8(ctx, base);
	// b 0x824022e8
	goto loc_824022E8;
loc_824022E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824022E8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// lwz r3,540(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 540);
	// bl 0x823b48c0
	ctx.lr = 0x82402300;
	sub_823B48C0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82402378
	if (!cr6.eq) goto loc_82402378;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x8235b148
	ctx.lr = 0x82402318;
	sub_8235B148(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82402378
	if (cr6.eq) goto loc_82402378;
	// lwz r3,-21944(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x8240232C;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82402370
	if (cr6.eq) goto loc_82402370;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x8235b348
	ctx.lr = 0x82402340;
	sub_8235B348(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x8235cf08
	ctx.lr = 0x82402360;
	sub_8235CF08(ctx, base);
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
loc_82402370:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
loc_82402378:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_824374D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// lhz r11,482(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 482);
	// lwz r31,56(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 56);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// subfc r11,r10,r11
	xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82437524
	if (cr6.eq) goto loc_82437524;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82437524;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
loc_82437524:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824375b8
	if (cr6.eq) goto loc_824375B8;
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 10);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82437548
	if (cr6.eq) goto loc_82437548;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82433ff0
	ctx.lr = 0x82437548;
	sub_82433FF0(ctx, base);
loc_82437548:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243755C;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8243759c
	if (cr6.eq) goto loc_8243759C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82437578;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// bge cr6,0x8243759c
	if (!cr6.lt) goto loc_8243759C;
	// lhz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 8);
	// cmplwi cr6,r4,65535
	cr6.compare<uint32_t>(ctx.r4.u32, 65535, xer);
	// beq cr6,0x8243759c
	if (cr6.eq) goto loc_8243759C;
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-12932(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -12932);
	// bl 0x828e3db8
	ctx.lr = 0x8243759C;
	sub_828E3DB8(ctx, base);
loc_8243759C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f3600
	ctx.lr = 0x824375A4;
	sub_823F3600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824375b8
	if (cr6.eq) goto loc_824375B8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628680
	ctx.lr = 0x824375B8;
	sub_82628680(ctx, base);
loc_824375B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8243D8A0) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,64(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8243d8d0
	if (!cr6.eq) goto loc_8243D8D0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8243d930
	goto loc_8243D930;
loc_8243D8D0:
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,56(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f2,-11768(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11768);
	ctx.f2.f64 = double(temp.f32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x822a8388
	ctx.lr = 0x8243D904;
	sub_822A8388(ctx, base);
	// addi r4,r30,48
	ctx.r4.s64 = r30.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822a4130
	ctx.lr = 0x8243D910;
	sub_822A4130(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822a4130
	ctx.lr = 0x8243D924;
	sub_822A4130(ctx, base);
	// subf r11,r31,r3
	ctx.r11.u64 = ctx.r3.u64 - r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8243D930:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82441FD0) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17452
	ctx.r11.s64 = ctx.r11.s64 + -17452;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82442004
	if (cr6.eq) goto loc_82442004;
	// bl 0x8218be78
	ctx.lr = 0x82442000;
	sub_8218BE78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82442004:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824441E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82444230
	if (cr6.eq) goto loc_82444230;
	// bl 0x82442b80
	ctx.lr = 0x8244420C;
	sub_82442B80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82444230
	if (!cr6.eq) goto loc_82444230;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82444230:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82444274
	if (cr6.eq) goto loc_82444274;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82444250;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1049
	cr6.compare<int32_t>(ctx.r3.s32, 1049, xer);
	// bne cr6,0x82444274
	if (!cr6.eq) goto loc_82444274;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,32(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82444274:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8244B3F0) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-9316(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -9316);
	// bl 0x821250b0
	ctx.lr = 0x8244B410;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8244b434
	if (cr6.eq) goto loc_8244B434;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8244b380
	ctx.lr = 0x8244B420;
	sub_8244B380(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8244B434:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8244D8D0) {
	REX_FUNC_PROLOGUE();
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8244DB50) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r11,24
	r31.s64 = ctx.r11.s64 + 24;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8244db84
	if (cr6.eq) goto loc_8244DB84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823e5680
	ctx.lr = 0x8244DB84;
	sub_823E5680(ctx, base);
loc_8244DB84:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// beq cr6,0x8244db9c
	if (cr6.eq) goto loc_8244DB9C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e5630
	ctx.lr = 0x8244DB9C;
	sub_823E5630(ctx, base);
loc_8244DB9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82450570) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x82450578;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lfs f0,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x824505b4
	if (!cr6.gt) goto loc_824505B4;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,-7564
	ctx.r11.s64 = ctx.r11.s64 + -7564;
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// b 0x824505d4
	goto loc_824505D4;
loc_824505B4:
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x824505d4
	if (!cr6.gt) goto loc_824505D4;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// addi r11,r11,-7564
	ctx.r11.s64 = ctx.r11.s64 + -7564;
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
loc_824505D4:
	// lfs f0,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x824505e8
	if (!cr6.gt) goto loc_824505E8;
	// li r30,1
	r30.s64 = 1;
loc_824505E8:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f13,f12,f12,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// lfs f0,8624(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8624);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x824506e8
	if (cr6.lt) goto loc_824506E8;
	// lwz r11,540(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 540);
	// lbz r11,712(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 712);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,75
	cr6.compare<int32_t>(ctx.r11.s32, 75, xer);
	// bgt cr6,0x824506dc
	if (cr6.gt) goto loc_824506DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f2,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82126d10
	ctx.lr = 0x82450650;
	sub_82126D10(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-15964(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -15964);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82450688
	if (cr6.gt) goto loc_82450688;
	// lfs f0,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82450688
	if (cr6.gt) goto loc_82450688;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8904(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8904);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// lfs f13,5180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// b 0x824506e8
	goto loc_824506E8;
loc_82450688:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824506ec
	if (cr6.eq) goto loc_824506EC;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 32);
	// lfs f0,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f13,f12,f12,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// lfs f0,-6580(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6580);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x824506ec
	if (!cr6.lt) goto loc_824506EC;
loc_824506DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
loc_824506E8:
	// li r30,1
	r30.s64 = 1;
loc_824506EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1050
	ctx.r4.s64 = 1050;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82450704;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82450724
	if (cr6.eq) goto loc_82450724;
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,15
	ctx.r11.s64 = 15;
	// bne cr6,0x82450720
	if (!cr6.eq) goto loc_82450720;
	// li r11,12
	ctx.r11.s64 = 12;
loc_82450720:
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_82450724:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_8246DB60) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,144
	ctx.r10.s64 = ctx.r3.s64 + 144;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
loc_8246DB88:
	// stw r11,-44(r10)
	REX_STORE_U32(ctx.r10.u32 + -44, ctx.r11.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r11,-40(r10)
	REX_STORE_U32(ctx.r10.u32 + -40, ctx.r11.u32);
	// stw r11,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r11.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,176
	ctx.r10.s64 = ctx.r10.s64 + 176;
	// bge cr6,0x8246db88
	if (!cr6.lt) goto loc_8246DB88;
	// addi r9,r3,2080
	ctx.r9.s64 = ctx.r3.s64 + 2080;
	// addi r10,r3,2272
	ctx.r10.s64 = ctx.r3.s64 + 2272;
	// li r8,10
	ctx.r8.s64 = 10;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// stw r11,32(r9)
	REX_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// stw r11,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// stw r11,64(r9)
	REX_STORE_U32(ctx.r9.u32 + 64, ctx.r11.u32);
	// stw r11,68(r9)
	REX_STORE_U32(ctx.r9.u32 + 68, ctx.r11.u32);
	// stw r11,72(r9)
	REX_STORE_U32(ctx.r9.u32 + 72, ctx.r11.u32);
	// stw r11,76(r9)
	REX_STORE_U32(ctx.r9.u32 + 76, ctx.r11.u32);
loc_8246DBD8:
	// stw r11,-44(r10)
	REX_STORE_U32(ctx.r10.u32 + -44, ctx.r11.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r11,-40(r10)
	REX_STORE_U32(ctx.r10.u32 + -40, ctx.r11.u32);
	// stw r11,-12(r10)
	REX_STORE_U32(ctx.r10.u32 + -12, ctx.r11.u32);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,-8(r10)
	REX_STORE_U32(ctx.r10.u32 + -8, ctx.r11.u32);
	// stw r11,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// bge cr6,0x8246dbd8
	if (!cr6.lt) goto loc_8246DBD8;
	// addi r10,r3,4736
	ctx.r10.s64 = ctx.r3.s64 + 4736;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// stw r11,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
	// stw r11,68(r10)
	REX_STORE_U32(ctx.r10.u32 + 68, ctx.r11.u32);
	// stw r11,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// stw r11,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// stw r11,5024(r3)
	REX_STORE_U32(ctx.r3.u32 + 5024, ctx.r11.u32);
	// stw r11,5028(r3)
	REX_STORE_U32(ctx.r3.u32 + 5028, ctx.r11.u32);
	// stw r11,5032(r3)
	REX_STORE_U32(ctx.r3.u32 + 5032, ctx.r11.u32);
	// stw r11,5036(r3)
	REX_STORE_U32(ctx.r3.u32 + 5036, ctx.r11.u32);
	// stw r11,5040(r3)
	REX_STORE_U32(ctx.r3.u32 + 5040, ctx.r11.u32);
	// stw r11,5044(r3)
	REX_STORE_U32(ctx.r3.u32 + 5044, ctx.r11.u32);
	// sth r11,5048(r3)
	REX_STORE_U16(ctx.r3.u32 + 5048, ctx.r11.u16);
	// stb r11,5050(r3)
	REX_STORE_U8(ctx.r3.u32 + 5050, ctx.r11.u8);
	// stb r11,5051(r3)
	REX_STORE_U8(ctx.r3.u32 + 5051, ctx.r11.u8);
	// stw r11,5052(r3)
	REX_STORE_U32(ctx.r3.u32 + 5052, ctx.r11.u32);
	// stw r11,5056(r3)
	REX_STORE_U32(ctx.r3.u32 + 5056, ctx.r11.u32);
	// sth r11,5060(r3)
	REX_STORE_U16(ctx.r3.u32 + 5060, ctx.r11.u16);
	// stb r11,5062(r3)
	REX_STORE_U8(ctx.r3.u32 + 5062, ctx.r11.u8);
	// stb r11,5063(r3)
	REX_STORE_U8(ctx.r3.u32 + 5063, ctx.r11.u8);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r9,5188(r3)
	REX_STORE_U32(ctx.r3.u32 + 5188, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247BBB8) {
	REX_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-12(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,-8(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f0,8916(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8916);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8247bc04
	if (cr6.gt) goto loc_8247BC04;
	// lfs f0,84(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x8247bc18
	if (cr6.eq) goto loc_8247BC18;
loc_8247BC04:
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// stfs f1,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
loc_8247BC18:
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// rlwimi r11,r6,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8247FE50) {
	REX_FUNC_PROLOGUE();
	// b 0x8247f1a8
	sub_8247F1A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8247FFA8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82126b90
	ctx.lr = 0x8247FFC4;
	sub_82126B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x82480004
	if (!cr6.eq) goto loc_82480004;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,540(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 540);
	// lfs f0,9004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9004);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,648(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 648, temp.u32);
	// lwz r11,568(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 568);
	// lwz r10,280(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 280);
	// rlwinm r11,r11,0,16,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r11.u32);
	// bne cr6,0x82480004
	if (!cr6.eq) goto loc_82480004;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r11.u32);
loc_82480004:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82484288) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac4
	ctx.lr = 0x82484290;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,2468(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 2468);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,540(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 540);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82484320
	if (cr6.eq) goto loc_82484320;
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82484320
	if (!cr6.gt) goto loc_82484320;
	// addi r27,r11,132
	r27.s64 = ctx.r11.s64 + 132;
	// addi r30,r28,12
	r30.s64 = r28.s64 + 12;
loc_824842C0:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824842D4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82483c78
	ctx.lr = 0x824842EC;
	sub_82483C78(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8248430c
	if (cr6.eq) goto loc_8248430C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8248430C;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
loc_8248430C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x824842c0
	if (cr6.lt) goto loc_824842C0;
loc_82484320:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_82487560) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r30,-32056
	r30.s64 = -2100822016;
	// lwz r11,364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 364);
	// addi r10,r11,1000
	ctx.r10.s64 = ctx.r11.s64 + 1000;
	// lwz r11,-7564(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -7564);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82487628
	if (!cr6.gt) goto loc_82487628;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,288(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r11,-7892
	ctx.r4.s64 = ctx.r11.s64 + -7892;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,-8128(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8128);
	ctx.f0.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,149(r1)
	REX_STORE_U8(ctx.r1.u32 + 149, ctx.r11.u8);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r11,150(r1)
	REX_STORE_U8(ctx.r1.u32 + 150, ctx.r11.u8);
	// addi r11,r10,1712
	ctx.r11.s64 = ctx.r10.s64 + 1712;
	// stb r9,148(r1)
	REX_STORE_U8(ctx.r1.u32 + 148, ctx.r9.u8);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82894918
	ctx.lr = 0x82487620;
	sub_82894918(ctx, base);
	// lwz r11,-7564(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -7564);
	// stw r11,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r11.u32);
loc_82487628:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8248F180) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// beq cr6,0x8248f1d4
	if (cr6.eq) goto loc_8248F1D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,484(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9928(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9928);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8248f1c0
	if (cr6.lt) goto loc_8248F1C0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8248F1C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8248f1d4
	if (!cr6.eq) goto loc_8248F1D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8248f234
	goto loc_8248F234;
loc_8248F1D4:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8248f230
	if (cr6.eq) goto loc_8248F230;
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// bne cr6,0x8248f1f4
	if (!cr6.eq) goto loc_8248F1F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-28124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28124);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8248f1fc
	goto loc_8248F1FC;
loc_8248F1F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-26036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -26036);
	ctx.f1.f64 = double(temp.f32);
loc_8248F1FC:
	// bl 0x8241b830
	ctx.lr = 0x8248F200;
	sub_8241B830(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 16384;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8248f230
	if (cr6.eq) goto loc_8248F230;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x823824a8
	ctx.lr = 0x8248F230;
	sub_823824A8(ctx, base);
loc_8248F230:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8248F234:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82498210) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lbz r11,-8176(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -8176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82498268
	if (!cr6.eq) goto loc_82498268;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-12560
	ctx.r9.s64 = ctx.r11.s64 + -12560;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82498244:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8249827c
	if (cr6.eq) goto loc_8249827C;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// addi r8,r9,3200
	ctx.r8.s64 = ctx.r9.s64 + 3200;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82498244
	if (cr6.lt) goto loc_82498244;
loc_82498268:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8249827C:
	// mulli r11,r10,100
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(100));
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// bl 0x8229ec80
	ctx.lr = 0x8249828C;
	sub_8229EC80(ctx, base);
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// lwz r10,-8132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8132);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// stw r10,-8132(r11)
	REX_STORE_U32(ctx.r11.u32 + -8132, ctx.r10.u32);
	// blt cr6,0x824982ac
	if (cr6.lt) goto loc_824982AC;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r10,-8132(r11)
	REX_STORE_U32(ctx.r11.u32 + -8132, ctx.r10.u32);
loc_824982AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8249E238) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,16296
	r31.s64 = ctx.r11.s64 + 16296;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bl 0x82852d58
	ctx.lr = 0x8249E264;
	sub_82852D58(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// bl 0x82852d58
	ctx.lr = 0x8249E278;
	sub_82852D58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// bl 0x82852d58
	ctx.lr = 0x8249E28C;
	sub_82852D58(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,17
	ctx.r3.s64 = 17;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// bl 0x82852d58
	ctx.lr = 0x8249E2A0;
	sub_82852D58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,18
	ctx.r3.s64 = 18;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// bl 0x82852d58
	ctx.lr = 0x8249E2B4;
	sub_82852D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82852d58
	ctx.lr = 0x8249E2C0;
	sub_82852D58(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82852d58
	ctx.lr = 0x8249E2CC;
	sub_82852D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82852d58
	ctx.lr = 0x8249E2D8;
	sub_82852D58(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82852d58
	ctx.lr = 0x8249E2E4;
	sub_82852D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x82852d58
	ctx.lr = 0x8249E2F0;
	sub_82852D58(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82852d58
	ctx.lr = 0x8249E2FC;
	sub_82852D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82852d58
	ctx.lr = 0x8249E308;
	sub_82852D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82852d58
	ctx.lr = 0x8249E314;
	sub_82852D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82852d58
	ctx.lr = 0x8249E320;
	sub_82852D58(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824A7758) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac0
	ctx.lr = 0x824A7760;
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v126,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-31983
	ctx.r8.s64 = -2096037888;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// addi r11,r11,-8432
	ctx.r11.s64 = ctx.r11.s64 + -8432;
	// vor128 v126,v2,v2
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// addi r8,r8,-8464
	ctx.r8.s64 = ctx.r8.s64 + -8464;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r30,-32014
	r30.s64 = -2098069504;
	// lvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r8,48
	ctx.r8.s64 = 48;
	// lis r29,-32014
	r29.s64 = -2098069504;
	// lvx128 v11,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stvx128 v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,32
	ctx.r6.s64 = 32;
	// vand v11,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lwz r10,-2500(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + -2500);
	// lvx128 v12,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// vand v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lwz r11,-2496(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -2496);
	// mulli r9,r10,112
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// lvx128 v10,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand v0,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x824a7824
	if (cr6.eq) goto loc_824A7824;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-820
	ctx.r11.s64 = ctx.r11.s64 + -820;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,-2496(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -2496);
	// lwz r10,-2500(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + -2500);
loc_824A7824:
	// mulli r10,r10,112
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(112));
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A7844;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A7864;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A7884;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// lwz r9,-2500(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + -2500);
	// addi r11,r11,-2492
	ctx.r11.s64 = ctx.r11.s64 + -2492;
	// mulli r8,r9,112
	ctx.r8.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(112));
	// lwz r9,-2496(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + -2496);
	// lhz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// sth r9,4(r11)
	REX_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// stwx r7,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r11,-2500(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -2500);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-2500(r30)
	REX_STORE_U32(r30.u32 + -2500, ctx.r11.u32);
	// bne cr6,0x824a78e0
	if (!cr6.eq) goto loc_824A78E0;
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// stw r28,-2512(r10)
	REX_STORE_U32(ctx.r10.u32 + -2512, r28.u32);
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// stw r27,-2508(r10)
	REX_STORE_U32(ctx.r10.u32 + -2508, r27.u32);
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// stw r26,-2504(r10)
	REX_STORE_U32(ctx.r10.u32 + -2504, r26.u32);
loc_824A78E0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v126,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8298eb10
	return;
}

DEFINE_REX_FUNC(sub_824B41E0) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32015
	ctx.r11.s64 = -2098135040;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// srawi r9,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r11,-13768(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -13768);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 12);
	// lbz r9,584(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 584);
	// rlwimi r9,r10,7,0,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r9.u64 & 0xFFFFFFFF0000007F);
	// stb r9,584(r11)
	REX_STORE_U8(ctx.r11.u32 + 584, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B5BD0) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac8
	ctx.lr = 0x824B5BD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,11840
	ctx.r11.s64 = ctx.r11.s64 + 11840;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82262cf0
	ctx.lr = 0x824B5BF0;
	sub_82262CF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824b5cac
	if (cr6.eq) goto loc_824B5CAC;
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// addi r29,r11,26488
	r29.s64 = ctx.r11.s64 + 26488;
	// lbz r11,1329(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 1329);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824b5c20
	if (!cr6.eq) goto loc_824B5C20;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824b0138
	ctx.lr = 0x824B5C20;
	sub_824B0138(ctx, base);
loc_824B5C20:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824b2f30
	ctx.lr = 0x824B5C30;
	sub_824B2F30(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cb680
	ctx.lr = 0x824B5C40;
	sub_823CB680(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,316(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 316);
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// stb r11,316(r30)
	REX_STORE_U8(r30.u32 + 316, ctx.r11.u8);
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x824b5ca0
	if (!cr6.eq) goto loc_824B5CA0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,276(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 276);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82263028
	ctx.lr = 0x824B5C70;
	sub_82263028(ctx, base);
	// addi r4,r28,16
	ctx.r4.s64 = r28.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826220b0
	ctx.lr = 0x824B5C7C;
	sub_826220B0(ctx, base);
	// lbz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 316);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,316(r31)
	REX_STORE_U8(r31.u32 + 316, ctx.r11.u8);
	// bl 0x824b0ec0
	ctx.lr = 0x824B5C98;
	sub_824B0EC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_824B5CA0:
	// addi r4,r28,16
	ctx.r4.s64 = r28.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826220b0
	ctx.lr = 0x824B5CAC;
	sub_826220B0(ctx, base);
loc_824B5CAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_824C0998) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,196(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824c0a04
	if (cr6.eq) goto loc_824C0A04;
	// lis r11,-32011
	ctx.r11.s64 = -2097872896;
	// lwz r11,-18164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -18164);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r8,r8,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r8.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r10,r8,r7
	ctx.r10.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// stbx r8,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x824c09f0
	if (!cr6.lt) goto loc_824C09F0;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_824C09F0:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,196(r3)
	REX_STORE_U32(ctx.r3.u32 + 196, ctx.r9.u32);
loc_824C0A04:
	// b 0x8231be00
	sub_8231BE00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824C67E0) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac4
	ctx.lr = 0x824C67E8;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6688(r1)
	ea = -6688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32011
	ctx.r11.s64 = -2097872896;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r31,-32011
	r31.s64 = -2097872896;
	// lbz r11,-11786(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -11786);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824c682c
	if (!cr6.eq) goto loc_824C682C;
	// bl 0x8298ee80
	ctx.lr = 0x824C6810;
	sub_8298EE80(ctx, base);
	// cmpwi cr6,r3,16383
	cr6.compare<int32_t>(ctx.r3.s32, 16383, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824c6820
	if (cr6.lt) goto loc_824C6820;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824C6820:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824c683c
	if (cr6.eq) goto loc_824C683C;
loc_824C682C:
	// lbz r11,-11787(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + -11787);
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824c6840
	if (cr6.eq) goto loc_824C6840;
loc_824C683C:
	// li r30,0
	r30.s64 = 0;
loc_824C6840:
	// lis r11,-32011
	ctx.r11.s64 = -2097872896;
	// lbz r11,-11788(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -11788);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824c6870
	if (!cr6.eq) goto loc_824C6870;
	// bl 0x8298ee80
	ctx.lr = 0x824C6854;
	sub_8298EE80(ctx, base);
	// cmpwi cr6,r3,16383
	cr6.compare<int32_t>(ctx.r3.s32, 16383, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824c6864
	if (cr6.lt) goto loc_824C6864;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824C6864:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824c6880
	if (cr6.eq) goto loc_824C6880;
loc_824C6870:
	// lbz r11,-11787(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + -11787);
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824c6884
	if (cr6.eq) goto loc_824C6884;
loc_824C6880:
	// li r27,0
	r27.s64 = 0;
loc_824C6884:
	// bl 0x8298ee80
	ctx.lr = 0x824C6888;
	sub_8298EE80(ctx, base);
	// cmpwi cr6,r3,16383
	cr6.compare<int32_t>(ctx.r3.s32, 16383, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x824c6898
	if (cr6.lt) goto loc_824C6898;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824C6898:
	// stb r11,72(r28)
	REX_STORE_U8(r28.u32 + 72, ctx.r11.u8);
	// lis r11,-32011
	ctx.r11.s64 = -2097872896;
	// addi r31,r11,-9136
	r31.s64 = ctx.r11.s64 + -9136;
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r3,108(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 108);
	// bl 0x821233f0
	ctx.lr = 0x824C68B0;
	sub_821233F0(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// stw r3,68(r28)
	REX_STORE_U32(r28.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824c6a3c
	if (cr6.eq) goto loc_824C6A3C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828093f0
	ctx.lr = 0x824C68C8;
	sub_828093F0(ctx, base);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// bl 0x828093f0
	ctx.lr = 0x824C68D0;
	sub_828093F0(ctx, base);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,28376
	r30.s64 = ctx.r11.s64 + 28376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x828095a0
	ctx.lr = 0x824C68E8;
	sub_828095A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// bl 0x828095a0
	ctx.lr = 0x824C68F8;
	sub_828095A0(ctx, base);
	// bl 0x8298ee80
	ctx.lr = 0x824C68FC;
	sub_8298EE80(ctx, base);
	// cmpwi cr6,r3,16383
	cr6.compare<int32_t>(ctx.r3.s32, 16383, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// blt cr6,0x824c690c
	if (cr6.lt) goto loc_824C690C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_824C690C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,276(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 276);
	// bl 0x828095a0
	ctx.lr = 0x824C6918;
	sub_828095A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,280(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 280);
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6928;
	sub_828094E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,284(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 284);
	// bl 0x828095a0
	ctx.lr = 0x824C6938;
	sub_828095A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,288(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 288);
	// bl 0x828095a0
	ctx.lr = 0x824C6948;
	sub_828095A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,292(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 292);
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6958;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,296(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 296);
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6968;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,300(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 300);
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6978;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,304(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 304);
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6988;
	sub_828094E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,308(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 308);
	// bl 0x828095a0
	ctx.lr = 0x824C6998;
	sub_828095A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// lwz r4,140(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 140);
	// addi r5,r11,8896
	ctx.r5.s64 = ctx.r11.s64 + 8896;
	// bl 0x82809658
	ctx.lr = 0x824C69AC;
	sub_82809658(ctx, base);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// lwz r4,144(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 144);
	// lfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C69BC;
	sub_828094E8(ctx, base);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// lwz r4,148(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 148);
	// lfs f1,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C69CC;
	sub_828094E8(ctx, base);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// lwz r4,152(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 152);
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C69DC;
	sub_828094E8(ctx, base);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// lwz r4,156(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 156);
	// lfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C69EC;
	sub_828094E8(ctx, base);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// lwz r4,160(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 160);
	// lfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C69FC;
	sub_828094E8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,268(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 268);
	// lwz r3,1764(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 1764);
	// bl 0x82809880
	ctx.lr = 0x824C6A0C;
	sub_82809880(ctx, base);
	// addi r5,r1,3360
	ctx.r5.s64 = ctx.r1.s64 + 3360;
	// lwz r4,132(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 132);
	// lwz r3,1764(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 1764);
	// bl 0x82809880
	ctx.lr = 0x824C6A1C;
	sub_82809880(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// stw r11,64(r28)
	REX_STORE_U32(r28.u32 + 64, ctx.r11.u32);
	// bl 0x828091d0
	ctx.lr = 0x824C6A2C;
	sub_828091D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828091d0
	ctx.lr = 0x824C6A34;
	sub_828091D0(ctx, base);
	// addi r1,r1,6688
	ctx.r1.s64 = ctx.r1.s64 + 6688;
	// b 0x8298eb14
	return;
loc_824C6A3C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824c6b94
	if (cr6.eq) goto loc_824C6B94;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828093f0
	ctx.lr = 0x824C6A50;
	sub_828093F0(ctx, base);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,28376
	r30.s64 = ctx.r11.s64 + 28376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x828095a0
	ctx.lr = 0x824C6A68;
	sub_828095A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,172(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 172);
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6A78;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,176(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 176);
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6A88;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,180(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 180);
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6A98;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,184(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 184);
	// lfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6AA8;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,188(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 188);
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6AB8;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,192(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 192);
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6AC8;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,196(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 196);
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6AD8;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,200(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 200);
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6AE8;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,204(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6AF8;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,208(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6B08;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,212(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 212);
	// lfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6B18;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,216(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 216);
	// lfs f1,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6B28;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,220(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 220);
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6B38;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,224(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lfs f1,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6B48;
	sub_828094E8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,228(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 228);
	// addi r5,r11,8896
	ctx.r5.s64 = ctx.r11.s64 + 8896;
	// bl 0x82809658
	ctx.lr = 0x824C6B5C;
	sub_82809658(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,232(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 232);
	// bl 0x828095a0
	ctx.lr = 0x824C6B6C;
	sub_828095A0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,164(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 164);
	// lwz r3,1764(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 1764);
	// bl 0x82809880
	ctx.lr = 0x824C6B7C;
	sub_82809880(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,64(r28)
	REX_STORE_U32(r28.u32 + 64, ctx.r11.u32);
	// bl 0x828091d0
	ctx.lr = 0x824C6B8C;
	sub_828091D0(ctx, base);
	// addi r1,r1,6688
	ctx.r1.s64 = ctx.r1.s64 + 6688;
	// b 0x8298eb14
	return;
loc_824C6B94:
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// bl 0x828093f0
	ctx.lr = 0x824C6B9C;
	sub_828093F0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828093f0
	ctx.lr = 0x824C6BA4;
	sub_828093F0(ctx, base);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,28376
	r30.s64 = ctx.r11.s64 + 28376;
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x828095a0
	ctx.lr = 0x824C6BBC;
	sub_828095A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828095a0
	ctx.lr = 0x824C6BCC;
	sub_828095A0(ctx, base);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// lwz r4,244(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 244);
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6BDC;
	sub_828094E8(ctx, base);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// lwz r4,248(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 248);
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6BEC;
	sub_828094E8(ctx, base);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// lwz r4,252(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 252);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6BFC;
	sub_828094E8(ctx, base);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// lwz r4,256(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 256);
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6C0C;
	sub_828094E8(ctx, base);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6C1C;
	sub_828094E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// lwz r4,264(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 264);
	// bl 0x828095a0
	ctx.lr = 0x824C6C2C;
	sub_828095A0(ctx, base);
	// bl 0x8298ee80
	ctx.lr = 0x824C6C30;
	sub_8298EE80(ctx, base);
	// cmpwi cr6,r3,16383
	cr6.compare<int32_t>(ctx.r3.s32, 16383, xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// blt cr6,0x824c6c40
	if (cr6.lt) goto loc_824C6C40;
	// li r5,0
	ctx.r5.s64 = 0;
loc_824C6C40:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,276(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 276);
	// bl 0x828095a0
	ctx.lr = 0x824C6C4C;
	sub_828095A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,280(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 280);
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6C5C;
	sub_828094E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,284(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 284);
	// bl 0x828095a0
	ctx.lr = 0x824C6C6C;
	sub_828095A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,288(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 288);
	// bl 0x828095a0
	ctx.lr = 0x824C6C7C;
	sub_828095A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,292(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 292);
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6C8C;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,296(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 296);
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6C9C;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,300(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 300);
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6CAC;
	sub_828094E8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,304(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 304);
	// lfs f1,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828094e8
	ctx.lr = 0x824C6CBC;
	sub_828094E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,308(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 308);
	// bl 0x828095a0
	ctx.lr = 0x824C6CCC;
	sub_828095A0(ctx, base);
	// addi r5,r1,3360
	ctx.r5.s64 = ctx.r1.s64 + 3360;
	// lwz r4,236(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 236);
	// lwz r3,1764(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 1764);
	// bl 0x82809880
	ctx.lr = 0x824C6CDC;
	sub_82809880(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,268(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 268);
	// lwz r3,1764(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 1764);
	// bl 0x82809880
	ctx.lr = 0x824C6CEC;
	sub_82809880(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,64(r28)
	REX_STORE_U32(r28.u32 + 64, ctx.r11.u32);
	// bl 0x828091d0
	ctx.lr = 0x824C6CFC;
	sub_828091D0(ctx, base);
	// addi r3,r1,3360
	ctx.r3.s64 = ctx.r1.s64 + 3360;
	// bl 0x828091d0
	ctx.lr = 0x824C6D04;
	sub_828091D0(ctx, base);
	// addi r1,r1,6688
	ctx.r1.s64 = ctx.r1.s64 + 6688;
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_824F30C0) {
	REX_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f0,1168(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,1076(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1076);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,1080(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1080);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fsubs f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f12,1072(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1072);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f10,f0
	cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x824f3110
	if (cr6.lt) goto loc_824F3110;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F3110:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82614768) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// lwz r11,-17040(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -17040);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r10,-32066
	ctx.r10.s64 = -2101477376;
	// addi r10,r10,12896
	ctx.r10.s64 = ctx.r10.s64 + 12896;
	// lhz r9,56(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 56);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,52(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,2344(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82616D68) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31998
	ctx.r11.s64 = -2097020928;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,19584
	r30.s64 = ctx.r11.s64 + 19584;
loc_82616D88:
	// li r3,432
	ctx.r3.s64 = 432;
	// bl 0x8218be28
	ctx.lr = 0x82616D90;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82616da4
	if (cr6.eq) goto loc_82616DA4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826163b0
	ctx.lr = 0x82616DA0;
	sub_826163B0(ctx, base);
	// b 0x82616da8
	goto loc_82616DA8;
loc_82616DA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82616DA8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(r31.u32, 3, xer);
	// blt cr6,0x82616d88
	if (cr6.lt) goto loc_82616D88;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82619760) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f0,320(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 320, temp.u32);
	// stb r10,352(r3)
	REX_STORE_U8(ctx.r3.u32 + 352, ctx.r10.u8);
	// stfs f0,324(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 324, temp.u32);
	// stfs f0,328(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 328, temp.u32);
	// stfs f0,336(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 336, temp.u32);
	// stfs f0,340(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 340, temp.u32);
	// stb r11,397(r3)
	REX_STORE_U8(ctx.r3.u32 + 397, ctx.r11.u8);
	// stfs f0,344(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 344, temp.u32);
	// stfs f0,392(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 392, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8261BC78) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8218be28
	ctx.lr = 0x8261BC94;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8261bd20
	if (cr6.eq) goto loc_8261BD20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
	// addi r11,r11,10532
	ctx.r11.s64 = ctx.r11.s64 + 10532;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r7,r31,20
	ctx.r7.s64 = r31.s64 + 20;
	// addi r10,r10,4260
	ctx.r10.s64 = ctx.r10.s64 + 4260;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r6,r3,20
	ctx.r6.s64 = ctx.r3.s64 + 20;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// stb r11,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// sth r11,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8261BD20:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82620040) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823ca848
	ctx.lr = 0x8262005C;
	sub_823CA848(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8262006c
	if (!cr6.eq) goto loc_8262006C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261fe30
	ctx.lr = 0x8262006C;
	sub_8261FE30(ctx, base);
loc_8262006C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82621C78) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,5116
	ctx.r11.s64 = ctx.r11.s64 + 5116;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x823cba28
	ctx.lr = 0x82621CA4;
	sub_823CBA28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cb198
	ctx.lr = 0x82621CAC;
	sub_823CB198(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82621d10
	if (cr6.eq) goto loc_82621D10;
	// lis r11,-32015
	ctx.r11.s64 = -2098135040;
	// lwz r11,-13768(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -13768);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r8,r10,r31
	ctx.r8.u64 = r31.u64 - ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r10,r8,r7
	ctx.r10.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lbzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// ori r8,r8,128
	ctx.r8.u64 = ctx.r8.u64 | 128;
	// stbx r8,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82621d04
	if (!cr6.lt) goto loc_82621D04;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82621D04:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82621D10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82626AC8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac0
	ctx.lr = 0x82626AD0;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,3964(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3964);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82626b90
	if (!cr6.gt) goto loc_82626B90;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r28,0
	r28.s64 = 0;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// lfs f31,-6968(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6968);
	f31.f64 = double(temp.f32);
	// bge cr6,0x82626b14
	if (!cr6.lt) goto loc_82626B14;
loc_82626B08:
	// lwz r11,3960(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3960);
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// b 0x82626b18
	goto loc_82626B18;
loc_82626B14:
	// li r31,0
	r31.s64 = 0;
loc_82626B18:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82418588
	ctx.lr = 0x82626B24;
	sub_82418588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82626b7c
	if (cr6.eq) goto loc_82626B7C;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82626b58
	if (!cr6.lt) goto loc_82626B58;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82418588
	ctx.lr = 0x82626B48;
	sub_82418588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82626b5c
	if (!cr6.eq) goto loc_82626B5C;
loc_82626B58:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82626B5C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82626b7c
	if (!cr6.eq) goto loc_82626B7C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82441638
	ctx.lr = 0x82626B78;
	sub_82441638(ctx, base);
	// add r27,r3,r27
	r27.u64 = ctx.r3.u64 + r27.u64;
loc_82626B7C:
	// lwz r11,3964(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3964);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,52
	r28.s64 = r28.s64 + 52;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x82626b08
	if (cr6.lt) goto loc_82626B08;
loc_82626B90:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8298eb10
	return;
}

DEFINE_REX_FUNC(sub_82630040) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab8
	ctx.lr = 0x82630048;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,16
	r24.s64 = 16;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// bl 0x8262f980
	ctx.lr = 0x82630064;
	sub_8262F980(ctx, base);
	// lwz r11,132(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,132(r28)
	REX_STORE_U32(r28.u32 + 132, ctx.r11.u32);
	// bl 0x827e8830
	ctx.lr = 0x82630084;
	sub_827E8830(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e8830
	ctx.lr = 0x82630094;
	sub_827E8830(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e8830
	ctx.lr = 0x826300A4;
	sub_827E8830(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e8830
	ctx.lr = 0x826300B4;
	sub_827E8830(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e8830
	ctx.lr = 0x826300C4;
	sub_827E8830(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e8830
	ctx.lr = 0x826300D4;
	sub_827E8830(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f12,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f11,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,10176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f8,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// fctiwz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// fctiwz f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// fctiwz f8,f8
	ctx.f8.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f8.u64);
	// fctiwz f13,f10
	ctx.f13.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f13,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// lhz r11,102(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// sth r11,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r11.u16);
	// lhz r11,110(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r10,118(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// lhz r9,126(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 126);
	// lhz r8,134(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 134);
	// lhz r7,142(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 142);
	// sth r11,42(r31)
	REX_STORE_U16(r31.u32 + 42, ctx.r11.u16);
	// sth r10,38(r31)
	REX_STORE_U16(r31.u32 + 38, ctx.r10.u16);
	// sth r9,34(r31)
	REX_STORE_U16(r31.u32 + 34, ctx.r9.u16);
	// sth r8,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r8.u16);
	// sth r7,36(r31)
	REX_STORE_U16(r31.u32 + 36, ctx.r7.u16);
	// bl 0x827e83d0
	ctx.lr = 0x8263017C;
	sub_827E83D0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8263053c
	if (cr6.eq) goto loc_8263053C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// bl 0x8262d940
	ctx.lr = 0x82630194;
	sub_8262D940(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// lwz r11,132(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 132);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,132(r28)
	REX_STORE_U32(r28.u32 + 132, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x827e83d0
	ctx.lr = 0x826301BC;
	sub_827E83D0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lhz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r10,12(r11)
	REX_STORE_U16(ctx.r11.u32 + 12, ctx.r10.u16);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lhz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82630274
	if (cr6.eq) goto loc_82630274;
	// lwz r10,0(r13)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,1680
	ctx.r9.s64 = 1680;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwzx r3,r9,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82630214;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r27,0
	r27.s64 = 0;
	// mr r29,r27
	r29.u64 = r27.u64;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8263027c
	if (cr6.eq) goto loc_8263027C;
	// mr r25,r27
	r25.u64 = r27.u64;
loc_82630238:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e87c0
	ctx.lr = 0x82630248;
	sub_827E87C0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lhz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// sthx r10,r11,r25
	REX_STORE_U16(ctx.r11.u32 + r25.u32, ctx.r10.u16);
	// addi r25,r25,2
	r25.s64 = r25.s64 + 2;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x82630238
	if (cr6.lt) goto loc_82630238;
	// b 0x8263027c
	goto loc_8263027C;
loc_82630274:
	// li r27,0
	r27.s64 = 0;
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r27.u32);
loc_8263027C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r10,132(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,132(r28)
	REX_STORE_U32(r28.u32 + 132, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r4,r11,14
	ctx.r4.s64 = ctx.r11.s64 + 14;
	// bl 0x827e83d0
	ctx.lr = 0x826302A8;
	sub_827E83D0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// lhz r10,14(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// sth r10,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, ctx.r10.u16);
	// lwz r11,136(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 136);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// sth r11,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,136(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 136);
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,136(r28)
	REX_STORE_U32(r28.u32 + 136, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lhz r4,14(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826303b8
	if (cr6.eq) goto loc_826303B8;
	// lis r10,-32092
	ctx.r10.s64 = -2103181312;
	// lbz r10,-10766(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -10766);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826303e8
	if (!cr6.eq) goto loc_826303E8;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826303ac
	if (cr6.eq) goto loc_826303AC;
loc_82630318:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e87c0
	ctx.lr = 0x82630328;
	sub_827E87C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e87c0
	ctx.lr = 0x82630338;
	sub_827E87C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e87c0
	ctx.lr = 0x82630348;
	sub_827E87C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e87c0
	ctx.lr = 0x82630358;
	sub_827E87C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e87c0
	ctx.lr = 0x82630368;
	sub_827E87C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e87c0
	ctx.lr = 0x82630378;
	sub_827E87C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e83d0
	ctx.lr = 0x82630388;
	sub_827E83D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e83d0
	ctx.lr = 0x82630398;
	sub_827E83D0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x82630318
	if (cr6.lt) goto loc_82630318;
loc_826303AC:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// sth r27,14(r11)
	REX_STORE_U16(ctx.r11.u32 + 14, r27.u16);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
loc_826303B8:
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r27.u32);
loc_826303BC:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,132(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 132);
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,132(r28)
	REX_STORE_U32(r28.u32 + 132, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eb08
	return;
loc_826303E8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8262faf0
	ctx.lr = 0x826303F0;
	sub_8262FAF0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826303bc
	if (cr6.eq) goto loc_826303BC;
	// mr r26,r27
	r26.u64 = r27.u64;
loc_8263040C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827e87c0
	ctx.lr = 0x82630428;
	sub_827E87C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r29,2
	ctx.r4.s64 = r29.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e87c0
	ctx.lr = 0x82630438;
	sub_827E87C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e87c0
	ctx.lr = 0x82630448;
	sub_827E87C0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e87c0
	ctx.lr = 0x82630458;
	sub_827E87C0(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,86
	ctx.r4.s64 = ctx.r1.s64 + 86;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,7(r29)
	REX_STORE_U8(r29.u32 + 7, ctx.r11.u8);
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r10,6(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 6);
	// rlwimi r10,r11,0,22,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFCFF);
	// sth r10,6(r29)
	REX_STORE_U16(r29.u32 + 6, ctx.r10.u16);
	// bl 0x827e83d0
	ctx.lr = 0x82630480;
	sub_827E83D0(ctx, base);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x827e83d0
	ctx.lr = 0x826304A8;
	sub_827E83D0(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,82
	ctx.r4.s64 = ctx.r1.s64 + 82;
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,88(r1)
	REX_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// bl 0x827e83d0
	ctx.lr = 0x826304D0;
	sub_827E83D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827e83d0
	ctx.lr = 0x826304E0;
	sub_827E83D0(ctx, base);
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// lhz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 8);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,12
	r26.s64 = r26.s64 + 12;
	// rlwimi r10,r11,0,29,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// sth r10,8(r29)
	REX_STORE_U16(r29.u32 + 8, ctx.r10.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// rlwimi r10,r11,3,13,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7FFF8) | (ctx.r10.u64 & 0xFFFFFFFFFFF80007);
	// sth r10,8(r29)
	REX_STORE_U16(r29.u32 + 8, ctx.r10.u16);
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lhz r10,10(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 10);
	// rlwimi r10,r11,0,29,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// sth r10,10(r29)
	REX_STORE_U16(r29.u32 + 10, ctx.r10.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// rlwimi r10,r11,3,13,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7FFF8) | (ctx.r10.u64 & 0xFFFFFFFFFFF80007);
	// sth r10,10(r29)
	REX_STORE_U16(r29.u32 + 10, ctx.r10.u16);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, ctx.r11.s32, xer);
	// blt cr6,0x8263040c
	if (cr6.lt) goto loc_8263040C;
	// b 0x826303bc
	goto loc_826303BC;
loc_8263053C:
	// addi r27,r31,48
	r27.s64 = r31.s64 + 48;
	// li r29,4
	r29.s64 = 4;
loc_82630544:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82630040
	ctx.lr = 0x82630550;
	sub_82630040(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82630544
	if (!cr6.eq) goto loc_82630544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eb08
	return;
}

DEFINE_REX_FUNC(sub_82659118) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac4
	ctx.lr = 0x82659120;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x823313b0
	ctx.lr = 0x82659148;
	sub_823313B0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,11636
	ctx.r10.s64 = ctx.r11.s64 + 11636;
	// li r8,32
	ctx.r8.s64 = 32;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r31,100
	r29.s64 = r31.s64 + 100;
	// lfs f31,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f31.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stfs f30,48(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stfs f31,80(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f31,84(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f31,88(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lbz r10,137(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 137);
	// stfs f31,96(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// stw r27,104(r31)
	REX_STORE_U32(r31.u32 + 104, r27.u32);
	// rlwimi r10,r28,7,17,24
	ctx.r10.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 7) & 0x7F80) | (ctx.r10.u64 & 0xFFFFFFFFFFFF807F);
	// stfs f31,108(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f31,112(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// stw r9,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// stb r11,136(r31)
	REX_STORE_U8(r31.u32 + 136, ctx.r11.u8);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// andi. r10,r10,143
	ctx.r10.u64 = ctx.r10.u64 & 143;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,137(r31)
	REX_STORE_U8(r31.u32 + 137, ctx.r10.u8);
	// beq cr6,0x826591e4
	if (cr6.eq) goto loc_826591E4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e5630
	ctx.lr = 0x826591E4;
	sub_823E5630(ctx, base);
loc_826591E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x826591fc
	if (cr6.eq) goto loc_826591FC;
	// lbz r11,137(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 137);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,137(r31)
	REX_STORE_U8(r31.u32 + 137, ctx.r11.u8);
loc_826591FC:
	// lis r30,-32092
	r30.s64 = -2103181312;
	// lfs f0,-9380(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -9380);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82659280
	if (!cr6.lt) goto loc_82659280;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,123
	ctx.r6.s64 = 123;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823e88c8
	ctx.lr = 0x82659228;
	sub_823E88C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r6,124
	ctx.r6.s64 = 124;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f0,-9380(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + -9380, temp.u32);
	// bl 0x823e88c8
	ctx.lr = 0x8265924C;
	sub_823E88C8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,105
	ctx.r6.s64 = 105;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f0,-9376(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -9376, temp.u32);
	// bl 0x823e88c8
	ctx.lr = 0x82659274;
	sub_823E88C8(ctx, base);
	// lis r11,-32092
	ctx.r11.s64 = -2103181312;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-9372(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -9372, temp.u32);
loc_82659280:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_826641A8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac4
	ctx.lr = 0x826641B0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x823313f8
	ctx.lr = 0x826641D0;
	sub_823313F8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// addi r11,r11,12924
	ctx.r11.s64 = ctx.r11.s64 + 12924;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// addi r29,r31,28
	r29.s64 = r31.s64 + 28;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// addi r27,r31,32
	r27.s64 = r31.s64 + 32;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lvx128 v0,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82664218
	if (cr6.eq) goto loc_82664218;
	// bl 0x823e5630
	ctx.lr = 0x82664218;
	sub_823E5630(ctx, base);
loc_82664218:
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8266424c
	if (cr6.eq) goto loc_8266424C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823e5630
	ctx.lr = 0x8266422C;
	sub_823E5630(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8237c868
	ctx.lr = 0x82664238;
	sub_8237C868(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// beq cr6,0x8266424c
	if (cr6.eq) goto loc_8266424C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823e5630
	ctx.lr = 0x8266424C;
	sub_823E5630(ctx, base);
loc_8266424C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_8266B8E8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac0
	ctx.lr = 0x8266B8F0;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x829900f4
	ctx.lr = 0x8266B8F8;
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r4,8
	r27.s64 = ctx.r4.s64 + 8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8214cf38
	ctx.lr = 0x8266B914;
	sub_8214CF38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,48
	ctx.r11.s64 = 48;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lvx128 v127,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8243b5b8
	ctx.lr = 0x8266B934;
	sub_8243B5B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// addi r31,r29,32
	r31.s64 = r29.s64 + 32;
	// lis r26,-32256
	r26.s64 = -2113929216;
	// lfs f29,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f29.f64 = double(temp.f32);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fmr f30,f29
	f30.f64 = f29.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-6556(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6556);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f27,-6560(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6560);
	f27.f64 = double(temp.f32);
	// fdivs f28,f0,f13
	f28.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_8266B974:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8243b2e0
	ctx.lr = 0x8266B980;
	sub_8243B2E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8266bab0
	if (cr6.eq) goto loc_8266BAB0;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8266b9d8
	if (cr6.eq) goto loc_8266B9D8;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8266b9c8
	if (cr6.eq) goto loc_8266B9C8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x8298fd28
	ctx.lr = 0x8266B9B8;
	sub_8298FD28(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + f30.f64));
	// bl 0x8241dc38
	ctx.lr = 0x8266B9C4;
	sub_8241DC38(ctx, base);
	// b 0x8266b9dc
	goto loc_8266B9DC;
loc_8266B9C8:
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + f30.f64));
	// bl 0x8241dc38
	ctx.lr = 0x8266B9D4;
	sub_8241DC38(ctx, base);
	// b 0x8266b9dc
	goto loc_8266B9DC;
loc_8266B9D8:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
loc_8266B9DC:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8298f118
	ctx.lr = 0x8266B9E4;
	sub_8298F118(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// bl 0x8298f048
	ctx.lr = 0x8266B9F4;
	sub_8298F048(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f29,88(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,2592(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 2592);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vaddfp128 v0,v0,v127
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v127.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -8, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// rlwinm r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8266ba64
	if (cr6.eq) goto loc_8266BA64;
	// fadds f1,f30,f27
	ctx.f1.f64 = double(float(f30.f64 + f27.f64));
	// bl 0x8241dc38
	ctx.lr = 0x8266BA60;
	sub_8241DC38(ctx, base);
	// b 0x8266baa8
	goto loc_8266BAA8;
loc_8266BA64:
	// rlwinm r11,r11,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8266ba7c
	if (cr6.eq) goto loc_8266BA7C;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x8241dc38
	ctx.lr = 0x8266BA78;
	sub_8241DC38(ctx, base);
	// b 0x8266baa8
	goto loc_8266BAA8;
loc_8266BA7C:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8266baa4
	if (cr6.eq) goto loc_8266BAA4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x8298fd28
	ctx.lr = 0x8266BA9C;
	sub_8298FD28(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x8266baa8
	goto loc_8266BAA8;
loc_8266BAA4:
	// lfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
loc_8266BAA8:
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fadds f30,f30,f28
	f30.f64 = double(float(f30.f64 + f28.f64));
loc_8266BAB0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpwi cr6,r28,7
	cr6.compare<int32_t>(r28.s32, 7, xer);
	// blt cr6,0x8266b974
	if (cr6.lt) goto loc_8266B974;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,192(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 192, temp.u32);
	// stfs f13,196(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 196, temp.u32);
	// stfs f12,200(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + 200, temp.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8266bb00
	if (cr6.eq) goto loc_8266BB00;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x8298fd28
	ctx.lr = 0x8266BAF8;
	sub_8298FD28(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// b 0x8266bb04
	goto loc_8266BB04;
loc_8266BB00:
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
loc_8266BB04:
	// lfs f13,2592(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 2592);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,204(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 204, temp.u32);
	// stfs f13,208(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 208, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82990140
	ctx.lr = 0x8266BB28;
	// b 0x8298eb10
	return;
}

DEFINE_REX_FUNC(sub_82684370) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x82684384
	if (!cr6.eq) goto loc_82684384;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82684384:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, xer);
	// bne cr6,0x82684398
	if (!cr6.eq) goto loc_82684398;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82684398:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826843ac
	if (cr6.eq) goto loc_826843AC;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_826843AC:
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826843c0
	if (cr6.eq) goto loc_826843C0;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_826843C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268A660) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r9,15
	cr6.compare<uint32_t>(ctx.r9.u32, 15, xer);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bgt cr6,0x8268a6a4
	if (cr6.gt) goto loc_8268A6A4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8268a480
	ctx.lr = 0x8268A68C;
	sub_8268A480(ctx, base);
	// lis r11,-32015
	ctx.r11.s64 = -2098135040;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-3568
	ctx.r11.s64 = ctx.r11.s64 + -3568;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// oris r11,r11,65280
	ctx.r11.u64 = ctx.r11.u64 | 4278190080;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8268A6A4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8268D318) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x8268D320;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,15
	r31.s64 = 15;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8268D330:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82726650
	ctx.lr = 0x8268D338;
	sub_82726650(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,2080
	r30.s64 = r30.s64 + 2080;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x8268d330
	if (!cr6.lt) goto loc_8268D330;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,33280
	ctx.r11.u64 = ctx.r11.u64 | 33280;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stwx r10,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_8268F248) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab8
	ctx.lr = 0x8268F250;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x826ae6e8
	ctx.lr = 0x8268F270;
	sub_826AE6E8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// bl 0x826ae6e8
	ctx.lr = 0x8268F280;
	sub_826AE6E8(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(ctx.r11.s32, r31.s32, xer);
	// beq cr6,0x8268f3dc
	if (cr6.eq) goto loc_8268F3DC;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268F2AC;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8268f3dc
	if (cr6.eq) goto loc_8268F3DC;
	// lwz r30,40(r24)
	r30.u64 = REX_LOAD_U32(r24.u32 + 40);
	// li r25,0
	r25.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8268f344
	if (cr6.eq) goto loc_8268F344;
loc_8268F2CC:
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8268f338
	if (cr6.eq) goto loc_8268F338;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x8268f338
	if (!cr6.eq) goto loc_8268F338;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826938f0
	ctx.lr = 0x8268F2F8;
	sub_826938F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8268f30c
	if (cr6.eq) goto loc_8268F30C;
	// li r25,1
	r25.s64 = 1;
	// b 0x8268f338
	goto loc_8268F338;
loc_8268F30C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82693878
	ctx.lr = 0x8268F318;
	sub_82693878(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8268f338
	if (cr6.eq) goto loc_8268F338;
	// lbz r11,22(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 22);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8268f338
	if (!cr6.eq) goto loc_8268F338;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_8268F338:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8268f2cc
	if (!cr6.eq) goto loc_8268F2CC;
loc_8268F344:
	// clrlwi r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8268f3dc
	if (!cr6.eq) goto loc_8268F3DC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8268f374
	if (cr6.eq) goto loc_8268F374;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82693980
	ctx.lr = 0x8268F36C;
	sub_82693980(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb08
	return;
loc_8268F374:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x8268e7a0
	ctx.lr = 0x8268F388;
	sub_8268E7A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8268f3dc
	if (cr6.eq) goto loc_8268F3DC;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// lwz r3,6024(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6024);
	// bl 0x821250b0
	ctx.lr = 0x8268F3A0;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268f3b8
	if (cr6.eq) goto loc_8268F3B8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82693808
	ctx.lr = 0x8268F3B0;
	sub_82693808(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8268f3bc
	goto loc_8268F3BC;
loc_8268F3B8:
	// li r31,0
	r31.s64 = 0;
loc_8268F3BC:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82693980
	ctx.lr = 0x8268F3D0;
	sub_82693980(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8268e1e0
	ctx.lr = 0x8268F3DC;
	sub_8268E1E0(ctx, base);
loc_8268F3DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb08
	return;
}

DEFINE_REX_FUNC(sub_82699F58) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-6124
	ctx.r3.s64 = ctx.r11.s64 + -6124;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269A348) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x826be038
	ctx.lr = 0x8269A374;
	sub_826BE038(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826be038
	ctx.lr = 0x8269A384;
	sub_826BE038(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269F4C8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac8
	ctx.lr = 0x8269F4D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x827ebb70
	ctx.lr = 0x8269F4EC;
	sub_827EBB70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8269f52c
	if (cr6.eq) goto loc_8269F52C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x827eb858
	ctx.lr = 0x8269F514;
	sub_827EB858(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ebd50
	ctx.lr = 0x8269F520;
	sub_827EBD50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_8269F52C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_826A20C8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,22728(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 22728);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826a2108
	if (cr6.eq) goto loc_826A2108;
	// bl 0x8275ff30
	ctx.lr = 0x826A20F4;
	sub_8275FF30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826a2108
	if (cr6.eq) goto loc_826A2108;
	// lwz r3,22728(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 22728);
	// b 0x826a2130
	goto loc_826A2130;
loc_826A2108:
	// lwz r3,22732(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 22732);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826a212c
	if (cr6.eq) goto loc_826A212C;
	// bl 0x8275ff30
	ctx.lr = 0x826A2118;
	sub_8275FF30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826a212c
	if (cr6.eq) goto loc_826A212C;
	// lwz r3,22732(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 22732);
	// b 0x826a2130
	goto loc_826A2130;
loc_826A212C:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
loc_826A2130:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82761208
	ctx.lr = 0x826A2138;
	sub_82761208(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A7890) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac4
	ctx.lr = 0x826A7898;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,7864(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 7864);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826a7948
	if (cr6.eq) goto loc_826A7948;
	// addi r30,r31,64
	r30.s64 = r31.s64 + 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ae708
	ctx.lr = 0x826A78C4;
	sub_826AE708(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826a78f4
	if (cr6.eq) goto loc_826A78F4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826a78f4
	if (cr6.eq) goto loc_826A78F4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bf340
	ctx.lr = 0x826A78E0;
	sub_826BF340(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8296bd88
	ctx.lr = 0x826A78E8;
	sub_8296BD88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826a7944
	if (cr6.eq) goto loc_826A7944;
loc_826A78F4:
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// addi r31,r31,1316
	r31.s64 = r31.s64 + 1316;
loc_826A7900:
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826a7928
	if (cr6.eq) goto loc_826A7928;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bf340
	ctx.lr = 0x826A7914;
	sub_826BF340(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8296bd68
	ctx.lr = 0x826A791C;
	sub_8296BD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826a7944
	if (!cr6.eq) goto loc_826A7944;
loc_826A7928:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(r29.u32, 16, xer);
	// blt cr6,0x826a7900
	if (cr6.lt) goto loc_826A7900;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb14
	return;
loc_826A7944:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_826A7948:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_826AFB80) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab4
	ctx.lr = 0x826AFB88;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x826afbb0
	if (!cr6.eq) goto loc_826AFBB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8298eb04
	return;
loc_826AFBB0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826ae6e8
	ctx.lr = 0x826AFBB8;
	sub_826AE6E8(ctx, base);
	// lbz r11,15(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 15);
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x826afbdc
	if (!cr6.eq) goto loc_826AFBDC;
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(ctx.r11.u32, 255, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x826afbe0
	if (cr6.eq) goto loc_826AFBE0;
loc_826AFBDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826AFBE0:
	// clrlwi r25,r11,24
	r25.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x826afcec
	if (!cr6.eq) goto loc_826AFCEC;
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826afcec
	if (cr6.eq) goto loc_826AFCEC;
	// lbz r11,17(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 17);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826afcec
	if (!cr6.eq) goto loc_826AFCEC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826bdbe8
	ctx.lr = 0x826AFC10;
	sub_826BDBE8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r23,18(r31)
	r23.u64 = REX_LOAD_U8(r31.u32 + 18);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r29,160(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 160);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r28,r31,160
	r28.s64 = r31.s64 + 160;
	// bl 0x826be410
	ctx.lr = 0x826AFC30;
	sub_826BE410(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r11,18(r31)
	REX_STORE_U8(r31.u32 + 18, ctx.r11.u8);
	// bl 0x826be410
	ctx.lr = 0x826AFC48;
	sub_826BE410(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// rlwinm r10,r29,27,0,4
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0xF8000000;
	// rlwinm r11,r11,27,0,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xF8000000;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt 0x826afc64
	if (cr0.gt) goto loc_826AFC64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826AFC64:
	// lbz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 14);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826afc78
	if (!cr6.eq) goto loc_826AFC78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826AFC78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826afcd8
	if (cr6.eq) goto loc_826AFCD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AFC98;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,25492
	r30.s64 = ctx.r11.s64 + 25492;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82689300
	ctx.lr = 0x826AFCB4;
	sub_82689300(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r5,r11,-476
	ctx.r5.s64 = ctx.r11.s64 + -476;
	// addis r11,r30,2
	ctx.r11.s64 = r30.s64 + 131072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-29532
	ctx.r3.s64 = ctx.r11.s64 + -29532;
	// bl 0x828e0a68
	ctx.lr = 0x826AFCD4;
	sub_828E0A68(ctx, base);
	// li r25,1
	r25.s64 = 1;
loc_826AFCD8:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stb r23,18(r31)
	REX_STORE_U8(r31.u32 + 18, r23.u8);
	// addi r3,r26,4
	ctx.r3.s64 = r26.s64 + 4;
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// bl 0x827ebcc0
	ctx.lr = 0x826AFCEC;
	sub_827EBCC0(ctx, base);
loc_826AFCEC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8298eb04
	return;
}

DEFINE_REX_FUNC(sub_826C1388) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r10,r11,8080
	ctx.r10.s64 = ctx.r11.s64 + 8080;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r11,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C2E48) {
	REX_FUNC_PROLOGUE();
	// li r3,2204
	ctx.r3.s64 = 2204;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C3140) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac8
	ctx.lr = 0x826C3148;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r3,r11,1128
	ctx.r3.s64 = ctx.r11.s64 + 1128;
	// bl 0x826c5d48
	ctx.lr = 0x826C3168;
	sub_826C5D48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826c3188
	if (cr6.eq) goto loc_826C3188;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826C3180;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x826c318c
	goto loc_826C318C;
loc_826C3188:
	// li r30,200
	r30.s64 = 200;
loc_826C318C:
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,217
	ctx.r4.s64 = 217;
	// addi r31,r11,736
	r31.s64 = ctx.r11.s64 + 736;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82128400
	ctx.lr = 0x826C31A4;
	sub_82128400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826c31cc
	if (!cr6.eq) goto loc_826C31CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,9440
	ctx.r4.s64 = ctx.r11.s64 + 9440;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r3,r11,4352
	ctx.r3.s64 = ctx.r11.s64 + 4352;
	// bl 0x828e0a68
	ctx.lr = 0x826C31C4;
	sub_828E0A68(ctx, base);
	// li r31,200
	r31.s64 = 200;
	// b 0x826c3270
	goto loc_826C3270;
loc_826C31CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,278
	ctx.r4.s64 = 278;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82128400
	ctx.lr = 0x826C31DC;
	sub_82128400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826c3204
	if (cr6.eq) goto loc_826C3204;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,9396
	ctx.r4.s64 = ctx.r11.s64 + 9396;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r3,r11,4352
	ctx.r3.s64 = ctx.r11.s64 + 4352;
	// bl 0x828e0a68
	ctx.lr = 0x826C31FC;
	sub_828E0A68(ctx, base);
	// li r31,278
	r31.s64 = 278;
	// b 0x826c3270
	goto loc_826C3270;
loc_826C3204:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1310
	ctx.r4.s64 = 1310;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82128400
	ctx.lr = 0x826C3214;
	sub_82128400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826c3258
	if (!cr6.eq) goto loc_826C3258;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,205
	ctx.r4.s64 = 205;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82128400
	ctx.lr = 0x826C3230;
	sub_82128400(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826c3258
	if (!cr6.eq) goto loc_826C3258;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,9372
	ctx.r4.s64 = ctx.r11.s64 + 9372;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r3,r11,4352
	ctx.r3.s64 = ctx.r11.s64 + 4352;
	// bl 0x828e0a68
	ctx.lr = 0x826C3250;
	sub_828E0A68(ctx, base);
	// li r31,212
	r31.s64 = 212;
	// b 0x826c3270
	goto loc_826C3270;
loc_826C3258:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r11,9324
	ctx.r4.s64 = ctx.r11.s64 + 9324;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r3,r11,4352
	ctx.r3.s64 = ctx.r11.s64 + 4352;
	// bl 0x828e0a68
	ctx.lr = 0x826C326C;
	sub_828E0A68(ctx, base);
	// li r31,1310
	r31.s64 = 1310;
loc_826C3270:
	// cmpwi cr6,r30,281
	cr6.compare<int32_t>(r30.s32, 281, xer);
	// bgt cr6,0x826c32c0
	if (cr6.gt) goto loc_826C32C0;
	// beq cr6,0x826c32a0
	if (cr6.eq) goto loc_826C32A0;
	// cmpwi cr6,r30,200
	cr6.compare<int32_t>(r30.s32, 200, xer);
	// beq cr6,0x826c32a0
	if (cr6.eq) goto loc_826C32A0;
	// cmpwi cr6,r30,205
	cr6.compare<int32_t>(r30.s32, 205, xer);
	// beq cr6,0x826c3380
	if (cr6.eq) goto loc_826C3380;
	// cmpwi cr6,r30,212
	cr6.compare<int32_t>(r30.s32, 212, xer);
	// beq cr6,0x826c32d8
	if (cr6.eq) goto loc_826C32D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_826C32A0:
	// cmpwi cr6,r31,278
	cr6.compare<int32_t>(r31.s32, 278, xer);
	// ble cr6,0x826c33a8
	if (!cr6.gt) goto loc_826C33A8;
loc_826C32A8:
	// cmpwi cr6,r31,1310
	cr6.compare<int32_t>(r31.s32, 1310, xer);
	// bne cr6,0x826c32b4
	if (!cr6.eq) goto loc_826C32B4;
	// li r30,281
	r30.s64 = 281;
loc_826C32B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_826C32C0:
	// cmpwi cr6,r30,291
	cr6.compare<int32_t>(r30.s32, 291, xer);
	// beq cr6,0x826c3340
	if (cr6.eq) goto loc_826C3340;
	// cmpwi cr6,r30,295
	cr6.compare<int32_t>(r30.s32, 295, xer);
	// beq cr6,0x826c3300
	if (cr6.eq) goto loc_826C3300;
	// cmpwi cr6,r30,2104
	cr6.compare<int32_t>(r30.s32, 2104, xer);
	// bne cr6,0x826c32b4
	if (!cr6.eq) goto loc_826C32B4;
loc_826C32D8:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826c32b4
	if (cr6.eq) goto loc_826C32B4;
	// cmpwi cr6,r31,278
	cr6.compare<int32_t>(r31.s32, 278, xer);
	// bgt cr6,0x826c3328
	if (cr6.gt) goto loc_826C3328;
	// bne cr6,0x826c33ac
	if (!cr6.eq) goto loc_826C33AC;
	// li r30,295
	r30.s64 = 295;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_826C3300:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826c32b4
	if (cr6.eq) goto loc_826C32B4;
	// cmpwi cr6,r31,278
	cr6.compare<int32_t>(r31.s32, 278, xer);
	// bgt cr6,0x826c3328
	if (cr6.gt) goto loc_826C3328;
	// bne cr6,0x826c33ac
	if (!cr6.eq) goto loc_826C33AC;
	// li r30,291
	r30.s64 = 291;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_826C3328:
	// cmpwi cr6,r31,1310
	cr6.compare<int32_t>(r31.s32, 1310, xer);
	// bne cr6,0x826c32b4
	if (!cr6.eq) goto loc_826C32B4;
	// li r30,205
	r30.s64 = 205;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_826C3340:
	// cmpwi cr6,r31,278
	cr6.compare<int32_t>(r31.s32, 278, xer);
	// bgt cr6,0x826c3374
	if (cr6.gt) goto loc_826C3374;
	// beq cr6,0x826c336c
	if (cr6.eq) goto loc_826C336C;
	// cmpwi cr6,r31,200
	cr6.compare<int32_t>(r31.s32, 200, xer);
	// beq cr6,0x826c3364
	if (cr6.eq) goto loc_826C3364;
	// cmpwi cr6,r31,212
	cr6.compare<int32_t>(r31.s32, 212, xer);
	// bne cr6,0x826c3380
	if (!cr6.eq) goto loc_826C3380;
	// li r30,212
	r30.s64 = 212;
	// b 0x826c3380
	goto loc_826C3380;
loc_826C3364:
	// li r30,200
	r30.s64 = 200;
	// b 0x826c3380
	goto loc_826C3380;
loc_826C336C:
	// li r30,291
	r30.s64 = 291;
	// b 0x826c3380
	goto loc_826C3380;
loc_826C3374:
	// cmpwi cr6,r31,1310
	cr6.compare<int32_t>(r31.s32, 1310, xer);
	// bne cr6,0x826c3380
	if (!cr6.eq) goto loc_826C3380;
	// li r30,205
	r30.s64 = 205;
loc_826C3380:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826c32b4
	if (cr6.eq) goto loc_826C32B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,-26036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -26036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826c2738
	ctx.lr = 0x826C339C;
	sub_826C2738(ctx, base);
	// cmpwi cr6,r31,278
	cr6.compare<int32_t>(r31.s32, 278, xer);
	// bgt cr6,0x826c32a8
	if (cr6.gt) goto loc_826C32A8;
	// cmpwi cr6,r31,278
	cr6.compare<int32_t>(r31.s32, 278, xer);
loc_826C33A8:
	// beq cr6,0x826c33bc
	if (cr6.eq) goto loc_826C33BC;
loc_826C33AC:
	// cmpwi cr6,r31,200
	cr6.compare<int32_t>(r31.s32, 200, xer);
	// beq cr6,0x826c33cc
	if (cr6.eq) goto loc_826C33CC;
	// cmpwi cr6,r31,212
	cr6.compare<int32_t>(r31.s32, 212, xer);
	// bne cr6,0x826c32b4
	if (!cr6.eq) goto loc_826C32B4;
loc_826C33BC:
	// li r30,212
	r30.s64 = 212;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_826C33CC:
	// li r30,200
	r30.s64 = 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_826DE488) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826c0fd0
	ctx.lr = 0x826DE4A8;
	sub_826C0FD0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826de50c
	if (cr6.eq) goto loc_826DE50C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82126b90
	ctx.lr = 0x826DE4C4;
	sub_82126B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x826de4e4
	if (!cr6.eq) goto loc_826DE4E4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82126b90
	ctx.lr = 0x826DE4E4;
	sub_82126B90(ctx, base);
loc_826DE4E4:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826de504
	if (cr6.eq) goto loc_826DE504;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826DE504;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
loc_826DE504:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_826DE50C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826E3380) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eaa8
	ctx.lr = 0x826E3388;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826E33A4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826e33b8
	if (cr6.eq) goto loc_826E33B8;
	// lwz r27,544(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 544);
	// b 0x826e33bc
	goto loc_826E33BC;
loc_826E33B8:
	// li r27,0
	r27.s64 = 0;
loc_826E33BC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x826e33d0
	if (!cr6.eq) goto loc_826E33D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8298eaf8
	return;
loc_826E33D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82983320
	ctx.lr = 0x826E33D8;
	sub_82983320(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,29772
	r29.s64 = ctx.r11.s64 + 29772;
	// bl 0x826ae6b8
	ctx.lr = 0x826E33EC;
	sub_826AE6B8(ctx, base);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// extsb r5,r3
	ctx.r5.s64 = ctx.r3.s8;
	// addi r11,r11,25492
	ctx.r11.s64 = ctx.r11.s64 + 25492;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 131072;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r3,r11,-29532
	ctx.r3.s64 = ctx.r11.s64 + -29532;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x828e0a68
	ctx.lr = 0x826E3410;
	sub_828E0A68(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// li r29,0
	r29.s64 = 0;
	// addi r3,r11,736
	ctx.r3.s64 = ctx.r11.s64 + 736;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826e3458
	if (cr6.eq) goto loc_826E3458;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
loc_826E342C:
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(r29.u32, 8, xer);
	// bge cr6,0x826e3440
	if (!cr6.lt) goto loc_826E3440;
	// stw r4,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r4.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_826E3440:
	// bl 0x823a4c10
	ctx.lr = 0x826E3444;
	sub_823A4C10(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// addi r3,r11,736
	ctx.r3.s64 = ctx.r11.s64 + 736;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x826e342c
	if (!cr6.eq) goto loc_826E342C;
loc_826E3458:
	// lbz r10,1214(r27)
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + 1214);
	// lbz r11,1152(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1152);
	// extsb r28,r10
	r28.s64 = ctx.r10.s8;
	// lbz r10,528(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 528);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r10,529(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 529);
	// stb r11,1152(r30)
	REX_STORE_U8(r30.u32 + 1152, ctx.r11.u8);
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// beq cr6,0x826e3498
	if (cr6.eq) goto loc_826E3498;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826E3498;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
loc_826E3498:
	// addi r10,r31,624
	ctx.r10.s64 = r31.s64 + 624;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r9,644(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 644);
	// li r27,0
	r27.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// rlwinm r24,r11,3,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// rlwinm r23,r11,4,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r22,r11,6,31,31
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// rlwinm r21,r11,1,31,31
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r26,36(r10)
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// beq cr6,0x826e34ec
	if (cr6.eq) goto loc_826E34EC;
	// lwz r3,100(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826e34ec
	if (cr6.eq) goto loc_826E34EC;
	// bl 0x826ae6b0
	ctx.lr = 0x826E34E4;
	sub_826AE6B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r26,46
	r26.s64 = 46;
loc_826E34EC:
	// lwz r11,648(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 648);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x826e350c
	if (cr6.eq) goto loc_826E350C;
	// lwz r3,100(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826e350c
	if (cr6.eq) goto loc_826E350C;
	// bl 0x826ae6b0
	ctx.lr = 0x826E3508;
	sub_826AE6B0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_826E350C:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82284158
	ctx.lr = 0x826E351C;
	sub_82284158(ctx, base);
	// lbz r11,1152(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,1152(r30)
	REX_STORE_U8(r30.u32 + 1152, ctx.r11.u8);
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// addi r3,r11,736
	ctx.r3.s64 = ctx.r11.s64 + 736;
	// bl 0x823a6d48
	ctx.lr = 0x826E3538;
	sub_823A6D48(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x826e3564
	if (cr6.eq) goto loc_826E3564;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
loc_826E3544:
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r3,r11,736
	ctx.r3.s64 = ctx.r11.s64 + 736;
	// bl 0x823a4bd8
	ctx.lr = 0x826E3554;
	sub_823A4BD8(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x826e3544
	if (!cr6.eq) goto loc_826E3544;
loc_826E3564:
	// rlwimi r24,r21,2,22,29
	r24.u64 = (__builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0x3FC) | (r24.u64 & 0xFFFFFFFFFFFFFC03);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// clrlwi r10,r22,31
	ctx.r10.u64 = r22.u32 & 0x1;
	// lis r12,19455
	ctx.r12.s64 = 1275002880;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// andi. r9,r24,1021
	ctx.r9.u64 = r24.u64 & 1021;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwimi r23,r9,1,0,30
	r23.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE) | (r23.u64 & 0xFFFFFFFF00000001);
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,26,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xFC000000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// bl 0x826b4420
	ctx.lr = 0x826E35B8;
	sub_826B4420(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826e35d8
	if (cr6.eq) goto loc_826E35D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826E35D8;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
loc_826E35D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// stw r10,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826E35F4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826baf08
	ctx.lr = 0x826E35FC;
	sub_826BAF08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8298eaf8
	return;
}

DEFINE_REX_FUNC(sub_826F44D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, xer);
	// bgt cr6,0x826f4568
	if (cr6.gt) goto loc_826F4568;
	// cmplwi cr6,r3,65534
	cr6.compare<uint32_t>(ctx.r3.u32, 65534, xer);
	// beq cr6,0x826f455c
	if (cr6.eq) goto loc_826F455C;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// bgt cr6,0x826f4568
	if (cr6.gt) goto loc_826F4568;
	// lis r12,-32145
	ctx.r12.s64 = -2106654720;
	// addi r12,r12,17676
	ctx.r12.s64 = ctx.r12.s64 + 17676;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_826F4538;
	case 1:
		goto loc_826F4520;
	case 2:
		goto loc_826F4550;
	case 3:
		goto loc_826F4544;
	case 4:
		goto loc_826F452C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_826F4520:
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// ori r3,r3,42
	ctx.r3.u64 = ctx.r3.u64 | 42;
	// blr 
	return;
loc_826F452C:
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// blr 
	return;
loc_826F4538:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// blr 
	return;
loc_826F4544:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
	// blr 
	return;
loc_826F4550:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// blr 
	return;
loc_826F455C:
	// lis r3,8192
	ctx.r3.s64 = 536870912;
	// ori r3,r3,55
	ctx.r3.u64 = ctx.r3.u64 | 55;
	// blr 
	return;
loc_826F4568:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826F9620) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826F964C;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bne cr6,0x826f9670
	if (!cr6.eq) goto loc_826F9670;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826f9670
	if (cr6.eq) goto loc_826F9670;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-22452
	ctx.r11.s64 = ctx.r11.s64 + -22452;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x826f9674
	goto loc_826F9674;
loc_826F9670:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826F9674:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826FB948) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FB974;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bne cr6,0x826fb998
	if (!cr6.eq) goto loc_826FB998;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826fb998
	if (cr6.eq) goto loc_826FB998;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-16052
	ctx.r11.s64 = ctx.r11.s64 + -16052;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x826fb99c
	goto loc_826FB99C;
loc_826FB998:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826FB99C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826FE498) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826FE4C4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bne cr6,0x826fe4e8
	if (!cr6.eq) goto loc_826FE4E8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826fe4e8
	if (cr6.eq) goto loc_826FE4E8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-8132
	ctx.r11.s64 = ctx.r11.s64 + -8132;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x826fe4ec
	goto loc_826FE4EC;
loc_826FE4E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826FE4EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827017B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eaa8
	ctx.lr = 0x827017B8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8218be28
	ctx.lr = 0x827017CC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r26,0
	r26.s64 = 0;
	// beq cr6,0x827017f8
	if (cr6.eq) goto loc_827017F8;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// stw r26,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r26.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x827017fc
	goto loc_827017FC;
loc_827017F8:
	// mr r22,r26
	r22.u64 = r26.u64;
loc_827017FC:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// li r20,1
	r20.s64 = 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, ctx.r11.s32, xer);
	// bgt cr6,0x82703158
	if (cr6.gt) goto loc_82703158;
	// beq cr6,0x8270304c
	if (cr6.eq) goto loc_8270304C;
	// addis r11,r31,2
	ctx.r11.s64 = r31.s64 + 131072;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(ctx.r11.u32, 31, xer);
	// bgt cr6,0x827048c0
	if (cr6.gt) goto loc_827048C0;
	// lis r12,-32144
	ctx.r12.s64 = -2106589184;
	// addi r12,r12,6196
	ctx.r12.s64 = ctx.r12.s64 + 6196;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827018B4;
	case 1:
		goto loc_82701B84;
	case 2:
		goto loc_82701A94;
	case 3:
		goto loc_82701D64;
	case 4:
		goto loc_82701C74;
	case 5:
		goto loc_827019A4;
	case 6:
		goto loc_827024E4;
	case 7:
		goto loc_827026C4;
	case 8:
		goto loc_827025D4;
	case 9:
		goto loc_82702034;
	case 10:
		goto loc_82701E54;
	case 11:
		goto loc_82701F44;
	case 12:
		goto loc_82702124;
	case 13:
		goto loc_827023F4;
	case 14:
		goto loc_82702304;
	case 15:
		goto loc_82702214;
	case 16:
		goto loc_827027B4;
	case 17:
		goto loc_827048C0;
	case 18:
		goto loc_827028A4;
	case 19:
		goto loc_82702930;
	case 20:
		goto loc_827029BC;
	case 21:
		goto loc_82702A48;
	case 22:
		goto loc_82702AD4;
	case 23:
		goto loc_82702B60;
	case 24:
		goto loc_82702BEC;
	case 25:
		goto loc_82702C78;
	case 26:
		goto loc_82702D04;
	case 27:
		goto loc_82702D90;
	case 28:
		goto loc_82702E1C;
	case 29:
		goto loc_82702EA8;
	case 30:
		goto loc_82702F34;
	case 31:
		goto loc_82702FC0;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_827018B4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827018BC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827018f0
	if (cr6.eq) goto loc_827018F0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1164
	ctx.r11.s64 = ctx.r11.s64 + 1164;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-23652
	ctx.r10.s64 = ctx.r10.s64 + -23652;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827018f4
	goto loc_827018F4;
loc_827018F0:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827018F4:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82701914
	if (!cr6.gt) goto loc_82701914;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82701914:
	// bl 0x8218be28
	ctx.lr = 0x82701918;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x8270199c
	if (cr6.lt) goto loc_8270199C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82701958:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82701960;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82701958
	if (!cr6.lt) goto loc_82701958;
loc_8270199C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_827019A4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827019AC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827019e0
	if (cr6.eq) goto loc_827019E0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1204
	ctx.r11.s64 = ctx.r11.s64 + 1204;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-23492
	ctx.r10.s64 = ctx.r10.s64 + -23492;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827019e4
	goto loc_827019E4;
loc_827019E0:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827019E4:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82701a04
	if (!cr6.gt) goto loc_82701A04;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82701A04:
	// bl 0x8218be28
	ctx.lr = 0x82701A08;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82701a8c
	if (cr6.lt) goto loc_82701A8C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82701A48:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82701A50;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82701a48
	if (!cr6.lt) goto loc_82701A48;
loc_82701A8C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82701A94:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82701A9C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82701ad0
	if (cr6.eq) goto loc_82701AD0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1244
	ctx.r11.s64 = ctx.r11.s64 + 1244;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-23332
	ctx.r10.s64 = ctx.r10.s64 + -23332;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82701ad4
	goto loc_82701AD4;
loc_82701AD0:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82701AD4:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82701af4
	if (!cr6.gt) goto loc_82701AF4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82701AF4:
	// bl 0x8218be28
	ctx.lr = 0x82701AF8;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82701b7c
	if (cr6.lt) goto loc_82701B7C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82701B38:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82701B40;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82701b38
	if (!cr6.lt) goto loc_82701B38;
loc_82701B7C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82701B84:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82701B8C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82701bc0
	if (cr6.eq) goto loc_82701BC0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1284
	ctx.r11.s64 = ctx.r11.s64 + 1284;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-23172
	ctx.r10.s64 = ctx.r10.s64 + -23172;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82701bc4
	goto loc_82701BC4;
loc_82701BC0:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82701BC4:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82701be4
	if (!cr6.gt) goto loc_82701BE4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82701BE4:
	// bl 0x8218be28
	ctx.lr = 0x82701BE8;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82701c6c
	if (cr6.lt) goto loc_82701C6C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82701C28:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82701C30;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82701c28
	if (!cr6.lt) goto loc_82701C28;
loc_82701C6C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82701C74:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82701C7C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82701cb0
	if (cr6.eq) goto loc_82701CB0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1324
	ctx.r11.s64 = ctx.r11.s64 + 1324;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-23012
	ctx.r10.s64 = ctx.r10.s64 + -23012;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82701cb4
	goto loc_82701CB4;
loc_82701CB0:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82701CB4:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82701cd4
	if (!cr6.gt) goto loc_82701CD4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82701CD4:
	// bl 0x8218be28
	ctx.lr = 0x82701CD8;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82701d5c
	if (cr6.lt) goto loc_82701D5C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82701D18:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82701D20;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82701d18
	if (!cr6.lt) goto loc_82701D18;
loc_82701D5C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82701D64:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82701D6C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82701da0
	if (cr6.eq) goto loc_82701DA0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1364
	ctx.r11.s64 = ctx.r11.s64 + 1364;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-22852
	ctx.r10.s64 = ctx.r10.s64 + -22852;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82701da4
	goto loc_82701DA4;
loc_82701DA0:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82701DA4:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82701dc4
	if (!cr6.gt) goto loc_82701DC4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82701DC4:
	// bl 0x8218be28
	ctx.lr = 0x82701DC8;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82701e4c
	if (cr6.lt) goto loc_82701E4C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82701E08:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82701E10;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82701e08
	if (!cr6.lt) goto loc_82701E08;
loc_82701E4C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82701E54:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82701E5C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82701e90
	if (cr6.eq) goto loc_82701E90;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1404
	ctx.r11.s64 = ctx.r11.s64 + 1404;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-22692
	ctx.r10.s64 = ctx.r10.s64 + -22692;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82701e94
	goto loc_82701E94;
loc_82701E90:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82701E94:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82701eb4
	if (!cr6.gt) goto loc_82701EB4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82701EB4:
	// bl 0x8218be28
	ctx.lr = 0x82701EB8;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82701f3c
	if (cr6.lt) goto loc_82701F3C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82701EF8:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82701F00;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82701ef8
	if (!cr6.lt) goto loc_82701EF8;
loc_82701F3C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82701F44:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82701F4C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82701f80
	if (cr6.eq) goto loc_82701F80;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1444
	ctx.r11.s64 = ctx.r11.s64 + 1444;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-22532
	ctx.r10.s64 = ctx.r10.s64 + -22532;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82701f84
	goto loc_82701F84;
loc_82701F80:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82701F84:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82701fa4
	if (!cr6.gt) goto loc_82701FA4;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82701FA4:
	// bl 0x8218be28
	ctx.lr = 0x82701FA8;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x8270202c
	if (cr6.lt) goto loc_8270202C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82701FE8:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82701FF0;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82701fe8
	if (!cr6.lt) goto loc_82701FE8;
loc_8270202C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82702034:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x8270203C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702070
	if (cr6.eq) goto loc_82702070;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1484
	ctx.r11.s64 = ctx.r11.s64 + 1484;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-22372
	ctx.r10.s64 = ctx.r10.s64 + -22372;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702074
	goto loc_82702074;
loc_82702070:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702074:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702094
	if (!cr6.gt) goto loc_82702094;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702094:
	// bl 0x8218be28
	ctx.lr = 0x82702098;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x8270211c
	if (cr6.lt) goto loc_8270211C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_827020D8:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x827020E0;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x827020d8
	if (!cr6.lt) goto loc_827020D8;
loc_8270211C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82702124:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x8270212C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702160
	if (cr6.eq) goto loc_82702160;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1524
	ctx.r11.s64 = ctx.r11.s64 + 1524;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-22212
	ctx.r10.s64 = ctx.r10.s64 + -22212;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702164
	goto loc_82702164;
loc_82702160:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702164:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702184
	if (!cr6.gt) goto loc_82702184;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702184:
	// bl 0x8218be28
	ctx.lr = 0x82702188;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x8270220c
	if (cr6.lt) goto loc_8270220C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_827021C8:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x827021D0;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x827021c8
	if (!cr6.lt) goto loc_827021C8;
loc_8270220C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82702214:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x8270221C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702250
	if (cr6.eq) goto loc_82702250;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1564
	ctx.r11.s64 = ctx.r11.s64 + 1564;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-22052
	ctx.r10.s64 = ctx.r10.s64 + -22052;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702254
	goto loc_82702254;
loc_82702250:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702254:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702274
	if (!cr6.gt) goto loc_82702274;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702274:
	// bl 0x8218be28
	ctx.lr = 0x82702278;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x827022fc
	if (cr6.lt) goto loc_827022FC;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_827022B8:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x827022C0;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x827022b8
	if (!cr6.lt) goto loc_827022B8;
loc_827022FC:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82702304:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x8270230C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702340
	if (cr6.eq) goto loc_82702340;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1604
	ctx.r11.s64 = ctx.r11.s64 + 1604;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-21892
	ctx.r10.s64 = ctx.r10.s64 + -21892;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702344
	goto loc_82702344;
loc_82702340:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702344:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702364
	if (!cr6.gt) goto loc_82702364;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702364:
	// bl 0x8218be28
	ctx.lr = 0x82702368;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x827023ec
	if (cr6.lt) goto loc_827023EC;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_827023A8:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x827023B0;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x827023a8
	if (!cr6.lt) goto loc_827023A8;
loc_827023EC:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_827023F4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827023FC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702430
	if (cr6.eq) goto loc_82702430;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1644
	ctx.r11.s64 = ctx.r11.s64 + 1644;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-21732
	ctx.r10.s64 = ctx.r10.s64 + -21732;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702434
	goto loc_82702434;
loc_82702430:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702434:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702454
	if (!cr6.gt) goto loc_82702454;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702454:
	// bl 0x8218be28
	ctx.lr = 0x82702458;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x827024dc
	if (cr6.lt) goto loc_827024DC;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82702498:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x827024A0;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82702498
	if (!cr6.lt) goto loc_82702498;
loc_827024DC:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_827024E4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827024EC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702520
	if (cr6.eq) goto loc_82702520;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1684
	ctx.r11.s64 = ctx.r11.s64 + 1684;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-21572
	ctx.r10.s64 = ctx.r10.s64 + -21572;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702524
	goto loc_82702524;
loc_82702520:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702524:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702544
	if (!cr6.gt) goto loc_82702544;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702544:
	// bl 0x8218be28
	ctx.lr = 0x82702548;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x827025cc
	if (cr6.lt) goto loc_827025CC;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82702588:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82702590;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82702588
	if (!cr6.lt) goto loc_82702588;
loc_827025CC:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_827025D4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827025DC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702610
	if (cr6.eq) goto loc_82702610;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1724
	ctx.r11.s64 = ctx.r11.s64 + 1724;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-21412
	ctx.r10.s64 = ctx.r10.s64 + -21412;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702614
	goto loc_82702614;
loc_82702610:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702614:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702634
	if (!cr6.gt) goto loc_82702634;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702634:
	// bl 0x8218be28
	ctx.lr = 0x82702638;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x827026bc
	if (cr6.lt) goto loc_827026BC;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82702678:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82702680;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82702678
	if (!cr6.lt) goto loc_82702678;
loc_827026BC:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_827026C4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827026CC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702700
	if (cr6.eq) goto loc_82702700;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1764
	ctx.r11.s64 = ctx.r11.s64 + 1764;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-21252
	ctx.r10.s64 = ctx.r10.s64 + -21252;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702704
	goto loc_82702704;
loc_82702700:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702704:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702724
	if (!cr6.gt) goto loc_82702724;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702724:
	// bl 0x8218be28
	ctx.lr = 0x82702728;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x827027ac
	if (cr6.lt) goto loc_827027AC;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82702768:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82702770;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82702768
	if (!cr6.lt) goto loc_82702768;
loc_827027AC:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_827027B4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827027BC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827027f0
	if (cr6.eq) goto loc_827027F0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1804
	ctx.r11.s64 = ctx.r11.s64 + 1804;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-21092
	ctx.r10.s64 = ctx.r10.s64 + -21092;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827027f4
	goto loc_827027F4;
loc_827027F0:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827027F4:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702814
	if (!cr6.gt) goto loc_82702814;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702814:
	// bl 0x8218be28
	ctx.lr = 0x82702818;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x8270289c
	if (cr6.lt) goto loc_8270289C;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82702858:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82702860;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82702858
	if (!cr6.lt) goto loc_82702858;
loc_8270289C:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_827028A4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827028AC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827028e0
	if (cr6.eq) goto loc_827028E0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1844
	ctx.r11.s64 = ctx.r11.s64 + 1844;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-20932
	ctx.r10.s64 = ctx.r10.s64 + -20932;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827028e4
	goto loc_827028E4;
loc_827028E0:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827028E4:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702904
	if (!cr6.gt) goto loc_82702904;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702904:
	// bl 0x8218be28
	ctx.lr = 0x82702908;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82702928;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82702930:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82702938;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270296c
	if (cr6.eq) goto loc_8270296C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1884
	ctx.r11.s64 = ctx.r11.s64 + 1884;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-20772
	ctx.r10.s64 = ctx.r10.s64 + -20772;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702970
	goto loc_82702970;
loc_8270296C:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702970:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702990
	if (!cr6.gt) goto loc_82702990;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702990:
	// bl 0x8218be28
	ctx.lr = 0x82702994;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x827029B4;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_827029BC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827029C4;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827029f8
	if (cr6.eq) goto loc_827029F8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1924
	ctx.r11.s64 = ctx.r11.s64 + 1924;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-20612
	ctx.r10.s64 = ctx.r10.s64 + -20612;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827029fc
	goto loc_827029FC;
loc_827029F8:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827029FC:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702a1c
	if (!cr6.gt) goto loc_82702A1C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702A1C:
	// bl 0x8218be28
	ctx.lr = 0x82702A20;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82702A40;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82702A48:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82702A50;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702a84
	if (cr6.eq) goto loc_82702A84;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1964
	ctx.r11.s64 = ctx.r11.s64 + 1964;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-20452
	ctx.r10.s64 = ctx.r10.s64 + -20452;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702a88
	goto loc_82702A88;
loc_82702A84:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702A88:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702aa8
	if (!cr6.gt) goto loc_82702AA8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702AA8:
	// bl 0x8218be28
	ctx.lr = 0x82702AAC;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82702ACC;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82702AD4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82702ADC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702b10
	if (cr6.eq) goto loc_82702B10;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 + 2004;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-20292
	ctx.r10.s64 = ctx.r10.s64 + -20292;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702b14
	goto loc_82702B14;
loc_82702B10:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702B14:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702b34
	if (!cr6.gt) goto loc_82702B34;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702B34:
	// bl 0x8218be28
	ctx.lr = 0x82702B38;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82702B58;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82702B60:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82702B68;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702b9c
	if (cr6.eq) goto loc_82702B9C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2024
	ctx.r11.s64 = ctx.r11.s64 + 2024;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-20212
	ctx.r10.s64 = ctx.r10.s64 + -20212;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702ba0
	goto loc_82702BA0;
loc_82702B9C:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702BA0:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702bc0
	if (!cr6.gt) goto loc_82702BC0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702BC0:
	// bl 0x8218be28
	ctx.lr = 0x82702BC4;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82702BE4;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82702BEC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82702BF4;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702c28
	if (cr6.eq) goto loc_82702C28;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2064
	ctx.r11.s64 = ctx.r11.s64 + 2064;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-20052
	ctx.r10.s64 = ctx.r10.s64 + -20052;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702c2c
	goto loc_82702C2C;
loc_82702C28:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702C2C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702c4c
	if (!cr6.gt) goto loc_82702C4C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702C4C:
	// bl 0x8218be28
	ctx.lr = 0x82702C50;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82702C70;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82702C78:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82702C80;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702cb4
	if (cr6.eq) goto loc_82702CB4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2104
	ctx.r11.s64 = ctx.r11.s64 + 2104;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-19892
	ctx.r10.s64 = ctx.r10.s64 + -19892;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702cb8
	goto loc_82702CB8;
loc_82702CB4:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702CB8:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702cd8
	if (!cr6.gt) goto loc_82702CD8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702CD8:
	// bl 0x8218be28
	ctx.lr = 0x82702CDC;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82702CFC;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82702D04:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82702D0C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702d40
	if (cr6.eq) goto loc_82702D40;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2144
	ctx.r11.s64 = ctx.r11.s64 + 2144;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-19732
	ctx.r10.s64 = ctx.r10.s64 + -19732;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702d44
	goto loc_82702D44;
loc_82702D40:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702D44:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702d64
	if (!cr6.gt) goto loc_82702D64;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702D64:
	// bl 0x8218be28
	ctx.lr = 0x82702D68;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82702D88;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82702D90:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82702D98;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702dcc
	if (cr6.eq) goto loc_82702DCC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2184
	ctx.r11.s64 = ctx.r11.s64 + 2184;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-19572
	ctx.r10.s64 = ctx.r10.s64 + -19572;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702dd0
	goto loc_82702DD0;
loc_82702DCC:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702DD0:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702df0
	if (!cr6.gt) goto loc_82702DF0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702DF0:
	// bl 0x8218be28
	ctx.lr = 0x82702DF4;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82702E14;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82702E1C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82702E24;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702e58
	if (cr6.eq) goto loc_82702E58;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2224
	ctx.r11.s64 = ctx.r11.s64 + 2224;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-19412
	ctx.r10.s64 = ctx.r10.s64 + -19412;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702e5c
	goto loc_82702E5C;
loc_82702E58:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702E5C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702e7c
	if (!cr6.gt) goto loc_82702E7C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702E7C:
	// bl 0x8218be28
	ctx.lr = 0x82702E80;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82702EA0;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82702EA8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82702EB0;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702ee4
	if (cr6.eq) goto loc_82702EE4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2264
	ctx.r11.s64 = ctx.r11.s64 + 2264;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-19252
	ctx.r10.s64 = ctx.r10.s64 + -19252;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702ee8
	goto loc_82702EE8;
loc_82702EE4:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702EE8:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702f08
	if (!cr6.gt) goto loc_82702F08;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702F08:
	// bl 0x8218be28
	ctx.lr = 0x82702F0C;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82702F2C;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82702F34:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82702F3C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702f70
	if (cr6.eq) goto loc_82702F70;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-19092
	ctx.r10.s64 = ctx.r10.s64 + -19092;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82702f74
	goto loc_82702F74;
loc_82702F70:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82702F74:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82702f94
	if (!cr6.gt) goto loc_82702F94;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82702F94:
	// bl 0x8218be28
	ctx.lr = 0x82702F98;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82702FB8;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82702FC0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82702FC8;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82702ffc
	if (cr6.eq) goto loc_82702FFC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2344
	ctx.r11.s64 = ctx.r11.s64 + 2344;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-18932
	ctx.r10.s64 = ctx.r10.s64 + -18932;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82703000
	goto loc_82703000;
loc_82702FFC:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82703000:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82703020
	if (!cr6.gt) goto loc_82703020;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82703020:
	// bl 0x8218be28
	ctx.lr = 0x82703024;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82703044;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_8270304C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82703054;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82703088
	if (cr6.eq) goto loc_82703088;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1144
	ctx.r11.s64 = ctx.r11.s64 + 1144;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-23732
	ctx.r10.s64 = ctx.r10.s64 + -23732;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8270308c
	goto loc_8270308C;
loc_82703088:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8270308C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x827030ac
	if (!cr6.gt) goto loc_827030AC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827030AC:
	// bl 0x8218be28
	ctx.lr = 0x827030B0;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82703134
	if (cr6.lt) goto loc_82703134;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_827030F0:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x827030F8;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x827030f0
	if (!cr6.lt) goto loc_827030F0;
loc_82703134:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_8270313C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_82703140:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// stw r10,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r10.u32);
	// lwz r9,12(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// b 0x827048d8
	goto loc_827048D8;
loc_82703158:
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,30
	cr6.compare<uint32_t>(ctx.r11.u32, 30, xer);
	// bgt cr6,0x827048c0
	if (cr6.gt) goto loc_827048C0;
	// lis r12,-32144
	ctx.r12.s64 = -2106589184;
	// addi r12,r12,12672
	ctx.r12.s64 = ctx.r12.s64 + 12672;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_827033DC;
	case 1:
		goto loc_827032EC;
	case 2:
		goto loc_827035BC;
	case 3:
		goto loc_827034CC;
	case 4:
		goto loc_827031FC;
	case 5:
		goto loc_82703D3C;
	case 6:
		goto loc_82703F1C;
	case 7:
		goto loc_82703E2C;
	case 8:
		goto loc_8270388C;
	case 9:
		goto loc_827036AC;
	case 10:
		goto loc_8270379C;
	case 11:
		goto loc_8270397C;
	case 12:
		goto loc_82703C4C;
	case 13:
		goto loc_82703B5C;
	case 14:
		goto loc_82703A6C;
	case 15:
		goto loc_8270400C;
	case 16:
		goto loc_827048C0;
	case 17:
		goto loc_827040FC;
	case 18:
		goto loc_827041A4;
	case 19:
		goto loc_82704230;
	case 20:
		goto loc_827042BC;
	case 21:
		goto loc_82704348;
	case 22:
		goto loc_827043D4;
	case 23:
		goto loc_82704460;
	case 24:
		goto loc_827044EC;
	case 25:
		goto loc_82704578;
	case 26:
		goto loc_82704604;
	case 27:
		goto loc_82704690;
	case 28:
		goto loc_8270471C;
	case 29:
		goto loc_827047A8;
	case 30:
		goto loc_82704834;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_827031FC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82703204;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82703238
	if (cr6.eq) goto loc_82703238;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1184
	ctx.r11.s64 = ctx.r11.s64 + 1184;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-23572
	ctx.r10.s64 = ctx.r10.s64 + -23572;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8270323c
	goto loc_8270323C;
loc_82703238:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8270323C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x8270325c
	if (!cr6.gt) goto loc_8270325C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8270325C:
	// bl 0x8218be28
	ctx.lr = 0x82703260;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x827032e4
	if (cr6.lt) goto loc_827032E4;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_827032A0:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x827032A8;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x827032a0
	if (!cr6.lt) goto loc_827032A0;
loc_827032E4:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_827032EC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827032F4;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82703328
	if (cr6.eq) goto loc_82703328;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1224
	ctx.r11.s64 = ctx.r11.s64 + 1224;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-23412
	ctx.r10.s64 = ctx.r10.s64 + -23412;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8270332c
	goto loc_8270332C;
loc_82703328:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8270332C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x8270334c
	if (!cr6.gt) goto loc_8270334C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8270334C:
	// bl 0x8218be28
	ctx.lr = 0x82703350;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x827033d4
	if (cr6.lt) goto loc_827033D4;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703390:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703398;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703390
	if (!cr6.lt) goto loc_82703390;
loc_827033D4:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_827033DC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827033E4;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82703418
	if (cr6.eq) goto loc_82703418;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1264
	ctx.r11.s64 = ctx.r11.s64 + 1264;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-23252
	ctx.r10.s64 = ctx.r10.s64 + -23252;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8270341c
	goto loc_8270341C;
loc_82703418:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8270341C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x8270343c
	if (!cr6.gt) goto loc_8270343C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8270343C:
	// bl 0x8218be28
	ctx.lr = 0x82703440;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x827034c4
	if (cr6.lt) goto loc_827034C4;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703480:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703488;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703480
	if (!cr6.lt) goto loc_82703480;
loc_827034C4:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_827034CC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827034D4;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82703508
	if (cr6.eq) goto loc_82703508;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1304
	ctx.r11.s64 = ctx.r11.s64 + 1304;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-23092
	ctx.r10.s64 = ctx.r10.s64 + -23092;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8270350c
	goto loc_8270350C;
loc_82703508:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8270350C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x8270352c
	if (!cr6.gt) goto loc_8270352C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8270352C:
	// bl 0x8218be28
	ctx.lr = 0x82703530;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x827035b4
	if (cr6.lt) goto loc_827035B4;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703570:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703578;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703570
	if (!cr6.lt) goto loc_82703570;
loc_827035B4:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_827035BC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827035C4;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827035f8
	if (cr6.eq) goto loc_827035F8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1344
	ctx.r11.s64 = ctx.r11.s64 + 1344;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-22932
	ctx.r10.s64 = ctx.r10.s64 + -22932;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827035fc
	goto loc_827035FC;
loc_827035F8:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827035FC:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x8270361c
	if (!cr6.gt) goto loc_8270361C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8270361C:
	// bl 0x8218be28
	ctx.lr = 0x82703620;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x827036a4
	if (cr6.lt) goto loc_827036A4;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703660:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703668;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703660
	if (!cr6.lt) goto loc_82703660;
loc_827036A4:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_827036AC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827036B4;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827036e8
	if (cr6.eq) goto loc_827036E8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1384
	ctx.r11.s64 = ctx.r11.s64 + 1384;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-22772
	ctx.r10.s64 = ctx.r10.s64 + -22772;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827036ec
	goto loc_827036EC;
loc_827036E8:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827036EC:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x8270370c
	if (!cr6.gt) goto loc_8270370C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8270370C:
	// bl 0x8218be28
	ctx.lr = 0x82703710;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82703794
	if (cr6.lt) goto loc_82703794;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703750:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703758;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703750
	if (!cr6.lt) goto loc_82703750;
loc_82703794:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_8270379C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827037A4;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827037d8
	if (cr6.eq) goto loc_827037D8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 + 1424;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-22612
	ctx.r10.s64 = ctx.r10.s64 + -22612;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827037dc
	goto loc_827037DC;
loc_827037D8:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827037DC:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x827037fc
	if (!cr6.gt) goto loc_827037FC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827037FC:
	// bl 0x8218be28
	ctx.lr = 0x82703800;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82703884
	if (cr6.lt) goto loc_82703884;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703840:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703848;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703840
	if (!cr6.lt) goto loc_82703840;
loc_82703884:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_8270388C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82703894;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827038c8
	if (cr6.eq) goto loc_827038C8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1464
	ctx.r11.s64 = ctx.r11.s64 + 1464;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-22452
	ctx.r10.s64 = ctx.r10.s64 + -22452;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827038cc
	goto loc_827038CC;
loc_827038C8:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827038CC:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x827038ec
	if (!cr6.gt) goto loc_827038EC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827038EC:
	// bl 0x8218be28
	ctx.lr = 0x827038F0;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82703974
	if (cr6.lt) goto loc_82703974;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703930:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703938;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703930
	if (!cr6.lt) goto loc_82703930;
loc_82703974:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_8270397C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82703984;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827039b8
	if (cr6.eq) goto loc_827039B8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1504
	ctx.r11.s64 = ctx.r11.s64 + 1504;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-22292
	ctx.r10.s64 = ctx.r10.s64 + -22292;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827039bc
	goto loc_827039BC;
loc_827039B8:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827039BC:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x827039dc
	if (!cr6.gt) goto loc_827039DC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827039DC:
	// bl 0x8218be28
	ctx.lr = 0x827039E0;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82703a64
	if (cr6.lt) goto loc_82703A64;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703A20:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703A28;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703a20
	if (!cr6.lt) goto loc_82703A20;
loc_82703A64:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82703A6C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82703A74;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82703aa8
	if (cr6.eq) goto loc_82703AA8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1544
	ctx.r11.s64 = ctx.r11.s64 + 1544;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-22132
	ctx.r10.s64 = ctx.r10.s64 + -22132;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82703aac
	goto loc_82703AAC;
loc_82703AA8:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82703AAC:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82703acc
	if (!cr6.gt) goto loc_82703ACC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82703ACC:
	// bl 0x8218be28
	ctx.lr = 0x82703AD0;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82703b54
	if (cr6.lt) goto loc_82703B54;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703B10:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703B18;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703b10
	if (!cr6.lt) goto loc_82703B10;
loc_82703B54:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82703B5C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82703B64;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82703b98
	if (cr6.eq) goto loc_82703B98;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1584
	ctx.r11.s64 = ctx.r11.s64 + 1584;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-21972
	ctx.r10.s64 = ctx.r10.s64 + -21972;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82703b9c
	goto loc_82703B9C;
loc_82703B98:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82703B9C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82703bbc
	if (!cr6.gt) goto loc_82703BBC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82703BBC:
	// bl 0x8218be28
	ctx.lr = 0x82703BC0;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82703c44
	if (cr6.lt) goto loc_82703C44;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703C00:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703C08;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703c00
	if (!cr6.lt) goto loc_82703C00;
loc_82703C44:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82703C4C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82703C54;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82703c88
	if (cr6.eq) goto loc_82703C88;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1624
	ctx.r11.s64 = ctx.r11.s64 + 1624;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-21812
	ctx.r10.s64 = ctx.r10.s64 + -21812;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82703c8c
	goto loc_82703C8C;
loc_82703C88:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82703C8C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82703cac
	if (!cr6.gt) goto loc_82703CAC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82703CAC:
	// bl 0x8218be28
	ctx.lr = 0x82703CB0;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82703d34
	if (cr6.lt) goto loc_82703D34;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703CF0:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703CF8;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703cf0
	if (!cr6.lt) goto loc_82703CF0;
loc_82703D34:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82703D3C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82703D44;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82703d78
	if (cr6.eq) goto loc_82703D78;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1664
	ctx.r11.s64 = ctx.r11.s64 + 1664;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-21652
	ctx.r10.s64 = ctx.r10.s64 + -21652;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82703d7c
	goto loc_82703D7C;
loc_82703D78:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82703D7C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82703d9c
	if (!cr6.gt) goto loc_82703D9C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82703D9C:
	// bl 0x8218be28
	ctx.lr = 0x82703DA0;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82703e24
	if (cr6.lt) goto loc_82703E24;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703DE0:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703DE8;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703de0
	if (!cr6.lt) goto loc_82703DE0;
loc_82703E24:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82703E2C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82703E34;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82703e68
	if (cr6.eq) goto loc_82703E68;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1704
	ctx.r11.s64 = ctx.r11.s64 + 1704;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-21492
	ctx.r10.s64 = ctx.r10.s64 + -21492;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82703e6c
	goto loc_82703E6C;
loc_82703E68:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82703E6C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82703e8c
	if (!cr6.gt) goto loc_82703E8C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82703E8C:
	// bl 0x8218be28
	ctx.lr = 0x82703E90;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82703f14
	if (cr6.lt) goto loc_82703F14;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703ED0:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703ED8;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703ed0
	if (!cr6.lt) goto loc_82703ED0;
loc_82703F14:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_82703F1C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82703F24;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82703f58
	if (cr6.eq) goto loc_82703F58;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1744
	ctx.r11.s64 = ctx.r11.s64 + 1744;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-21332
	ctx.r10.s64 = ctx.r10.s64 + -21332;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82703f5c
	goto loc_82703F5C;
loc_82703F58:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82703F5C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82703f7c
	if (!cr6.gt) goto loc_82703F7C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82703F7C:
	// bl 0x8218be28
	ctx.lr = 0x82703F80;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x82704004
	if (cr6.lt) goto loc_82704004;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_82703FC0:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x82703FC8;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x82703fc0
	if (!cr6.lt) goto loc_82703FC0;
loc_82704004:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_8270400C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82704014;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82704048
	if (cr6.eq) goto loc_82704048;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1784
	ctx.r11.s64 = ctx.r11.s64 + 1784;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-21172
	ctx.r10.s64 = ctx.r10.s64 + -21172;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8270404c
	goto loc_8270404C;
loc_82704048:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8270404C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r31,12(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r31,312
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x8270406c
	if (!cr6.gt) goto loc_8270406C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8270406C:
	// bl 0x8218be28
	ctx.lr = 0x82704070;
	sub_8218BE28(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8270313c
	if (cr6.eq) goto loc_8270313C;
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x827040f4
	if (cr6.lt) goto loc_827040F4;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// addi r25,r23,304
	r25.s64 = r23.s64 + 304;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// li r27,4
	r27.s64 = 4;
	// ori r29,r11,2
	r29.u64 = ctx.r11.u64 | 2;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r30,r11,3
	r30.u64 = ctx.r11.u64 | 3;
	// lis r11,12288
	ctx.r11.s64 = 805306368;
	// ori r31,r11,4
	r31.u64 = ctx.r11.u64 | 4;
loc_827040B0:
	// addi r3,r25,-280
	ctx.r3.s64 = r25.s64 + -280;
	// bl 0x82974560
	ctx.lr = 0x827040B8;
	sub_82974560(ctx, base);
	// lbz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U8(r25.u32 + 0);
	// addi r11,r25,-256
	ctx.r11.s64 = r25.s64 + -256;
	// stw r27,-256(r25)
	REX_STORE_U32(r25.u32 + -256, r27.u32);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r26,-252(r25)
	REX_STORE_U64(r25.u32 + -252, r26.u64);
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// stw r28,-244(r25)
	REX_STORE_U32(r25.u32 + -244, r28.u32);
	// stw r29,-232(r25)
	REX_STORE_U32(r25.u32 + -232, r29.u32);
	// stw r30,-220(r25)
	REX_STORE_U32(r25.u32 + -220, r30.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r31,-208(r25)
	REX_STORE_U32(r25.u32 + -208, r31.u32);
	// stb r10,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r10.u8);
	// stw r11,-264(r25)
	REX_STORE_U32(r25.u32 + -264, ctx.r11.u32);
	// addi r25,r25,312
	r25.s64 = r25.s64 + 312;
	// bge cr6,0x827040b0
	if (!cr6.lt) goto loc_827040B0;
loc_827040F4:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x82703140
	goto loc_82703140;
loc_827040FC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82704104;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82704138
	if (cr6.eq) goto loc_82704138;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1824
	ctx.r11.s64 = ctx.r11.s64 + 1824;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-21012
	ctx.r10.s64 = ctx.r10.s64 + -21012;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8270413c
	goto loc_8270413C;
loc_82704138:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8270413C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x8270415c
	if (!cr6.gt) goto loc_8270415C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8270415C:
	// bl 0x8218be28
	ctx.lr = 0x82704160;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82704180;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82704188:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8270418C:
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// stw r11,8(r22)
	REX_STORE_U32(r22.u32 + 8, ctx.r11.u32);
	// lwz r9,12(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 12);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// b 0x827048d8
	goto loc_827048D8;
loc_827041A4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827041AC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827041e0
	if (cr6.eq) goto loc_827041E0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1864
	ctx.r11.s64 = ctx.r11.s64 + 1864;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-20852
	ctx.r10.s64 = ctx.r10.s64 + -20852;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827041e4
	goto loc_827041E4;
loc_827041E0:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827041E4:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82704204
	if (!cr6.gt) goto loc_82704204;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82704204:
	// bl 0x8218be28
	ctx.lr = 0x82704208;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82704228;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82704230:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82704238;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270426c
	if (cr6.eq) goto loc_8270426C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1904
	ctx.r11.s64 = ctx.r11.s64 + 1904;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-20692
	ctx.r10.s64 = ctx.r10.s64 + -20692;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82704270
	goto loc_82704270;
loc_8270426C:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82704270:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82704290
	if (!cr6.gt) goto loc_82704290;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82704290:
	// bl 0x8218be28
	ctx.lr = 0x82704294;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x827042B4;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_827042BC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827042C4;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827042f8
	if (cr6.eq) goto loc_827042F8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1944
	ctx.r11.s64 = ctx.r11.s64 + 1944;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-20532
	ctx.r10.s64 = ctx.r10.s64 + -20532;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827042fc
	goto loc_827042FC;
loc_827042F8:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827042FC:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x8270431c
	if (!cr6.gt) goto loc_8270431C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8270431C:
	// bl 0x8218be28
	ctx.lr = 0x82704320;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82704340;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82704348:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82704350;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82704384
	if (cr6.eq) goto loc_82704384;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,1984
	ctx.r11.s64 = ctx.r11.s64 + 1984;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-20372
	ctx.r10.s64 = ctx.r10.s64 + -20372;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82704388
	goto loc_82704388;
loc_82704384:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82704388:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x827043a8
	if (!cr6.gt) goto loc_827043A8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827043A8:
	// bl 0x8218be28
	ctx.lr = 0x827043AC;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x827043CC;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_827043D4:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827043DC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82704410
	if (cr6.eq) goto loc_82704410;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2024
	ctx.r11.s64 = ctx.r11.s64 + 2024;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-20212
	ctx.r10.s64 = ctx.r10.s64 + -20212;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82704414
	goto loc_82704414;
loc_82704410:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82704414:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82704434
	if (!cr6.gt) goto loc_82704434;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82704434:
	// bl 0x8218be28
	ctx.lr = 0x82704438;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82704458;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82704460:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82704468;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270449c
	if (cr6.eq) goto loc_8270449C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2044
	ctx.r11.s64 = ctx.r11.s64 + 2044;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-20132
	ctx.r10.s64 = ctx.r10.s64 + -20132;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827044a0
	goto loc_827044A0;
loc_8270449C:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827044A0:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x827044c0
	if (!cr6.gt) goto loc_827044C0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827044C0:
	// bl 0x8218be28
	ctx.lr = 0x827044C4;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x827044E4;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_827044EC:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827044F4;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82704528
	if (cr6.eq) goto loc_82704528;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2084
	ctx.r11.s64 = ctx.r11.s64 + 2084;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-19972
	ctx.r10.s64 = ctx.r10.s64 + -19972;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8270452c
	goto loc_8270452C;
loc_82704528:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8270452C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x8270454c
	if (!cr6.gt) goto loc_8270454C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8270454C:
	// bl 0x8218be28
	ctx.lr = 0x82704550;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82704570;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82704578:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82704580;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827045b4
	if (cr6.eq) goto loc_827045B4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2124
	ctx.r11.s64 = ctx.r11.s64 + 2124;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-19812
	ctx.r10.s64 = ctx.r10.s64 + -19812;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827045b8
	goto loc_827045B8;
loc_827045B4:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827045B8:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x827045d8
	if (!cr6.gt) goto loc_827045D8;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827045D8:
	// bl 0x8218be28
	ctx.lr = 0x827045DC;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x827045FC;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82704604:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x8270460C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82704640
	if (cr6.eq) goto loc_82704640;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2164
	ctx.r11.s64 = ctx.r11.s64 + 2164;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-19652
	ctx.r10.s64 = ctx.r10.s64 + -19652;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82704644
	goto loc_82704644;
loc_82704640:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82704644:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82704664
	if (!cr6.gt) goto loc_82704664;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82704664:
	// bl 0x8218be28
	ctx.lr = 0x82704668;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82704688;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82704690:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82704698;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827046cc
	if (cr6.eq) goto loc_827046CC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2204
	ctx.r11.s64 = ctx.r11.s64 + 2204;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-19492
	ctx.r10.s64 = ctx.r10.s64 + -19492;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827046d0
	goto loc_827046D0;
loc_827046CC:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827046D0:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x827046f0
	if (!cr6.gt) goto loc_827046F0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_827046F0:
	// bl 0x8218be28
	ctx.lr = 0x827046F4;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x82704714;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_8270471C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x82704724;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82704758
	if (cr6.eq) goto loc_82704758;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2244
	ctx.r11.s64 = ctx.r11.s64 + 2244;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-19332
	ctx.r10.s64 = ctx.r10.s64 + -19332;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x8270475c
	goto loc_8270475C;
loc_82704758:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_8270475C:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x8270477c
	if (!cr6.gt) goto loc_8270477C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8270477C:
	// bl 0x8218be28
	ctx.lr = 0x82704780;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x827047A0;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_827047A8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x827047B0;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827047e4
	if (cr6.eq) goto loc_827047E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2284
	ctx.r11.s64 = ctx.r11.s64 + 2284;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-19172
	ctx.r10.s64 = ctx.r10.s64 + -19172;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x827047e8
	goto loc_827047E8;
loc_827047E4:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_827047E8:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82704808
	if (!cr6.gt) goto loc_82704808;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82704808:
	// bl 0x8218be28
	ctx.lr = 0x8270480C;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x8270482C;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_82704834:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x8270483C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82704870
	if (cr6.eq) goto loc_82704870;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r26,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// addi r11,r11,2324
	ctx.r11.s64 = ctx.r11.s64 + 2324;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r26.u32);
	// addi r10,r10,-19012
	ctx.r10.s64 = ctx.r10.s64 + -19012;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// b 0x82704874
	goto loc_82704874;
loc_82704870:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82704874:
	// lis r11,210
	ctx.r11.s64 = 13762560;
	// stw r9,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// lwz r30,12(r21)
	r30.u64 = REX_LOAD_U32(r21.u32 + 12);
	// ori r11,r11,3360
	ctx.r11.u64 = ctx.r11.u64 | 3360;
	// mulli r3,r30,312
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(312));
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, xer);
	// ble cr6,0x82704894
	if (!cr6.gt) goto loc_82704894;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82704894:
	// bl 0x8218be28
	ctx.lr = 0x82704898;
	sub_8218BE28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82704188
	if (cr6.eq) goto loc_82704188;
	// lis r11,-32145
	ctx.r11.s64 = -2106654720;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r6,r11,-5176
	ctx.r6.s64 = ctx.r11.s64 + -5176;
	// li r4,312
	ctx.r4.s64 = 312;
	// bl 0x82120220
	ctx.lr = 0x827048B8;
	sub_82120220(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// b 0x8270418c
	goto loc_8270418C;
loc_827048C0:
	// mr r20,r26
	r20.u64 = r26.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x827048d8
	if (cr6.eq) goto loc_827048D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826e7258
	ctx.lr = 0x827048D8;
	sub_826E7258(ctx, base);
loc_827048D8:
	// clrlwi r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x827048f8
	if (cr6.eq) goto loc_827048F8;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// stw r11,16(r22)
	REX_STORE_U32(r22.u32 + 16, ctx.r11.u32);
	// stw r22,0(r21)
	REX_STORE_U32(r21.u32 + 0, r22.u32);
	// stw r26,20(r21)
	REX_STORE_U32(r21.u32 + 20, r26.u32);
loc_827048F8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8298eaf8
	return;
}

DEFINE_REX_FUNC(sub_828B3A48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lis r10,-32116
	ctx.r10.s64 = -2104754176;
	// addi r5,r11,-17312
	ctx.r5.s64 = ctx.r11.s64 + -17312;
	// lis r11,-32116
	ctx.r11.s64 = -2104754176;
	// addi r4,r10,11224
	ctx.r4.s64 = ctx.r10.s64 + 11224;
	// addi r3,r11,14184
	ctx.r3.s64 = ctx.r11.s64 + 14184;
	// b 0x828af7e0
	sub_828AF7E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_828B4440) {
	REX_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,116
	ctx.r3.s64 = ctx.r11.s64 + 116;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828B6300) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828b6444
	if (cr6.eq) goto loc_828B6444;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828b6324
	if (!cr6.eq) goto loc_828B6324;
	// lfs f0,168(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828b6328
	goto loc_828B6328;
loc_828B6324:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_828B6328:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// stw r10,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r10.u32);
	// bgt cr6,0x828b6444
	if (cr6.gt) goto loc_828B6444;
	// lis r12,-32117
	ctx.r12.s64 = -2104819712;
	// addi r12,r12,25428
	ctx.r12.s64 = ctx.r12.s64 + 25428;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_828B636C;
	case 1:
		goto loc_828B638C;
	case 2:
		goto loc_828B63AC;
	case 3:
		goto loc_828B63CC;
	case 4:
		goto loc_828B63EC;
	case 5:
		goto loc_828B6418;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_828B636C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f12,-6548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6548);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// blr 
	return;
loc_828B638C:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f12,-6548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6548);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// blr 
	return;
loc_828B63AC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f12,-6548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6548);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// blr 
	return;
loc_828B63CC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f12,-6548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6548);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!cr6.gt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// blr 
	return;
loc_828B63EC:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f12,-6548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6548);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// blr 
	return;
loc_828B6418:
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfs f12,-6548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6548);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f13
	cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x828b6438
	if (!cr6.lt) goto loc_828B6438;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (cr6.lt) return;
loc_828B6438:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// blr 
	return;
loc_828B6444:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828C1750) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r11,364(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 364);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x828c17ac
	if (!cr6.eq) goto loc_828C17AC;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x828c17ac
	if (!cr6.eq) goto loc_828C17AC;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828c17ac
	if (!cr6.eq) goto loc_828C17AC;
	// lbz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 136);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828c1794
	if (cr6.eq) goto loc_828C1794;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828c17ac
	if (!cr6.eq) goto loc_828C17AC;
loc_828C1794:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x828c17b0
	if (cr6.eq) goto loc_828C17B0;
loc_828C17AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_828C17B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828C89D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac8
	ctx.lr = 0x828C89D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C8A00;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828c8a18
	if (cr6.eq) goto loc_828C8A18;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x828c8788
	ctx.lr = 0x828C8A10;
	sub_828C8788(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x828c8a1c
	goto loc_828C8A1C;
loc_828C8A18:
	// li r31,0
	r31.s64 = 0;
loc_828C8A1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828C8A38;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_828CC400) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828CC42C;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x828cc464
	if (!cr6.gt) goto loc_828CC464;
loc_828CC440:
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x828cc464
	if (cr6.eq) goto loc_828CC464;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r8,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x828cc440
	if (cr6.gt) goto loc_828CC440;
loc_828CC464:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828CF058) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_828CF088:
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// srawi r10,r11,5
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// slw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x828cf0b8
	if (cr6.eq) goto loc_828CF0B8;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r4,82(r10)
	REX_STORE_U16(ctx.r10.u32 + 82, ctx.r4.u16);
loc_828CF0B8:
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x828cf088
	if (cr6.lt) goto loc_828CF088;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828D6448) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298ea90
	ctx.lr = 0x828D6450;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-2640(r1)
	ea = -2640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// addi r19,r21,224
	r19.s64 = r21.s64 + 224;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// lwz r11,144(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 144);
	// li r29,0
	r29.s64 = 0;
	// lvx128 v0,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r17,1
	r17.s64 = 1;
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lvx128 v13,r19,r7
	ea = (r19.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// lvx128 v0,r19,r9
	ea = (r19.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,48
	ctx.r8.s64 = 48;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// lvx128 v13,r19,r8
	ea = (r19.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// bne cr6,0x828d64ec
	if (!cr6.eq) goto loc_828D64EC;
	// lwz r11,144(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 144);
	// rotlwi r31,r11,0
	r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lhz r10,146(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 146);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_828D64EC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x828d6b10
	if (!cr6.gt) goto loc_828D6B10;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// addi r11,r11,9600
	ctx.r11.s64 = ctx.r11.s64 + 9600;
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// li r18,2
	r18.s64 = 2;
	// lfs f31,-6968(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6968);
	f31.f64 = double(temp.f32);
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r11,r11,9588
	ctx.r11.s64 = ctx.r11.s64 + 9588;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r14,r11,9612
	r14.s64 = ctx.r11.s64 + 9612;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r11,r11,-8560
	ctx.r11.s64 = ctx.r11.s64 + -8560;
	// stw r11,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// addi r23,r11,3264
	r23.s64 = ctx.r11.s64 + 3264;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r16,r11,65535
	r16.u64 = ctx.r11.u64 | 65535;
loc_828D6548:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828d6614
	if (cr6.eq) goto loc_828D6614;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// beq cr6,0x828d6ae0
	if (cr6.eq) goto loc_828D6AE0;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lvx128 v0,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lvx128 v7,r19,r8
	ea = (r19.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r19,r7
	ea = (r19.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvx128 v12,r19,r9
	ea = (r19.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v6,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// lvx128 v9,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v4,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// lvx128 v8,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v5,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vspltw v3,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// vmulfp128 v6,v0,v6
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vspltw v2,v9,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xAA));
	// vmulfp128 v4,v0,v4
	simde_mm_store_ps(ctx.v4.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v4.f32)));
	// vspltw v1,v8,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xAA));
	// vmulfp128 v5,v0,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v0,v0,v3,v7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vspltw v7,v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xAA));
	// vspltw v3,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xAA));
	// vspltw v11,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// vspltw v10,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vmaddfp v7,v13,v7,v6
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v6,v13,v3,v5
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v5,v13,v2,v4
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v0,v13,v1,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw v13,v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x55));
	// vspltw v9,v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x55));
	// vmaddfp v11,v12,v11,v7
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v10,v12,v10,v6
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v13,v12,v13,v5
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v0,v12,v9,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_828D6614:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8294e348
	ctx.lr = 0x828D662C;
	sub_8294E348(ctx, base);
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,576
	ctx.r11.s64 = ctx.r1.s64 + 576;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r29,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, r29.u32);
	// stb r17,592(r1)
	REX_STORE_U8(ctx.r1.u32 + 592, r17.u8);
	// stw r29,616(r1)
	REX_STORE_U32(ctx.r1.u32 + 616, r29.u32);
	// stw r29,620(r1)
	REX_STORE_U32(ctx.r1.u32 + 620, r29.u32);
	// stw r29,1680(r1)
	REX_STORE_U32(ctx.r1.u32 + 1680, r29.u32);
	// stw r11,1684(r1)
	REX_STORE_U32(ctx.r1.u32 + 1684, ctx.r11.u32);
	// stw r29,548(r1)
	REX_STORE_U32(ctx.r1.u32 + 548, r29.u32);
	// stw r29,552(r1)
	REX_STORE_U32(ctx.r1.u32 + 552, r29.u32);
	// stw r16,596(r1)
	REX_STORE_U32(ctx.r1.u32 + 596, r16.u32);
	// stw r16,604(r1)
	REX_STORE_U32(ctx.r1.u32 + 604, r16.u32);
	// stw r29,556(r1)
	REX_STORE_U32(ctx.r1.u32 + 556, r29.u32);
	// stw r29,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, r29.u32);
	// stw r4,564(r1)
	REX_STORE_U32(ctx.r1.u32 + 564, ctx.r4.u32);
	// stw r25,568(r1)
	REX_STORE_U32(ctx.r1.u32 + 568, r25.u32);
	// stw r29,600(r1)
	REX_STORE_U32(ctx.r1.u32 + 600, r29.u32);
	// stw r29,608(r1)
	REX_STORE_U32(ctx.r1.u32 + 608, r29.u32);
	// bl 0x829540b8
	ctx.lr = 0x828D668C;
	sub_829540B8(ctx, base);
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 16);
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lvx128 v13,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// lhz r8,22(r28)
	ctx.r8.u64 = REX_LOAD_U16(r28.u32 + 22);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mr r24,r29
	r24.u64 = r29.u64;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,1840
	ctx.r9.s64 = ctx.r1.s64 + 1840;
	// mr r22,r29
	r22.u64 = r29.u64;
	// lvx128 v12,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r10,18(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 18);
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r9,20(r28)
	ctx.r9.u64 = REX_LOAD_U16(r28.u32 + 20);
	// lvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,1856
	ctx.r7.s64 = ctx.r1.s64 + 1856;
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// rotlwi r9,r9,4
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 4);
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// lvx128 v11,r10,r20
	ea = (ctx.r10.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r9,r20
	ea = (ctx.r9.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,1872
	ctx.r7.s64 = ctx.r1.s64 + 1872;
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// stfs f31,1968(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 1968, temp.u32);
	// lvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,1888
	ctx.r7.s64 = ctx.r1.s64 + 1888;
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,1712
	ctx.r11.s64 = ctx.r1.s64 + 1712;
	// lvx128 v0,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r29,1976(r1)
	REX_STORE_U8(ctx.r1.u32 + 1976, r29.u8);
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v0,r23,r11
	ea = (r23.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,1728
	ctx.r11.s64 = ctx.r1.s64 + 1728;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,32
	ctx.r11.s64 = 32;
	// lvx128 v0,r23,r11
	ea = (r23.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,1744
	ctx.r11.s64 = ctx.r1.s64 + 1744;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v0,r23,r11
	ea = (r23.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,1760
	ctx.r11.s64 = ctx.r1.s64 + 1760;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// stvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x828d6864
	if (!cr6.eq) goto loc_828D6864;
	// stw r17,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r17.u32);
	// mr r26,r29
	r26.u64 = r29.u64;
	// stw r18,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, r18.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r29,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r29.u32);
	// addi r27,r1,216
	r27.s64 = ctx.r1.s64 + 216;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_828D6788:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// lvx128 v1,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lvx128 v2,r6,r7
	ea = (ctx.r6.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r31,r11
	ctx.r8.u64 = r31.u64 + ctx.r11.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828cd4f0
	ctx.lr = 0x828D67C8;
	sub_828CD4F0(ctx, base);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r26,r3,r26
	r26.u64 = ctx.r3.u64 + r26.u64;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpwi cr6,r31,48
	cr6.compare<int32_t>(r31.s32, 48, xer);
	// blt cr6,0x828d6788
	if (cr6.lt) goto loc_828D6788;
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// lhz r8,60(r21)
	ctx.r8.u64 = REX_LOAD_U16(r21.u32 + 60);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// stw r14,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r14.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r23,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, r23.u32);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// stw r11,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// lwz r11,600(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 600);
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// lwz r11,608(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// stw r11,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// bl 0x829533d8
	ctx.lr = 0x828D6838;
	sub_829533D8(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// stw r25,568(r1)
	REX_STORE_U32(ctx.r1.u32 + 568, r25.u32);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x828d39c8
	ctx.lr = 0x828D684C;
	sub_828D39C8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r31,112(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_828D6864:
	// lhz r11,22(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 22);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828d6a98
	if (cr6.eq) goto loc_828D6A98;
	// addi r11,r1,480
	ctx.r11.s64 = ctx.r1.s64 + 480;
	// stw r17,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r17.u32);
	// li r27,4
	r27.s64 = 4;
	// stw r18,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r18.u32);
	// stw r29,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r29.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r26,r1,200
	r26.s64 = ctx.r1.s64 + 200;
	// mr r31,r29
	r31.u64 = r29.u64;
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,432
	ctx.r11.s64 = ctx.r1.s64 + 432;
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_828D689C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// rlwinm r6,r11,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// lvx128 v1,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lvx128 v2,r6,r7
	ea = (ctx.r6.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r31,r11
	ctx.r8.u64 = r31.u64 + ctx.r11.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828cd4f0
	ctx.lr = 0x828D68DC;
	sub_828CD4F0(ctx, base);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r27,r3,r27
	r27.u64 = ctx.r3.u64 + r27.u64;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(r31.s32, 32, xer);
	// blt cr6,0x828d689c
	if (cr6.lt) goto loc_828D689C;
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// lhz r8,60(r21)
	ctx.r8.u64 = REX_LOAD_U16(r21.u32 + 60);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r14,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r14.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r23,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r23.u32);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lwz r11,600(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 600);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,608(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x829533d8
	ctx.lr = 0x828D694C;
	sub_829533D8(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// stw r25,568(r1)
	REX_STORE_U32(ctx.r1.u32 + 568, r25.u32);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x828d39c8
	ctx.lr = 0x828D6960;
	sub_828D39C8(ctx, base);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// lhz r11,22(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 22);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r17
	r26.u64 = r17.u64;
	// stw r29,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, r29.u32);
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// stw r18,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, r18.u32);
	// mr r27,r17
	r27.u64 = r17.u64;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,3
	ctx.r10.s64 = 3;
	// lvx128 v0,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// stw r10,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_828D69C0:
	// addi r11,r1,204
	ctx.r11.s64 = ctx.r1.s64 + 204;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// lwzx r7,r31,r11
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// addi r6,r1,268
	ctx.r6.s64 = ctx.r1.s64 + 268;
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lvx128 v1,r30,r8
	ea = (r30.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwzx r3,r31,r6
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + ctx.r6.u32);
	// add r8,r30,r11
	ctx.r8.u64 = r30.u64 + ctx.r11.u64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lvx128 v2,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x828cd4f0
	ctx.lr = 0x828D6A08;
	sub_828CD4F0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r26,r3,r26
	r26.u64 = ctx.r3.u64 + r26.u64;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpwi cr6,r31,8
	cr6.compare<int32_t>(r31.s32, 8, xer);
	// blt cr6,0x828d69c0
	if (cr6.lt) goto loc_828D69C0;
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// lhz r8,60(r21)
	ctx.r8.u64 = REX_LOAD_U16(r21.u32 + 60);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r23,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r23.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lwz r11,600(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 600);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,608(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 608);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x829533d8
	ctx.lr = 0x828D6A74;
	sub_829533D8(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// stw r25,568(r1)
	REX_STORE_U32(ctx.r1.u32 + 568, r25.u32);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x828d39c8
	ctx.lr = 0x828D6A88;
	sub_828D39C8(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r31,112(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_828D6A98:
	// clrlwi r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828d6ab4
	if (!cr6.eq) goto loc_828D6AB4;
	// clrlwi r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// beq cr6,0x828d6ab8
	if (cr6.eq) goto loc_828D6AB8;
loc_828D6AB4:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_828D6AB8:
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// addi r3,r1,1696
	ctx.r3.s64 = ctx.r1.s64 + 1696;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x82952ec0
	ctx.lr = 0x828D6ACC;
	sub_82952EC0(ctx, base);
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r11,496(r1)
	REX_STORE_U32(ctx.r1.u32 + 496, ctx.r11.u32);
loc_828D6AE0:
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// bne cr6,0x828d6548
	if (!cr6.eq) goto loc_828D6548;
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_828D6B10:
	// addi r1,r1,2640
	ctx.r1.s64 = ctx.r1.s64 + 2640;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8298eae0
	return;
}

DEFINE_REX_FUNC(sub_82923730) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,96
	ctx.r11.s64 = 96;
	// li r10,112
	ctx.r10.s64 = 112;
	// lvx128 v0,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829239A0) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	uint32_t ea{};
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// li r4,48
	ctx.r4.s64 = 48;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v13,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v12,v12,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v11,v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmrghw v0,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v13,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,132(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// rlwinm r10,r6,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvx128 v13,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v12,v12,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v11,v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmrghw v0,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v13,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8292BC78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f0,3068(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-8560
	ctx.r10.s64 = ctx.r10.s64 + -8560;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r31,160
	r31.s64 = 160;
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,144
	ctx.r9.s64 = 144;
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r11,108(r3)
	REX_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stw r11,176(r3)
	REX_STORE_U32(ctx.r3.u32 + 176, ctx.r11.u32);
	// stfs f0,104(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stw r11,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r11.u32);
	// stvx128 v13,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stvx128 v0,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stvx128 v0,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82935F18) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82935f30
	if (cr6.eq) goto loc_82935F30;
	// lwz r10,18600(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 18600);
	// lwz r3,18608(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 18608);
	// b 0x82935f38
	goto loc_82935F38;
loc_82935F30:
	// lwz r10,18604(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 18604);
	// lwz r3,18612(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 18612);
loc_82935F38:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82935f98
	if (!cr6.eq) goto loc_82935F98;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82935f50
	if (cr6.eq) goto loc_82935F50;
	// lwz r11,176(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 176);
	// b 0x82935f54
	goto loc_82935F54;
loc_82935F50:
	// lwz r11,180(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 180);
loc_82935F54:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lhz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 8);
	// lwz r11,576(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 576);
	// rotlwi r8,r10,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82935f94
	if (!cr6.eq) goto loc_82935F94;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82935f98
	goto loc_82935F98;
loc_82935F94:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82935F98:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82935fb8
	if (cr6.eq) goto loc_82935FB8;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r11,r7,32
	ctx.r11.s64 = ctx.r7.s64 + 32;
	// bne cr6,0x82935fb0
	if (!cr6.eq) goto loc_82935FB0;
	// addi r11,r7,48
	ctx.r11.s64 = ctx.r7.s64 + 48;
loc_82935FB0:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// b 0x82935fbc
	goto loc_82935FBC;
loc_82935FB8:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82935FBC:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// bne cr6,0x82935fcc
	if (!cr6.eq) goto loc_82935FCC;
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
loc_82935FCC:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// b 0x828e0fa0
	sub_828E0FA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8293A948) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac4
	ctx.lr = 0x8293A950;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82936cb0
	ctx.lr = 0x8293A96C;
	sub_82936CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82939408
	ctx.lr = 0x8293A974;
	sub_82939408(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8293a9b0
	if (cr6.eq) goto loc_8293A9B0;
	// li r11,784
	ctx.r11.s64 = 784;
	// lfs f0,656(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 656);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,676(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 676);
	ctx.f13.f64 = double(temp.f32);
	// li r10,800
	ctx.r10.s64 = 800;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lvx128 v0,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,668(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lvx128 v0,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8293A9B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_8293DBE0) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac4
	ctx.lr = 0x8293DBE8;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lwz r9,136(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 136);
	// lvx128 v13,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,140(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 140);
	// slw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v0,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f10,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f10,f10
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f11,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f13,f9,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8293de2c
	if (cr6.gt) goto loc_8293DE2C;
	// lwz r9,144(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 144);
	// lwz r5,152(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 152);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,148(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 148);
	// lfsx f12,r5,r11
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fmuls f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f8,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f13,f13
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f8,f11,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmadds f13,f7,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, ctx.f13.f64)));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f6
	cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// bgt cr6,0x8293de2c
	if (cr6.gt) goto loc_8293DE2C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8293ddb4
	if (cr6.eq) goto loc_8293DDB4;
	// lvx128 v13,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// fmr f9,f7
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f9.f64 = ctx.f7.f64;
	// lfs f13,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f7,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f8,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f13,f11,f8,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, ctx.f13.f64)));
	// fmadds f13,f9,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f13.f64)));
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f13,f11,f11
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fcmpu cr6,f13,f10
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// blt cr6,0x8293dd00
	if (cr6.lt) goto loc_8293DD00;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8293DD00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8293dda8
	if (!cr6.eq) goto loc_8293DDA8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lfs f10,3068(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3068);
	ctx.f10.f64 = double(temp.f32);
loc_8293DD1C:
	// cmpwi cr6,r5,8
	cr6.compare<int32_t>(ctx.r5.s32, 8, xer);
	// bge cr6,0x8293dda8
	if (!cr6.lt) goto loc_8293DDA8;
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lfs f13,8(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f7,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f5,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f6,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f9,f6,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, ctx.f13.f64)));
	// fmadds f13,f5,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f13.f64)));
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f8
	cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// blt cr6,0x8293dd90
	if (cr6.lt) goto loc_8293DD90;
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f10
	cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bge cr6,0x8293dd80
	if (!cr6.lt) goto loc_8293DD80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8293DD80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8293dd94
	if (!cr6.eq) goto loc_8293DD94;
loc_8293DD90:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8293DD94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8293dd1c
	if (cr6.eq) goto loc_8293DD1C;
loc_8293DDA8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8293de2c
	if (cr6.eq) goto loc_8293DE2C;
loc_8293DDB4:
	// lwz r11,204(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 204);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r7,r11
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, xer);
	// beq cr6,0x8293de1c
	if (cr6.eq) goto loc_8293DE1C;
	// addi r31,r7,1
	r31.s64 = ctx.r7.s64 + 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rlwinm r30,r6,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x8293dbe0
	ctx.lr = 0x8293DDE8;
	sub_8293DBE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8293de1c
	if (!cr6.eq) goto loc_8293DE1C;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r30,1
	ctx.r6.s64 = r30.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8293dbe0
	ctx.lr = 0x8293DE10;
	sub_8293DBE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8293de2c
	if (cr6.eq) goto loc_8293DE2C;
loc_8293DE1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8298eb14
	return;
loc_8293DE2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_82955918) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac8
	ctx.lr = 0x82955920;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x8295597c
	if (cr6.eq) goto loc_8295597C;
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// beq cr6,0x8295597c
	if (cr6.eq) goto loc_8295597C;
loc_82955944:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x829557a0
	ctx.lr = 0x82955970;
	sub_829557A0(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x82955944
	if (!cr6.eq) goto loc_82955944;
loc_8295597C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_82957A30) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82957a5c
	if (!cr6.lt) goto loc_82957A5C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82957A5C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// lfs f12,2592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2592);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8916(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8916);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x82957ae0
	if (cr6.lt) goto loc_82957AE0;
	// addi r11,r3,5
	ctx.r11.s64 = ctx.r3.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82957A80:
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82957b1c
	if (!cr6.lt) goto loc_82957B1C;
	// lfs f11,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82957b24
	if (!cr6.lt) goto loc_82957B24;
	// lfs f11,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82957b2c
	if (!cr6.lt) goto loc_82957B2C;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bgt cr6,0x82957a80
	if (cr6.gt) goto loc_82957A80;
loc_82957AE0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82957AF4:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fcmpu cr6,f11,f12
	cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x82957af4
	if (cr6.gt) goto loc_82957AF4;
	// blr 
	return;
loc_82957B1C:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
loc_82957B24:
	// addi r3,r3,-2
	ctx.r3.s64 = ctx.r3.s64 + -2;
	// blr 
	return;
loc_82957B2C:
	// addi r3,r3,-3
	ctx.r3.s64 = ctx.r3.s64 + -3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8295D478) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac8
	ctx.lr = 0x8295D480;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8295d4f4
	if (cr6.eq) goto loc_8295D4F4;
	// lwz r11,-16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -16);
	// addi r29,r31,-16
	r29.s64 = r31.s64 + -16;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// blt cr6,0x8295d4d4
	if (cr6.lt) goto loc_8295D4D4;
loc_8295D4BC:
	// addi r31,r31,-80
	r31.s64 = r31.s64 + -80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ef650
	ctx.lr = 0x8295D4C8;
	sub_828EF650(ctx, base);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x8295d4bc
	if (!cr6.lt) goto loc_8295D4BC;
loc_8295D4D4:
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8295d4e8
	if (cr6.eq) goto loc_8295D4E8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8218be78
	ctx.lr = 0x8295D4E8;
	sub_8218BE78(ctx, base);
loc_8295D4E8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_8295D4F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ef650
	ctx.lr = 0x8295D4FC;
	sub_828EF650(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8295d510
	if (cr6.eq) goto loc_8295D510;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218be78
	ctx.lr = 0x8295D510;
	sub_8218BE78(ctx, base);
loc_8295D510:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_82961658) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r8,r3,96
	ctx.r8.s64 = ctx.r3.s64 + 96;
	// lwz r5,36(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r7,r3,144
	ctx.r7.s64 = ctx.r3.s64 + 144;
	// addi r9,r3,192
	ctx.r9.s64 = ctx.r3.s64 + 192;
	// lvx128 v25,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v5,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v4,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// lvx128 v8,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v11,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v7,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v9,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// lvx128 v6,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v3,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// lvx128 v12,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v2,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// lvx128 v31,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v10,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// lvx128 v6,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vor v28,v31,v31
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// vmrglw v9,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v8,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vor v29,v7,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmrghw v27,v7,v6
	simde_mm_store_si128((simde__m128i*)v27.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vor v30,v6,v6
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vmrghw v26,v31,v0
	simde_mm_store_si128((simde__m128i*)v26.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v31.u32)));
	// lvx128 v13,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmsum3fp128 v11,v13,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v8,v12,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vmrglw v7,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrglw v31,v31,v0
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v31.u32)));
	// vmrghw v9,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmsum3fp128 v10,v12,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v6,v28,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrglw v28,v28,v0
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)v28.u32)));
	// vmrghw v7,v7,v31
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmsum3fp128 v9,v13,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmrglw v5,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmsum3fp128 v13,v13,v5
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v5.f32), 0xEF));
	// vmrghw v8,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// lvx128 v10,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v31,v10,v7
	simde_mm_store_ps(v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v7.f32), 0xEF));
	// vmrghw v7,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v29.u32)));
	// vmrglw v30,v29,v30
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)v29.u32)));
	// addi r6,r3,48
	ctx.r6.s64 = ctx.r3.s64 + 48;
	// vmrghw v29,v27,v26
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v26.u32), simde_mm_load_si128((simde__m128i*)v27.u32)));
	// vmrghw v9,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// lvx128 v11,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v30,v30,v28
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v28.u32), simde_mm_load_si128((simde__m128i*)v30.u32)));
	// vmsum3fp128 v29,v10,v29
	simde_mm_store_ps(v29.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(v29.f32), 0xEF));
	// vmrghw v13,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmsum3fp128 v30,v11,v30
	simde_mm_store_ps(v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(v30.f32), 0xEF));
	// vmrghw v13,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v31,v29,v31
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v31.u32), simde_mm_load_si128((simde__m128i*)v29.u32)));
	// vmrghw v29,v7,v6
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrglw v7,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmsum3fp128 v6,v11,v29
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(v29.f32), 0xEF));
	// vmsum3fp128 v7,v11,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32), 0xEF));
	// vmrghw v11,v6,v30
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v30.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v7,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v6,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// lvx128 v7,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v11,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmsum3fp128 v12,v12,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmrglw v11,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v26.u32), simde_mm_load_si128((simde__m128i*)v27.u32)));
	// vmsum3fp128 v11,v10,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmrghw v12,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v12,v8,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v11,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vsubfp v13,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmrghw v12,v31,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)v31.u32)));
	// vaddfp v13,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp v13,v13,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v6.f32)));
	// lvx128 v11,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,240
	ctx.r5.s64 = 240;
	// lvx128 v10,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v9,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v8,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lis r6,-32087
	ctx.r6.s64 = -2102853632;
	// vmrglw v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// li r4,256
	ctx.r4.s64 = 256;
	// vmrglw v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// addi r6,r6,18848
	ctx.r6.s64 = ctx.r6.s64 + 18848;
	// vmrghw v11,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx128 v29,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v10,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// lvx128 v9,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-31983
	ctx.r6.s64 = -2096037888;
	// lvx128 v8,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v13,v13,v25
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v25.f32)));
	// addi r6,r6,-8288
	ctx.r6.s64 = ctx.r6.s64 + -8288;
	// lvx128 v2,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-32087
	ctx.r6.s64 = -2102853632;
	// addi r6,r6,18832
	ctx.r6.s64 = ctx.r6.s64 + 18832;
	// vmsum3fp128 v12,v13,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v11,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v10,v13,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v13,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v12,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// lvx128 v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-32088
	ctx.r6.s64 = -2102919168;
	// vor v28,v12,v12
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// addi r6,r6,-704
	ctx.r6.s64 = ctx.r6.s64 + -704;
	// vsubfp v13,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v13,v1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)));
	// lvx128 v1,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-32088
	ctx.r6.s64 = -2102919168;
	// addi r6,r6,-720
	ctx.r6.s64 = ctx.r6.s64 + -720;
	// lvx128 v6,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-32087
	ctx.r6.s64 = -2102853632;
	// addi r6,r6,18864
	ctx.r6.s64 = ctx.r6.s64 + 18864;
	// vsubfp v13,v13,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)));
	// lvx128 v31,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-31983
	ctx.r6.s64 = -2096037888;
	// addi r6,r6,-8432
	ctx.r6.s64 = ctx.r6.s64 + -8432;
	// lvx128 v11,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-31983
	ctx.r6.s64 = -2096037888;
	// vmsum3fp128 v8,v13,v8
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vmulfp128 v9,v9,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)));
	// addi r6,r6,-8544
	ctx.r6.s64 = ctx.r6.s64 + -8544;
	// lvx128 v10,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-31983
	ctx.r6.s64 = -2096037888;
	// vand v4,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// addi r6,r6,-8464
	ctx.r6.s64 = ctx.r6.s64 + -8464;
	// lvx128 v5,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r6,-31981
	ctx.r6.s64 = -2095906816;
	// vor v26,v4,v5
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmulfp128 v12,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v8,v9,v9
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vsubfp v3,v13,v12
	simde_mm_store_ps(ctx.v3.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vand v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vcmpgtfp v26,v26,v12
	simde_mm_store_ps(v26.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(v26.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vrsqrtefp v12,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v8.f32))));
	// vor v24,v12,v12
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vcmpeqfp v12,v12,v2
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v2.f32)));
	// vsel v12,v24,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v24.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// vmulfp128 v2,v12,v12
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v1,v1,v12
	simde_mm_store_ps(ctx.v1.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v2,v8,v2,v6
	simde_mm_store_ps(ctx.v2.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v6.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v12,v2,v1,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v12,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v12,v12,v29
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v29.f32)));
	// vnmsubfp v12,v28,v12,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(v28.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v9.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmsum3fp128 v8,v12,v3
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v3.f32), 0xEF));
	// vmsum3fp128 v9,v12,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vaddfp v8,v8,v31
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(v31.f32)));
	// vrefp v12,v8
	simde_mm_store_ps(ctx.v12.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v8.f32)));
	// vnmsubfp v8,v12,v8,v6
	simde_mm_store_ps(ctx.v8.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v6.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vand v6,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmaddfp v12,v12,v8,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vor v6,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// addi r6,r6,1456
	ctx.r6.s64 = ctx.r6.s64 + 1456;
	// vcmpgtfp v8,v6,v4
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v4.f32)));
	// lvx128 v11,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v12,v9,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vsel v12,v10,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8))));
	// vnmsubfp v13,v3,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vsel v13,v13,v10,v26
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// vaddfp v13,v13,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v12,v13,v13,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v12,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lvx128 v12,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,36(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v11,v11,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v10,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v9,v10,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v8,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v8,v8,v13
	simde_mm_store_ps(ctx.v8.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v7,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v10,v10,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v6,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v7,v7,v13
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v6,v6,v13
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// addi r9,r6,32
	ctx.r9.s64 = ctx.r6.s64 + 32;
	// addi r5,r6,80
	ctx.r5.s64 = ctx.r6.s64 + 80;
	// lvx128 v5,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v11,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// lvx128 v8,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v10,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// lvx128 v6,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v4,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrglw v6,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrghw v12,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx128 v9,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v7,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// vmrglw v3,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// lvx128 v9,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v9,v9,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v8,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v30,v7,v4
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v6,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// lvx128 v3,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v7,v7,v4
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmrghw v29,v2,v0
	simde_mm_store_si128((simde__m128i*)v29.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmsum3fp128 v30,v12,v30
	simde_mm_store_ps(v30.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(v30.f32), 0xEF));
	// vmrglw v2,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmsum3fp128 v31,v12,v6
	simde_mm_store_ps(v31.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32), 0xEF));
	// lvx128 v6,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r4,80
	ctx.r9.s64 = ctx.r4.s64 + 80;
	// vmsum3fp128 v7,v12,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32), 0xEF));
	// vmrghw v9,v9,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// lvx128 v9,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v1,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrglw v9,v8,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v31,v30,v31
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v31.u32), simde_mm_load_si128((simde__m128i*)v30.u32)));
	// vmrghw v30,v3,v6
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmrglw v6,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmrghw v3,v30,v29
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v29.u32), simde_mm_load_si128((simde__m128i*)v30.u32)));
	// vmrghw v6,v6,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// lvx128 v2,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v2,v2,v13
	simde_mm_store_ps(ctx.v2.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v2.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v3,v12,v3
	simde_mm_store_ps(ctx.v3.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v3.f32), 0xEF));
	// vmsum3fp128 v6,v12,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v6.f32), 0xEF));
	// vmrghw v8,v2,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v2.u32)));
	// vmrghw v6,v3,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v3.u32)));
	// vmrghw v3,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrglw v5,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrghw v9,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmsum3fp128 v5,v11,v9
	simde_mm_store_ps(ctx.v5.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmrglw v9,v30,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)v29.u32), simde_mm_load_si128((simde__m128i*)v30.u32)));
	// vmsum3fp128 v9,v12,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmrghw v12,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v4,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v10,v7,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)v31.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// lvx128 v8,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v2,v9,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v6.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// lvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v7,v31,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)v31.u32)));
	// lvx128 v10,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v7,v4,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vmrghw v4,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vmsum3fp128 v4,v11,v4
	simde_mm_store_ps(ctx.v4.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v4.f32), 0xEF));
	// stvx128 v7,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// vmrghw v7,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v5.u32), simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmrghw v4,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v5,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrglw v0,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrglw v10,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v9,v6,v2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v2.u32), simde_mm_load_si128((simde__m128i*)ctx.v6.u32)));
	// vmrglw v8,v1,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v3.u32), simde_mm_load_si128((simde__m128i*)ctx.v1.u32)));
	// vmrghw v0,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v10,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmsum3fp128 v11,v11,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32), 0xEF));
	// vmsum3fp128 v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v10,v12,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v11,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v0,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v10,v10,v9
	simde_mm_store_ps(ctx.v10.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v9.f32)));
	// vmrglw v9,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v4.u32), simde_mm_load_si128((simde__m128i*)ctx.v5.u32)));
	// vmrghw v11,v7,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v7.u32)));
	// vmsum3fp128 v12,v12,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vmrghw v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v0,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v12,v12,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)));
	// stvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v0,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829AA248) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x829AA250;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x829aa040
	ctx.lr = 0x829AA260;
	sub_829AA040(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x829aa2f8
	if (cr0.eq) goto loc_829AA2F8;
	// lhz r11,54(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 54);
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// lbz r5,52(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 52);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// sth r11,54(r31)
	REX_STORE_U16(r31.u32 + 54, ctx.r11.u16);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stb r11,52(r31)
	REX_STORE_U8(r31.u32 + 52, ctx.r11.u8);
	// bl 0x829907e0
	ctx.lr = 0x829AA288;
	rexcrt_memcpy(ctx, base);
	// lbz r11,53(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 53);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x829aa2a0
	if (cr0.eq) goto loc_829AA2A0;
	// lbz r11,53(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 53);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,53(r31)
	REX_STORE_U8(r31.u32 + 53, ctx.r11.u8);
loc_829AA2A0:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwz r7,64(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 64);
	// lwz r6,68(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r5,36(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r29,48(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 48);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r9,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// stw r8,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r7,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r7.u32);
	// stw r6,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r6.u32);
	// stw r5,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// stw r4,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
loc_829AA2F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_829B2288) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eaa0
	ctx.lr = 0x829B2290;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r26,r4,r5
	r26.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r23,r11,3644
	r23.s64 = ctx.r11.s64 + 3644;
	// addi r22,r11,9020
	r22.s64 = ctx.r11.s64 + 9020;
	// addi r21,r11,24
	r21.s64 = ctx.r11.s64 + 24;
	// lbz r9,11956(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 11956);
	// addi r20,r11,2072
	r20.s64 = ctx.r11.s64 + 2072;
	// lwz r10,11952(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 11952);
	// addi r25,r11,2584
	r25.s64 = ctx.r11.s64 + 2584;
	// lwz r31,11012(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 11012);
	// addi r24,r11,3256
	r24.s64 = ctx.r11.s64 + 3256;
	// lwz r19,11016(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 11016);
	// addi r28,r11,3508
	r28.s64 = ctx.r11.s64 + 3508;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r27,r11,3636
	r27.s64 = ctx.r11.s64 + 3636;
	// addi r29,r11,12
	r29.s64 = ctx.r11.s64 + 12;
	// b 0x829b25d8
	goto loc_829B25D8;
loc_829B22D4:
	// rlwinm r8,r10,11,21,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FE;
	// lhax r7,r8,r21
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + r21.u32));
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge 0x829b2314
	if (!cr0.lt) goto loc_829B2314;
	// lis r8,32
	ctx.r8.s64 = 2097152;
loc_829B22E8:
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r23
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + r23.u32));
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt 0x829b22e8
	if (cr0.lt) goto loc_829B22E8;
loc_829B2314:
	// cmplw cr6,r31,r19
	cr6.compare<uint32_t>(r31.u32, r19.u32, xer);
	// bge cr6,0x829b25f4
	if (!cr6.lt) goto loc_829B25F4;
	// lbzx r8,r7,r25
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + r25.u32);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt 0x829b235c
	if (cr0.gt) goto loc_829B235C;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// neg r5,r8
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// lbz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 | ctx.r6.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r6,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_829B235C:
	// addic. r6,r7,-256
	xer.ca = ctx.r7.u32 > 255;
	ctx.r6.s64 = ctx.r7.s64 + -256;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge 0x829b2380
	if (!cr0.lt) goto loc_829B2380;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// stbx r8,r30,r4
	REX_STORE_U8(r30.u32 + ctx.r4.u32, ctx.r8.u8);
	// stbx r8,r7,r4
	REX_STORE_U8(ctx.r7.u32 + ctx.r4.u32, ctx.r8.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x829b25d8
	goto loc_829B25D8;
loc_829B2380:
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r5,7
	cr6.compare<int32_t>(ctx.r5.s32, 7, xer);
	// bne cr6,0x829b2410
	if (!cr6.eq) goto loc_829B2410;
	// rlwinm r8,r10,9,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhax r8,r8,r20
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + r20.u32));
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x829b23cc
	if (!cr0.lt) goto loc_829B23CC;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_829B23A0:
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r5,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// subf r8,r8,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r8.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r8,r22
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + r22.u32));
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x829b23a0
	if (cr0.lt) goto loc_829B23A0;
loc_829B23CC:
	// lbzx r7,r8,r24
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + r24.u32);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// mr. r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bgt 0x829b240c
	if (cr0.gt) goto loc_829B240C;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// neg r3,r7
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lbz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// slw r7,r5,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_829B240C:
	// addi r5,r8,7
	ctx.r5.s64 = ctx.r8.s64 + 7;
loc_829B2410:
	// srawi r8,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 3;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// ble cr6,0x829b2588
	if (!cr6.gt) goto loc_829B2588;
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r7,12004(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 12004);
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// blt cr6,0x829b2508
	if (cr6.lt) goto loc_829B2508;
	// addic. r7,r7,-3
	xer.ca = ctx.r7.u32 > 2;
	ctx.r7.s64 = ctx.r7.s64 + -3;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x829b2494
	if (cr0.eq) goto loc_829B2494;
	// lbz r8,12004(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 12004);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// addi r3,r8,-3
	ctx.r3.s64 = ctx.r8.s64 + -3;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subfic r7,r8,35
	xer.ca = ctx.r8.u32 <= 35;
	ctx.r7.u64 = static_cast<uint64_t>(35) - ctx.r8.u64;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt 0x829b2498
	if (cr0.gt) goto loc_829B2498;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// neg r18,r8
	r18.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r3,r18
	ctx.r8.u64 = r18.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r18.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// b 0x829b2498
	goto loc_829B2498;
loc_829B2494:
	// li r7,0
	ctx.r7.s64 = 0;
loc_829B2498:
	// rlwinm r3,r10,7,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// addi r9,r6,3014
	ctx.r9.s64 = ctx.r6.s64 + 3014;
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r7,r3,r28
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + r28.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r7,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + r27.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// subf r9,r9,r18
	ctx.r9.u64 = r18.u64 - ctx.r9.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt 0x829b2500
	if (cr0.gt) goto loc_829B2500;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// neg r18,r8
	r18.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r3,r18
	ctx.r8.u64 = r18.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r18.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_829B2500:
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// b 0x829b2574
	goto loc_829B2574;
loc_829B2508:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x829b2570
	if (cr6.eq) goto loc_829B2570;
	// lbz r8,12004(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 12004);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// subfic r3,r8,32
	xer.ca = ctx.r8.u32 <= 32;
	ctx.r3.u64 = static_cast<uint64_t>(32) - ctx.r8.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// srw r7,r7,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r3.u8 & 0x3F));
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt 0x829b255c
	if (cr0.gt) goto loc_829B255C;
	// lbz r9,1(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 1);
	// neg r18,r8
	r18.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r3,r18
	ctx.r8.u64 = r18.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r18.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_829B255C:
	// addi r8,r6,3014
	ctx.r8.s64 = ctx.r6.s64 + 3014;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// b 0x829b2574
	goto loc_829B2574;
loc_829B2570:
	// li r8,1
	ctx.r8.s64 = 1;
loc_829B2574:
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r7,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r7.u32);
	// stw r6,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r6.u32);
	// b 0x829b2598
	goto loc_829B2598;
loc_829B2588:
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwzx r8,r7,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + r29.u32);
	// stwx r6,r7,r29
	REX_STORE_U32(ctx.r7.u32 + r29.u32, ctx.r6.u32);
loc_829B2598:
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// subf r7,r8,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r8.u64;
loc_829B25A8:
	// and r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 & ctx.r3.u64;
	// cmpwi cr6,r4,257
	cr6.compare<int32_t>(ctx.r4.s32, 257, xer);
	// lbzx r8,r8,r30
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + r30.u32);
	// stbx r8,r30,r4
	REX_STORE_U8(r30.u32 + ctx.r4.u32, ctx.r8.u8);
	// bge cr6,0x829b25c8
	if (!cr6.lt) goto loc_829B25C8;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// stbx r8,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r8.u8);
loc_829B25C8:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bgt 0x829b25a8
	if (cr0.gt) goto loc_829B25A8;
loc_829B25D8:
	// cmpw cr6,r4,r26
	cr6.compare<int32_t>(ctx.r4.s32, r26.s32, xer);
	// blt cr6,0x829b22d4
	if (cr6.lt) goto loc_829B22D4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r9,11956(r11)
	REX_STORE_U8(ctx.r11.u32 + 11956, ctx.r9.u8);
	// stw r10,11952(r11)
	REX_STORE_U32(ctx.r11.u32 + 11952, ctx.r10.u32);
	// stw r31,11012(r11)
	REX_STORE_U32(ctx.r11.u32 + 11012, r31.u32);
loc_829B25F0:
	// b 0x8298eaf0
	return;
loc_829B25F4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x829b25f0
	goto loc_829B25F0;
}

DEFINE_REX_FUNC(sub_829D0B20) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// li r8,1480
	ctx.r8.s64 = 1480;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// neg r10,r4
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r4.u64);
	// lis r9,7
	ctx.r9.s64 = 458752;
	// rlwimi r10,r4,8,17,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0x7F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF80FF);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// ori r6,r9,36096
	ctx.r6.u64 = ctx.r9.u64 | 36096;
	// rlwinm r10,r10,4,13,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x7FFF0;
	// li r9,8
	ctx.r9.s64 = 8;
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
loc_829D0B58:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bne 0x829d0b58
	if (!cr0.eq) goto loc_829D0B58;
	// li r9,3328
	ctx.r9.s64 = 3328;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r3,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829D70B0) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x829D70B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// add r10,r31,r5
	ctx.r10.u64 = r31.u64 + ctx.r5.u64;
	// lwz r11,14884(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 14884);
	// lwz r9,10896(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 10896);
	// and r30,r10,r11
	r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// lwz r11,60(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// bge cr6,0x829d70f4
	if (!cr6.lt) goto loc_829D70F4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x829d7150
	if (!cr6.lt) goto loc_829D7150;
loc_829D70E8:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, xer);
	// ble cr6,0x829d70fc
	if (!cr6.gt) goto loc_829D70FC;
	// b 0x829d7150
	goto loc_829D7150;
loc_829D70F4:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x829d70e8
	if (!cr6.lt) goto loc_829D70E8;
loc_829D70FC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829cfce8
	ctx.lr = 0x829D710C;
	sub_829CFCE8(ctx, base);
loc_829D710C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829cfe80
	ctx.lr = 0x829D7114;
	sub_829CFE80(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x829d7148
	if (cr0.eq) goto loc_829D7148;
	// lwz r11,10896(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 10896);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bge cr6,0x829d7138
	if (!cr6.lt) goto loc_829D7138;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// bge cr6,0x829d7148
	if (!cr6.lt) goto loc_829D7148;
	// b 0x829d7140
	goto loc_829D7140;
loc_829D7138:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// blt cr6,0x829d710c
	if (cr6.lt) goto loc_829D710C;
loc_829D7140:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, xer);
	// ble cr6,0x829d710c
	if (!cr6.gt) goto loc_829D710C;
loc_829D7148:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x829cfd18
	ctx.lr = 0x829D7150;
	sub_829CFD18(ctx, base);
loc_829D7150:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_829DC450) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac8
	ctx.lr = 0x829DC458;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1896(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1896);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x829dc608
	if (cr6.eq) goto loc_829DC608;
	// rotlwi r31,r10,0
	r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829dc608
	if (cr6.eq) goto loc_829DC608;
	// ld r11,10880(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 10880);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x829dc608
	if (cr6.eq) goto loc_829DC608;
	// cmplwi cr6,r3,34
	cr6.compare<uint32_t>(ctx.r3.u32, 34, xer);
	// bgt cr6,0x829dc52c
	if (cr6.gt) goto loc_829DC52C;
	// beq cr6,0x829dc524
	if (cr6.eq) goto loc_829DC524;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x829dc514
	if (cr6.lt) goto loc_829DC514;
	// beq cr6,0x829dc514
	if (cr6.eq) goto loc_829DC514;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// beq cr6,0x829dc4e8
	if (cr6.eq) goto loc_829DC4E8;
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// bne cr6,0x829dc608
	if (!cr6.eq) goto loc_829DC608;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// lwz r10,13252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 13252);
	// slw r8,r9,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,13252(r11)
	REX_STORE_U32(ctx.r11.u32 + 13252, ctx.r10.u32);
	// bne cr6,0x829dc608
	if (!cr6.eq) goto loc_829DC608;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,21608(r31)
	REX_STORE_U32(r31.u32 + 21608, ctx.r9.u32);
	// stw r11,21600(r31)
	REX_STORE_U32(r31.u32 + 21600, ctx.r11.u32);
	// stw r11,21604(r31)
	REX_STORE_U32(r31.u32 + 21604, ctx.r11.u32);
	// b 0x829dc608
	goto loc_829DC608;
loc_829DC4E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lwz r10,13252(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 13252);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r10,13252(r11)
	REX_STORE_U32(ctx.r11.u32 + 13252, ctx.r10.u32);
	// bne cr6,0x829dc608
	if (!cr6.eq) goto loc_829DC608;
	// li r11,0
	ctx.r11.s64 = 0;
loc_829DC50C:
	// stw r11,21608(r31)
	REX_STORE_U32(r31.u32 + 21608, ctx.r11.u32);
	// b 0x829dc608
	goto loc_829DC608;
loc_829DC514:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// stw r11,13252(r10)
	REX_STORE_U32(ctx.r10.u32 + 13252, ctx.r11.u32);
	// b 0x829dc50c
	goto loc_829DC50C;
loc_829DC524:
	// stw r4,21656(r31)
	REX_STORE_U32(r31.u32 + 21656, ctx.r4.u32);
	// b 0x829dc608
	goto loc_829DC608;
loc_829DC52C:
	// cmplwi cr6,r3,224
	cr6.compare<uint32_t>(ctx.r3.u32, 224, xer);
	// beq cr6,0x829dc5d0
	if (cr6.eq) goto loc_829DC5D0;
	// cmplwi cr6,r3,225
	cr6.compare<uint32_t>(ctx.r3.u32, 225, xer);
	// beq cr6,0x829dc5d0
	if (cr6.eq) goto loc_829DC5D0;
	// cmplwi cr6,r3,226
	cr6.compare<uint32_t>(ctx.r3.u32, 226, xer);
	// beq cr6,0x829dc5d0
	if (cr6.eq) goto loc_829DC5D0;
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// bne cr6,0x829dc608
	if (!cr6.eq) goto loc_829DC608;
	// lis r28,-31981
	r28.s64 = -2095906816;
	// lwz r11,13252(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 13252);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x829dc58c
	if (cr0.eq) goto loc_829DC58C;
	// lwz r11,21556(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21556);
	// lfs f0,21572(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 21572);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,5908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5908);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x829e88b0
	ctx.lr = 0x829DC58C;
	sub_829E88B0(ctx, base);
loc_829DC58C:
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// li r29,17
	r29.s64 = 17;
	// addi r11,r11,-6784
	ctx.r11.s64 = ctx.r11.s64 + -6784;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
loc_829DC59C:
	// lwz r11,-8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -8);
	// lwz r10,13252(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 13252);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x829dc5c0
	if (cr0.eq) goto loc_829DC5C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x829dbe70
	ctx.lr = 0x829DC5B8;
	sub_829DBE70(ctx, base);
	// lwz r3,-4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -4);
	// bl 0x829e88b0
	ctx.lr = 0x829DC5C0;
	sub_829E88B0(ctx, base);
loc_829DC5C0:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x829dc59c
	if (!cr0.eq) goto loc_829DC59C;
	// b 0x829dc608
	goto loc_829DC608;
loc_829DC5D0:
	// lwz r11,21516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829dc608
	if (cr6.eq) goto loc_829DC608;
	// bl 0x829a27c0
	ctx.lr = 0x829DC5E0;
	sub_829A27C0(ctx, base);
	// lwz r11,10888(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10888);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x829dc608
	if (!cr6.eq) goto loc_829DC608;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, xer);
	// ble cr6,0x829dc604
	if (!cr6.gt) goto loc_829DC604;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829d8518
	ctx.lr = 0x829DC604;
	sub_829D8518(ctx, base);
loc_829DC604:
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_829DC608:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_829EA120) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32079
	ctx.r11.s64 = -2102329344;
	// li r31,9
	r31.s64 = 9;
	// addi r30,r11,4544
	r30.s64 = ctx.r11.s64 + 4544;
loc_829EA140:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821abaf0
	ctx.lr = 0x829EA148;
	sub_821ABAF0(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,96
	r30.s64 = r30.s64 + 96;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x829ea140
	if (!cr6.lt) goto loc_829EA140;
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,-10656
	ctx.r3.s64 = ctx.r11.s64 + -10656;
	// bl 0x8298ed48
	ctx.lr = 0x829EA164;
	sub_8298ED48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829EC540) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32062
	ctx.r10.s64 = -2101215232;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,-14036
	ctx.r11.s64 = ctx.r11.s64 + -14036;
	// lwz r9,17000(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 17000);
	// stw r11,17000(r10)
	REX_STORE_U32(ctx.r10.u32 + 17000, ctx.r11.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829ECBE0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32062
	ctx.r10.s64 = -2101215232;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,-13400
	ctx.r11.s64 = ctx.r11.s64 + -13400;
	// lwz r9,17000(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 17000);
	// stw r11,17000(r10)
	REX_STORE_U32(ctx.r10.u32 + 17000, ctx.r11.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829ED738) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,-9240
	ctx.r3.s64 = ctx.r11.s64 + -9240;
	// b 0x8298ed48
	sub_8298ED48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829EDE08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-1676
	ctx.r5.s64 = ctx.r11.s64 + -1676;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4380
	ctx.r3.s64 = ctx.r11.s64 + 4380;
	// b 0x827eed68
	sub_827EED68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829EED48) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,-7024
	ctx.r3.s64 = ctx.r11.s64 + -7024;
	// b 0x8298ed48
	sub_8298ED48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829EF3B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-24792
	ctx.r3.s64 = ctx.r11.s64 + -24792;
	// bl 0x827df440
	ctx.lr = 0x829EF3CC;
	sub_827DF440(ctx, base);
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// stw r3,-29676(r11)
	REX_STORE_U32(ctx.r11.u32 + -29676, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829F04C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// addi r3,r11,-7164
	ctx.r3.s64 = ctx.r11.s64 + -7164;
	// bl 0x8289deb8
	ctx.lr = 0x829F04D8;
	sub_8289DEB8(ctx, base);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,-6536
	ctx.r3.s64 = ctx.r11.s64 + -6536;
	// bl 0x8298ed48
	ctx.lr = 0x829F04E4;
	sub_8298ED48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829F24D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24256
	ctx.r3.s64 = ctx.r11.s64 + 24256;
	// bl 0x827df440
	ctx.lr = 0x829F24F4;
	sub_827DF440(ctx, base);
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// stw r3,-6784(r11)
	REX_STORE_U32(ctx.r11.u32 + -6784, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829F3278) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32005
	ctx.r11.s64 = -2097479680;
	// addi r3,r11,712
	ctx.r3.s64 = ctx.r11.s64 + 712;
	// bl 0x8289deb8
	ctx.lr = 0x829F3290;
	sub_8289DEB8(ctx, base);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,-5168
	ctx.r3.s64 = ctx.r11.s64 + -5168;
	// bl 0x8298ed48
	ctx.lr = 0x829F329C;
	sub_8298ED48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829F4280) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,-4664
	ctx.r3.s64 = ctx.r11.s64 + -4664;
	// b 0x8298ed48
	sub_8298ED48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829F4BB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,1552
	ctx.r3.s64 = ctx.r11.s64 + 1552;
	// bl 0x827df440
	ctx.lr = 0x829F4BD4;
	sub_827DF440(ctx, base);
	// lis r11,-31998
	ctx.r11.s64 = -2097020928;
	// stw r3,19464(r11)
	REX_STORE_U32(ctx.r11.u32 + 19464, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829F5E20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r11,3088
	ctx.r6.s64 = ctx.r11.s64 + 3088;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-11696
	ctx.r5.s64 = ctx.r11.s64 + -11696;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r31,r11,1072
	r31.s64 = ctx.r11.s64 + 1072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8296c6c8
	ctx.lr = 0x829F5E54;
	sub_8296C6C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,29028
	ctx.r11.s64 = ctx.r11.s64 + 29028;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8214b360
	ctx.lr = 0x829F5E64;
	sub_8214B360(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8296c738
	ctx.lr = 0x829F5E6C;
	sub_8296C738(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// addi r11,r11,-11700
	ctx.r11.s64 = ctx.r11.s64 + -11700;
	// addi r3,r10,-2736
	ctx.r3.s64 = ctx.r10.s64 + -2736;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8298ed48
	ctx.lr = 0x829F5E84;
	sub_8298ED48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829F8B18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r11,3088
	ctx.r6.s64 = ctx.r11.s64 + 3088;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,2864
	ctx.r5.s64 = ctx.r11.s64 + 2864;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r31,r11,12024
	r31.s64 = ctx.r11.s64 + 12024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8296c6c8
	ctx.lr = 0x829F8B4C;
	sub_8296C6C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,29028
	ctx.r11.s64 = ctx.r11.s64 + 29028;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8214b360
	ctx.lr = 0x829F8B5C;
	sub_8214B360(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8296c738
	ctx.lr = 0x829F8B64;
	sub_8296C738(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// addi r11,r11,2860
	ctx.r11.s64 = ctx.r11.s64 + 2860;
	// addi r3,r10,2208
	ctx.r3.s64 = ctx.r10.s64 + 2208;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8298ed48
	ctx.lr = 0x829F8B7C;
	sub_8298ED48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829FBC08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r11,3764
	ctx.r7.s64 = ctx.r11.s64 + 3764;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r11,-30604
	ctx.r6.s64 = ctx.r11.s64 + -30604;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r31,r11,3860
	r31.s64 = ctx.r11.s64 + 3860;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8296c700
	ctx.lr = 0x829FBC40;
	sub_8296C700(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-30676
	ctx.r11.s64 = ctx.r11.s64 + -30676;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8298a3f0
	ctx.lr = 0x829FBC50;
	sub_8298A3F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8296c738
	ctx.lr = 0x829FBC58;
	sub_8296C738(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// addi r11,r11,-30608
	ctx.r11.s64 = ctx.r11.s64 + -30608;
	// addi r3,r10,6320
	ctx.r3.s64 = ctx.r10.s64 + 6320;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8298ed48
	ctx.lr = 0x829FBC70;
	sub_8298ED48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829FE7FC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829FEB70) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829FECC8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829FEFA0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829FF3A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// addi r3,r11,24792
	ctx.r3.s64 = ctx.r11.s64 + 24792;
	// b 0x828e0a68
	sub_828E0A68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829FFF60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31985
	ctx.r10.s64 = -2096168960;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r10,9712
	r31.s64 = ctx.r10.s64 + 9712;
	// addi r11,r11,-16708
	ctx.r11.s64 = ctx.r11.s64 + -16708;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x827612b8
	ctx.lr = 0x829FFF88;
	sub_827612B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8296c788
	ctx.lr = 0x829FFF90;
	sub_8296C788(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,28688
	ctx.r11.s64 = ctx.r11.s64 + 28688;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82A03BC8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// subfic r3,r11,-1
	xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r3.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// bnelr cr6
	if (!cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82A08600) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab0
	ctx.lr = 0x82A08608;
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,44100
	cr6.compare<uint32_t>(ctx.r3.u32, 44100, xer);
	// blt cr6,0x82a08630
	if (cr6.lt) goto loc_82A08630;
	// li r29,2048
	r29.s64 = 2048;
	// b 0x82a08644
	goto loc_82A08644;
loc_82A08630:
	// li r11,22050
	ctx.r11.s64 = 22050;
	// subfc r11,r11,r3
	xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// addi r29,r11,1024
	r29.s64 = ctx.r11.s64 + 1024;
loc_82A08644:
	// mullw r11,r29,r26
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r26.s32);
	// clrlwi r31,r23,31
	r31.u64 = r23.u32 & 0x1;
	// rlwinm r25,r11,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82a08668
	if (!cr6.eq) goto loc_82A08668;
	// mullw r3,r3,r26
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(r26.s32);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// mr r26,r22
	r26.u64 = r22.u64;
loc_82A08668:
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// rlwinm r27,r29,31,1,31
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r24,r11,-14088
	r24.s64 = ctx.r11.s64 + -14088;
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r28,r11,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r24,4
	ctx.r11.s64 = r24.s64 + 4;
loc_82A08684:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bge cr6,0x82a086f0
	if (!cr6.lt) goto loc_82A086F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bge cr6,0x82a086d4
	if (!cr6.lt) goto loc_82A086D4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bge cr6,0x82a086dc
	if (!cr6.lt) goto loc_82A086DC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bge cr6,0x82a086e4
	if (!cr6.lt) goto loc_82A086E4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r28
	cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, xer);
	// bge cr6,0x82a086ec
	if (!cr6.lt) goto loc_82A086EC;
	// addi r30,r30,5
	r30.s64 = r30.s64 + 5;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplwi cr6,r30,25
	cr6.compare<uint32_t>(r30.u32, 25, xer);
	// blt cr6,0x82a08684
	if (cr6.lt) goto loc_82A08684;
	// b 0x82a086f0
	goto loc_82A086F0;
loc_82A086D4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82a086f0
	goto loc_82A086F0;
loc_82A086DC:
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x82a086f0
	goto loc_82A086F0;
loc_82A086E4:
	// addi r30,r30,3
	r30.s64 = r30.s64 + 3;
	// b 0x82a086f0
	goto loc_82A086F0;
loc_82A086EC:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82A086F0:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a070c8
	ctx.lr = 0x82A08700;
	sub_82A070C8(ctx, base);
	// clrldi r11,r27,32
	ctx.r11.u64 = r27.u64 & 0xFFFFFFFF;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f30,-6904(r10)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + -6904);
	// lfs f29,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f29.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,-26128(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -26128);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x82a08770
	if (!cr6.gt) goto loc_82A08770;
	// frsqrte f13,f0
	ctx.f13.f64 = double(float(1.0 / sqrt(ctx.f0.f64)));
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f12,f12,f13,f31
	ctx.f12.f64 = -std::fma(ctx.f12.f64, ctx.f13.f64, -f31.f64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f13,f13,f30
	ctx.f13.f64 = ctx.f13.f64 * f30.f64;
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f12,f12,f13,f31
	ctx.f12.f64 = -std::fma(ctx.f12.f64, ctx.f13.f64, -f31.f64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f13,f13,f30
	ctx.f13.f64 = ctx.f13.f64 * f30.f64;
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f12,f12,f13,f31
	ctx.f12.f64 = -std::fma(ctx.f12.f64, ctx.f13.f64, -f31.f64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f13,f13,f30
	ctx.f13.f64 = ctx.f13.f64 * f30.f64;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82A08770:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfiwx f0,0,r11
	REX_STORE_U32(ctx.r11.u32, ctx.f0.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a070c8
	ctx.lr = 0x82A08790;
	sub_82A070C8(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// beq cr6,0x82a087ac
	if (cr6.eq) goto loc_82A087AC;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// clrlwi r4,r11,2
	ctx.r4.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// b 0x82a087b0
	goto loc_82A087B0;
loc_82A087AC:
	// rlwinm r4,r27,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_82A087B0:
	// bl 0x82a070c8
	ctx.lr = 0x82A087B4;
	sub_82A070C8(ctx, base);
	// rlwinm r4,r25,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82a070c8
	ctx.lr = 0x82A087C0;
	sub_82A070C8(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a070c8
	ctx.lr = 0x82A087CC;
	sub_82A070C8(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82a071c0
	ctx.lr = 0x82A087D4;
	sub_82A071C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82a087f4
	if (!cr6.eq) goto loc_82A087F4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8298eb00
	return;
loc_82A087F4:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8298eb40
	ctx.lr = 0x82A08804;
	rexcrt_memset(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// rlwinm r10,r25,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r23,48(r31)
	REX_STORE_U32(r31.u32 + 48, r23.u32);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r25,8(r31)
	REX_STORE_U32(r31.u32 + 8, r25.u32);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f29
	cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x82a088a0
	if (!cr6.gt) goto loc_82A088A0;
	// frsqrte f13,f0
	ctx.f13.f64 = double(float(1.0 / sqrt(ctx.f0.f64)));
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f12,f12,f13,f31
	ctx.f12.f64 = -std::fma(ctx.f12.f64, ctx.f13.f64, -f31.f64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f13,f13,f30
	ctx.f13.f64 = ctx.f13.f64 * f30.f64;
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f12,f12,f13,f31
	ctx.f12.f64 = -std::fma(ctx.f12.f64, ctx.f13.f64, -f31.f64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f13,f13,f30
	ctx.f13.f64 = ctx.f13.f64 * f30.f64;
	// fmul f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 * ctx.f13.f64;
	// fnmsub f12,f12,f13,f31
	ctx.f12.f64 = -std::fma(ctx.f12.f64, ctx.f13.f64, -f31.f64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f13,f13,f30
	ctx.f13.f64 = ctx.f13.f64 * f30.f64;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
loc_82A088A0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lfs f13,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// beq cr6,0x82a08900
	if (cr6.eq) goto loc_82A08900;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
loc_82A088C8:
	// lwzx r7,r11,r24
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mullw r7,r7,r27
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r27.s32);
	// divwu r7,r7,r28
	ctx.r7.u64 = uint32_t(r28.u32 ? ctx.r7.u32 / r28.u32 : 0);
	// stwx r7,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82a088f0
	if (!cr6.eq) goto loc_82A088F0;
	// stwx r22,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r22.u32);
loc_82A088F0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82a088c8
	if (!cr6.eq) goto loc_82A088C8;
loc_82A08900:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r27,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r27.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r22,24(r31)
	REX_STORE_U32(r31.u32 + 24, r22.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8298eb00
	return;
}

