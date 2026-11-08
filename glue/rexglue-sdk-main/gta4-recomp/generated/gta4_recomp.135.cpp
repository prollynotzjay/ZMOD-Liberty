#include "gta4_init.h"

DEFINE_REX_FUNC(sub_82127F40) {
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
	ctx.lr = 0x82127F48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8237b1c8
	ctx.lr = 0x82127F58;
	sub_8237B1C8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82127f88
	if (cr6.eq) goto loc_82127F88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237b270
	ctx.lr = 0x82127F70;
	sub_8237B270(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82127f94
	if (!cr6.eq) goto loc_82127F94;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8238d318
	ctx.lr = 0x82127F88;
	sub_8238D318(ctx, base);
loc_82127F88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_82127F94:
	// lis r30,-32070
	r30.s64 = -2101739520;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-30096(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -30096);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82127FBC;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-30096(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -30096);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82127FE0;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_8213D438) {
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
	ctx.lr = 0x8213D440;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// lbz r11,-14262(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -14262);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8213d500
	if (cr6.eq) goto loc_8213D500;
	// lis r31,-31981
	r31.s64 = -2095906816;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// lwz r3,31748(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31748);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8213d490
	if (cr6.eq) goto loc_8213D490;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213D47C;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,31748(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 31748);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_8213D490:
	// lis r30,-31981
	r30.s64 = -2095906816;
	// lwz r3,31752(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 31752);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8213d4c4
	if (cr6.eq) goto loc_8213D4C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213D4B0;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,31752(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 31752);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_8213D4C4:
	// bl 0x821979b8
	ctx.lr = 0x8213D4C8;
	sub_821979B8(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8213d4e4
	if (cr6.eq) goto loc_8213D4E4;
	// lwz r3,31748(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31748);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213D4E4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
loc_8213D4E4:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8213d500
	if (cr6.eq) goto loc_8213D500;
	// lwz r3,31752(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 31752);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213D500;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
loc_8213D500:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_82143D80) {
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
	ctx.lr = 0x82143D88;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x827d85d0
	ctx.lr = 0x82143DA0;
	sub_827D85D0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82143db8
	if (cr6.eq) goto loc_82143DB8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r3,r11,-22036
	ctx.r3.s64 = ctx.r11.s64 + -22036;
	// bl 0x828e0a68
	ctx.lr = 0x82143DB8;
	sub_828E0A68(ctx, base);
loc_82143DB8:
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// lis r30,-31981
	r30.s64 = -2095906816;
	// addi r6,r11,2972
	ctx.r6.s64 = ctx.r11.s64 + 2972;
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,2948
	ctx.r5.s64 = ctx.r11.s64 + 2948;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,30372(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 30372);
	// bl 0x8298fab8
	ctx.lr = 0x82143DDC;
	sub_8298FAB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82143e34
	if (cr6.eq) goto loc_82143E34;
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r4,r11,-21984
	ctx.r4.s64 = ctx.r11.s64 + -21984;
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8298eff0
	ctx.lr = 0x82143DF8;
	rexcrt__stricmp(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82143e34
	if (!cr6.eq) goto loc_82143E34;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827e2150
	ctx.lr = 0x82143E1C;
	sub_827E2150(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,32
	ctx.r3.s64 = r27.s64 + 32;
	// bl 0x821576b8
	ctx.lr = 0x82143E28;
	sub_821576B8(ctx, base);
	// bl 0x827d8590
	ctx.lr = 0x82143E2C;
	sub_827D8590(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8298eb14
	return;
loc_82143E34:
	// li r3,220
	ctx.r3.s64 = 220;
	// bl 0x8218be28
	ctx.lr = 0x82143E3C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82143e58
	if (cr6.eq) goto loc_82143E58;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82142ee0
	ctx.lr = 0x82143E50;
	sub_82142EE0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82143e5c
	goto loc_82143E5C;
loc_82143E58:
	// li r31,0
	r31.s64 = 0;
loc_82143E5C:
	// lwz r30,30372(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 30372);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82147390
	ctx.lr = 0x82143E6C;
	sub_82147390(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x827d8590
	ctx.lr = 0x82143E78;
	sub_827D8590(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_82149DC4) {
	REX_FUNC_PROLOGUE();
	PPCRegister r16{};
	PPCRegister r20{};
	// lwz r16,-25408(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -25408);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24480(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24480);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-24296(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24296);
	// lwz r16,-25408(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -25408);
	// lwz r16,-24508(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + -24508);
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,31808(r10)
	REX_STORE_U8(ctx.r10.u32 + 31808, ctx.r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214B360) {
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
	// lis r9,-31980
	ctx.r9.s64 = -2095841280;
	// lwz r10,31992(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 31992);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// bne cr6,0x8214b3c0
	if (!cr6.eq) goto loc_8214B3C0;
	// addi r31,r11,31968
	r31.s64 = ctx.r11.s64 + 31968;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,31992(r9)
	REX_STORE_U32(ctx.r9.u32 + 31992, ctx.r11.u32);
	// bl 0x8296c9f0
	ctx.lr = 0x8214B39C;
	sub_8296C9F0(ctx, base);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,-11840
	ctx.r3.s64 = ctx.r11.s64 + -11840;
	// bl 0x8298ed48
	ctx.lr = 0x8214B3A8;
	sub_8298ED48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
loc_8214B3C0:
	// addi r3,r11,31968
	ctx.r3.s64 = ctx.r11.s64 + 31968;
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

DEFINE_REX_FUNC(sub_8214D498) {
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
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x8214D4B8;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8214d4ec
	if (cr6.eq) goto loc_8214D4EC;
	// addi r7,r31,48
	ctx.r7.s64 = r31.s64 + 48;
	// lbz r8,66(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 66);
	// lbz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 28);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8214e710
	ctx.lr = 0x8214D4D8;
	sub_8214E710(ctx, base);
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
loc_8214D4EC:
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

DEFINE_REX_FUNC(sub_82152E28) {
	REX_FUNC_PROLOGUE();
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
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82152540
	ctx.lr = 0x82152E54;
	sub_82152540(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82154378) {
	REX_FUNC_PROLOGUE();
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
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82153a30
	ctx.lr = 0x82154398;
	sub_82153A30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
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

DEFINE_REX_FUNC(sub_821571D8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac0
	ctx.lr = 0x821571E0;
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r5,r11,-28372
	ctx.r5.s64 = ctx.r11.s64 + -28372;
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r11,-504
	ctx.r3.s64 = ctx.r11.s64 + -504;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x827e0848
	ctx.lr = 0x82157204;
	sub_827E0848(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82156248
	ctx.lr = 0x8215720C;
	sub_82156248(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r31,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// addi r11,r11,-21908
	ctx.r11.s64 = ctx.r11.s64 + -21908;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r10,488(r1)
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r10.u32);
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// bl 0x82156158
	ctx.lr = 0x82157234;
	sub_82156158(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x821572c0
	if (cr6.eq) goto loc_821572C0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r28,39
	r28.s64 = 39;
	// addi r27,r11,-11424
	r27.s64 = ctx.r11.s64 + -11424;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r29,6
	r29.s64 = 6;
	// addi r30,r11,-11428
	r30.s64 = ctx.r11.s64 + -11428;
loc_82157254:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r30,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r30.u32);
	// bl 0x82156570
	ctx.lr = 0x82157260;
	sub_82156570(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82156158
	ctx.lr = 0x8215727C;
	sub_82156158(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82156f10
	ctx.lr = 0x8215728C;
	sub_82156F10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(ctx.r11.s32, 39, xer);
	// beq cr6,0x821572a4
	if (cr6.eq) goto loc_821572A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82156630
	ctx.lr = 0x821572A4;
	sub_82156630(ctx, base);
loc_821572A4:
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r27,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82156158
	ctx.lr = 0x821572B8;
	sub_82156158(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82157254
	if (!cr6.eq) goto loc_82157254;
loc_821572C0:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x8298eb10
	return;
}

DEFINE_REX_FUNC(sub_821623C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821623FC;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,924
	cr6.compare<int32_t>(ctx.r3.s32, 924, xer);
	// bne cr6,0x82162420
	if (!cr6.eq) goto loc_82162420;
loc_82162404:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216241C;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82162480
	goto loc_82162480;
loc_82162420:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82162434;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1901
	cr6.compare<int32_t>(ctx.r3.s32, 1901, xer);
	// beq cr6,0x82162404
	if (cr6.eq) goto loc_82162404;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lfs f4,-7996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -7996);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8241dd38
	ctx.lr = 0x82162458;
	sub_8241DD38(ctx, base);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x82162468;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8216247c
	if (cr6.eq) goto loc_8216247C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8215f998
	ctx.lr = 0x82162478;
	sub_8215F998(ctx, base);
	// b 0x82162480
	goto loc_82162480;
loc_8216247C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82162480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82169E98) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab8
	ctx.lr = 0x82169EA0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r3,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r28,31912(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 31912);
	// bl 0x82a02fac
	ctx.lr = 0x82169EC4;
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,29852
	r31.s64 = ctx.r11.s64 + 29852;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82169eec
	if (cr6.eq) goto loc_82169EEC;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, xer);
	// beq cr6,0x82169f0c
	if (cr6.eq) goto loc_82169F0C;
loc_82169EEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a02f7c
	ctx.lr = 0x82169EF4;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// stb r30,12(r31)
	REX_STORE_U8(r31.u32 + 12, r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x82169f10
	goto loc_82169F10;
loc_82169F0C:
	// lbz r30,12(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 12);
loc_82169F10:
	// clrlwi r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r10,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// addi r9,r9,168
	ctx.r9.s64 = ctx.r9.s64 + 168;
loc_82169F2C:
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82169f4c
	if (cr6.eq) goto loc_82169F4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// blt cr6,0x82169f2c
	if (cr6.lt) goto loc_82169F2C;
	// b 0x82169f68
	goto loc_82169F68;
loc_82169F4C:
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82169fb4
	if (!cr6.eq) goto loc_82169FB4;
loc_82169F68:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r11,r13
	ctx.r11.u64 = ctx.r13.u64;
	// beq cr6,0x82169fa4
	if (cr6.eq) goto loc_82169FA4;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82169fa4
	if (!cr6.eq) goto loc_82169FA4;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x82169fa4
	if (!cr6.eq) goto loc_82169FA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82a02fbc
	ctx.lr = 0x82169F9C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82a02f9c
	ctx.lr = 0x82169FA4;
	__imp__KfLowerIrql(ctx, base);
loc_82169FA4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb08
	return;
loc_82169FB4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r24.u32);
	// beq cr6,0x82169fc8
	if (cr6.eq) goto loc_82169FC8;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_82169FC8:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8216a010
	if (cr6.eq) goto loc_8216A010;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// bne cr6,0x8216a010
	if (!cr6.eq) goto loc_8216A010;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8216a010
	if (!cr6.eq) goto loc_8216A010;
	// lbz r30,12(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	REX_STORE_U8(r31.u32 + 12, ctx.r11.u8);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82a02fbc
	ctx.lr = 0x8216A008;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82a02f9c
	ctx.lr = 0x8216A010;
	__imp__KfLowerIrql(ctx, base);
loc_8216A010:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb08
	return;
}

DEFINE_REX_FUNC(sub_8216DC90) {
	REX_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// sth r10,2(r4)
	REX_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821719F8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8216cd10
	sub_8216CD10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82171A00) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82177938
	sub_82177938(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82171A08) {
	REX_FUNC_PROLOGUE();
	// lbz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 156);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82173090) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82172f68
	sub_82172F68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821735D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 60);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x821735f4
	if (cr6.lt) goto loc_821735F4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_821735F4:
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82173618) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lbz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 60);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82173634
	if (cr6.lt) goto loc_82173634;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82173634:
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821778B0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82176820
	sub_82176820(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821778B8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82177070
	sub_82177070(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821778D0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82176828
	sub_82176828(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821778D8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82176e38
	sub_82176E38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821778E8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821779b8
	sub_821779B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821778F0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82176d68
	sub_82176D68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82177908) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82176b38
	sub_82176B38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82177918) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82176a10
	sub_82176A10(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82177B10) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,198(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 198);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, xer);
	// beq cr6,0x82177b4c
	if (cr6.eq) goto loc_82177B4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r31,255
	cr6.compare<uint32_t>(r31.u32, 255, xer);
	// stw r11,288(r3)
	REX_STORE_U32(ctx.r3.u32 + 288, ctx.r11.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// bgt cr6,0x82177b48
	if (cr6.gt) goto loc_82177B48;
	// clrlwi r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
loc_82177B48:
	// stb r11,198(r3)
	REX_STORE_U8(ctx.r3.u32 + 198, ctx.r11.u8);
loc_82177B4C:
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82177B64;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82177b74
	if (cr6.lt) goto loc_82177B74;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r31.u32);
loc_82177B74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217AA98) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82178250
	sub_82178250(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8217AAE0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82177950
	sub_82177950(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8217AAE8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82179150
	sub_82179150(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82182158) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lbz r5,13(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 13);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r6,r10,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r10.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mullw r11,r5,r11
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r8,r6
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, xer);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// blt cr6,0x8218219c
	if (cr6.lt) goto loc_8218219C;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_8218219C:
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r7,127
	ctx.r7.s64 = ctx.r7.s64 + 127;
	// rlwinm r7,r7,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x821821c8
	if (cr6.eq) goto loc_821821C8;
loc_821821B4:
	// rlwinm r5,r10,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// dcbt r5,r11
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x821821b4
	if (cr6.lt) goto loc_821821B4;
loc_821821C8:
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// lfs f13,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// std r10,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r10.u64);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lfd f12,-32(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfs f13,-6976(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6976);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-6980(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -6980);
	ctx.f12.f64 = double(temp.f32);
loc_821821F8:
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// std r10,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r10.u64);
	// lfd f10,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,3072(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 3072, temp.u32);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// std r10,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r10.u64);
	// lfd f10,-24(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,2048(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 2048, temp.u32);
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,1024(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 1024, temp.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r10,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f10,-8(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fsubs f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// bne cr6,0x821821f8
	if (!cr6.eq) goto loc_821821F8;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r8,13(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 13);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r10,r8
	ctx.r10.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// blt cr6,0x821822c8
	if (cr6.lt) goto loc_821822C8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_821822C8:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, xer);
	// bge cr6,0x821822e8
	if (!cr6.lt) goto loc_821822E8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821822E8:
	// stfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218E800) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x8298eac8
	ctx.lr = 0x8218E808;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lfs f31,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r3,40(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 40);
	// lfs f0,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// ld r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// bl 0x828534d8
	ctx.lr = 0x8218E870;
	sub_828534D8(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8284fb00
	ctx.lr = 0x8218E87C;
	sub_8284FB00(ctx, base);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r29,3
	r29.s64 = 3;
	// addi r31,r1,136
	r31.s64 = ctx.r1.s64 + 136;
	// addi r30,r28,32
	r30.s64 = r28.s64 + 32;
	// lfs f30,-6944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6944);
	f30.f64 = double(temp.f32);
loc_8218E890:
	// lfs f8,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lwz r9,44(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 44);
	// lfs f7,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
	// lfs f2,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x8284fbc0
	ctx.lr = 0x8218E8B8;
	sub_8284FBC0(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bge cr6,0x8218e890
	if (!cr6.lt) goto loc_8218E890;
	// bl 0x8284fc30
	ctx.lr = 0x8218E8D0;
	sub_8284FC30(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_821944A8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,20656(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20656);
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,20660(r11)
	REX_STORE_U32(ctx.r11.u32 + 20660, ctx.r4.u32);
	// lwz r11,20656(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20656);
	// addi r11,r11,2583
	ctx.r11.s64 = ctx.r11.s64 + 2583;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r5,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r11,20656(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20656);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20656(r3)
	REX_STORE_U32(ctx.r3.u32 + 20656, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82196DD8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// lbz r11,10652(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10652);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bne cr6,0x82196df0
	if (!cr6.eq) goto loc_82196DF0;
	// lwz r11,7200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7200);
loc_82196DF0:
	// addi r11,r11,1819
	ctx.r11.s64 = ctx.r11.s64 + 1819;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82197EE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-12088
	ctx.r11.s64 = ctx.r11.s64 + -12088;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DD0A0) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32094
	ctx.r11.s64 = -2103312384;
	// lwz r11,13204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 13204);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x821dd0b8
	if (cr6.eq) goto loc_821DD0B8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x821dd0c8
	goto loc_821DD0C8;
loc_821DD0B8:
	// lwz r11,0(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_821DD0C8:
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// addi r11,r11,-6744
	ctx.r11.s64 = ctx.r11.s64 + -6744;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stbx r3,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DFD88) {
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
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,17696(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 17696);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stw r10,17696(r11)
	REX_STORE_U32(ctx.r11.u32 + 17696, ctx.r10.u32);
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// lwz r11,17700(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 17700);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x821dfdd4
	if (!cr6.eq) goto loc_821DFDD4;
	// lis r10,-32071
	ctx.r10.s64 = -2101805056;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,17692(r10)
	REX_STORE_U8(ctx.r10.u32 + 17692, ctx.r11.u8);
loc_821DFDCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821dfe58
	goto loc_821DFE58;
loc_821DFDD4:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lis r11,-32071
	ctx.r11.s64 = -2101805056;
	// lbz r11,17693(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 17693);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x821dfe54
	if (!cr6.eq) goto loc_821DFE54;
	// lis r9,-32071
	ctx.r9.s64 = -2101805056;
	// lbz r11,17692(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 17692);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x821dfdcc
	if (!cr6.eq) goto loc_821DFDCC;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x821dfe54
	if (!cr6.gt) goto loc_821DFE54;
	// lis r30,-32071
	r30.s64 = -2101805056;
	// lwz r11,17700(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 17700);
	// lwz r10,17688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 17688);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// ble cr6,0x821dfe34
	if (!cr6.gt) goto loc_821DFE34;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,17692(r9)
	REX_STORE_U8(ctx.r9.u32 + 17692, ctx.r11.u8);
	// b 0x821dfe58
	goto loc_821DFE58;
loc_821DFE34:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x829907e0
	ctx.lr = 0x821DFE48;
	rexcrt_memcpy(ctx, base);
	// lwz r11,17688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 17688);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r11,17688(r30)
	REX_STORE_U32(r30.u32 + 17688, ctx.r11.u32);
loc_821DFE54:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821DFE58:
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

DEFINE_REX_FUNC(sub_821EA3F8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r7,-32048
	ctx.r7.s64 = -2100297728;
	// lis r6,-32048
	ctx.r6.s64 = -2100297728;
	// lwz r10,-23932(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + -23932);
	// lwz r8,-23936(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + -23936);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// bne cr6,0x821ea418
	if (!cr6.eq) goto loc_821EA418;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_821EA418:
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// li r5,32
	ctx.r5.s64 = 32;
	// ori r11,r11,26215
	ctx.r11.u64 = ctx.r11.u64 | 26215;
	// cmpwi cr6,r9,10
	cr6.compare<int32_t>(ctx.r9.s32, 10, xer);
	// blt cr6,0x821ea454
	if (cr6.lt) goto loc_821EA454;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x821ea438
	if (!cr6.eq) goto loc_821EA438;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_821EA438:
	// mulhw r10,r10,r11
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stb r10,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// b 0x821ea458
	goto loc_821EA458;
loc_821EA454:
	// stb r5,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r5.u8);
loc_821EA458:
	// lwz r9,-23932(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + -23932);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x821ea468
	if (!cr6.eq) goto loc_821EA468;
	// lwz r9,-23936(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + -23936);
loc_821EA468:
	// lis r10,4194
	ctx.r10.s64 = 274857984;
	// ori r7,r10,19923
	ctx.r7.u64 = ctx.r10.u64 | 19923;
	// mulhw r10,r9,r11
	ctx.r10.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stb r10,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r10.u8);
	// lis r10,-32056
	ctx.r10.s64 = -2100822016;
	// lwz r10,-7564(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -7564);
	// mulhwu r10,r10,r7
	ctx.r10.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r7.u32)) >> 32;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x821ea4b8
	if (cr6.eq) goto loc_821EA4B8;
	// stb r5,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r5.u8);
	// b 0x821ea4c0
	goto loc_821EA4C0;
loc_821EA4B8:
	// li r10,58
	ctx.r10.s64 = 58;
	// stb r10,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
loc_821EA4C0:
	// lis r8,-32048
	ctx.r8.s64 = -2100297728;
	// lis r7,-32048
	ctx.r7.s64 = -2100297728;
	// lwz r10,-23940(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -23940);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x821ea4d8
	if (!cr6.eq) goto loc_821EA4D8;
	// lwz r10,-23944(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + -23944);
loc_821EA4D8:
	// mulhw r10,r10,r11
	ctx.r10.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stb r10,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r10.u8);
	// lwz r10,-23940(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + -23940);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x821ea500
	if (!cr6.eq) goto loc_821EA500;
	// lwz r10,-23944(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + -23944);
loc_821EA500:
	// mulhw r11,r10,r11
	ctx.r11.s64 = (int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32)) >> 32;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821ECF7C) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r16{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// lwz r16,-12316(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12316);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x821ed024
	if (!cr6.gt) goto loc_821ED024;
	// addi r10,r4,194
	ctx.r10.s64 = ctx.r4.s64 + 194;
	// addi r11,r6,520
	ctx.r11.s64 = ctx.r6.s64 + 520;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_821ED008:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x821ed028
	if (cr6.eq) goto loc_821ED028;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x821ed008
	if (cr6.lt) goto loc_821ED008;
loc_821ED024:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_821ED028:
	// addi r11,r8,66
	ctx.r11.s64 = ctx.r8.s64 + 66;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x821ed054
	if (cr6.lt) goto loc_821ED054;
	// bne cr6,0x821ed18c
	if (!cr6.eq) goto loc_821ED18C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21556
	ctx.r4.s64 = ctx.r11.s64 + 21556;
	// bl 0x8298f1f0
	ctx.lr = 0x821ED050;
	sub_8298F1F0(ctx, base);
	// b 0x821ed18c
	goto loc_821ED18C;
loc_821ED054:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21548
	ctx.r4.s64 = ctx.r11.s64 + 21548;
	// bl 0x8298f1f0
	ctx.lr = 0x821ED064;
	sub_8298F1F0(ctx, base);
	// b 0x821ed18c
	goto loc_821ED18C;
loc_821ED18C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821ED194:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x821ed194
	if (!cr6.eq) goto loc_821ED194;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821ED1A8:
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821ed1a8
	if (!cr6.eq) goto loc_821ED1A8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_821ED08C) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r16{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-12044(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12044);
	// lwz r16,-12044(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12044);
	// lwz r16,-12044(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12044);
	// lwz r16,-12044(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12044);
	// lwz r16,-12044(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12044);
	// lwz r16,-12044(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12044);
	// lwz r16,-12044(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12044);
	// lwz r16,-12044(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12044);
	// lwz r16,-12044(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12044);
	// lwz r16,-12044(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -12044);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// lwz r16,-11892(r30)
	r16.u64 = REX_LOAD_U32(r30.u32 + -11892);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x821ed134
	if (!cr6.gt) goto loc_821ED134;
	// addi r10,r4,194
	ctx.r10.s64 = ctx.r4.s64 + 194;
	// addi r11,r6,520
	ctx.r11.s64 = ctx.r6.s64 + 520;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_821ED118:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x821ed138
	if (cr6.eq) goto loc_821ED138;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x821ed118
	if (cr6.lt) goto loc_821ED118;
loc_821ED134:
	// li r8,-1
	ctx.r8.s64 = -1;
loc_821ED138:
	// addi r11,r8,66
	ctx.r11.s64 = ctx.r8.s64 + 66;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// blt cr6,0x821ed164
	if (cr6.lt) goto loc_821ED164;
	// bne cr6,0x821ed18c
	if (!cr6.eq) goto loc_821ED18C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21540
	ctx.r4.s64 = ctx.r11.s64 + 21540;
	// bl 0x8298f1f0
	ctx.lr = 0x821ED160;
	sub_8298F1F0(ctx, base);
	// b 0x821ed18c
	goto loc_821ED18C;
loc_821ED164:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,21532
	ctx.r4.s64 = ctx.r11.s64 + 21532;
	// bl 0x8298f1f0
	ctx.lr = 0x821ED174;
	sub_8298F1F0(ctx, base);
	// b 0x821ed18c
	goto loc_821ED18C;
loc_821ED18C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821ED194:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x821ed194
	if (!cr6.eq) goto loc_821ED194;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821ED1A8:
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x821ed1a8
	if (!cr6.eq) goto loc_821ED1A8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_821F7198) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x8298eabc
	ctx.lr = 0x821F71A0;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// addi r11,r11,-85
	ctx.r11.s64 = ctx.r11.s64 + -85;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// bgt cr6,0x821f7cf4
	if (cr6.gt) goto loc_821F7CF4;
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,29152
	ctx.r12.s64 = ctx.r12.s64 + 29152;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821F71F8;
	case 1:
		goto loc_821F754C;
	case 2:
		goto loc_821F7840;
	case 3:
		goto loc_821F7CF4;
	case 4:
		goto loc_821F7CF4;
	case 5:
		goto loc_821F7C30;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_821F71F8:
	// lwz r11,2656(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 2656);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821f7cf4
	if (cr6.eq) goto loc_821F7CF4;
	// lwz r11,568(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 568);
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821f7cf4
	if (cr6.eq) goto loc_821F7CF4;
	// lis r30,-32017
	r30.s64 = -2098266112;
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7220;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7234
	if (cr6.eq) goto loc_821F7234;
	// bl 0x8235cb20
	ctx.lr = 0x821F722C;
	sub_8235CB20(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x821f7238
	goto loc_821F7238;
loc_821F7234:
	// li r29,0
	r29.s64 = 0;
loc_821F7238:
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7240;
	sub_821250B0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lfs f29,2232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2232);
	f29.f64 = double(temp.f32);
	// beq cr6,0x821f7274
	if (cr6.eq) goto loc_821F7274;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f2,7908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7908);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82126d10
	ctx.lr = 0x821F7264;
	sub_82126D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ef9b8
	ctx.lr = 0x821F726C;
	sub_821EF9B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f7278
	goto loc_821F7278;
loc_821F7274:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7278:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7280;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7288;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x821f72ac
	if (cr6.eq) goto loc_821F72AC;
	// bl 0x823313f8
	ctx.lr = 0x821F7298;
	sub_823313F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,22340
	ctx.r11.s64 = ctx.r11.s64 + 22340;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x821f72b0
	goto loc_821F72B0;
loc_821F72AC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F72B0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F72B8;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F72C0;
	sub_821250B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f31.f64 = double(temp.f32);
	// beq cr6,0x821f7334
	if (cr6.eq) goto loc_821F7334;
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// li r6,30
	ctx.r6.s64 = 30;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r31,4
	r31.s64 = 4;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f4,-6944(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6944);
	ctx.f4.f64 = double(temp.f32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r10,-32094
	ctx.r10.s64 = -2103312384;
	// stw r6,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r9.u8);
	// li r6,21
	ctx.r6.s64 = 21;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,20000(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20000);
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// bl 0x82346e50
	ctx.lr = 0x821F732C;
	sub_82346E50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f7338
	goto loc_821F7338;
loc_821F7334:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7338:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7340;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7348;
	sub_821250B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lfs f30,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5180);
	f30.f64 = double(temp.f32);
	// beq cr6,0x821f7384
	if (cr6.eq) goto loc_821F7384;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82126d10
	ctx.lr = 0x821F7368;
	sub_82126D10(ctx, base);
	// li r5,384
	ctx.r5.s64 = 384;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8236fbd8
	ctx.lr = 0x821F737C;
	sub_8236FBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f7388
	goto loc_821F7388;
loc_821F7384:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7388:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7390;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7398;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f73c0
	if (cr6.eq) goto loc_821F73C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// li r6,16
	ctx.r6.s64 = 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x8236ea10
	ctx.lr = 0x821F73B8;
	sub_8236EA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f73c4
	goto loc_821F73C4;
loc_821F73C0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F73C4:
	// li r27,2
	r27.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, r27.u32);
	// bl 0x8235a188
	ctx.lr = 0x821F73D4;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F73DC;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7404
	if (cr6.eq) goto loc_821F7404;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// li r6,16
	ctx.r6.s64 = 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8236ea10
	ctx.lr = 0x821F73FC;
	sub_8236EA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f7408
	goto loc_821F7408;
loc_821F7404:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7408:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, r27.u32);
	// bl 0x8235a188
	ctx.lr = 0x821F7414;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F741C;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x821f7448
	if (cr6.eq) goto loc_821F7448;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lfs f1,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82126d10
	ctx.lr = 0x821F7438;
	sub_82126D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821efa10
	ctx.lr = 0x821F7440;
	sub_821EFA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f744c
	goto loc_821F744C;
loc_821F7448:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F744C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7454;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F745C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7484
	if (cr6.eq) goto loc_821F7484;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// li r6,29
	ctx.r6.s64 = 29;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8236ea10
	ctx.lr = 0x821F747C;
	sub_8236EA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f7488
	goto loc_821F7488;
loc_821F7484:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7488:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, r27.u32);
	// bl 0x8235a188
	ctx.lr = 0x821F7494;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F749C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f74c4
	if (cr6.eq) goto loc_821F74C4;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// li r6,29
	ctx.r6.s64 = 29;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x8236ea10
	ctx.lr = 0x821F74BC;
	sub_8236EA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f74c8
	goto loc_821F74C8;
loc_821F74C4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F74C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, r27.u32);
	// bl 0x8235a188
	ctx.lr = 0x821F74D4;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F74DC;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7524
	if (cr6.eq) goto loc_821F7524;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// li r6,27
	ctx.r6.s64 = 27;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8236ea10
	ctx.lr = 0x821F74FC;
	sub_8236EA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, r27.u32);
	// bl 0x8235a188
	ctx.lr = 0x821F750C;
	sub_8235A188(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
loc_821F7524:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, r27.u32);
	// bl 0x8235a188
	ctx.lr = 0x821F7534;
	sub_8235A188(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
loc_821F754C:
	// lwz r11,2656(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 2656);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821f7cf4
	if (cr6.eq) goto loc_821F7CF4;
	// lwz r11,568(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 568);
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821f7cf4
	if (cr6.eq) goto loc_821F7CF4;
	// lis r30,-32017
	r30.s64 = -2098266112;
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7574;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7588
	if (cr6.eq) goto loc_821F7588;
	// bl 0x8235cb20
	ctx.lr = 0x821F7580;
	sub_8235CB20(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x821f758c
	goto loc_821F758C;
loc_821F7588:
	// li r29,0
	r29.s64 = 0;
loc_821F758C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,2656(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 2656);
	// bl 0x8237b4a8
	ctx.lr = 0x821F7598;
	sub_8237B4A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821f7788
	if (cr6.eq) goto loc_821F7788;
	// bl 0x821250b0
	ctx.lr = 0x821F75AC;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x821f75dc
	if (cr6.eq) goto loc_821F75DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,7908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7908);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,2232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2232);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82126d10
	ctx.lr = 0x821F75CC;
	sub_82126D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ef9b8
	ctx.lr = 0x821F75D4;
	sub_821EF9B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f75e0
	goto loc_821F75E0;
loc_821F75DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F75E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F75E8;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F75F0;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x821f7614
	if (cr6.eq) goto loc_821F7614;
	// bl 0x823313f8
	ctx.lr = 0x821F7600;
	sub_823313F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,22340
	ctx.r11.s64 = ctx.r11.s64 + 22340;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x821f7618
	goto loc_821F7618;
loc_821F7614:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7618:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7620;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7628;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7698
	if (cr6.eq) goto loc_821F7698;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// li r11,20
	ctx.r11.s64 = 20;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r31,4
	r31.s64 = 4;
	// lfs f4,-6944(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6944);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,21
	ctx.r6.s64 = 21;
	// stb r9,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r9.u8);
	// lfs f3,3068(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3068);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,-32094
	ctx.r10.s64 = -2103312384;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lwz r8,20000(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20000);
	// bl 0x82346e50
	ctx.lr = 0x821F7690;
	sub_82346E50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f769c
	goto loc_821F769C;
loc_821F7698:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F769C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F76A4;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F76AC;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f76c8
	if (cr6.eq) goto loc_821F76C8;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r5,2656(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 2656);
	// bl 0x821f1450
	ctx.lr = 0x821F76C0;
	sub_821F1450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f76cc
	goto loc_821F76CC;
loc_821F76C8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F76CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F76D4;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F76DC;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f76f8
	if (cr6.eq) goto loc_821F76F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,2656(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 2656);
	// bl 0x821f1450
	ctx.lr = 0x821F76F0;
	sub_821F1450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f76fc
	goto loc_821F76FC;
loc_821F76F8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F76FC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7704;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F770C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7728
	if (cr6.eq) goto loc_821F7728;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r5,2656(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 2656);
	// bl 0x821f1450
	ctx.lr = 0x821F7720;
	sub_821F1450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f772c
	goto loc_821F772C;
loc_821F7728:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F772C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7734;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F773C;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x821f781c
	if (cr6.eq) goto loc_821F781C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82126d10
	ctx.lr = 0x821F775C;
	sub_82126D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821efa10
	ctx.lr = 0x821F7764;
	sub_821EFA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7770;
	sub_8235A188(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
loc_821F7788:
	// bl 0x821250b0
	ctx.lr = 0x821F778C;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x821f77b0
	if (cr6.eq) goto loc_821F77B0;
	// bl 0x823313f8
	ctx.lr = 0x821F779C;
	sub_823313F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,21956
	ctx.r11.s64 = ctx.r11.s64 + 21956;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x821f77b4
	goto loc_821F77B4;
loc_821F77B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F77B4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F77BC;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F77C4;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x821f781c
	if (cr6.eq) goto loc_821F781C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,8904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8904);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82126d10
	ctx.lr = 0x821F77E4;
	sub_82126D10(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8236fbd8
	ctx.lr = 0x821F77F8;
	sub_8236FBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7804;
	sub_8235A188(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
loc_821F781C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7828;
	sub_8235A188(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
loc_821F7840:
	// lwz r11,2656(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 2656);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821f7cf4
	if (cr6.eq) goto loc_821F7CF4;
	// lwz r11,568(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 568);
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821f7cf4
	if (cr6.eq) goto loc_821F7CF4;
	// lis r29,-32017
	r29.s64 = -2098266112;
	// lwz r3,-21944(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7868;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f787c
	if (cr6.eq) goto loc_821F787C;
	// bl 0x8235cb20
	ctx.lr = 0x821F7874;
	sub_8235CB20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x821f7880
	goto loc_821F7880;
loc_821F787C:
	// li r28,0
	r28.s64 = 0;
loc_821F7880:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,2656(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 2656);
	// bl 0x8237b4a8
	ctx.lr = 0x821F788C;
	sub_8237B4A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x821f7b5c
	if (cr6.eq) goto loc_821F7B5C;
	// lwz r3,-21944(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F78A0;
	sub_821250B0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lfs f29,2232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2232);
	f29.f64 = double(temp.f32);
	// beq cr6,0x821f78d4
	if (cr6.eq) goto loc_821F78D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f2,7908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7908);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82126d10
	ctx.lr = 0x821F78C4;
	sub_82126D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ef9b8
	ctx.lr = 0x821F78CC;
	sub_821EF9B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f78d8
	goto loc_821F78D8;
loc_821F78D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F78D8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F78E0;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F78E8;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x821f790c
	if (cr6.eq) goto loc_821F790C;
	// bl 0x823313f8
	ctx.lr = 0x821F78F8;
	sub_823313F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,22340
	ctx.r11.s64 = ctx.r11.s64 + 22340;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x821f7910
	goto loc_821F7910;
loc_821F790C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7910:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7918;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7920;
	sub_821250B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f31.f64 = double(temp.f32);
	// beq cr6,0x821f7994
	if (cr6.eq) goto loc_821F7994;
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// li r6,30
	ctx.r6.s64 = 30;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r31,4
	r31.s64 = 4;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f4,-6944(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6944);
	ctx.f4.f64 = double(temp.f32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r10,-32094
	ctx.r10.s64 = -2103312384;
	// stw r6,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r9,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r9.u8);
	// li r6,21
	ctx.r6.s64 = 21;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,20000(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20000);
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// bl 0x82346e50
	ctx.lr = 0x821F798C;
	sub_82346E50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f7998
	goto loc_821F7998;
loc_821F7994:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7998:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F79A0;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F79A8;
	sub_821250B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lfs f30,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5180);
	f30.f64 = double(temp.f32);
	// beq cr6,0x821f79e4
	if (cr6.eq) goto loc_821F79E4;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82126d10
	ctx.lr = 0x821F79C8;
	sub_82126D10(ctx, base);
	// li r5,384
	ctx.r5.s64 = 384;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8236fbd8
	ctx.lr = 0x821F79DC;
	sub_8236FBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f79e8
	goto loc_821F79E8;
loc_821F79E4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F79E8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F79F0;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F79F8;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7a20
	if (cr6.eq) goto loc_821F7A20;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// li r6,16
	ctx.r6.s64 = 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8236ea10
	ctx.lr = 0x821F7A18;
	sub_8236EA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f7a24
	goto loc_821F7A24;
loc_821F7A20:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7A24:
	// li r27,2
	r27.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, r27.u32);
	// bl 0x8235a188
	ctx.lr = 0x821F7A34;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7A3C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7a58
	if (cr6.eq) goto loc_821F7A58;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,2656(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 2656);
	// bl 0x821f1450
	ctx.lr = 0x821F7A50;
	sub_821F1450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f7a5c
	goto loc_821F7A5C;
loc_821F7A58:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7A5C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7A64;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7A6C;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x821f7a98
	if (cr6.eq) goto loc_821F7A98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// lfs f1,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82126d10
	ctx.lr = 0x821F7A88;
	sub_82126D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821efa10
	ctx.lr = 0x821F7A90;
	sub_821EFA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f7a9c
	goto loc_821F7A9C;
loc_821F7A98:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7A9C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7AA4;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7AAC;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7ad4
	if (cr6.eq) goto loc_821F7AD4;
	// li r7,16384
	ctx.r7.s64 = 16384;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// li r6,29
	ctx.r6.s64 = 29;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8236ea10
	ctx.lr = 0x821F7ACC;
	sub_8236EA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f7ad8
	goto loc_821F7AD8;
loc_821F7AD4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7AD8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, r27.u32);
	// bl 0x8235a188
	ctx.lr = 0x821F7AE4;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7AEC;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7b34
	if (cr6.eq) goto loc_821F7B34;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// li r6,27
	ctx.r6.s64 = 27;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8236ea10
	ctx.lr = 0x821F7B0C;
	sub_8236EA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, r27.u32);
	// bl 0x8235a188
	ctx.lr = 0x821F7B1C;
	sub_8235A188(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
loc_821F7B34:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r27,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, r27.u32);
	// bl 0x8235a188
	ctx.lr = 0x821F7B44;
	sub_8235A188(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
loc_821F7B5C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,2656(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 2656);
	// bl 0x8237c9c8
	ctx.lr = 0x821F7B68;
	sub_8237C9C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-21944(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7B74;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x821f7ba0
	if (cr6.eq) goto loc_821F7BA0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,2656(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 2656);
	// bl 0x8237ca20
	ctx.lr = 0x821F7B8C;
	sub_8237CA20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ef960
	ctx.lr = 0x821F7B98;
	sub_821EF960(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f7ba4
	goto loc_821F7BA4;
loc_821F7BA0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7BA4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7BAC;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7BB4;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x821f7c0c
	if (cr6.eq) goto loc_821F7C0C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82126d10
	ctx.lr = 0x821F7BD4;
	sub_82126D10(ctx, base);
	// li r5,384
	ctx.r5.s64 = 384;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8236fbd8
	ctx.lr = 0x821F7BE8;
	sub_8236FBD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7BF4;
	sub_8235A188(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
loc_821F7C0C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7C18;
	sub_8235A188(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
loc_821F7C30:
	// lis r31,-32017
	r31.s64 = -2098266112;
	// lwz r3,-21944(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7C3C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7c50
	if (cr6.eq) goto loc_821F7C50;
	// bl 0x8235cb20
	ctx.lr = 0x821F7C48;
	sub_8235CB20(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821f7c54
	goto loc_821F7C54;
loc_821F7C50:
	// li r30,0
	r30.s64 = 0;
loc_821F7C54:
	// lwz r3,-21944(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7C5C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7c88
	if (cr6.eq) goto loc_821F7C88;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,36(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 36);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,20(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 20);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821f5238
	ctx.lr = 0x821F7C80;
	sub_821F5238(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f7c8c
	goto loc_821F7C8C;
loc_821F7C88:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7C8C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8235a188
	ctx.lr = 0x821F7C94;
	sub_8235A188(ctx, base);
	// lwz r3,-21944(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x821F7C9C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x821f7cc8
	if (cr6.eq) goto loc_821F7CC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,36(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 36);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,27
	ctx.r6.s64 = 27;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8236ea10
	ctx.lr = 0x821F7CC0;
	sub_8236EA10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821f7ccc
	goto loc_821F7CCC;
loc_821F7CC8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821F7CCC:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// bl 0x8235a188
	ctx.lr = 0x821F7CDC;
	sub_8235A188(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
loc_821F7CF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
}

DEFINE_REX_FUNC(sub_82210D58) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r17{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// lwz r17,4032(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4032);
	// lwz r17,4032(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4032);
	// lwz r17,4032(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4032);
	// lwz r17,4032(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4032);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,3288(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 3288);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,4092(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 4092);
	// lwz r17,3356(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 3356);
	// lis r30,-32070
	r30.s64 = -2101739520;
	// lis r31,-32056
	r31.s64 = -2100822016;
	// li r3,263
	ctx.r3.s64 = 263;
	// lwz r11,-11272(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -11272);
	// lwz r10,-7564(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -7564);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f1.f64 = double(temp.f32);
	// ble cr6,0x82210fec
	if (!cr6.gt) goto loc_82210FEC;
	// bl 0x82211610
	ctx.lr = 0x82210FE8;
	sub_82211610(ctx, base);
	// b 0x82210ffc
	goto loc_82210FFC;
loc_82210FEC:
	// bl 0x82211610
	ctx.lr = 0x82210FF0;
	sub_82211610(ctx, base);
	// lwz r11,-7564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -7564);
	// addi r11,r11,10000
	ctx.r11.s64 = ctx.r11.s64 + 10000;
	// stw r11,-11272(r30)
	REX_STORE_U32(r30.u32 + -11272, ctx.r11.u32);
loc_82210FFC:
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

DEFINE_REX_FUNC(sub_82251C7C) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r17{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r27{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7476(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7476);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r17,7444(r5)
	r17.u64 = REX_LOAD_U32(ctx.r5.u32 + 7444);
	// lwz r10,0(r13)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,576
	ctx.r11.s64 = 576;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r6,-15016(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + -15016);
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8298f1f0
	ctx.lr = 0x82251D30;
	sub_8298F1F0(ctx, base);
	// b 0x82251d4c
	goto loc_82251D4C;
loc_82251D4C:
	// cmpwi cr6,r22,12
	cr6.compare<int32_t>(r22.s32, 12, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// blt cr6,0x82251d6c
	if (cr6.lt) goto loc_82251D6C;
	// bl 0x822735d0
	ctx.lr = 0x82251D60;
	sub_822735D0(ctx, base);
	// lfs f2,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82251d78
	goto loc_82251D78;
loc_82251D6C:
	// bl 0x822735d0
	ctx.lr = 0x82251D70;
	sub_822735D0(ctx, base);
	// lfs f2,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
loc_82251D78:
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x821df9b0
	ctx.lr = 0x82251D88;
	sub_821DF9B0(ctx, base);
	// lwz r11,-15144(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + -15144);
	// cmpwi cr6,r22,12
	cr6.compare<int32_t>(r22.s32, 12, xer);
	// blt cr6,0x82251dc4
	if (cr6.lt) goto loc_82251DC4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82251db0
	if (cr6.eq) goto loc_82251DB0;
	// lfs f0,496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x82251de4
	goto loc_82251DE4;
loc_82251DB0:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// lfs f13,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x82251de4
	goto loc_82251DE4;
loc_82251DC4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82251dd4
	if (cr6.eq) goto loc_82251DD4;
	// lfs f0,496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82251dd8
	goto loc_82251DD8;
loc_82251DD4:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
loc_82251DD8:
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_82251DE4:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmpwi cr6,r22,24
	cr6.compare<int32_t>(r22.s32, 24, xer);
	// blt cr6,0x82251a88
	// ERROR: conditional branch to unknown address 0x82251A88
	if (cr6.lt) REX_FATAL("Unresolved branch from 0x82251DEC to 0x82251A88");
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8298eaf8
	return;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmpwi cr6,r22,24
	cr6.compare<int32_t>(r22.s32, 24, xer);
	// blt cr6,0x82251a88
	// ERROR: conditional branch to unknown address 0x82251A88
	if (cr6.lt) REX_FATAL("Unresolved branch from 0x82251DEC to 0x82251A88");
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-120(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8298eaf8
	return;
}

DEFINE_REX_FUNC(sub_82255D38) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// bl 0x8298ea94
	ctx.lr = 0x82255D40;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x829900ec
	ctx.lr = 0x82255D48;
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lwz r8,36(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 36);
	// rlwinm r11,r8,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82256340
	if (!cr6.eq) goto loc_82256340;
	// rlwinm r11,r8,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82256340
	if (cr6.eq) goto loc_82256340;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// rlwinm r11,r11,0,6,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C00000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82255d94
	if (!cr6.eq) goto loc_82255D94;
	// lwz r11,280(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 280);
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82256340
	if (!cr6.eq) goto loc_82256340;
loc_82255D94:
	// lis r11,-32068
	ctx.r11.s64 = -2101608448;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r9,2484(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 2484);
	// and r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lis r11,-32062
	ctx.r11.s64 = -2101215232;
	// addi r15,r11,16672
	r15.s64 = ctx.r11.s64 + 16672;
	// bne cr6,0x82255e08
	if (!cr6.eq) goto loc_82255E08;
	// li r7,48
	ctx.r7.s64 = 48;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// lvx128 v0,r15,r7
	ea = (r15.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x82255dd0
	if (!cr6.eq) goto loc_82255DD0;
	// addi r11,r30,16
	ctx.r11.s64 = r30.s64 + 16;
loc_82255DD0:
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f0,-20248(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -20248);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82256340
	if (cr6.gt) goto loc_82256340;
loc_82255E08:
	// rlwinm r11,r8,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82255e20
	if (!cr6.eq) goto loc_82255E20;
	// rlwinm r11,r8,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82255e34
	if (cr6.eq) goto loc_82255E34;
loc_82255E20:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82256340
	if (cr6.eq) goto loc_82256340;
loc_82255E34:
	// lhz r10,46(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 46);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// li r24,0
	r24.s64 = 0;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r11,r11,-10032
	ctx.r11.s64 = ctx.r11.s64 + -10032;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,0
	r25.s64 = 0;
	// lwzx r23,r10,r11
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8231c170
	ctx.lr = 0x82255E5C;
	sub_8231C170(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8225630c
	if (!cr6.gt) goto loc_8225630C;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r5,-32245
	ctx.r5.s64 = -2113208320;
	// addi r19,r11,-8464
	r19.s64 = ctx.r11.s64 + -8464;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// lis r6,-32245
	ctx.r6.s64 = -2113208320;
	// lis r7,-32245
	ctx.r7.s64 = -2113208320;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f30,-6912(r5)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r5.u32 + -6912);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r21,r11,-8432
	r21.s64 = ctx.r11.s64 + -8432;
	// lfd f31,-6920(r6)
	f31.u64 = REX_LOAD_U64(ctx.r6.u32 + -6920);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// lfs f28,-6944(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -6944);
	f28.f64 = double(temp.f32);
	// lfs f27,2592(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2592);
	f27.f64 = double(temp.f32);
	// lis r20,-32015
	r20.s64 = -2098135040;
	// lfs f26,3068(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3068);
	f26.f64 = double(temp.f32);
	// addi r22,r11,-14988
	r22.s64 = ctx.r11.s64 + -14988;
	// lfs f25,-6968(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6968);
	f25.f64 = double(temp.f32);
	// li r16,16
	r16.s64 = 16;
	// li r17,32
	r17.s64 = 32;
	// li r18,48
	r18.s64 = 48;
loc_82255EBC:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8231c1c0
	ctx.lr = 0x82255EC8;
	sub_8231C1C0(ctx, base);
	// rlwinm r10,r25,1,28,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xE;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lhz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 44);
	// lhzx r10,r10,r22
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + r22.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// clrlwi r26,r11,16
	r26.u64 = ctx.r11.u32 & 0xFFFF;
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82255F08;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82256064
	if (cr6.eq) goto loc_82256064;
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(ctx.r11.s32, 18, xer);
	// bne cr6,0x822562f8
	if (!cr6.eq) goto loc_822562F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82255F30;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,208(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f0,216(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// bl 0x82254b68
	ctx.lr = 0x82255F5C;
	sub_82254B68(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lfs f13,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f12,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,196(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// bl 0x82254b68
	ctx.lr = 0x82255F84;
	sub_82254B68(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lfs f13,44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// bl 0x82254b68
	ctx.lr = 0x82255FAC;
	sub_82254B68(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lfs f13,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f12,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x82254b68
	ctx.lr = 0x82255FD4;
	sub_82254B68(ctx, base);
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f29.f64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x82256020
	if (cr6.eq) goto loc_82256020;
	// lwz r11,-3324(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + -3324);
	// srawi r9,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// bne cr6,0x82256020
	if (!cr6.eq) goto loc_82256020;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82256020
	if (cr6.eq) goto loc_82256020;
	// bl 0x823d9ca0
	ctx.lr = 0x8225601C;
	sub_823D9CA0(ctx, base);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f29.f64));
loc_82256020:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, f25.f64);
	// ble cr6,0x822562f8
	if (!cr6.gt) goto loc_822562F8;
	// lfs f13,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// fcmpu cr6,f13,f26
	cr6.compare(ctx.f13.f64, f26.f64);
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f27
	ctx.f3.f64 = f27.f64;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// li r10,0
	ctx.r10.s64 = 0;
	// ble cr6,0x8225605c
	if (!cr6.gt) goto loc_8225605C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8225605C:
	// bl 0x822e5cd0
	ctx.lr = 0x82256060;
	sub_822E5CD0(ctx, base);
	// b 0x822562f4
	goto loc_822562F4;
loc_82256064:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82256078;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// lwz r5,104(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 104);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x82256138
	if (cr6.eq) goto loc_82256138;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x824acc20
	ctx.lr = 0x8225609C;
	sub_824ACC20(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v0,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand v12,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vcmpeqfp. v13,v12,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)));
	cr6.setFromMask(simde_mm_load_ps(ctx.v13.f32), 0xF);
	// mfocrf r11,2
	ctx.r11.u64 = (cr6.lt << 7) | (cr6.gt << 6) | (cr6.eq << 5) | (cr6.so << 4);
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x822560cc
	if (cr6.eq) goto loc_822560CC;
	// li r27,1
	r27.s64 = 1;
	// b 0x82256138
	goto loc_82256138;
loc_822560CC:
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// li r28,1
	r28.s64 = 1;
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// vand v7,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v0,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// vmrghw v13,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vor v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglw v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// lvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// vmrghw v12,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrglw v10,v8,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v8.u32)));
	// vmrghw v11,v11,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v10,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmsum4fp128 v11,v0,v11
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v11.f32), 0xFF));
	// vmsum4fp128 v12,v0,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v13,v0,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xFF));
	// vmrghw v0,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v13,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v0,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82256138:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8225619c
	if (!cr6.eq) goto loc_8225619C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8225619c
	if (!cr6.eq) goto loc_8225619C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82155140
	ctx.lr = 0x82256158;
	sub_82155140(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r11,r16
	ea = (ctx.r11.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r11,r17
	ea = (ctx.r11.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r11,r18
	ea = (ctx.r11.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82254b68
	ctx.lr = 0x8225619C;
	sub_82254B68(ctx, base);
loc_8225619C:
	// clrlwi r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x822562f8
	if (!cr6.eq) goto loc_822562F8;
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// rlwinm r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x822561c4
	if (cr6.eq) goto loc_822561C4;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// b 0x822561c8
	goto loc_822561C8;
loc_822561C4:
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f26.f64;
loc_822561C8:
	// lfs f0,96(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, f28.f64);
	// bne cr6,0x822561e0
	if (!cr6.eq) goto loc_822561E0;
	// lfs f0,100(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(ctx.f0.f64, f28.f64);
	// beq cr6,0x82256284
	if (cr6.eq) goto loc_82256284;
loc_822561E0:
	// li r11,48
	ctx.r11.s64 = 48;
	// lfs f13,96(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,100(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, f28.f64);
	// lfs f0,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r15,r11
	ea = (r15.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f11,148(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f12,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f12,f12,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// beq cr6,0x82256250
	if (cr6.eq) goto loc_82256250;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fsel f11,f13,f13,f31
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : f31.f64;
	// fsel f13,f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : f31.f64;
	// fsub f11,f11,f30
	ctx.f11.f64 = ctx.f11.f64 - f30.f64;
	// fsel f13,f11,f30,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? f30.f64 : ctx.f13.f64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 * f29.f64));
loc_82256250:
	// fcmpu cr6,f10,f28
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, f28.f64);
	// beq cr6,0x82256284
	if (cr6.eq) goto loc_82256284;
	// lfs f13,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsubs f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fsel f13,f0,f0,f31
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsel f0,f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f31.f64;
	// fsub f13,f13,f30
	ctx.f13.f64 = ctx.f13.f64 - f30.f64;
	// fsel f0,f13,f30,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f30.f64 : ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
loc_82256284:
	// lbz r10,64(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 64);
	// lwz r9,36(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// rlwinm r7,r11,2,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// rlwinm r6,r11,3,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// rlwinm r5,r11,4,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// beq cr6,0x822562bc
	if (cr6.eq) goto loc_822562BC;
	// cmpwi cr6,r10,63
	cr6.compare<int32_t>(ctx.r10.s32, 63, xer);
	// bne cr6,0x822562bc
	if (!cr6.eq) goto loc_822562BC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822562BC:
	// lhz r4,72(r23)
	ctx.r4.u64 = REX_LOAD_U16(r23.u32 + 72);
	// add r9,r25,r30
	ctx.r9.u64 = r25.u64 + r30.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r10,72(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 72);
	// extsh r29,r4
	r29.s64 = ctx.r4.s16;
	// stb r5,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r5.u8);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stb r6,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r6.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r7,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r7.u8);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// bl 0x82255108
	ctx.lr = 0x822562F4;
	sub_82255108(ctx, base);
loc_822562F4:
	// li r24,1
	r24.s64 = 1;
loc_822562F8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// bl 0x8231c170
	ctx.lr = 0x82256304;
	sub_8231C170(ctx, base);
	// cmpw cr6,r25,r3
	cr6.compare<int32_t>(r25.s32, ctx.r3.s32, xer);
	// blt cr6,0x82255ebc
	if (cr6.lt) goto loc_82255EBC;
loc_8225630C:
	// clrlwi r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82256340
	if (cr6.eq) goto loc_82256340;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82256340
	if (!cr6.eq) goto loc_82256340;
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82256340
	if (cr6.eq) goto loc_82256340;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82432dc0
	ctx.lr = 0x82256340;
	sub_82432DC0(ctx, base);
loc_82256340:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82990138
	ctx.lr = 0x8225634C;
	// b 0x8298eae4
	return;
}

DEFINE_REX_FUNC(sub_82299898) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,5168
	ctx.r11.s64 = 5168;
	// lvx128 v0,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229A5E8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f10,12116(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12116);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// addi r10,r10,-21824
	ctx.r10.s64 = ctx.r10.s64 + -21824;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// lis r9,-32055
	ctx.r9.s64 = -2100756480;
	// addi r10,r10,-20816
	ctx.r10.s64 = ctx.r10.s64 + -20816;
	// addi r9,r9,-22784
	ctx.r9.s64 = ctx.r9.s64 + -22784;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2980(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,10524(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10524);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r9,-32055
	ctx.r9.s64 = -2100756480;
	// addi r9,r9,-23024
	ctx.r9.s64 = ctx.r9.s64 + -23024;
loc_8229A658:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8229a674
	if (!cr6.gt) goto loc_8229A674;
loc_8229A668:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x8229a668
	if (cr6.gt) goto loc_8229A668;
loc_8229A674:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8229a688
	if (!cr6.lt) goto loc_8229A688;
loc_8229A67C:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x8229a67c
	if (cr6.lt) goto loc_8229A67C;
loc_8229A688:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f10
	cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x8229a6a0
	if (!cr6.lt) goto loc_8229A6A0;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lbzx r3,r6,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
loc_8229A6A0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// blt cr6,0x8229a658
	if (cr6.lt) goto loc_8229A658;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A2EA0) {
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
	// lis r10,-32055
	ctx.r10.s64 = -2100756480;
	// lvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-8124(r10)
	REX_STORE_U32(ctx.r10.u32 + -8124, ctx.r11.u32);
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r30,r11,-8000
	r30.s64 = ctx.r11.s64 + -8000;
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r11,r11,-4256
	ctx.r11.s64 = ctx.r11.s64 + -4256;
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// lfs f0,-9984(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -9984);
	ctx.f0.f64 = double(temp.f32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x822a2518
	ctx.lr = 0x822A2F08;
	sub_822A2518(ctx, base);
	// lis r31,-32055
	r31.s64 = -2100756480;
	// lvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// addi r11,r11,-7984
	ctx.r11.s64 = ctx.r11.s64 + -7984;
	// lbz r10,-8119(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + -8119);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x822a2f4c
	if (!cr6.eq) goto loc_822A2F4C;
	// lis r11,-32054
	ctx.r11.s64 = -2100690944;
	// addi r3,r11,-13632
	ctx.r3.s64 = ctx.r11.s64 + -13632;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-8119(r31)
	REX_STORE_U8(r31.u32 + -8119, ctx.r11.u8);
	// bl 0x825eed08
	ctx.lr = 0x822A2F3C;
	sub_825EED08(ctx, base);
	// lis r11,-32055
	ctx.r11.s64 = -2100756480;
	// stw r3,-8064(r11)
	REX_STORE_U32(ctx.r11.u32 + -8064, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,-8119(r31)
	REX_STORE_U8(r31.u32 + -8119, ctx.r11.u8);
loc_822A2F4C:
	// bl 0x82498078
	ctx.lr = 0x822A2F50;
	sub_82498078(ctx, base);
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

DEFINE_REX_FUNC(sub_822ADF38) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac0
	ctx.lr = 0x822ADF40;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r3,4936(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4936);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x821250b0
	ctx.lr = 0x822ADF68;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822adf90
	if (cr6.eq) goto loc_822ADF90;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826d68f0
	ctx.lr = 0x822ADF8C;
	sub_826D68F0(ctx, base);
	// b 0x822adf94
	goto loc_822ADF94;
loc_822ADF90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822ADF94:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// bl 0x826af3c0
	ctx.lr = 0x822ADFA0;
	sub_826AF3C0(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8298eb10
	return;
}

DEFINE_REX_FUNC(sub_822B6CB8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x822b6cf8
	if (!cr6.eq) goto loc_822B6CF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B6CE8;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bgt cr6,0x822b6cfc
	if (cr6.gt) goto loc_822B6CFC;
loc_822B6CF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822B6CFC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

DEFINE_REX_FUNC(sub_822B7EA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B7ED4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822B7EEC;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// subf r11,r30,r3
	ctx.r11.u64 = ctx.r3.u64 - r30.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

DEFINE_REX_FUNC(sub_822B92D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-9764
	ctx.r11.s64 = ctx.r11.s64 + -9764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B97E8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x822b9814
	if (cr6.eq) goto loc_822B9814;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// rlwinm r10,r10,0,6,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3C00000;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x822b9814
	if (!cr6.eq) goto loc_822B9814;
	// lwz r3,3904(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 3904);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_822B9814:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822BBEB8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,484(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x822bbee0
	if (!cr6.gt) goto loc_822BBEE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BBEE0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x822bbf18
	if (cr6.eq) goto loc_822BBF18;
	// lwz r11,2468(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 2468);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x822bbf04
	if (cr6.eq) goto loc_822BBF04;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822bbf08
	if (!cr6.eq) goto loc_822BBF08;
loc_822BBF04:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822BBF08:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822bbf1c
	if (!cr6.eq) goto loc_822BBF1C;
loc_822BBF18:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BBF1C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x822bbf3c
	if (cr6.eq) goto loc_822BBF3C;
loc_822BBF28:
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
loc_822BBF3C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x822bbf28
	if (cr6.eq) goto loc_822BBF28;
	// lwz r3,540(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 540);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x823b2900
	ctx.lr = 0x822BBF54;
	sub_823B2900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C08D0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-8284
	ctx.r11.s64 = ctx.r11.s64 + -8284;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822c090c
	if (cr6.eq) goto loc_822C090C;
	// bl 0x823e5680
	ctx.lr = 0x822C090C;
	sub_823E5680(ctx, base);
loc_822C090C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r11,r11,-9764
	ctx.r11.s64 = ctx.r11.s64 + -9764;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822c097c
	if (cr6.eq) goto loc_822C097C;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lwz r11,-9316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -9316);
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
	// bge cr6,0x822c0970
	if (!cr6.lt) goto loc_822C0970;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_822C0970:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_822C097C:
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

DEFINE_REX_FUNC(sub_822C85F8) {
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
	ctx.lr = 0x822C8600;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r29,r11,-14720
	r29.s64 = ctx.r11.s64 + -14720;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// stb r11,-14733(r10)
	REX_STORE_U8(ctx.r10.u32 + -14733, ctx.r11.u8);
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// stb r11,-22651(r10)
	REX_STORE_U8(ctx.r10.u32 + -22651, ctx.r11.u8);
	// lis r10,-32072
	ctx.r10.s64 = -2101870592;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stb r11,1872(r10)
	REX_STORE_U8(ctx.r10.u32 + 1872, ctx.r11.u8);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r11,1500
	ctx.r11.s64 = 1500;
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
loc_822C8640:
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822c8640
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_822C8640;
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_822C8654:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x822c8680
	if (cr6.lt) goto loc_822C8680;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x822c8680
	if (cr6.eq) goto loc_822C8680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// bl 0x8222dc30
	ctx.lr = 0x822C8674;
	sub_8222DC30(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8218be78
	ctx.lr = 0x822C867C;
	sub_8218BE78(ctx, base);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
loc_822C8680:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r29,6000
	ctx.r11.s64 = r29.s64 + 6000;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x822c8654
	if (cr6.lt) goto loc_822C8654;
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// addi r10,r10,-11808
	ctx.r10.s64 = ctx.r10.s64 + -11808;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// addi r11,r11,-12072
	ctx.r11.s64 = ctx.r11.s64 + -12072;
	// lwz r10,224(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3068(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// stfs f0,-14724(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -14724, temp.u32);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// stfs f0,-14728(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -14728, temp.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stb r10,-14734(r9)
	REX_STORE_U8(ctx.r9.u32 + -14734, ctx.r10.u8);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// stw r10,-14732(r9)
	REX_STORE_U32(ctx.r9.u32 + -14732, ctx.r10.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,-7504
	ctx.r11.s64 = ctx.r11.s64 + -7504;
	// lbz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 88);
	// stb r10,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_822D4198) {
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
	// bl 0x822d3218
	ctx.lr = 0x822D41B8;
	sub_822D3218(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x822d421c
	if (cr6.eq) goto loc_822D421C;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
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
	// bge cr6,0x822d4210
	if (!cr6.lt) goto loc_822D4210;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_822D4210:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_822D421C:
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

DEFINE_REX_FUNC(sub_822DB420) {
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
	// bl 0x82318f10
	ctx.lr = 0x822DB438;
	sub_82318F10(ctx, base);
	// bl 0x822d7398
	ctx.lr = 0x822DB43C;
	sub_822D7398(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x822db44c
	if (!cr6.eq) goto loc_822DB44C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d8628
	ctx.lr = 0x822DB44C;
	sub_822D8628(ctx, base);
loc_822DB44C:
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

DEFINE_REX_FUNC(sub_822DE230) {
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
	ctx.lr = 0x822DE238;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// bne cr6,0x822de25c
	if (!cr6.eq) goto loc_822DE25C;
	// addi r6,r28,16
	ctx.r6.s64 = r28.s64 + 16;
loc_822DE25C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f1,29496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29496);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823f4020
	ctx.lr = 0x822DE274;
	sub_823F4020(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823f65a8
	ctx.lr = 0x822DE27C;
	sub_823F65A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x822de300
	if (cr6.eq) goto loc_822DE300;
loc_822DE288:
	// lhz r11,46(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 46);
	// lhz r10,46(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 46);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x822de2ec
	if (!cr6.eq) goto loc_822DE2EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// bge cr6,0x822de2ec
	if (!cr6.lt) goto loc_822DE2EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DE2B8;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822de2ec
	if (cr6.eq) goto loc_822DE2EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DE2D4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822DE2EC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823f65a8
	ctx.lr = 0x822DE2F4;
	sub_823F65A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x822de288
	if (!cr6.eq) goto loc_822DE288;
loc_822DE300:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x822de3bc
	if (!cr6.eq) goto loc_822DE3BC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,-6540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6540);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823f4020
	ctx.lr = 0x822DE328;
	sub_823F4020(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f65a8
	ctx.lr = 0x822DE330;
	sub_823F65A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x822de3b4
	if (cr6.eq) goto loc_822DE3B4;
loc_822DE33C:
	// lhz r11,46(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 46);
	// lhz r10,46(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 46);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x822de3a0
	if (!cr6.eq) goto loc_822DE3A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// bge cr6,0x822de3a0
	if (!cr6.lt) goto loc_822DE3A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DE36C;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x822de3a0
	if (cr6.eq) goto loc_822DE3A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822DE388;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_822DE3A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f65a8
	ctx.lr = 0x822DE3A8;
	sub_823F65A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x822de33c
	if (!cr6.eq) goto loc_822DE33C;
loc_822DE3B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828e0a68
	ctx.lr = 0x822DE3BC;
	sub_828E0A68(ctx, base);
loc_822DE3BC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x828e0a68
	ctx.lr = 0x822DE3C8;
	sub_828E0A68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_822EB7B8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r7,r11,-624
	ctx.r7.s64 = ctx.r11.s64 + -624;
	// lwz r8,36(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// lfs f0,32(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
loc_822EB7D0:
	// lvx128 v0,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_822EB7D4:
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lvx128 v12,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// vaddfp v13,v13,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// vmulfp128 v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822eb810
	if (cr6.lt) goto loc_822EB810;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EB810:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x822eb824
	if (cr6.eq) goto loc_822EB824;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x822eb7d4
	goto loc_822EB7D4;
loc_822EB824:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_822EB828:
	// addi r4,r4,-32
	ctx.r4.s64 = ctx.r4.s64 + -32;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// lvx128 v12,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// vaddfp v13,v13,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfsx f13,r10,r11
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822eb864
	if (cr6.lt) goto loc_822EB864;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822EB864:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x822eb828
	if (cr6.eq) goto loc_822EB828;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x822eb7d0
	goto loc_822EB7D0;
}

DEFINE_REX_FUNC(sub_822FAEC8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FB188) {
	REX_FUNC_PROLOGUE();
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
	ctx.lr = 0x822FB190;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,768(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 768);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x822fb428
	if (cr6.eq) goto loc_822FB428;
	// lwz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 500);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x822fb428
	if (!cr6.eq) goto loc_822FB428;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x822fb428
	if (!cr6.eq) goto loc_822FB428;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,10272
	ctx.r3.s64 = ctx.r11.s64 + 10272;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8252d4a8
	ctx.lr = 0x822FB1E0;
	sub_8252D4A8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x822fb1f4
	if (!cr6.eq) goto loc_822FB1F4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,954(r31)
	REX_STORE_U8(r31.u32 + 954, ctx.r11.u8);
loc_822FB1F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r29,r31,780
	r29.s64 = r31.s64 + 780;
	// addi r10,r11,1872
	ctx.r10.s64 = ctx.r11.s64 + 1872;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r11,780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 780);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lfs f13,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vlogefp v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v13.f32[0] = log2f(ctx.v13.f32[0]);
	ctx.v13.f32[1] = log2f(ctx.v13.f32[1]);
	ctx.v13.f32[2] = log2f(ctx.v13.f32[2]);
	ctx.v13.f32[3] = log2f(ctx.v13.f32[3]);
	// vmulfp128 v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5248(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5248);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,12120(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12120);
	ctx.f13.f64 = double(temp.f32);
	// fsel f31,f12,f0,f13
	f31.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// beq cr6,0x822fb2a0
	if (cr6.eq) goto loc_822FB2A0;
	// lbz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x822fb294
	if (cr6.eq) goto loc_822FB294;
	// lbz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 64);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r11,r11,-19824
	ctx.r11.s64 = ctx.r11.s64 + -19824;
	// lwz r10,200(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lwz r11,232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mulli r9,r8,14560
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(14560));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,14516(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14516);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x822fb298
	goto loc_822FB298;
loc_822FB294:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822FB298:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x828a74b8
	ctx.lr = 0x822FB2A0;
	sub_828A74B8(ctx, base);
loc_822FB2A0:
	// lwz r10,776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 776);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x822fb2c4
	if (cr6.eq) goto loc_822FB2C4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x822fb2c4
	if (cr6.eq) goto loc_822FB2C4;
	// lbz r11,954(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 954);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x822fb428
	if (cr6.eq) goto loc_822FB428;
loc_822FB2C4:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,14
	cr6.compare<uint32_t>(ctx.r9.u32, 14, xer);
	// bge cr6,0x822fb3f0
	if (!cr6.lt) goto loc_822FB3F0;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,784(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 784);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x822fb3f0
	if (cr6.eq) goto loc_822FB3F0;
	// lbz r11,953(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 953);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x822fb3f0
	if (!cr6.eq) goto loc_822FB3F0;
	// lbz r11,954(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 954);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x822fb3f0
	if (!cr6.eq) goto loc_822FB3F0;
	// lbz r11,952(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 952);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x822fb32c
	if (cr6.eq) goto loc_822FB32C;
	// addi r11,r10,66
	ctx.r11.s64 = ctx.r10.s64 + 66;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x822fb3f0
	if (!cr6.eq) goto loc_822FB3F0;
loc_822FB32C:
	// stw r9,776(r31)
	REX_STORE_U32(r31.u32 + 776, ctx.r9.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lbz r8,960(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 960);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// lwz r7,784(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 784);
	// lis r10,-32093
	ctx.r10.s64 = -2103246848;
	// addi r4,r9,2292
	ctx.r4.s64 = ctx.r9.s64 + 2292;
	// addi r11,r11,-4736
	ctx.r11.s64 = ctx.r11.s64 + -4736;
	// addi r10,r10,-4760
	ctx.r10.s64 = ctx.r10.s64 + -4760;
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwzx r5,r8,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x8298f1f0
	ctx.lr = 0x822FB368;
	sub_8298F1F0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821ab0e8
	ctx.lr = 0x822FB370;
	sub_821AB0E8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-24364
	ctx.r3.s64 = ctx.r11.s64 + -24364;
	// bl 0x827df440
	ctx.lr = 0x822FB380;
	sub_827DF440(ctx, base);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-28768
	ctx.r11.s64 = ctx.r11.s64 + -28768;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82894ea0
	ctx.lr = 0x822FB394;
	sub_82894EA0(ctx, base);
	// lwz r11,788(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 788);
	// lbz r10,182(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 182);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r9,956(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 956);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r3,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lis r11,-32048
	ctx.r11.s64 = -2100297728;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stb r10,182(r1)
	REX_STORE_U8(ctx.r1.u32 + 182, ctx.r10.u8);
	// lwz r11,-25092(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -25092);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// li r11,3000
	ctx.r11.s64 = 3000;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82894ab0
	ctx.lr = 0x822FB3E4;
	sub_82894AB0(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
loc_822FB3F0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stb r28,768(r31)
	REX_STORE_U8(r31.u32 + 768, r28.u8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,776(r31)
	REX_STORE_U32(r31.u32 + 776, ctx.r11.u32);
	// beq cr6,0x822fb410
	if (cr6.eq) goto loc_822FB410;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8289a840
	ctx.lr = 0x822FB410;
	sub_8289A840(ctx, base);
loc_822FB410:
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// stb r28,952(r31)
	REX_STORE_U8(r31.u32 + 952, r28.u8);
	// stb r28,953(r31)
	REX_STORE_U8(r31.u32 + 953, r28.u8);
	// stb r28,954(r31)
	REX_STORE_U8(r31.u32 + 954, r28.u8);
	// lwz r11,-7564(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7564);
	// stw r11,772(r31)
	REX_STORE_U32(r31.u32 + 772, ctx.r11.u32);
loc_822FB428:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_82300004) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	// bl 0x82283bf8
	ctx.lr = 0x82300008;
	sub_82283BF8(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230002c
	if (cr6.eq) goto loc_8230002C;
	// bl 0x8237bb58
	ctx.lr = 0x8230001C;
	sub_8237BB58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82300030
	if (!cr6.eq) goto loc_82300030;
loc_8230002C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82300030:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_82300010) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r31{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8230002c
	if (cr6.eq) goto loc_8230002C;
	// bl 0x8237bb58
	ctx.lr = 0x8230001C;
	sub_8237BB58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82300030
	if (!cr6.eq) goto loc_82300030;
loc_8230002C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82300030:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_82317518) {
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
	ctx.lr = 0x82317520;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82317530:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82317530
	if (!cr6.eq) goto loc_82317530;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8231758c
	if (cr6.eq) goto loc_8231758C;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-2768
	r29.s64 = ctx.r11.s64 + -2768;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82317564:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8298eff0
	ctx.lr = 0x82317570;
	rexcrt__stricmp(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82317598
	if (cr6.eq) goto loc_82317598;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r29,84
	ctx.r11.s64 = r29.s64 + 84;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, ctx.r11.s32, xer);
	// blt cr6,0x82317564
	if (cr6.lt) goto loc_82317564;
loc_8231758C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_82317598:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_823196F4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82319728) {
	REX_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r4,r11,-1584
	ctx.r4.s64 = ctx.r11.s64 + -1584;
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// stfs f1,12(r4)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,-29424(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -29424);
	// b 0x8285a3a8
	sub_8285A3A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8231A5A0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stb r4,3393(r11)
	REX_STORE_U8(ctx.r11.u32 + 3393, ctx.r4.u8);
	// b 0x82327140
	sub_82327140(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8231AB70) {
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
	// lbz r11,2352(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8231abcc
	if (!cr6.eq) goto loc_8231ABCC;
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// addi r3,r11,27840
	ctx.r3.s64 = ctx.r11.s64 + 27840;
	// bl 0x824b6080
	ctx.lr = 0x8231AB9C;
	sub_824B6080(ctx, base);
	// stw r3,2344(r31)
	REX_STORE_U32(r31.u32 + 2344, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r31,2288
	ctx.r5.s64 = r31.s64 + 2288;
	// addi r4,r31,2284
	ctx.r4.s64 = r31.s64 + 2284;
	// addi r3,r31,2292
	ctx.r3.s64 = r31.s64 + 2292;
	// bl 0x82259990
	ctx.lr = 0x8231ABBC;
	sub_82259990(ctx, base);
	// lwz r3,2344(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2344);
	// bl 0x8220e360
	ctx.lr = 0x8231ABC4;
	sub_8220E360(ctx, base);
	// bl 0x82258bc0
	ctx.lr = 0x8231ABC8;
	sub_82258BC0(ctx, base);
	// b 0x8231abd8
	goto loc_8231ABD8;
loc_8231ABCC:
	// lwz r11,2356(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2356);
	// lwz r11,2344(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	// stw r11,2344(r31)
	REX_STORE_U32(r31.u32 + 2344, ctx.r11.u32);
loc_8231ABD8:
	// lis r11,-32086
	ctx.r11.s64 = -2102788096;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,23984
	ctx.r3.s64 = ctx.r11.s64 + 23984;
	// bl 0x82195de8
	ctx.lr = 0x8231ABE8;
	sub_82195DE8(ctx, base);
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

DEFINE_REX_FUNC(sub_8231DE60) {
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
	ctx.lr = 0x8231DE68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,6480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6480);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8231deb8
	if (!cr6.gt) goto loc_8231DEB8;
	// addi r29,r31,144
	r29.s64 = r31.s64 + 144;
	// addi r28,r31,6496
	r28.s64 = r31.s64 + 6496;
loc_8231DE8C:
	// lbzx r11,r28,r30
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8231dea4
	if (cr6.eq) goto loc_8231DEA4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82213bd8
	ctx.lr = 0x8231DEA0;
	sub_82213BD8(ctx, base);
	// add r27,r3,r27
	r27.u64 = ctx.r3.u64 + r27.u64;
loc_8231DEA4:
	// lwz r11,6480(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6480);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,176
	r29.s64 = r29.s64 + 176;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8231de8c
	if (cr6.lt) goto loc_8231DE8C;
loc_8231DEB8:
	// lwz r11,6484(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6484);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8231defc
	if (!cr6.gt) goto loc_8231DEFC;
	// addi r29,r31,5776
	r29.s64 = r31.s64 + 5776;
	// addi r28,r31,6528
	r28.s64 = r31.s64 + 6528;
loc_8231DED0:
	// lbzx r11,r28,r30
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8231dee8
	if (cr6.eq) goto loc_8231DEE8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82213bd8
	ctx.lr = 0x8231DEE4;
	sub_82213BD8(ctx, base);
	// add r27,r3,r27
	r27.u64 = ctx.r3.u64 + r27.u64;
loc_8231DEE8:
	// lwz r11,6484(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6484);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,192
	r29.s64 = r29.s64 + 192;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8231ded0
	if (cr6.lt) goto loc_8231DED0;
loc_8231DEFC:
	// lwz r11,6488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6488);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8231df40
	if (!cr6.gt) goto loc_8231DF40;
	// addi r29,r31,5968
	r29.s64 = r31.s64 + 5968;
	// addi r28,r31,6529
	r28.s64 = r31.s64 + 6529;
loc_8231DF14:
	// lbzx r11,r28,r30
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8231df2c
	if (cr6.eq) goto loc_8231DF2C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82213bd8
	ctx.lr = 0x8231DF28;
	sub_82213BD8(ctx, base);
	// add r27,r3,r27
	r27.u64 = ctx.r3.u64 + r27.u64;
loc_8231DF2C:
	// lwz r11,6488(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6488);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,224
	r29.s64 = r29.s64 + 224;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8231df14
	if (cr6.lt) goto loc_8231DF14;
loc_8231DF40:
	// lwz r11,6492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6492);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8231df84
	if (!cr6.gt) goto loc_8231DF84;
	// addi r29,r31,6192
	r29.s64 = r31.s64 + 6192;
	// addi r28,r31,6530
	r28.s64 = r31.s64 + 6530;
loc_8231DF58:
	// lbzx r11,r28,r30
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8231df70
	if (cr6.eq) goto loc_8231DF70;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82213bd8
	ctx.lr = 0x8231DF6C;
	sub_82213BD8(ctx, base);
	// add r27,r3,r27
	r27.u64 = ctx.r3.u64 + r27.u64;
loc_8231DF70:
	// lwz r11,6492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6492);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,288
	r29.s64 = r29.s64 + 288;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x8231df58
	if (cr6.lt) goto loc_8231DF58;
loc_8231DF84:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_82327B30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x822370a8
	ctx.lr = 0x82327B60;
	sub_822370A8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822370a8
	ctx.lr = 0x82327B6C;
	sub_822370A8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82326028
	ctx.lr = 0x82327B80;
	sub_82326028(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827eeec0
	ctx.lr = 0x82327B8C;
	sub_827EEEC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232CA90) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298ea90
	ctx.lr = 0x8232CA98;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x829900f0
	ctx.lr = 0x8232CAA0;
	// li r12,-240
	ctx.r12.s64 = -240;
	// stvx128 v126,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-224
	ctx.r12.s64 = -224;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r8,655(r1)
	REX_STORE_U8(ctx.r1.u32 + 655, ctx.r8.u8);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r3,612(r1)
	REX_STORE_U32(ctx.r1.u32 + 612, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r6,636(r1)
	REX_STORE_U32(ctx.r1.u32 + 636, ctx.r6.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// lfs f30,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f30.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,164(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r8,660(r1)
	REX_STORE_U32(ctx.r1.u32 + 660, ctx.r8.u32);
	// fmr f27,f3
	f27.f64 = ctx.f3.f64;
	// stw r29,628(r1)
	REX_STORE_U32(ctx.r1.u32 + 628, r29.u32);
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// lfs f26,29496(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 29496);
	f26.f64 = double(temp.f32);
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r14,-32093
	r14.s64 = -2103246848;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// lfs f28,2592(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2592);
	f28.f64 = double(temp.f32);
	// stw r7,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// addi r18,r11,25492
	r18.s64 = ctx.r11.s64 + 25492;
	// stb r7,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r7.u8);
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// lis r15,-32093
	r15.s64 = -2103246848;
	// addi r17,r11,-10032
	r17.s64 = ctx.r11.s64 + -10032;
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// lis r16,-32093
	r16.s64 = -2103246848;
	// addi r28,r11,-720
	r28.s64 = ctx.r11.s64 + -720;
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// li r21,20
	r21.s64 = 20;
	// addi r27,r11,-704
	r27.s64 = ctx.r11.s64 + -704;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r26,r11,-8288
	r26.s64 = ctx.r11.s64 + -8288;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r25,r11,-8464
	r25.s64 = ctx.r11.s64 + -8464;
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r24,r11,-8432
	r24.s64 = ctx.r11.s64 + -8432;
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// addi r23,r11,-560
	r23.s64 = ctx.r11.s64 + -560;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r22,r11,-27680
	r22.s64 = ctx.r11.s64 + -27680;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// addi r30,r11,-20792
	r30.s64 = ctx.r11.s64 + -20792;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8232cba0
	goto loc_8232CBA0;
loc_8232CB9C:
	// lwz r8,660(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
loc_8232CBA0:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(ctx.r11.s32, 5, xer);
	// bge cr6,0x8232ced8
	if (!cr6.lt) goto loc_8232CED8;
	// lfs f13,-1044(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r16.u32 + -1044);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// lfs f0,-1052(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + -1052);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lfs f3,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lbz r8,655(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 655);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r3,612(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// fmr f4,f27
	ctx.f4.f64 = f27.f64;
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// stb r8,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, ctx.r8.u8);
	// lbz r8,679(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 679);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// fsel f6,f12,f31,f13
	ctx.f6.f64 = ctx.f12.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 - ctx.f0.f64));
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// stb r8,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, ctx.r8.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// fsel f5,f13,f31,f0
	ctx.f5.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// bl 0x8232ab00
	ctx.lr = 0x8232CC1C;
	sub_8232AB00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8232cebc
	if (cr6.eq) goto loc_8232CEBC;
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r9,r30,2052
	ctx.r9.s64 = r30.s64 + 2052;
	// lwz r31,156(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r6,r30,2052
	ctx.r6.s64 = r30.s64 + 2052;
	// rlwinm r11,r5,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FFFC;
	// lvx128 v0,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r31,2,14,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x3FFFC;
	// rlwinm r8,r5,21,11,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 21) & 0x1FFFE0;
	// rlwinm r10,r31,21,11,26
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 21) & 0x1FFFE0;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r7,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r20,r9,r8
	r20.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r19,r11,r10
	r19.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lvlx v13,r20,r21
	temp.u32 = r20.u32 + r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lbz r11,27(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 27);
	// lvlx v12,r19,r21
	temp.u32 = r19.u32 + r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vupkhsh v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16))));
	// vupkhsh v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16))));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// vcfsx v13,v13,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vcfsx v12,v12,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmulfp128 v127,v13,v0
	simde_mm_store_ps(v127.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v126,v12,v0
	simde_mm_store_ps(v126.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32)));
	// bne cr6,0x8232ccf4
	if (!cr6.eq) goto loc_8232CCF4;
	// lbz r11,27(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 27);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8232ccf4
	if (!cr6.eq) goto loc_8232CCF4;
	// lbz r11,687(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 687);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8232ccf8
	if (cr6.eq) goto loc_8232CCF8;
	// lwz r11,636(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// vsubfp128 v13,v127,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v0,v126,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(v126.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// lfs f13,224(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,308(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f13,f13,f13,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8232ccf8
	if (!cr6.gt) goto loc_8232CCF8;
loc_8232CCF4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8232CCF8:
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8232cd24
	if (cr6.eq) goto loc_8232CD24;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vor128 v0,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// vor128 v127,v126,v126
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)v126.u8));
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// vor128 v126,v0,v0
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// stw r5,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// stw r31,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r31.u32);
loc_8232CD24:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234f550
	ctx.lr = 0x8232CD30;
	sub_8234F550(ctx, base);
	// rlwinm r29,r31,2,14,29
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x3FFFC;
	// addi r11,r30,2308
	ctx.r11.s64 = r30.s64 + 2308;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82353bf8
	ctx.lr = 0x8232CD48;
	sub_82353BF8(ctx, base);
	// vsubfp128 v13,v127,v126
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v126.f32)));
	// lvx128 v12,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltisw v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_set1_epi32(int(0x0)));
	// lvx128 v0,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vand v5,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// lvx128 v7,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r30,2052
	ctx.r10.s64 = r30.s64 + 2052;
	// lvx128 v9,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f30,176(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f28,180(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lwzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r29.u32);
	// stfs f30,184(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f12,288(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// vmsum3fp128 v0,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r11,r31,21,11,26
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 21) & 0x1FFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvx128 v4,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// vrsqrtefp v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v0.f32))));
	// vor v3,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vand v0,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vor v0,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vcmpgtfp v12,v0,v5
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vor v0,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vcmpeqfp v11,v11,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)));
	// vsel v0,v0,v6,v11
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8))));
	// vmulfp128 v11,v0,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v9,v0
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v11,v3,v11,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v8.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v11,v10,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vsel v0,v4,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8))));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,212(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f1,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f12.f64)));
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lfs f0,292(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f1,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f1.f64, -ctx.f0.f64)));
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// lbz r11,31(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 31);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8232ceb8
	if (!cr6.eq) goto loc_8232CEB8;
	// li r31,1
	r31.s64 = 1;
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r11,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r31,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r31.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r31,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r31.u8);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82285698
	ctx.lr = 0x8232CE44;
	sub_82285698(ctx, base);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x8232ce54
	if (!cr6.eq) goto loc_8232CE54;
	// stb r31,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, r31.u8);
loc_8232CE54:
	// lbz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8232ceb8
	if (cr6.eq) goto loc_8232CEB8;
	// bl 0x82674588
	ctx.lr = 0x8232CE64;
	sub_82674588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8232ceb8
	if (cr6.eq) goto loc_8232CEB8;
	// lwz r11,628(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,-1028(r14)
	ctx.r9.u64 = REX_LOAD_U8(r14.u32 + -1028);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lfs f3,-1036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -1036);
	ctx.f3.f64 = double(temp.f32);
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r17.u32);
	// lfs f2,-1032(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -1032);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8267ed70
	ctx.lr = 0x8232CEA4;
	sub_8267ED70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8232ceb8
	if (cr6.eq) goto loc_8232CEB8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
loc_8232CEB8:
	// lwz r29,628(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
loc_8232CEBC:
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lbz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 144);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// beq cr6,0x8232cb9c
	if (cr6.eq) goto loc_8232CB9C;
loc_8232CED8:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8232d1f4
	if (cr6.eq) goto loc_8232D1F4;
	// vsubfp128 v0,v127,v126
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(v126.f32)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,212(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f12,f30
	cr6.compare(ctx.f12.f64, f30.f64);
	// bne cr6,0x8232cf24
	if (!cr6.eq) goto loc_8232CF24;
	// fmr f13,f28
	ctx.f13.f64 = f28.f64;
	// b 0x8232cf30
	goto loc_8232CF30;
loc_8232CF24:
	// fdivs f12,f28,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f28.f64 / ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_8232CF30:
	// lfs f12,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f9,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f28,f12
	ctx.f11.f64 = double(float(f28.f64 - ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f10,184(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f2,2232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2232);
	ctx.f2.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f13,256(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stfs f30,264(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stfs f30,248(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f30,272(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f30,276(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// fmadds f0,f11,f10,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f12.f64)));
	// stfs f28,280(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f0,296(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// bl 0x825aefe0
	ctx.lr = 0x8232CFA0;
	sub_825AEFE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8232d1f4
	if (cr6.eq) goto loc_8232D1F4;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,-16212(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -16212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232CFD4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,284(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232CFEC;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82382930
	ctx.lr = 0x8232CFF8;
	sub_82382930(ctx, base);
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f28.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82126d10
	ctx.lr = 0x8232D004;
	sub_82126D10(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8237cca8
	ctx.lr = 0x8232D00C;
	sub_8237CCA8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r31,0
	r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5180);
	f31.f64 = double(temp.f32);
	// beq cr6,0x8232d03c
	if (cr6.eq) goto loc_8232D03C;
	// lbz r11,29(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 29);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8232d054
	if (!cr6.eq) goto loc_8232D054;
loc_8232D03C:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x8232d080
	if (cr6.eq) goto loc_8232D080;
	// lbz r11,29(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 29);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8232d080
	if (cr6.eq) goto loc_8232D080;
loc_8232D054:
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x824e5f80
	ctx.lr = 0x8232D064;
	sub_824E5F80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8232d080
	if (cr6.eq) goto loc_8232D080;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8232d080
	if (!cr6.gt) goto loc_8232D080;
	// li r31,1
	r31.s64 = 1;
loc_8232D080:
	// clrlwi r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8232d0a0
	if (cr6.eq) goto loc_8232D0A0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,148(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f6b60
	ctx.lr = 0x8232D09C;
	sub_823F6B60(ctx, base);
	// b 0x8232d0a8
	goto loc_8232D0A8;
loc_8232D0A0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,65(r30)
	REX_STORE_U8(r30.u32 + 65, ctx.r11.u8);
loc_8232D0A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8227e6f8
	ctx.lr = 0x8232D0B4;
	sub_8227E6F8(ctx, base);
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// stfs f26,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824343f0
	ctx.lr = 0x8232D0E4;
	sub_824343F0(ctx, base);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-13928
	ctx.r3.s64 = ctx.r11.s64 + -13928;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// beq cr6,0x8232d198
	if (cr6.eq) goto loc_8232D198;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-13904
	ctx.r3.s64 = ctx.r11.s64 + -13904;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// beq cr6,0x8232d198
	if (cr6.eq) goto loc_8232D198;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-14096
	ctx.r3.s64 = ctx.r11.s64 + -14096;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// beq cr6,0x8232d198
	if (cr6.eq) goto loc_8232D198;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-14084
	ctx.r3.s64 = ctx.r11.s64 + -14084;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// beq cr6,0x8232d198
	if (cr6.eq) goto loc_8232D198;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-14072
	ctx.r3.s64 = ctx.r11.s64 + -14072;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// beq cr6,0x8232d198
	if (cr6.eq) goto loc_8232D198;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-14060
	ctx.r3.s64 = ctx.r11.s64 + -14060;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// beq cr6,0x8232d198
	if (cr6.eq) goto loc_8232D198;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-14048
	ctx.r3.s64 = ctx.r11.s64 + -14048;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// beq cr6,0x8232d198
	if (cr6.eq) goto loc_8232D198;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-14036
	ctx.r3.s64 = ctx.r11.s64 + -14036;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// beq cr6,0x8232d198
	if (cr6.eq) goto loc_8232D198;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r3,r11,-14024
	ctx.r3.s64 = ctx.r11.s64 + -14024;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// bne cr6,0x8232d1a8
	if (!cr6.eq) goto loc_8232D1A8;
loc_8232D198:
	// lwz r4,636(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// bl 0x82207688
	ctx.lr = 0x8232D1A0;
	sub_82207688(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8232d1f8
	goto loc_8232D1F8;
loc_8232D1A8:
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// addi r11,r11,-13880
	ctx.r11.s64 = ctx.r11.s64 + -13880;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// bne cr6,0x8232d1ec
	if (!cr6.eq) goto loc_8232D1EC;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// stfs f31,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v0,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824343f0
	ctx.lr = 0x8232D1EC;
	sub_824343F0(ctx, base);
loc_8232D1EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8232d1f8
	goto loc_8232D1F8;
loc_8232D1F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232D1F8:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// li r0,-240
	ctx.r0.s64 = -240;
	// lvx128 v126,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-224
	ctx.r0.s64 = -224;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8299013c
	ctx.lr = 0x8232D214;
	// b 0x8298eae0
	return;
}

DEFINE_REX_FUNC(sub_8235C464) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r17{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r28{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-15236(r21)
	r17.u64 = REX_LOAD_U32(r21.u32 + -15236);
	// lwz r17,-15244(r21)
	r17.u64 = REX_LOAD_U32(r21.u32 + -15244);
	// lwz r17,-15244(r21)
	r17.u64 = REX_LOAD_U32(r21.u32 + -15244);
	// lwz r17,-15244(r21)
	r17.u64 = REX_LOAD_U32(r21.u32 + -15244);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8235c480
	goto loc_8235C480;
loc_8235C480:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8235c4b0
	if (cr6.eq) goto loc_8235C4B0;
	// li r6,161
	ctx.r6.s64 = 161;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823e88c8
	ctx.lr = 0x8235C4A0;
	sub_823E88C8(ctx, base);
	// addi r11,r23,32
	ctx.r11.s64 = r23.s64 + 32;
	// lvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8235c4b8
	goto loc_8235C4B8;
loc_8235C4B0:
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8235C4B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r25,r21
	REX_STORE_U8(r25.u32 + r21.u32, ctx.r11.u8);
	// clrlwi r11,r19,24
	ctx.r11.u64 = r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x8235c4e0
	if (cr6.eq) goto loc_8235C4E0;
	// lvx128 v0,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8235c4e4
	goto loc_8235C4E4;
loc_8235C4E0:
	// lvx128 v0,r11,r23
	ea = (ctx.r11.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8235C4E4:
	// stvx128 v0,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f30,8(r22)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r22.u32 + 8, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8298eaf4
	return;
}

DEFINE_REX_FUNC(sub_82383558) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-8560
	ctx.r10.s64 = ctx.r10.s64 + -8560;
	// lwz r9,4836(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4836);
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r9,4
	cr6.compare<int32_t>(ctx.r9.s32, 4, xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3068(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r11,158(r1)
	REX_STORE_U16(ctx.r1.u32 + 158, ctx.r11.u16);
	// stb r11,160(r1)
	REX_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// sth r11,162(r1)
	REX_STORE_U16(ctx.r1.u32 + 162, ctx.r11.u16);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// sth r10,156(r1)
	REX_STORE_U16(ctx.r1.u32 + 156, ctx.r10.u16);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,21868(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 21868);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x823835d8
	if (!cr6.eq) goto loc_823835D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,29496(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29496);
	ctx.f0.f64 = double(temp.f32);
loc_823835D8:
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,6
	ctx.r7.s64 = 6;
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8231d690
	ctx.lr = 0x823835F8;
	sub_8231D690(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8238D3E0) {
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
	// bl 0x8238bc20
	ctx.lr = 0x8238D3F0;
	sub_8238BC20(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8238d408
	if (cr6.eq) goto loc_8238D408;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r4,-17100(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -17100);
	// bl 0x821a8478
	ctx.lr = 0x8238D408;
	sub_821A8478(ctx, base);
loc_8238D408:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82390030) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x82390038;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x82390098
	if (cr6.eq) goto loc_82390098;
loc_82390050:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82390060:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82390060
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82390060;
	// ld r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,100(r1)
	REX_STORE_U64(ctx.r1.u32 + 100, ctx.r11.u64);
	// bl 0x8238c5c8
	ctx.lr = 0x8239008C;
	sub_8238C5C8(ctx, base);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82390050
	if (!cr6.eq) goto loc_82390050;
loc_82390098:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_82392F00) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82392F30:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82392f30
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82392F30;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82392F54:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82392f54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82392F54;
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,140(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82392f80
	if (cr6.gt) goto loc_82392F80;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82392F80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82392fcc
	if (cr6.eq) goto loc_82392FCC;
	// addi r5,r3,28
	ctx.r5.s64 = ctx.r3.s64 + 28;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238c950
	ctx.lr = 0x82392FA4;
	sub_8238C950(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82392FB4:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82392fb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82392FB4;
	// b 0x82393004
	goto loc_82393004;
loc_82392FCC:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82392FDC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82392fdc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82392FDC;
	// ld r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 20);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r11,116(r1)
	REX_STORE_U64(ctx.r1.u32 + 116, ctx.r11.u64);
	// bl 0x8238c508
	ctx.lr = 0x82393004;
	sub_8238C508(ctx, base);
loc_82393004:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

DEFINE_REX_FUNC(sub_8239A758) {
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
	PPCRegister f31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab0
	ctx.lr = 0x8239A760;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lfs f31,-6828(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6828);
	f31.f64 = double(temp.f32);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r26,0
	r26.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r28,328
	r30.s64 = r28.s64 + 328;
	// lis r22,128
	r22.s64 = 8388608;
loc_8239A79C:
	// lbzx r11,r29,r28
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239a858
	if (cr6.eq) goto loc_8239A858;
	// clrlwi r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8239a7c4
	if (cr6.eq) goto loc_8239A7C4;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8239a858
	if (!cr6.eq) goto loc_8239A858;
loc_8239A7C4:
	// clrlwi r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8239a7f8
	if (!cr6.eq) goto loc_8239A7F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x8239a7f8
	if (cr6.eq) goto loc_8239A7F8;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r10,r10,0,6,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3C00000;
	// cmplw cr6,r10,r22
	cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, xer);
	// bne cr6,0x8239a7f8
	if (!cr6.eq) goto loc_8239A7F8;
	// lwz r11,4836(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4836);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// beq cr6,0x8239a858
	if (cr6.eq) goto loc_8239A858;
loc_8239A7F8:
	// clrlwi r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8239a814
	if (!cr6.eq) goto loc_8239A814;
	// lbz r11,148(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 148);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8239a858
	if (!cr6.eq) goto loc_8239A858;
loc_8239A814:
	// addi r31,r30,-72
	r31.s64 = r30.s64 + -72;
	// lvx128 v127,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239a0e8
	ctx.lr = 0x8239A828;
	sub_8239A0E8(ctx, base);
	// lvx128 v0,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp128 v0,v0,v127
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(v127.f32)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f31
	cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8239a858
	if (!cr6.lt) goto loc_8239A858;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_8239A858:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,224
	r30.s64 = r30.s64 + 224;
	// cmpwi cr6,r29,256
	cr6.compare<int32_t>(r29.s32, 256, xer);
	// blt cr6,0x8239a79c
	if (cr6.lt) goto loc_8239A79C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8298eb00
	return;
}

DEFINE_REX_FUNC(sub_823A36F8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x826bea50
	ctx.lr = 0x823A3728;
	sub_826BEA50(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stb r3,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = ctx.r11.u64 ^ 1;
	// bl 0x826bde70
	ctx.lr = 0x823A3748;
	sub_826BDE70(ctx, base);
	// lbz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_823A50A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r17{};
	PPCRegister r26{};
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24100(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24100);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24100(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24100);
	// lwz r17,24100(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24100);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// cmpwi cr6,r3,431
	cr6.compare<int32_t>(ctx.r3.s32, 431, xer);
	// bgt cr6,0x823a5380
	if (cr6.gt) goto loc_823A5380;
	// beq cr6,0x823a5e24
	if (cr6.eq) goto loc_823A5E24;
	// addi r11,r3,-287
	ctx.r11.s64 = ctx.r3.s64 + -287;
	// cmplwi cr6,r11,114
	cr6.compare<uint32_t>(ctx.r11.u32, 114, xer);
	// bgt cr6,0x823a5e04
	if (cr6.gt) goto loc_823A5E04;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// addi r12,r12,20916
	ctx.r12.s64 = ctx.r12.s64 + 20916;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A5E14;
	case 1:
		goto loc_823A5E24;
	case 2:
		goto loc_823A5E04;
	case 3:
		goto loc_823A5E04;
	case 4:
		goto loc_823A5E14;
	case 5:
		goto loc_823A5E04;
	case 6:
		goto loc_823A5E04;
	case 7:
		goto loc_823A5E04;
	case 8:
		goto loc_823A5E04;
	case 9:
		goto loc_823A5E04;
	case 10:
		goto loc_823A5E04;
	case 11:
		goto loc_823A5E04;
	case 12:
		goto loc_823A5E04;
	case 13:
		goto loc_823A5E04;
	case 14:
		goto loc_823A5E04;
	case 15:
		goto loc_823A5E04;
	case 16:
		goto loc_823A5E04;
	case 17:
		goto loc_823A5E04;
	case 18:
		goto loc_823A5E04;
	case 19:
		goto loc_823A5E04;
	case 20:
		goto loc_823A5E04;
	case 21:
		goto loc_823A5E04;
	case 22:
		goto loc_823A5E04;
	case 23:
		goto loc_823A5E04;
	case 24:
		goto loc_823A5E04;
	case 25:
		goto loc_823A5E04;
	case 26:
		goto loc_823A5E04;
	case 27:
		goto loc_823A5E14;
	case 28:
		goto loc_823A5E14;
	case 29:
		goto loc_823A5E24;
	case 30:
		goto loc_823A5E04;
	case 31:
		goto loc_823A5E04;
	case 32:
		goto loc_823A5E04;
	case 33:
		goto loc_823A5E04;
	case 34:
		goto loc_823A5E04;
	case 35:
		goto loc_823A5E04;
	case 36:
		goto loc_823A5E04;
	case 37:
		goto loc_823A5E04;
	case 38:
		goto loc_823A5E04;
	case 39:
		goto loc_823A5E04;
	case 40:
		goto loc_823A5E04;
	case 41:
		goto loc_823A5E04;
	case 42:
		goto loc_823A5E04;
	case 43:
		goto loc_823A5E04;
	case 44:
		goto loc_823A5E04;
	case 45:
		goto loc_823A5E04;
	case 46:
		goto loc_823A5E04;
	case 47:
		goto loc_823A5E04;
	case 48:
		goto loc_823A5E04;
	case 49:
		goto loc_823A5E04;
	case 50:
		goto loc_823A5E04;
	case 51:
		goto loc_823A5E04;
	case 52:
		goto loc_823A5E04;
	case 53:
		goto loc_823A5E04;
	case 54:
		goto loc_823A5E04;
	case 55:
		goto loc_823A5E04;
	case 56:
		goto loc_823A5E04;
	case 57:
		goto loc_823A5E04;
	case 58:
		goto loc_823A5E04;
	case 59:
		goto loc_823A5E04;
	case 60:
		goto loc_823A5E04;
	case 61:
		goto loc_823A5E04;
	case 62:
		goto loc_823A5E04;
	case 63:
		goto loc_823A5E14;
	case 64:
		goto loc_823A5E14;
	case 65:
		goto loc_823A5E14;
	case 66:
		goto loc_823A5E14;
	case 67:
		goto loc_823A5E14;
	case 68:
		goto loc_823A5E14;
	case 69:
		goto loc_823A5E24;
	case 70:
		goto loc_823A5E04;
	case 71:
		goto loc_823A5E04;
	case 72:
		goto loc_823A5E04;
	case 73:
		goto loc_823A5E04;
	case 74:
		goto loc_823A5E04;
	case 75:
		goto loc_823A5E04;
	case 76:
		goto loc_823A5E04;
	case 77:
		goto loc_823A5E04;
	case 78:
		goto loc_823A5E04;
	case 79:
		goto loc_823A5E04;
	case 80:
		goto loc_823A5E04;
	case 81:
		goto loc_823A5E04;
	case 82:
		goto loc_823A5E04;
	case 83:
		goto loc_823A5E04;
	case 84:
		goto loc_823A5E04;
	case 85:
		goto loc_823A5E04;
	case 86:
		goto loc_823A5E04;
	case 87:
		goto loc_823A5E04;
	case 88:
		goto loc_823A5E04;
	case 89:
		goto loc_823A5E04;
	case 90:
		goto loc_823A5E04;
	case 91:
		goto loc_823A5E04;
	case 92:
		goto loc_823A5E04;
	case 93:
		goto loc_823A5E04;
	case 94:
		goto loc_823A5E04;
	case 95:
		goto loc_823A5E04;
	case 96:
		goto loc_823A5E04;
	case 97:
		goto loc_823A5E04;
	case 98:
		goto loc_823A5E04;
	case 99:
		goto loc_823A5E04;
	case 100:
		goto loc_823A5E04;
	case 101:
		goto loc_823A5E04;
	case 102:
		goto loc_823A5E04;
	case 103:
		goto loc_823A5E04;
	case 104:
		goto loc_823A5E04;
	case 105:
		goto loc_823A5E04;
	case 106:
		goto loc_823A5E04;
	case 107:
		goto loc_823A5E04;
	case 108:
		goto loc_823A5E04;
	case 109:
		goto loc_823A5E04;
	case 110:
		goto loc_823A5E04;
	case 111:
		goto loc_823A5E04;
	case 112:
		goto loc_823A5E04;
	case 113:
		goto loc_823A5E04;
	case 114:
		goto loc_823A5E24;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_823A5380:
	// cmpwi cr6,r3,606
	cr6.compare<int32_t>(ctx.r3.s32, 606, xer);
	// bgt cr6,0x823a5658
	if (cr6.gt) goto loc_823A5658;
	// cmpwi cr6,r3,605
	cr6.compare<int32_t>(ctx.r3.s32, 605, xer);
	// bge cr6,0x823a5e24
	if (!cr6.lt) goto loc_823A5E24;
	// addi r11,r3,-433
	ctx.r11.s64 = ctx.r3.s64 + -433;
	// cmplwi cr6,r11,168
	cr6.compare<uint32_t>(ctx.r11.u32, 168, xer);
	// bgt cr6,0x823a5e04
	if (cr6.gt) goto loc_823A5E04;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// addi r12,r12,21428
	ctx.r12.s64 = ctx.r12.s64 + 21428;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A5E14;
	case 1:
		goto loc_823A5E04;
	case 2:
		goto loc_823A5E04;
	case 3:
		goto loc_823A5E04;
	case 4:
		goto loc_823A5E04;
	case 5:
		goto loc_823A5E04;
	case 6:
		goto loc_823A5E04;
	case 7:
		goto loc_823A5E04;
	case 8:
		goto loc_823A5E04;
	case 9:
		goto loc_823A5E04;
	case 10:
		goto loc_823A5E04;
	case 11:
		goto loc_823A5E04;
	case 12:
		goto loc_823A5E04;
	case 13:
		goto loc_823A5E04;
	case 14:
		goto loc_823A5E04;
	case 15:
		goto loc_823A5E04;
	case 16:
		goto loc_823A5E04;
	case 17:
		goto loc_823A5E04;
	case 18:
		goto loc_823A5E04;
	case 19:
		goto loc_823A5E04;
	case 20:
		goto loc_823A5E04;
	case 21:
		goto loc_823A5E04;
	case 22:
		goto loc_823A5E04;
	case 23:
		goto loc_823A5E04;
	case 24:
		goto loc_823A5E04;
	case 25:
		goto loc_823A5E04;
	case 26:
		goto loc_823A5E04;
	case 27:
		goto loc_823A5E04;
	case 28:
		goto loc_823A5E04;
	case 29:
		goto loc_823A5E04;
	case 30:
		goto loc_823A5E04;
	case 31:
		goto loc_823A5E04;
	case 32:
		goto loc_823A5E04;
	case 33:
		goto loc_823A5E04;
	case 34:
		goto loc_823A5E04;
	case 35:
		goto loc_823A5E04;
	case 36:
		goto loc_823A5E04;
	case 37:
		goto loc_823A5E04;
	case 38:
		goto loc_823A5E04;
	case 39:
		goto loc_823A5E04;
	case 40:
		goto loc_823A5E04;
	case 41:
		goto loc_823A5E04;
	case 42:
		goto loc_823A5E04;
	case 43:
		goto loc_823A5E04;
	case 44:
		goto loc_823A5E04;
	case 45:
		goto loc_823A5E04;
	case 46:
		goto loc_823A5E04;
	case 47:
		goto loc_823A5E04;
	case 48:
		goto loc_823A5E04;
	case 49:
		goto loc_823A5E04;
	case 50:
		goto loc_823A5E04;
	case 51:
		goto loc_823A5E04;
	case 52:
		goto loc_823A5E04;
	case 53:
		goto loc_823A5E04;
	case 54:
		goto loc_823A5E04;
	case 55:
		goto loc_823A5E04;
	case 56:
		goto loc_823A5E04;
	case 57:
		goto loc_823A5E04;
	case 58:
		goto loc_823A5E04;
	case 59:
		goto loc_823A5E04;
	case 60:
		goto loc_823A5E04;
	case 61:
		goto loc_823A5E04;
	case 62:
		goto loc_823A5E04;
	case 63:
		goto loc_823A5E04;
	case 64:
		goto loc_823A5E04;
	case 65:
		goto loc_823A5E04;
	case 66:
		goto loc_823A5E04;
	case 67:
		goto loc_823A5E04;
	case 68:
		goto loc_823A5E04;
	case 69:
		goto loc_823A5E04;
	case 70:
		goto loc_823A5E04;
	case 71:
		goto loc_823A5E04;
	case 72:
		goto loc_823A5E04;
	case 73:
		goto loc_823A5E04;
	case 74:
		goto loc_823A5E04;
	case 75:
		goto loc_823A5E04;
	case 76:
		goto loc_823A5E04;
	case 77:
		goto loc_823A5E04;
	case 78:
		goto loc_823A5E04;
	case 79:
		goto loc_823A5E04;
	case 80:
		goto loc_823A5E04;
	case 81:
		goto loc_823A5E04;
	case 82:
		goto loc_823A5E04;
	case 83:
		goto loc_823A5E04;
	case 84:
		goto loc_823A5E04;
	case 85:
		goto loc_823A5E04;
	case 86:
		goto loc_823A5E14;
	case 87:
		goto loc_823A5E04;
	case 88:
		goto loc_823A5E04;
	case 89:
		goto loc_823A5E04;
	case 90:
		goto loc_823A5E04;
	case 91:
		goto loc_823A5E04;
	case 92:
		goto loc_823A5E04;
	case 93:
		goto loc_823A5E04;
	case 94:
		goto loc_823A5E04;
	case 95:
		goto loc_823A5E04;
	case 96:
		goto loc_823A5E04;
	case 97:
		goto loc_823A5E04;
	case 98:
		goto loc_823A5E04;
	case 99:
		goto loc_823A5E04;
	case 100:
		goto loc_823A5E04;
	case 101:
		goto loc_823A5E04;
	case 102:
		goto loc_823A5E04;
	case 103:
		goto loc_823A5E04;
	case 104:
		goto loc_823A5E04;
	case 105:
		goto loc_823A5E04;
	case 106:
		goto loc_823A5E04;
	case 107:
		goto loc_823A5E04;
	case 108:
		goto loc_823A5E04;
	case 109:
		goto loc_823A5E04;
	case 110:
		goto loc_823A5E04;
	case 111:
		goto loc_823A5E04;
	case 112:
		goto loc_823A5E04;
	case 113:
		goto loc_823A5E04;
	case 114:
		goto loc_823A5E04;
	case 115:
		goto loc_823A5E04;
	case 116:
		goto loc_823A5E04;
	case 117:
		goto loc_823A5E04;
	case 118:
		goto loc_823A5E04;
	case 119:
		goto loc_823A5E04;
	case 120:
		goto loc_823A5E04;
	case 121:
		goto loc_823A5E04;
	case 122:
		goto loc_823A5E04;
	case 123:
		goto loc_823A5E04;
	case 124:
		goto loc_823A5E04;
	case 125:
		goto loc_823A5E04;
	case 126:
		goto loc_823A5E04;
	case 127:
		goto loc_823A5E04;
	case 128:
		goto loc_823A5E04;
	case 129:
		goto loc_823A5E04;
	case 130:
		goto loc_823A5E04;
	case 131:
		goto loc_823A5E04;
	case 132:
		goto loc_823A5E04;
	case 133:
		goto loc_823A5E04;
	case 134:
		goto loc_823A5E04;
	case 135:
		goto loc_823A5E04;
	case 136:
		goto loc_823A5E04;
	case 137:
		goto loc_823A5E04;
	case 138:
		goto loc_823A5E04;
	case 139:
		goto loc_823A5E04;
	case 140:
		goto loc_823A5E04;
	case 141:
		goto loc_823A5E04;
	case 142:
		goto loc_823A5E04;
	case 143:
		goto loc_823A5E04;
	case 144:
		goto loc_823A5E04;
	case 145:
		goto loc_823A5E04;
	case 146:
		goto loc_823A5E04;
	case 147:
		goto loc_823A5E04;
	case 148:
		goto loc_823A5E04;
	case 149:
		goto loc_823A5E04;
	case 150:
		goto loc_823A5E04;
	case 151:
		goto loc_823A5E04;
	case 152:
		goto loc_823A5E04;
	case 153:
		goto loc_823A5E04;
	case 154:
		goto loc_823A5E04;
	case 155:
		goto loc_823A5E04;
	case 156:
		goto loc_823A5E04;
	case 157:
		goto loc_823A5E04;
	case 158:
		goto loc_823A5E04;
	case 159:
		goto loc_823A5E04;
	case 160:
		goto loc_823A5E04;
	case 161:
		goto loc_823A5E04;
	case 162:
		goto loc_823A5E04;
	case 163:
		goto loc_823A5E04;
	case 164:
		goto loc_823A5E04;
	case 165:
		goto loc_823A5E04;
	case 166:
		goto loc_823A5E04;
	case 167:
		goto loc_823A5E24;
	case 168:
		goto loc_823A5E24;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_823A5658:
	// addi r11,r3,-703
	ctx.r11.s64 = ctx.r3.s64 + -703;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// bgt cr6,0x823a5e04
	if (cr6.gt) goto loc_823A5E04;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// addi r12,r12,22140
	ctx.r12.s64 = ctx.r12.s64 + 22140;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A5E24;
	case 1:
		goto loc_823A5E04;
	case 2:
		goto loc_823A5E04;
	case 3:
		goto loc_823A5E04;
	case 4:
		goto loc_823A5E04;
	case 5:
		goto loc_823A5E04;
	case 6:
		goto loc_823A5E14;
	case 7:
		goto loc_823A5E04;
	case 8:
		goto loc_823A5E04;
	case 9:
		goto loc_823A5E04;
	case 10:
		goto loc_823A5E04;
	case 11:
		goto loc_823A5E04;
	case 12:
		goto loc_823A5E04;
	case 13:
		goto loc_823A5E04;
	case 14:
		goto loc_823A5E04;
	case 15:
		goto loc_823A5E04;
	case 16:
		goto loc_823A5E04;
	case 17:
		goto loc_823A5E04;
	case 18:
		goto loc_823A5E04;
	case 19:
		goto loc_823A5E04;
	case 20:
		goto loc_823A5E04;
	case 21:
		goto loc_823A5E04;
	case 22:
		goto loc_823A5E04;
	case 23:
		goto loc_823A5E04;
	case 24:
		goto loc_823A5E04;
	case 25:
		goto loc_823A5E04;
	case 26:
		goto loc_823A5E04;
	case 27:
		goto loc_823A5E04;
	case 28:
		goto loc_823A5E04;
	case 29:
		goto loc_823A5E14;
	case 30:
		goto loc_823A5E14;
	case 31:
		goto loc_823A5E14;
	case 32:
		goto loc_823A5E14;
	case 33:
		goto loc_823A5E14;
	case 34:
		goto loc_823A5E14;
	case 35:
		goto loc_823A5E14;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_823A5E04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A5E14:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a5e24
	if (cr6.eq) goto loc_823A5E24;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_823A5E24:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A51B4) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r17{};
	PPCRegister r26{};
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24100(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24100);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24100(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24100);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24100(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24100);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24100(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24100);
	// cmpwi cr6,r3,606
	cr6.compare<int32_t>(ctx.r3.s32, 606, xer);
	// bgt cr6,0x823a5658
	if (cr6.gt) goto loc_823A5658;
	// cmpwi cr6,r3,605
	cr6.compare<int32_t>(ctx.r3.s32, 605, xer);
	// bge cr6,0x823a5e24
	if (!cr6.lt) goto loc_823A5E24;
	// addi r11,r3,-433
	ctx.r11.s64 = ctx.r3.s64 + -433;
	// cmplwi cr6,r11,168
	cr6.compare<uint32_t>(ctx.r11.u32, 168, xer);
	// bgt cr6,0x823a5e04
	if (cr6.gt) goto loc_823A5E04;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// addi r12,r12,21428
	ctx.r12.s64 = ctx.r12.s64 + 21428;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A5E14;
	case 1:
		goto loc_823A5E04;
	case 2:
		goto loc_823A5E04;
	case 3:
		goto loc_823A5E04;
	case 4:
		goto loc_823A5E04;
	case 5:
		goto loc_823A5E04;
	case 6:
		goto loc_823A5E04;
	case 7:
		goto loc_823A5E04;
	case 8:
		goto loc_823A5E04;
	case 9:
		goto loc_823A5E04;
	case 10:
		goto loc_823A5E04;
	case 11:
		goto loc_823A5E04;
	case 12:
		goto loc_823A5E04;
	case 13:
		goto loc_823A5E04;
	case 14:
		goto loc_823A5E04;
	case 15:
		goto loc_823A5E04;
	case 16:
		goto loc_823A5E04;
	case 17:
		goto loc_823A5E04;
	case 18:
		goto loc_823A5E04;
	case 19:
		goto loc_823A5E04;
	case 20:
		goto loc_823A5E04;
	case 21:
		goto loc_823A5E04;
	case 22:
		goto loc_823A5E04;
	case 23:
		goto loc_823A5E04;
	case 24:
		goto loc_823A5E04;
	case 25:
		goto loc_823A5E04;
	case 26:
		goto loc_823A5E04;
	case 27:
		goto loc_823A5E04;
	case 28:
		goto loc_823A5E04;
	case 29:
		goto loc_823A5E04;
	case 30:
		goto loc_823A5E04;
	case 31:
		goto loc_823A5E04;
	case 32:
		goto loc_823A5E04;
	case 33:
		goto loc_823A5E04;
	case 34:
		goto loc_823A5E04;
	case 35:
		goto loc_823A5E04;
	case 36:
		goto loc_823A5E04;
	case 37:
		goto loc_823A5E04;
	case 38:
		goto loc_823A5E04;
	case 39:
		goto loc_823A5E04;
	case 40:
		goto loc_823A5E04;
	case 41:
		goto loc_823A5E04;
	case 42:
		goto loc_823A5E04;
	case 43:
		goto loc_823A5E04;
	case 44:
		goto loc_823A5E04;
	case 45:
		goto loc_823A5E04;
	case 46:
		goto loc_823A5E04;
	case 47:
		goto loc_823A5E04;
	case 48:
		goto loc_823A5E04;
	case 49:
		goto loc_823A5E04;
	case 50:
		goto loc_823A5E04;
	case 51:
		goto loc_823A5E04;
	case 52:
		goto loc_823A5E04;
	case 53:
		goto loc_823A5E04;
	case 54:
		goto loc_823A5E04;
	case 55:
		goto loc_823A5E04;
	case 56:
		goto loc_823A5E04;
	case 57:
		goto loc_823A5E04;
	case 58:
		goto loc_823A5E04;
	case 59:
		goto loc_823A5E04;
	case 60:
		goto loc_823A5E04;
	case 61:
		goto loc_823A5E04;
	case 62:
		goto loc_823A5E04;
	case 63:
		goto loc_823A5E04;
	case 64:
		goto loc_823A5E04;
	case 65:
		goto loc_823A5E04;
	case 66:
		goto loc_823A5E04;
	case 67:
		goto loc_823A5E04;
	case 68:
		goto loc_823A5E04;
	case 69:
		goto loc_823A5E04;
	case 70:
		goto loc_823A5E04;
	case 71:
		goto loc_823A5E04;
	case 72:
		goto loc_823A5E04;
	case 73:
		goto loc_823A5E04;
	case 74:
		goto loc_823A5E04;
	case 75:
		goto loc_823A5E04;
	case 76:
		goto loc_823A5E04;
	case 77:
		goto loc_823A5E04;
	case 78:
		goto loc_823A5E04;
	case 79:
		goto loc_823A5E04;
	case 80:
		goto loc_823A5E04;
	case 81:
		goto loc_823A5E04;
	case 82:
		goto loc_823A5E04;
	case 83:
		goto loc_823A5E04;
	case 84:
		goto loc_823A5E04;
	case 85:
		goto loc_823A5E04;
	case 86:
		goto loc_823A5E14;
	case 87:
		goto loc_823A5E04;
	case 88:
		goto loc_823A5E04;
	case 89:
		goto loc_823A5E04;
	case 90:
		goto loc_823A5E04;
	case 91:
		goto loc_823A5E04;
	case 92:
		goto loc_823A5E04;
	case 93:
		goto loc_823A5E04;
	case 94:
		goto loc_823A5E04;
	case 95:
		goto loc_823A5E04;
	case 96:
		goto loc_823A5E04;
	case 97:
		goto loc_823A5E04;
	case 98:
		goto loc_823A5E04;
	case 99:
		goto loc_823A5E04;
	case 100:
		goto loc_823A5E04;
	case 101:
		goto loc_823A5E04;
	case 102:
		goto loc_823A5E04;
	case 103:
		goto loc_823A5E04;
	case 104:
		goto loc_823A5E04;
	case 105:
		goto loc_823A5E04;
	case 106:
		goto loc_823A5E04;
	case 107:
		goto loc_823A5E04;
	case 108:
		goto loc_823A5E04;
	case 109:
		goto loc_823A5E04;
	case 110:
		goto loc_823A5E04;
	case 111:
		goto loc_823A5E04;
	case 112:
		goto loc_823A5E04;
	case 113:
		goto loc_823A5E04;
	case 114:
		goto loc_823A5E04;
	case 115:
		goto loc_823A5E04;
	case 116:
		goto loc_823A5E04;
	case 117:
		goto loc_823A5E04;
	case 118:
		goto loc_823A5E04;
	case 119:
		goto loc_823A5E04;
	case 120:
		goto loc_823A5E04;
	case 121:
		goto loc_823A5E04;
	case 122:
		goto loc_823A5E04;
	case 123:
		goto loc_823A5E04;
	case 124:
		goto loc_823A5E04;
	case 125:
		goto loc_823A5E04;
	case 126:
		goto loc_823A5E04;
	case 127:
		goto loc_823A5E04;
	case 128:
		goto loc_823A5E04;
	case 129:
		goto loc_823A5E04;
	case 130:
		goto loc_823A5E04;
	case 131:
		goto loc_823A5E04;
	case 132:
		goto loc_823A5E04;
	case 133:
		goto loc_823A5E04;
	case 134:
		goto loc_823A5E04;
	case 135:
		goto loc_823A5E04;
	case 136:
		goto loc_823A5E04;
	case 137:
		goto loc_823A5E04;
	case 138:
		goto loc_823A5E04;
	case 139:
		goto loc_823A5E04;
	case 140:
		goto loc_823A5E04;
	case 141:
		goto loc_823A5E04;
	case 142:
		goto loc_823A5E04;
	case 143:
		goto loc_823A5E04;
	case 144:
		goto loc_823A5E04;
	case 145:
		goto loc_823A5E04;
	case 146:
		goto loc_823A5E04;
	case 147:
		goto loc_823A5E04;
	case 148:
		goto loc_823A5E04;
	case 149:
		goto loc_823A5E04;
	case 150:
		goto loc_823A5E04;
	case 151:
		goto loc_823A5E04;
	case 152:
		goto loc_823A5E04;
	case 153:
		goto loc_823A5E04;
	case 154:
		goto loc_823A5E04;
	case 155:
		goto loc_823A5E04;
	case 156:
		goto loc_823A5E04;
	case 157:
		goto loc_823A5E04;
	case 158:
		goto loc_823A5E04;
	case 159:
		goto loc_823A5E04;
	case 160:
		goto loc_823A5E04;
	case 161:
		goto loc_823A5E04;
	case 162:
		goto loc_823A5E04;
	case 163:
		goto loc_823A5E04;
	case 164:
		goto loc_823A5E04;
	case 165:
		goto loc_823A5E04;
	case 166:
		goto loc_823A5E04;
	case 167:
		goto loc_823A5E24;
	case 168:
		goto loc_823A5E24;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_823A5658:
	// addi r11,r3,-703
	ctx.r11.s64 = ctx.r3.s64 + -703;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(ctx.r11.u32, 35, xer);
	// bgt cr6,0x823a5e04
	if (cr6.gt) goto loc_823A5E04;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// addi r12,r12,22140
	ctx.r12.s64 = ctx.r12.s64 + 22140;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A5E24;
	case 1:
		goto loc_823A5E04;
	case 2:
		goto loc_823A5E04;
	case 3:
		goto loc_823A5E04;
	case 4:
		goto loc_823A5E04;
	case 5:
		goto loc_823A5E04;
	case 6:
		goto loc_823A5E14;
	case 7:
		goto loc_823A5E04;
	case 8:
		goto loc_823A5E04;
	case 9:
		goto loc_823A5E04;
	case 10:
		goto loc_823A5E04;
	case 11:
		goto loc_823A5E04;
	case 12:
		goto loc_823A5E04;
	case 13:
		goto loc_823A5E04;
	case 14:
		goto loc_823A5E04;
	case 15:
		goto loc_823A5E04;
	case 16:
		goto loc_823A5E04;
	case 17:
		goto loc_823A5E04;
	case 18:
		goto loc_823A5E04;
	case 19:
		goto loc_823A5E04;
	case 20:
		goto loc_823A5E04;
	case 21:
		goto loc_823A5E04;
	case 22:
		goto loc_823A5E04;
	case 23:
		goto loc_823A5E04;
	case 24:
		goto loc_823A5E04;
	case 25:
		goto loc_823A5E04;
	case 26:
		goto loc_823A5E04;
	case 27:
		goto loc_823A5E04;
	case 28:
		goto loc_823A5E04;
	case 29:
		goto loc_823A5E14;
	case 30:
		goto loc_823A5E14;
	case 31:
		goto loc_823A5E14;
	case 32:
		goto loc_823A5E14;
	case 33:
		goto loc_823A5E14;
	case 34:
		goto loc_823A5E14;
	case 35:
		goto loc_823A5E14;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_823A5E04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A5E14:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a5e24
	if (cr6.eq) goto loc_823A5E24;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_823A5E24:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A567C) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r17{};
	PPCRegister r26{};
	// lwz r17,24100(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24100);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24068(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24068);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// lwz r17,24084(r26)
	r17.u64 = REX_LOAD_U32(r26.u32 + 24084);
	// cmpwi cr6,r3,1049
	cr6.compare<int32_t>(ctx.r3.s32, 1049, xer);
	// bgt cr6,0x823a5b10
	if (cr6.gt) goto loc_823A5B10;
	// beq cr6,0x823a5e14
	if (cr6.eq) goto loc_823A5E14;
	// addi r11,r3,-800
	ctx.r11.s64 = ctx.r3.s64 + -800;
	// cmplwi cr6,r11,244
	cr6.compare<uint32_t>(ctx.r11.u32, 244, xer);
	// bgt cr6,0x823a5e04
	if (cr6.gt) goto loc_823A5E04;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// addi r12,r12,22332
	ctx.r12.s64 = ctx.r12.s64 + 22332;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A5E24;
	case 1:
		goto loc_823A5E04;
	case 2:
		goto loc_823A5E04;
	case 3:
		goto loc_823A5E04;
	case 4:
		goto loc_823A5E04;
	case 5:
		goto loc_823A5E04;
	case 6:
		goto loc_823A5E04;
	case 7:
		goto loc_823A5E24;
	case 8:
		goto loc_823A5E04;
	case 9:
		goto loc_823A5E24;
	case 10:
		goto loc_823A5E04;
	case 11:
		goto loc_823A5E04;
	case 12:
		goto loc_823A5E04;
	case 13:
		goto loc_823A5E24;
	case 14:
		goto loc_823A5E24;
	case 15:
		goto loc_823A5E04;
	case 16:
		goto loc_823A5E04;
	case 17:
		goto loc_823A5E04;
	case 18:
		goto loc_823A5E04;
	case 19:
		goto loc_823A5E04;
	case 20:
		goto loc_823A5E14;
	case 21:
		goto loc_823A5E14;
	case 22:
		goto loc_823A5E04;
	case 23:
		goto loc_823A5E24;
	case 24:
		goto loc_823A5E04;
	case 25:
		goto loc_823A5E24;
	case 26:
		goto loc_823A5E04;
	case 27:
		goto loc_823A5E04;
	case 28:
		goto loc_823A5E04;
	case 29:
		goto loc_823A5E04;
	case 30:
		goto loc_823A5E04;
	case 31:
		goto loc_823A5E04;
	case 32:
		goto loc_823A5E04;
	case 33:
		goto loc_823A5E04;
	case 34:
		goto loc_823A5E04;
	case 35:
		goto loc_823A5E04;
	case 36:
		goto loc_823A5E04;
	case 37:
		goto loc_823A5E04;
	case 38:
		goto loc_823A5E24;
	case 39:
		goto loc_823A5E04;
	case 40:
		goto loc_823A5E04;
	case 41:
		goto loc_823A5E04;
	case 42:
		goto loc_823A5E04;
	case 43:
		goto loc_823A5E04;
	case 44:
		goto loc_823A5E04;
	case 45:
		goto loc_823A5E04;
	case 46:
		goto loc_823A5E04;
	case 47:
		goto loc_823A5E04;
	case 48:
		goto loc_823A5E04;
	case 49:
		goto loc_823A5E04;
	case 50:
		goto loc_823A5E04;
	case 51:
		goto loc_823A5E04;
	case 52:
		goto loc_823A5E04;
	case 53:
		goto loc_823A5E04;
	case 54:
		goto loc_823A5E04;
	case 55:
		goto loc_823A5E04;
	case 56:
		goto loc_823A5E04;
	case 57:
		goto loc_823A5E04;
	case 58:
		goto loc_823A5E04;
	case 59:
		goto loc_823A5E04;
	case 60:
		goto loc_823A5E04;
	case 61:
		goto loc_823A5E04;
	case 62:
		goto loc_823A5E04;
	case 63:
		goto loc_823A5E04;
	case 64:
		goto loc_823A5E04;
	case 65:
		goto loc_823A5E04;
	case 66:
		goto loc_823A5E04;
	case 67:
		goto loc_823A5E04;
	case 68:
		goto loc_823A5E04;
	case 69:
		goto loc_823A5E04;
	case 70:
		goto loc_823A5E04;
	case 71:
		goto loc_823A5E04;
	case 72:
		goto loc_823A5E04;
	case 73:
		goto loc_823A5E04;
	case 74:
		goto loc_823A5E04;
	case 75:
		goto loc_823A5E04;
	case 76:
		goto loc_823A5E04;
	case 77:
		goto loc_823A5E04;
	case 78:
		goto loc_823A5E04;
	case 79:
		goto loc_823A5E04;
	case 80:
		goto loc_823A5E04;
	case 81:
		goto loc_823A5E04;
	case 82:
		goto loc_823A5E04;
	case 83:
		goto loc_823A5E04;
	case 84:
		goto loc_823A5E04;
	case 85:
		goto loc_823A5E04;
	case 86:
		goto loc_823A5E04;
	case 87:
		goto loc_823A5E04;
	case 88:
		goto loc_823A5E04;
	case 89:
		goto loc_823A5E04;
	case 90:
		goto loc_823A5E04;
	case 91:
		goto loc_823A5E04;
	case 92:
		goto loc_823A5E04;
	case 93:
		goto loc_823A5E04;
	case 94:
		goto loc_823A5E04;
	case 95:
		goto loc_823A5E04;
	case 96:
		goto loc_823A5E04;
	case 97:
		goto loc_823A5E04;
	case 98:
		goto loc_823A5E04;
	case 99:
		goto loc_823A5E04;
	case 100:
		goto loc_823A5E04;
	case 101:
		goto loc_823A5E04;
	case 102:
		goto loc_823A5E04;
	case 103:
		goto loc_823A5E04;
	case 104:
		goto loc_823A5E04;
	case 105:
		goto loc_823A5E04;
	case 106:
		goto loc_823A5E04;
	case 107:
		goto loc_823A5E04;
	case 108:
		goto loc_823A5E04;
	case 109:
		goto loc_823A5E04;
	case 110:
		goto loc_823A5E04;
	case 111:
		goto loc_823A5E04;
	case 112:
		goto loc_823A5E24;
	case 113:
		goto loc_823A5E04;
	case 114:
		goto loc_823A5E04;
	case 115:
		goto loc_823A5E04;
	case 116:
		goto loc_823A5E04;
	case 117:
		goto loc_823A5E04;
	case 118:
		goto loc_823A5E04;
	case 119:
		goto loc_823A5E04;
	case 120:
		goto loc_823A5E04;
	case 121:
		goto loc_823A5E04;
	case 122:
		goto loc_823A5E04;
	case 123:
		goto loc_823A5E24;
	case 124:
		goto loc_823A5E04;
	case 125:
		goto loc_823A5E04;
	case 126:
		goto loc_823A5E04;
	case 127:
		goto loc_823A5E04;
	case 128:
		goto loc_823A5E04;
	case 129:
		goto loc_823A5E04;
	case 130:
		goto loc_823A5E04;
	case 131:
		goto loc_823A5E04;
	case 132:
		goto loc_823A5E04;
	case 133:
		goto loc_823A5E04;
	case 134:
		goto loc_823A5E04;
	case 135:
		goto loc_823A5E04;
	case 136:
		goto loc_823A5E04;
	case 137:
		goto loc_823A5E04;
	case 138:
		goto loc_823A5E04;
	case 139:
		goto loc_823A5E04;
	case 140:
		goto loc_823A5E04;
	case 141:
		goto loc_823A5E04;
	case 142:
		goto loc_823A5E04;
	case 143:
		goto loc_823A5E04;
	case 144:
		goto loc_823A5E04;
	case 145:
		goto loc_823A5E04;
	case 146:
		goto loc_823A5E04;
	case 147:
		goto loc_823A5E24;
	case 148:
		goto loc_823A5E04;
	case 149:
		goto loc_823A5E04;
	case 150:
		goto loc_823A5E04;
	case 151:
		goto loc_823A5E04;
	case 152:
		goto loc_823A5E04;
	case 153:
		goto loc_823A5E04;
	case 154:
		goto loc_823A5E04;
	case 155:
		goto loc_823A5E04;
	case 156:
		goto loc_823A5E04;
	case 157:
		goto loc_823A5E04;
	case 158:
		goto loc_823A5E04;
	case 159:
		goto loc_823A5E04;
	case 160:
		goto loc_823A5E04;
	case 161:
		goto loc_823A5E04;
	case 162:
		goto loc_823A5E04;
	case 163:
		goto loc_823A5E04;
	case 164:
		goto loc_823A5E04;
	case 165:
		goto loc_823A5E04;
	case 166:
		goto loc_823A5E04;
	case 167:
		goto loc_823A5E04;
	case 168:
		goto loc_823A5E24;
	case 169:
		goto loc_823A5E04;
	case 170:
		goto loc_823A5E04;
	case 171:
		goto loc_823A5E04;
	case 172:
		goto loc_823A5E04;
	case 173:
		goto loc_823A5E04;
	case 174:
		goto loc_823A5E04;
	case 175:
		goto loc_823A5E04;
	case 176:
		goto loc_823A5E04;
	case 177:
		goto loc_823A5E04;
	case 178:
		goto loc_823A5E04;
	case 179:
		goto loc_823A5E04;
	case 180:
		goto loc_823A5E04;
	case 181:
		goto loc_823A5E04;
	case 182:
		goto loc_823A5E04;
	case 183:
		goto loc_823A5E04;
	case 184:
		goto loc_823A5E04;
	case 185:
		goto loc_823A5E04;
	case 186:
		goto loc_823A5E04;
	case 187:
		goto loc_823A5E04;
	case 188:
		goto loc_823A5E04;
	case 189:
		goto loc_823A5E04;
	case 190:
		goto loc_823A5E04;
	case 191:
		goto loc_823A5E04;
	case 192:
		goto loc_823A5E04;
	case 193:
		goto loc_823A5E04;
	case 194:
		goto loc_823A5E04;
	case 195:
		goto loc_823A5E04;
	case 196:
		goto loc_823A5E04;
	case 197:
		goto loc_823A5E04;
	case 198:
		goto loc_823A5E04;
	case 199:
		goto loc_823A5E04;
	case 200:
		goto loc_823A5E04;
	case 201:
		goto loc_823A5E04;
	case 202:
		goto loc_823A5E04;
	case 203:
		goto loc_823A5E04;
	case 204:
		goto loc_823A5E04;
	case 205:
		goto loc_823A5E04;
	case 206:
		goto loc_823A5E04;
	case 207:
		goto loc_823A5E04;
	case 208:
		goto loc_823A5E04;
	case 209:
		goto loc_823A5E04;
	case 210:
		goto loc_823A5E04;
	case 211:
		goto loc_823A5E04;
	case 212:
		goto loc_823A5E04;
	case 213:
		goto loc_823A5E04;
	case 214:
		goto loc_823A5E04;
	case 215:
		goto loc_823A5E04;
	case 216:
		goto loc_823A5E04;
	case 217:
		goto loc_823A5E04;
	case 218:
		goto loc_823A5E14;
	case 219:
		goto loc_823A5E04;
	case 220:
		goto loc_823A5E04;
	case 221:
		goto loc_823A5E04;
	case 222:
		goto loc_823A5E04;
	case 223:
		goto loc_823A5E04;
	case 224:
		goto loc_823A5E04;
	case 225:
		goto loc_823A5E04;
	case 226:
		goto loc_823A5E04;
	case 227:
		goto loc_823A5E04;
	case 228:
		goto loc_823A5E04;
	case 229:
		goto loc_823A5E04;
	case 230:
		goto loc_823A5E04;
	case 231:
		goto loc_823A5E04;
	case 232:
		goto loc_823A5E04;
	case 233:
		goto loc_823A5E04;
	case 234:
		goto loc_823A5E04;
	case 235:
		goto loc_823A5E04;
	case 236:
		goto loc_823A5E04;
	case 237:
		goto loc_823A5E04;
	case 238:
		goto loc_823A5E04;
	case 239:
		goto loc_823A5E14;
	case 240:
		goto loc_823A5E14;
	case 241:
		goto loc_823A5E04;
	case 242:
		goto loc_823A5E24;
	case 243:
		goto loc_823A5E24;
	case 244:
		goto loc_823A5E14;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_823A5B10:
	// cmpwi cr6,r3,1902
	cr6.compare<int32_t>(ctx.r3.s32, 1902, xer);
	// bgt cr6,0x823a5e2c
	if (cr6.gt) goto loc_823A5E2C;
	// cmpwi cr6,r3,1901
	cr6.compare<int32_t>(ctx.r3.s32, 1901, xer);
	// bge cr6,0x823a5e24
	if (!cr6.lt) goto loc_823A5E24;
	// cmpwi cr6,r3,1304
	cr6.compare<int32_t>(ctx.r3.s32, 1304, xer);
	// bgt cr6,0x823a5de8
	if (cr6.gt) goto loc_823A5DE8;
	// beq cr6,0x823a5e24
	if (cr6.eq) goto loc_823A5E24;
	// addi r11,r3,-1050
	ctx.r11.s64 = ctx.r3.s64 + -1050;
	// cmplwi cr6,r11,165
	cr6.compare<uint32_t>(ctx.r11.u32, 165, xer);
	// bgt cr6,0x823a5e04
	if (cr6.gt) goto loc_823A5E04;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// addi r12,r12,23376
	ctx.r12.s64 = ctx.r12.s64 + 23376;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A5E24;
	case 1:
		goto loc_823A5E04;
	case 2:
		goto loc_823A5E04;
	case 3:
		goto loc_823A5E04;
	case 4:
		goto loc_823A5E14;
	case 5:
		goto loc_823A5E04;
	case 6:
		goto loc_823A5E04;
	case 7:
		goto loc_823A5E04;
	case 8:
		goto loc_823A5E04;
	case 9:
		goto loc_823A5E04;
	case 10:
		goto loc_823A5E04;
	case 11:
		goto loc_823A5E04;
	case 12:
		goto loc_823A5E04;
	case 13:
		goto loc_823A5E04;
	case 14:
		goto loc_823A5E04;
	case 15:
		goto loc_823A5E04;
	case 16:
		goto loc_823A5E04;
	case 17:
		goto loc_823A5E04;
	case 18:
		goto loc_823A5E04;
	case 19:
		goto loc_823A5E04;
	case 20:
		goto loc_823A5E04;
	case 21:
		goto loc_823A5E04;
	case 22:
		goto loc_823A5E04;
	case 23:
		goto loc_823A5E04;
	case 24:
		goto loc_823A5E04;
	case 25:
		goto loc_823A5E04;
	case 26:
		goto loc_823A5E04;
	case 27:
		goto loc_823A5E04;
	case 28:
		goto loc_823A5E04;
	case 29:
		goto loc_823A5E04;
	case 30:
		goto loc_823A5E04;
	case 31:
		goto loc_823A5E04;
	case 32:
		goto loc_823A5E04;
	case 33:
		goto loc_823A5E04;
	case 34:
		goto loc_823A5E04;
	case 35:
		goto loc_823A5E04;
	case 36:
		goto loc_823A5E04;
	case 37:
		goto loc_823A5E04;
	case 38:
		goto loc_823A5E04;
	case 39:
		goto loc_823A5E04;
	case 40:
		goto loc_823A5E04;
	case 41:
		goto loc_823A5E04;
	case 42:
		goto loc_823A5E04;
	case 43:
		goto loc_823A5E04;
	case 44:
		goto loc_823A5E04;
	case 45:
		goto loc_823A5E04;
	case 46:
		goto loc_823A5E04;
	case 47:
		goto loc_823A5E04;
	case 48:
		goto loc_823A5E04;
	case 49:
		goto loc_823A5E04;
	case 50:
		goto loc_823A5E04;
	case 51:
		goto loc_823A5E04;
	case 52:
		goto loc_823A5E04;
	case 53:
		goto loc_823A5E04;
	case 54:
		goto loc_823A5E04;
	case 55:
		goto loc_823A5E04;
	case 56:
		goto loc_823A5E04;
	case 57:
		goto loc_823A5E04;
	case 58:
		goto loc_823A5E04;
	case 59:
		goto loc_823A5E04;
	case 60:
		goto loc_823A5E04;
	case 61:
		goto loc_823A5E04;
	case 62:
		goto loc_823A5E04;
	case 63:
		goto loc_823A5E04;
	case 64:
		goto loc_823A5E04;
	case 65:
		goto loc_823A5E04;
	case 66:
		goto loc_823A5E04;
	case 67:
		goto loc_823A5E04;
	case 68:
		goto loc_823A5E04;
	case 69:
		goto loc_823A5E04;
	case 70:
		goto loc_823A5E04;
	case 71:
		goto loc_823A5E04;
	case 72:
		goto loc_823A5E04;
	case 73:
		goto loc_823A5E04;
	case 74:
		goto loc_823A5E04;
	case 75:
		goto loc_823A5E04;
	case 76:
		goto loc_823A5E04;
	case 77:
		goto loc_823A5E04;
	case 78:
		goto loc_823A5E04;
	case 79:
		goto loc_823A5E04;
	case 80:
		goto loc_823A5E04;
	case 81:
		goto loc_823A5E04;
	case 82:
		goto loc_823A5E04;
	case 83:
		goto loc_823A5E04;
	case 84:
		goto loc_823A5E04;
	case 85:
		goto loc_823A5E04;
	case 86:
		goto loc_823A5E04;
	case 87:
		goto loc_823A5E04;
	case 88:
		goto loc_823A5E04;
	case 89:
		goto loc_823A5E04;
	case 90:
		goto loc_823A5E04;
	case 91:
		goto loc_823A5E04;
	case 92:
		goto loc_823A5E04;
	case 93:
		goto loc_823A5E04;
	case 94:
		goto loc_823A5E04;
	case 95:
		goto loc_823A5E04;
	case 96:
		goto loc_823A5E04;
	case 97:
		goto loc_823A5E04;
	case 98:
		goto loc_823A5E04;
	case 99:
		goto loc_823A5E04;
	case 100:
		goto loc_823A5E04;
	case 101:
		goto loc_823A5E04;
	case 102:
		goto loc_823A5E04;
	case 103:
		goto loc_823A5E04;
	case 104:
		goto loc_823A5E04;
	case 105:
		goto loc_823A5E04;
	case 106:
		goto loc_823A5E04;
	case 107:
		goto loc_823A5E04;
	case 108:
		goto loc_823A5E04;
	case 109:
		goto loc_823A5E04;
	case 110:
		goto loc_823A5E04;
	case 111:
		goto loc_823A5E04;
	case 112:
		goto loc_823A5E04;
	case 113:
		goto loc_823A5E04;
	case 114:
		goto loc_823A5E04;
	case 115:
		goto loc_823A5E04;
	case 116:
		goto loc_823A5E04;
	case 117:
		goto loc_823A5E04;
	case 118:
		goto loc_823A5E04;
	case 119:
		goto loc_823A5E04;
	case 120:
		goto loc_823A5E04;
	case 121:
		goto loc_823A5E04;
	case 122:
		goto loc_823A5E04;
	case 123:
		goto loc_823A5E04;
	case 124:
		goto loc_823A5E04;
	case 125:
		goto loc_823A5E04;
	case 126:
		goto loc_823A5E04;
	case 127:
		goto loc_823A5E04;
	case 128:
		goto loc_823A5E04;
	case 129:
		goto loc_823A5E04;
	case 130:
		goto loc_823A5E04;
	case 131:
		goto loc_823A5E04;
	case 132:
		goto loc_823A5E04;
	case 133:
		goto loc_823A5E04;
	case 134:
		goto loc_823A5E04;
	case 135:
		goto loc_823A5E04;
	case 136:
		goto loc_823A5E04;
	case 137:
		goto loc_823A5E04;
	case 138:
		goto loc_823A5E04;
	case 139:
		goto loc_823A5E04;
	case 140:
		goto loc_823A5E04;
	case 141:
		goto loc_823A5E04;
	case 142:
		goto loc_823A5E04;
	case 143:
		goto loc_823A5E04;
	case 144:
		goto loc_823A5E04;
	case 145:
		goto loc_823A5E04;
	case 146:
		goto loc_823A5E04;
	case 147:
		goto loc_823A5E04;
	case 148:
		goto loc_823A5E04;
	case 149:
		goto loc_823A5E04;
	case 150:
		goto loc_823A5E04;
	case 151:
		goto loc_823A5E04;
	case 152:
		goto loc_823A5E24;
	case 153:
		goto loc_823A5E24;
	case 154:
		goto loc_823A5E24;
	case 155:
		goto loc_823A5E04;
	case 156:
		goto loc_823A5E04;
	case 157:
		goto loc_823A5E04;
	case 158:
		goto loc_823A5E04;
	case 159:
		goto loc_823A5E04;
	case 160:
		goto loc_823A5E04;
	case 161:
		goto loc_823A5E04;
	case 162:
		goto loc_823A5E04;
	case 163:
		goto loc_823A5E04;
	case 164:
		goto loc_823A5E04;
	case 165:
		goto loc_823A5E24;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_823A5DE8:
	// cmpwi cr6,r3,1600
	cr6.compare<int32_t>(ctx.r3.s32, 1600, xer);
	// bgt cr6,0x823a5e0c
	if (cr6.gt) goto loc_823A5E0C;
	// beq cr6,0x823a5e24
	if (cr6.eq) goto loc_823A5E24;
	// cmpwi cr6,r3,1310
	cr6.compare<int32_t>(ctx.r3.s32, 1310, xer);
	// blt cr6,0x823a5e04
	if (cr6.lt) goto loc_823A5E04;
	// cmpwi cr6,r3,1311
	cr6.compare<int32_t>(ctx.r3.s32, 1311, xer);
	// ble cr6,0x823a5e24
	if (!cr6.gt) goto loc_823A5E24;
loc_823A5E04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A5E0C:
	// cmpwi cr6,r3,1900
	cr6.compare<int32_t>(ctx.r3.s32, 1900, xer);
	// bne cr6,0x823a5e04
	if (!cr6.eq) goto loc_823A5E04;
loc_823A5E14:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a5e24
	if (cr6.eq) goto loc_823A5E24;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_823A5E24:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823A5E2C:
	// addi r11,r3,-1904
	ctx.r11.s64 = ctx.r3.s64 + -1904;
	// cmplwi cr6,r11,213
	cr6.compare<uint32_t>(ctx.r11.u32, 213, xer);
	// bgt cr6,0x823a5e04
	// ERROR: conditional branch to unknown address 0x823A5E04
	if (cr6.gt) REX_FATAL("Unresolved branch from 0x823A5E34 to 0x823A5E04");
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// addi r12,r12,24144
	ctx.r12.s64 = ctx.r12.s64 + 24144;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		REX_FATAL("Jump target 0x823A5E24 unresolved at bctr 0x823A5E4C");
	case 1:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 2:
		REX_FATAL("Jump target 0x823A5E24 unresolved at bctr 0x823A5E4C");
	case 3:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 4:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 5:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 6:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 7:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 8:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 9:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 10:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 11:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 12:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 13:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 14:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 15:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 16:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 17:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 18:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 19:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 20:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 21:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 22:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 23:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 24:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 25:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 26:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 27:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 28:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 29:
		REX_FATAL("Jump target 0x823A5E24 unresolved at bctr 0x823A5E4C");
	case 30:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 31:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 32:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 33:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 34:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 35:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 36:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 37:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 38:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 39:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 40:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 41:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 42:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 43:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 44:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 45:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 46:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 47:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 48:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 49:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 50:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 51:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 52:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 53:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 54:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 55:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 56:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 57:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 58:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 59:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 60:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 61:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 62:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 63:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 64:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 65:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 66:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 67:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 68:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 69:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 70:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 71:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 72:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 73:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 74:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 75:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 76:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 77:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 78:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 79:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 80:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 81:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 82:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 83:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 84:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 85:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 86:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 87:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 88:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 89:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 90:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 91:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 92:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 93:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 94:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 95:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 96:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 97:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 98:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 99:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 100:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 101:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 102:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 103:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 104:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 105:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 106:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 107:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 108:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 109:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 110:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 111:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 112:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 113:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 114:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 115:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 116:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 117:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 118:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 119:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 120:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 121:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 122:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 123:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 124:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 125:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 126:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 127:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 128:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 129:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 130:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 131:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 132:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 133:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 134:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 135:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 136:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 137:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 138:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 139:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 140:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 141:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 142:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 143:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 144:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 145:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 146:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 147:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 148:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 149:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 150:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 151:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 152:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 153:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 154:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 155:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 156:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 157:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 158:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 159:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 160:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 161:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 162:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 163:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 164:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 165:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 166:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 167:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 168:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 169:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 170:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 171:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 172:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 173:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 174:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 175:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 176:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 177:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 178:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 179:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 180:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 181:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 182:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 183:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 184:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 185:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 186:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 187:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 188:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 189:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 190:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 191:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 192:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 193:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 194:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 195:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 196:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 197:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 198:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 199:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 200:
		REX_FATAL("Jump target 0x823A5E24 unresolved at bctr 0x823A5E4C");
	case 201:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 202:
		REX_FATAL("Jump target 0x823A5E24 unresolved at bctr 0x823A5E4C");
	case 203:
		REX_FATAL("Jump target 0x823A5E24 unresolved at bctr 0x823A5E4C");
	case 204:
		REX_FATAL("Jump target 0x823A5E24 unresolved at bctr 0x823A5E4C");
	case 205:
		REX_FATAL("Jump target 0x823A5E24 unresolved at bctr 0x823A5E4C");
	case 206:
		REX_FATAL("Jump target 0x823A5E24 unresolved at bctr 0x823A5E4C");
	case 207:
		REX_FATAL("Jump target 0x823A5E24 unresolved at bctr 0x823A5E4C");
	case 208:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 209:
		REX_FATAL("Jump target 0x823A5E24 unresolved at bctr 0x823A5E4C");
	case 210:
		REX_FATAL("Jump target 0x823A5E24 unresolved at bctr 0x823A5E4C");
	case 211:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 212:
		REX_FATAL("Jump target 0x823A5E04 unresolved at bctr 0x823A5E4C");
	case 213:
		REX_FATAL("Jump target 0x823A5E24 unresolved at bctr 0x823A5E4C");
	default:
		__builtin_trap(); // Switch case out of range
	}
}

DEFINE_REX_FUNC(sub_823A76A0) {
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
	ctx.lr = 0x823A76C0;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a76e8
	if (cr6.eq) goto loc_823A76E8;
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x826e18d0
	ctx.lr = 0x823A76D4;
	sub_826E18D0(ctx, base);
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
loc_823A76E8:
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

DEFINE_REX_FUNC(sub_823ADB58) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823ca848
	ctx.lr = 0x823ADB74;
	sub_823CA848(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x823adbc8
	if (cr6.gt) goto loc_823ADBC8;
	// bl 0x82328910
	ctx.lr = 0x823ADB80;
	sub_82328910(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823adbc8
	if (cr6.eq) goto loc_823ADBC8;
	// lwz r11,568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 568);
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823adba8
	if (cr6.eq) goto loc_823ADBA8;
	// lwz r11,2656(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2656);
	// li r4,2
	ctx.r4.s64 = 2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x823adbac
	if (!cr6.eq) goto loc_823ADBAC;
loc_823ADBA8:
	// li r4,1
	ctx.r4.s64 = 1;
loc_823ADBAC:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,276(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 276);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82263028
	ctx.lr = 0x823ADBBC;
	sub_82263028(ctx, base);
	// lbz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 316);
	// ori r11,r11,48
	ctx.r11.u64 = ctx.r11.u64 | 48;
	// stb r11,316(r3)
	REX_STORE_U8(ctx.r3.u32 + 316, ctx.r11.u8);
loc_823ADBC8:
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

DEFINE_REX_FUNC(sub_823B4708) {
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
	ctx.lr = 0x823B4710;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r31,-32005
	r31.s64 = -2097479680;
	// stw r29,216(r30)
	REX_STORE_U32(r30.u32 + 216, r29.u32);
	// lwz r3,-13796(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -13796);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823b4754
	if (!cr6.eq) goto loc_823B4754;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
	// bl 0x8218be28
	ctx.lr = 0x823B473C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b474c
	if (cr6.eq) goto loc_823B474C;
	// bl 0x821d2678
	ctx.lr = 0x823B4748;
	sub_821D2678(ctx, base);
	// b 0x823b4750
	goto loc_823B4750;
loc_823B474C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4750:
	// stw r3,-13796(r31)
	REX_STORE_U32(r31.u32 + -13796, ctx.r3.u32);
loc_823B4754:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82539e70
	ctx.lr = 0x823B475C;
	sub_82539E70(ctx, base);
	// lbz r10,2299(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 2299);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// stb r10,761(r11)
	REX_STORE_U8(ctx.r11.u32 + 761, ctx.r10.u8);
	// lwz r3,-13796(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -13796);
	// lwz r29,216(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 216);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823b479c
	if (!cr6.eq) goto loc_823B479C;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
	// bl 0x8218be28
	ctx.lr = 0x823B4784;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823b4794
	if (cr6.eq) goto loc_823B4794;
	// bl 0x821d2678
	ctx.lr = 0x823B4790;
	sub_821D2678(ctx, base);
	// b 0x823b4798
	goto loc_823B4798;
loc_823B4794:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B4798:
	// stw r3,-13796(r31)
	REX_STORE_U32(r31.u32 + -13796, ctx.r3.u32);
loc_823B479C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82539e70
	ctx.lr = 0x823B47A4;
	sub_82539E70(ctx, base);
	// lbz r10,2298(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 2298);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r11,540(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 540);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,228(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_823BEC38) {
	REX_FUNC_PROLOGUE();
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
	ctx.lr = 0x823BEC40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,529(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 529);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x823bec64
	if (!cr6.eq) goto loc_823BEC64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_823BEC64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823c6a60
	ctx.lr = 0x823BEC6C;
	sub_823C6A60(ctx, base);
	// lwz r11,2480(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2480);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lbz r11,33(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x823bec94
	if (!cr6.eq) goto loc_823BEC94;
	// stb r28,32(r31)
	REX_STORE_U8(r31.u32 + 32, r28.u8);
loc_823BEC94:
	// lbz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r28,33(r31)
	REX_STORE_U8(r31.u32 + 33, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823becb4
	if (cr6.eq) goto loc_823BECB4;
	// bl 0x823bafa8
	ctx.lr = 0x823BECB0;
	sub_823BAFA8(ctx, base);
	// b 0x823becb8
	goto loc_823BECB8;
loc_823BECB4:
	// bl 0x823baac8
	ctx.lr = 0x823BECB8;
	sub_823BAAC8(ctx, base);
loc_823BECB8:
	// lbz r11,2568(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 2568);
	// lbz r10,2570(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 2570);
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
	// beq cr6,0x823bed00
	if (cr6.eq) goto loc_823BED00;
	// lbz r10,2571(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 2571);
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
	// beq cr6,0x823bed04
	if (cr6.eq) goto loc_823BED04;
loc_823BED00:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_823BED04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823bed50
	if (cr6.eq) goto loc_823BED50;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822341e0
	ctx.lr = 0x823BED18;
	sub_822341E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823bed30
	if (cr6.eq) goto loc_823BED30;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823bed48
	goto loc_823BED48;
loc_823BED30:
	// bl 0x822341f0
	ctx.lr = 0x823BED34;
	sub_822341F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823bed50
	if (cr6.eq) goto loc_823BED50;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823BED48:
	// li r5,-1
	ctx.r5.s64 = -1;
	// bl 0x8223e4d8
	ctx.lr = 0x823BED50;
	sub_8223E4D8(ctx, base);
loc_823BED50:
	// lwz r11,2800(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2800);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,2800(r30)
	REX_STORE_U32(r30.u32 + 2800, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_823CA110) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac0
	ctx.lr = 0x823CA118;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r3,4336(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4336);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x821250b0
	ctx.lr = 0x823CA140;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ca168
	if (cr6.eq) goto loc_823CA168;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826e2b48
	ctx.lr = 0x823CA164;
	sub_826E2B48(ctx, base);
	// b 0x823ca16c
	goto loc_823CA16C;
loc_823CA168:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CA16C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// bl 0x826af3c0
	ctx.lr = 0x823CA178;
	sub_826AF3C0(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8298eb10
	return;
}

DEFINE_REX_FUNC(sub_823CBE50) {
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
	ctx.lr = 0x823CBE58;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r28,252(r31)
	REX_STORE_U32(r31.u32 + 252, r28.u32);
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// bl 0x823db1e8
	ctx.lr = 0x823CBE7C;
	sub_823DB1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823cbedc
	if (cr6.eq) goto loc_823CBEDC;
	// lis r29,320
	r29.s64 = 20971520;
loc_823CBE8C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823cbec4
	if (cr6.eq) goto loc_823CBEC4;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r11,r11,0,6,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C00000;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, xer);
	// bne cr6,0x823cbec4
	if (!cr6.eq) goto loc_823CBEC4;
	// bl 0x823cbdb8
	ctx.lr = 0x823CBEAC;
	sub_823CBDB8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823cbec4
	if (cr6.eq) goto loc_823CBEC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823db1b0
	ctx.lr = 0x823CBEC0;
	sub_823DB1B0(ctx, base);
	// li r30,1
	r30.s64 = 1;
loc_823CBEC4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823db1e8
	ctx.lr = 0x823CBED0;
	sub_823DB1E8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x823cbe8c
	if (!cr6.eq) goto loc_823CBE8C;
loc_823CBEDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dd450
	ctx.lr = 0x823CBEE4;
	sub_823DD450(ctx, base);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// stb r28,113(r31)
	REX_STORE_U8(r31.u32 + 113, r28.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823cbf08
	if (cr6.eq) goto loc_823CBF08;
	// bl 0x822d4cb0
	ctx.lr = 0x823CBEF8;
	sub_822D4CB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823cbf0c
	if (cr6.eq) goto loc_823CBF0C;
loc_823CBF08:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_823CBF0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823cbf64
	if (cr6.eq) goto loc_823CBF64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8238b278
	ctx.lr = 0x823CBF20;
	sub_8238B278(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CBF3C;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// lfs f0,7192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x823cbf50
	if (cr6.lt) goto loc_823CBF50;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_823CBF50:
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82392698
	ctx.lr = 0x823CBF64;
	sub_82392698(ctx, base);
loc_823CBF64:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_823D85A0) {
	REX_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x829900f0
	ctx.lr = 0x823D85B8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f26,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f26.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f26
	cr6.compare(f30.f64, f26.f64);
	// lfs f31,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	f31.f64 = double(temp.f32);
	// bne cr6,0x823d85ec
	if (!cr6.eq) goto loc_823D85EC;
	// fmr f30,f26
	f30.f64 = f26.f64;
	// fmr f27,f31
	f27.f64 = f31.f64;
	// b 0x823d8608
	goto loc_823D8608;
loc_823D85EC:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x8298f118
	ctx.lr = 0x823D85F4;
	sub_8298F118(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// frsp f27,f0
	f27.f64 = double(float(ctx.f0.f64));
	// bl 0x8298f048
	ctx.lr = 0x823D8604;
	sub_8298F048(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
loc_823D8608:
	// lfs f29,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f29.f64 = double(temp.f32);
	// fcmpu cr6,f29,f26
	cr6.compare(f29.f64, f26.f64);
	// bne cr6,0x823d8620
	if (!cr6.eq) goto loc_823D8620;
	// fmr f28,f26
	f28.f64 = f26.f64;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// b 0x823d863c
	goto loc_823D863C;
loc_823D8620:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x8298f118
	ctx.lr = 0x823D8628;
	sub_8298F118(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// frsp f29,f0
	f29.f64 = double(float(ctx.f0.f64));
	// bl 0x8298f048
	ctx.lr = 0x823D8638;
	sub_8298F048(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(ctx.f1.f64));
loc_823D863C:
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, f26.f64);
	// bne cr6,0x823d8650
	if (!cr6.eq) goto loc_823D8650;
	// fmr f0,f26
	ctx.f0.f64 = f26.f64;
	// b 0x823d8670
	goto loc_823D8670;
loc_823D8650:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8298f118
	ctx.lr = 0x823D865C;
	sub_8298F118(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// bl 0x8298f048
	ctx.lr = 0x823D866C;
	sub_8298F048(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_823D8670:
	// fmuls f9,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(f28.f64 * f27.f64));
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fmuls f11,f31,f29
	ctx.f11.f64 = double(float(f31.f64 * f29.f64));
	// fmuls f10,f0,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmuls f12,f31,f28
	ctx.f12.f64 = double(float(f31.f64 * f28.f64));
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmuls f8,f31,f27
	ctx.f8.f64 = double(float(f31.f64 * f27.f64));
	// fmuls f7,f29,f27
	ctx.f7.f64 = double(float(f29.f64 * f27.f64));
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fnmsubs f9,f13,f30,f11
	ctx.f9.f64 = double(float(-std::fma(ctx.f13.f64, f30.f64, -ctx.f11.f64)));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmadds f9,f12,f30,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, f30.f64, ctx.f10.f64)));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fnmsubs f0,f11,f30,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f11.f64, f30.f64, -ctx.f13.f64)));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f30,24(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// fmadds f13,f10,f30,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, f30.f64, ctx.f12.f64)));
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f7,40(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8299013c
	ctx.lr = 0x823D86D8;
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

DEFINE_REX_FUNC(sub_823E1400) {
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
	ctx.lr = 0x823E1408;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x823e1438
	if (!cr6.eq) goto loc_823E1438;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x823e1438
	if (!cr6.eq) goto loc_823E1438;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_823E1438:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e0d18
	ctx.lr = 0x823E1444;
	sub_823E0D18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, ctx.r11.s32, xer);
	// bge cr6,0x823e1470
	if (!cr6.lt) goto loc_823E1470;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e0d90
	ctx.lr = 0x823E1460;
	sub_823E0D90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x823e1474
	if (cr6.lt) goto loc_823E1474;
loc_823E1470:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E1474:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_823E4B18) {
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
	ctx.lr = 0x823E4B20;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32085
	ctx.r11.s64 = -2102722560;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,-10032
	ctx.r11.s64 = ctx.r11.s64 + -10032;
	// lhz r10,46(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 46);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lhz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 88);
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x823e4b84
	if (cr6.eq) goto loc_823E4B84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824bb338
	ctx.lr = 0x823E4B5C;
	sub_824BB338(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823e4b84
	if (cr6.eq) goto loc_823E4B84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824bb390
	ctx.lr = 0x823E4B70;
	sub_824BB390(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// beq cr6,0x823e4b84
	if (cr6.eq) goto loc_823E4B84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e3e20
	ctx.lr = 0x823E4B84;
	sub_823E3E20(ctx, base);
loc_823E4B84:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8218be28
	ctx.lr = 0x823E4B8C;
	sub_8218BE28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823e4bc4
	if (cr6.eq) goto loc_823E4BC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82155268
	ctx.lr = 0x823E4BA0;
	sub_82155268(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,212(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 212);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x827c8400
	ctx.lr = 0x823E4BBC;
	sub_827C8400(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x823e4bc8
	goto loc_823E4BC8;
loc_823E4BC4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823E4BC8:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// bl 0x827c9950
	ctx.lr = 0x823E4BD4;
	sub_827C9950(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x827c94c0
	ctx.lr = 0x823E4BE4;
	sub_827C94C0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827c3b30
	ctx.lr = 0x823E4BF8;
	sub_827C3B30(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r4,241
	ctx.r4.s64 = 241;
	// bl 0x827c0a58
	ctx.lr = 0x823E4C0C;
	sub_827C0A58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x827c1fa0
	ctx.lr = 0x823E4C18;
	sub_827C1FA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,241
	ctx.r4.s64 = 241;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x827a4ab8
	ctx.lr = 0x823E4C28;
	sub_827A4AB8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827c3b30
	ctx.lr = 0x823E4C3C;
	sub_827C3B30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// bl 0x827c1fa0
	ctx.lr = 0x823E4C48;
	sub_827C1FA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x827c81a0
	ctx.lr = 0x823E4C54;
	sub_827C81A0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x827c7d88
	ctx.lr = 0x823E4C60;
	sub_827C7D88(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823e4c70
	if (cr6.eq) goto loc_823E4C70;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,16(r3)
	REX_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
loc_823E4C70:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_823EC7A0) {
	REX_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister temp{};
	// lis r11,-32048
	ctx.r11.s64 = -2100297728;
	// lwz r10,-23936(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -23936);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mulli r10,r10,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(60));
	// lfs f12,-26548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -26548);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32048
	ctx.r11.s64 = -2100297728;
	// lwz r11,-23948(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -23948);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32048
	ctx.r11.s64 = -2100297728;
	// lwz r11,-23944(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -23944);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r11.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f13,-8(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f0,f0,f12,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f13.f64)));
	// lfs f13,-22820(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -22820);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823ec864
	if (cr6.lt) goto loc_823EC864;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-31392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31392);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823ec824
	if (!cr6.lt) goto loc_823EC824;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// blr 
	return;
loc_823EC824:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-31396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -31396);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823ec840
	if (!cr6.lt) goto loc_823EC840;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_823EC840:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,23572(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23572);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823ec864
	if (!cr6.lt) goto loc_823EC864;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f1,f13,f12,f0
	ctx.f1.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f0.f64)));
	// blr 
	return;
loc_823EC864:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F65A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// beq cr6,0x823f6700
	if (cr6.eq) goto loc_823F6700;
loc_823F65C8:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823f6700
	if (!cr6.eq) goto loc_823F6700;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// bgt cr6,0x823f66f4
	if (cr6.gt) goto loc_823F66F4;
	// lis r12,-32193
	ctx.r12.s64 = -2109800448;
	// addi r12,r12,26096
	ctx.r12.s64 = ctx.r12.s64 + 26096;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823F6670;
	case 1:
		goto loc_823F6614;
	case 2:
		goto loc_823F6620;
	case 3:
		goto loc_823F662C;
	case 4:
		goto loc_823F6638;
	case 5:
		goto loc_823F6644;
	case 6:
		goto loc_823F6650;
	case 7:
		goto loc_823F665C;
	case 8:
		goto loc_823F6714;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_823F6614:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823f6260
	ctx.lr = 0x823F661C;
	sub_823F6260(ctx, base);
	// b 0x823f6664
	goto loc_823F6664;
loc_823F6620:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823f62d8
	ctx.lr = 0x823F6628;
	sub_823F62D8(ctx, base);
	// b 0x823f6664
	goto loc_823F6664;
loc_823F662C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823f6350
	ctx.lr = 0x823F6634;
	sub_823F6350(ctx, base);
	// b 0x823f6664
	goto loc_823F6664;
loc_823F6638:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823f63c8
	ctx.lr = 0x823F6640;
	sub_823F63C8(ctx, base);
	// b 0x823f6664
	goto loc_823F6664;
loc_823F6644:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823f6440
	ctx.lr = 0x823F664C;
	sub_823F6440(ctx, base);
	// b 0x823f6664
	goto loc_823F6664;
loc_823F6650:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823f64b8
	ctx.lr = 0x823F6658;
	sub_823F64B8(ctx, base);
	// b 0x823f6664
	goto loc_823F6664;
loc_823F665C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823f6530
	ctx.lr = 0x823F6664;
	sub_823F6530(ctx, base);
loc_823F6664:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823f667c
	if (!cr6.eq) goto loc_823F667C;
loc_823F6670:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823f4078
	ctx.lr = 0x823F6678;
	sub_823F4078(ctx, base);
	// b 0x823f66f4
	goto loc_823F66F4;
loc_823F667C:
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x823f6690
	if (cr6.eq) goto loc_823F6690;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, xer);
	// beq cr6,0x823f66f0
	if (cr6.eq) goto loc_823F66F0;
loc_823F6690:
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x823f66f4
	if (cr6.eq) goto loc_823F66F4;
	// lwz r11,32(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bne cr6,0x823f66b4
	if (!cr6.eq) goto loc_823F66B4;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
loc_823F66B4:
	// lfs f10,36(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,40(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,32(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f11,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f11
	cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x823f66f4
	if (!cr6.gt) goto loc_823F66F4;
loc_823F66F0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_823F66F4:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(ctx.r11.s32, 8, xer);
	// bne cr6,0x823f65c8
	if (!cr6.eq) goto loc_823F65C8;
loc_823F6700:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823F6714:
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
}

DEFINE_REX_FUNC(sub_82409500) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab8
	ctx.lr = 0x82409508;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// clrlwi r24,r4,24
	r24.u64 = ctx.r4.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// lwz r25,-7564(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + -7564);
	// beq cr6,0x82409578
	if (cr6.eq) goto loc_82409578;
	// lbz r11,476(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 476);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82409578
	if (cr6.eq) goto loc_82409578;
	// lbz r11,528(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 528);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82409578
	if (cr6.eq) goto loc_82409578;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82409578
	if (cr6.eq) goto loc_82409578;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,144
	ctx.r11.s64 = ctx.r11.s64 + 144;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r30.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, xer);
	// blt cr6,0x82409644
	if (cr6.lt) goto loc_82409644;
loc_82409578:
	// li r28,0
	r28.s64 = 0;
	// li r26,-1
	r26.s64 = -1;
	// li r29,0
	r29.s64 = 0;
	// li r27,0
	r27.s64 = 0;
loc_82409588:
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r31,r11,r30
	r31.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82409604
	if (cr6.eq) goto loc_82409604;
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824095b0
	if (!cr6.eq) goto loc_824095B0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x82409604
	if (!cr6.eq) goto loc_82409604;
loc_824095B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + r30.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// bge cr6,0x82409604
	if (!cr6.lt) goto loc_82409604;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// extsb r10,r28
	ctx.r10.s64 = r28.s8;
	// lbz r11,256(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 256);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x824095f4
	if (cr6.gt) goto loc_824095F4;
	// bl 0x8298ee80
	ctx.lr = 0x824095E8;
	sub_8298EE80(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(ctx.r11.s32, 128, xer);
	// bge cr6,0x82409604
	if (!cr6.lt) goto loc_82409604;
loc_824095F4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r26,r29
	r26.u64 = r29.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lbz r28,256(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 256);
loc_82409604:
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmpwi cr6,r27,16
	cr6.compare<int32_t>(r27.s32, 16, xer);
	// blt cr6,0x82409588
	if (cr6.lt) goto loc_82409588;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82409624
	if (cr6.eq) goto loc_82409624;
	// stb r26,528(r30)
	REX_STORE_U8(r30.u32 + 528, r26.u8);
loc_82409624:
	// extsb r11,r26
	ctx.r11.s64 = r26.s8;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(ctx.r11.s32, -1, xer);
	// beq cr6,0x82409640
	if (cr6.eq) goto loc_82409640;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb08
	return;
loc_82409640:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82409644:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb08
	return;
}

DEFINE_REX_FUNC(sub_82416430) {
	REX_FUNC_PROLOGUE();
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
	ctx.lr = 0x82416438;
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// bl 0x823313b0
	ctx.lr = 0x8241645C;
	sub_823313B0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,25(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 25);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r11,r11,-24212
	ctx.r11.s64 = ctx.r11.s64 + -24212;
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
	// lfs f0,3068(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stb r7,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r7.u8);
	// lfs f13,2592(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2592);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stw r27,44(r31)
	REX_STORE_U32(r31.u32 + 44, r27.u32);
	// stb r10,25(r31)
	REX_STORE_U8(r31.u32 + 25, ctx.r10.u8);
	// li r10,434
	ctx.r10.s64 = 434;
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_8241ADA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8241acf0
	ctx.lr = 0x8241ADC0;
	sub_8241ACF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,68(r31)
	REX_STORE_U16(r31.u32 + 68, ctx.r11.u16);
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

DEFINE_REX_FUNC(sub_8241D8A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab4
	ctx.lr = 0x8241D8B0;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// stfs f1,276(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lbz r10,-7535(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -7535);
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lbz r11,-7534(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -7534);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8241dbbc
	if (!cr6.eq) goto loc_8241DBBC;
	// lwz r11,1072(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1072);
	// addi r25,r31,1072
	r25.s64 = r31.s64 + 1072;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8241d900
	if (!cr6.eq) goto loc_8241D900;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8298eb04
	return;
loc_8241D900:
	// lis r9,-32056
	ctx.r9.s64 = -2100822016;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r24,0
	r24.s64 = 0;
	// addi r10,r11,150
	ctx.r10.s64 = ctx.r11.s64 + 150;
	// lwz r11,-7564(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -7564);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8241d980
	if (!cr6.gt) goto loc_8241D980;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r11,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 5;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stb r24,16(r10)
	REX_STORE_U8(ctx.r10.u32 + 16, r24.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,-7564(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -7564);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lvx128 v0,r8,r31
	ea = (ctx.r8.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lvx128 v0,r7,r31
	ea = (ctx.r7.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,35
	ctx.r11.s64 = ctx.r11.s64 + 35;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stvx128 v0,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8241D980:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r27,r31,48
	r27.s64 = r31.s64 + 48;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// addi r26,r31,16
	r26.s64 = r31.s64 + 16;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// lfs f0,4024(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4024);
	ctx.f0.f64 = double(temp.f32);
	// li r8,512
	ctx.r8.s64 = 512;
loc_8241D99C:
	// lbzx r9,r26,r10
	ctx.r9.u64 = REX_LOAD_U8(r26.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8241d9d0
	if (cr6.eq) goto loc_8241D9D0;
	// addi r9,r1,276
	ctx.r9.s64 = ctx.r1.s64 + 276;
	// lfs f13,520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 520);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f1,f0,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f13.f64)));
	// stfs f13,520(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 520, temp.u32);
	// lvx128 v13,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vmaddfp v0,v13,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8241D9D0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x8241d99c
	if (cr6.lt) goto loc_8241D99C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241c088
	ctx.lr = 0x8241D9F0;
	sub_8241C088(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lis r10,-32085
	ctx.r10.s64 = -2102722560;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r10,-10032
	ctx.r10.s64 = ctx.r10.s64 + -10032;
	// lhz r9,46(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 46);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,196(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 196);
	// lwz r30,324(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 324);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// ble cr6,0x8241daf0
	if (!cr6.gt) goto loc_8241DAF0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82155268
	ctx.lr = 0x8241DA28;
	sub_82155268(ctx, base);
	// lis r10,-32014
	ctx.r10.s64 = -2098069504;
	// rlwinm r8,r30,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,-29248(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -29248);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r29,r9,r8
	r29.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lis r9,-32014
	ctx.r9.s64 = -2098069504;
	// addi r30,r9,-29264
	r30.s64 = ctx.r9.s64 + -29264;
	// bne cr6,0x8241da7c
	if (!cr6.eq) goto loc_8241DA7C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-29248(r10)
	REX_STORE_U32(ctx.r10.u32 + -29248, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,7956(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7956);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
loc_8241DA7C:
	// lwz r4,0(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,232(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8241DA94;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lbz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 4);
	// addi r8,r10,35
	ctx.r8.s64 = ctx.r10.s64 + 35;
	// lis r10,-32079
	ctx.r10.s64 = -2102329344;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r10,13552
	ctx.r3.s64 = ctx.r10.s64 + 13552;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x821bed10
	ctx.lr = 0x8241DAF0;
	sub_821BED10(ctx, base);
loc_8241DAF0:
	// lis r11,-32039
	ctx.r11.s64 = -2099707904;
	// stb r24,4(r31)
	REX_STORE_U8(r31.u32 + 4, r24.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,15216
	r28.s64 = ctx.r11.s64 + 15216;
	// lis r11,-32016
	ctx.r11.s64 = -2098200576;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// lfs f31,5180(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 5180);
	f31.f64 = double(temp.f32);
	// addi r27,r11,-31152
	r27.s64 = ctx.r11.s64 + -31152;
loc_8241DB14:
	// lbzx r11,r26,r29
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8241db48
	if (cr6.eq) goto loc_8241DB48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239a4b0
	ctx.lr = 0x8241DB30;
	sub_8239A4B0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82310910
	ctx.lr = 0x8241DB48;
	sub_82310910(ctx, base);
loc_8241DB48:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmpwi cr6,r29,32
	cr6.compare<int32_t>(r29.s32, 32, xer);
	// blt cr6,0x8241db14
	if (cr6.lt) goto loc_8241DB14;
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// lwz r11,-7544(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7544);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8241db80
	if (!cr6.eq) goto loc_8241DB80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241cf98
	ctx.lr = 0x8241DB78;
	sub_8241CF98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241c2f0
	ctx.lr = 0x8241DB80;
	sub_8241C2F0(ctx, base);
loc_8241DB80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241cea8
	ctx.lr = 0x8241DB88;
	sub_8241CEA8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_8241DB8C:
	// lbzx r10,r26,r11
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8241dbbc
	if (!cr6.eq) goto loc_8241DBBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(ctx.r11.s32, 32, xer);
	// blt cr6,0x8241db8c
	if (cr6.lt) goto loc_8241DB8C;
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8241dbb8
	if (cr6.eq) goto loc_8241DBB8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823e5680
	ctx.lr = 0x8241DBB8;
	sub_823E5680(ctx, base);
loc_8241DBB8:
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
loc_8241DBBC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8298eb04
	return;
}

DEFINE_REX_FUNC(sub_824399F0) {
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
	ctx.lr = 0x824399F8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82236338
	ctx.lr = 0x82439A0C;
	sub_82236338(ctx, base);
	// lwz r31,24(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82439bcc
	if (cr6.eq) goto loc_82439BCC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82439a34
	if (cr6.eq) goto loc_82439A34;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// rotlwi r31,r31,0
	r31.u64 = __builtin_rotateleft32(r31.u32, 0);
	// bl 0x8214cf38
	ctx.lr = 0x82439A2C;
	sub_8214CF38(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bne cr6,0x82439bcc
	if (!cr6.eq) goto loc_82439BCC;
loc_82439A34:
	// lwz r11,532(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 532);
	// lwz r11,284(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82439b20
	if (!cr6.eq) goto loc_82439B20;
	// lwz r11,532(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lwz r11,284(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82439b20
	if (!cr6.eq) goto loc_82439B20;
	// lwz r3,548(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 548);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82439A70;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82439a88
	if (cr6.eq) goto loc_82439A88;
	// lwz r11,616(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 616);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,616(r28)
	REX_STORE_U32(r28.u32 + 616, ctx.r11.u32);
loc_82439A88:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r3,r11,624
	ctx.r3.s64 = ctx.r11.s64 + 624;
	// bl 0x823c2b58
	ctx.lr = 0x82439A94;
	sub_823C2B58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82439b20
	if (cr6.eq) goto loc_82439B20;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r3,r11,624
	ctx.r3.s64 = ctx.r11.s64 + 624;
	// bl 0x823c2b58
	ctx.lr = 0x82439AA8;
	sub_823C2B58(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x82439b20
	if (cr6.eq) goto loc_82439B20;
	// addi r31,r28,624
	r31.s64 = r28.s64 + 624;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c2b58
	ctx.lr = 0x82439AC0;
	sub_823C2B58(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82439b20
	if (cr6.eq) goto loc_82439B20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c2b58
	ctx.lr = 0x82439AD0;
	sub_823C2B58(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82439b20
	if (!cr6.eq) goto loc_82439B20;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c2cf0
	ctx.lr = 0x82439AE8;
	sub_823C2CF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82439b20
	if (!cr6.gt) goto loc_82439B20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c2b58
	ctx.lr = 0x82439AFC;
	sub_823C2B58(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// beq cr6,0x82439b20
	if (cr6.eq) goto loc_82439B20;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c35f8
	ctx.lr = 0x82439B20;
	sub_823C35F8(ctx, base);
loc_82439B20:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82439B38;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,724
	cr6.compare<int32_t>(ctx.r3.s32, 724, xer);
	// bne cr6,0x82439bc0
	if (!cr6.eq) goto loc_82439BC0;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x82439B4C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82439bbc
	if (cr6.eq) goto loc_82439BBC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,24(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r6,30
	ctx.r6.s64 = 30;
	// lwz r4,2656(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 2656);
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r31,4
	r31.s64 = 4;
	// lfs f4,-6944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6944);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r6,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// li r8,40
	ctx.r8.s64 = 40;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// stb r9,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r9.u8);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lfs f3,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f3.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// stb r11,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r11.u8);
	// bl 0x82346e50
	ctx.lr = 0x82439BB0;
	sub_82346E50(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8298eb18
	return;
loc_82439BBC:
	// li r31,0
	r31.s64 = 0;
loc_82439BC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8298eb18
	return;
loc_82439BCC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82126b90
	ctx.lr = 0x82439BE0;
	sub_82126B90(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82439bf4
	if (!cr6.eq) goto loc_82439BF4;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_82439BF4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_824477E0) {
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
	ctx.lr = 0x824477E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8244780c
	if (!cr6.eq) goto loc_8244780C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
loc_8244780C:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447824;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1020
	cr6.compare<int32_t>(ctx.r3.s32, 1020, xer);
	// bgt cr6,0x824478ac
	if (cr6.gt) goto loc_824478AC;
	// beq cr6,0x824478cc
	if (cr6.eq) goto loc_824478CC;
	// cmpwi cr6,r3,202
	cr6.compare<int32_t>(ctx.r3.s32, 202, xer);
	// beq cr6,0x824478cc
	if (cr6.eq) goto loc_824478CC;
	// cmpwi cr6,r3,285
	cr6.compare<int32_t>(ctx.r3.s32, 285, xer);
	// beq cr6,0x82447864
	if (cr6.eq) goto loc_82447864;
	// cmpwi cr6,r3,907
	cr6.compare<int32_t>(ctx.r3.s32, 907, xer);
	// bne cr6,0x82447960
	if (!cr6.eq) goto loc_82447960;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1020
	ctx.r4.s64 = 1020;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824458e8
	ctx.lr = 0x82447858;
	sub_824458E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
loc_82447864:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82447960
	if (cr6.eq) goto loc_82447960;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447888;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,903
	cr6.compare<int32_t>(ctx.r3.s32, 903, xer);
	// bne cr6,0x82447960
	if (!cr6.eq) goto loc_82447960;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1020
	ctx.r4.s64 = 1020;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824458e8
	ctx.lr = 0x824478A0;
	sub_824458E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
loc_824478AC:
	// cmpwi cr6,r3,1038
	cr6.compare<int32_t>(ctx.r3.s32, 1038, xer);
	// beq cr6,0x824478cc
	if (cr6.eq) goto loc_824478CC;
	// cmpwi cr6,r3,1302
	cr6.compare<int32_t>(ctx.r3.s32, 1302, xer);
	// bne cr6,0x82447960
	if (!cr6.eq) goto loc_82447960;
	// li r30,0
	r30.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
loc_824478CC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82442828
	ctx.lr = 0x824478D8;
	sub_82442828(ctx, base);
	// lis r30,-32017
	r30.s64 = -2098266112;
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x824478E4;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82447920
	if (cr6.eq) goto loc_82447920;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// ori r5,r5,50000
	ctx.r5.u64 = ctx.r5.u64 | 50000;
	// lfs f3,-10000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -10000);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f1,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82163cf0
	ctx.lr = 0x82447918;
	sub_82163CF0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82447924
	goto loc_82447924;
loc_82447920:
	// li r31,0
	r31.s64 = 0;
loc_82447924:
	// lwz r3,-21944(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x8244792C;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82447958
	if (cr6.eq) goto loc_82447958;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f1,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82358b60
	ctx.lr = 0x8244794C;
	sub_82358B60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
loc_82447958:
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82447960:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_824523A8) {
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
	ctx.lr = 0x824523B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,5024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5024);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82452410
	if (!cr6.gt) goto loc_82452410;
	// addi r30,r31,144
	r30.s64 = r31.s64 + 144;
	// addi r28,r31,5040
	r28.s64 = r31.s64 + 5040;
loc_824523DC:
	// lbzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824523fc
	if (cr6.eq) goto loc_824523FC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828cf0d0
	ctx.lr = 0x824523FC;
	sub_828CF0D0(ctx, base);
loc_824523FC:
	// lwz r11,5024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5024);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,176
	r30.s64 = r30.s64 + 176;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x824523dc
	if (cr6.lt) goto loc_824523DC;
loc_82452410:
	// lwz r11,5028(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5028);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8245245c
	if (!cr6.gt) goto loc_8245245C;
	// addi r30,r31,2080
	r30.s64 = r31.s64 + 2080;
	// addi r28,r31,5051
	r28.s64 = r31.s64 + 5051;
loc_82452428:
	// lbzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82452448
	if (cr6.eq) goto loc_82452448;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828cf0d0
	ctx.lr = 0x82452448;
	sub_828CF0D0(ctx, base);
loc_82452448:
	// lwz r11,5028(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5028);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,192
	r30.s64 = r30.s64 + 192;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x82452428
	if (cr6.lt) goto loc_82452428;
loc_8245245C:
	// lwz r11,5032(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5032);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x824524a8
	if (!cr6.gt) goto loc_824524A8;
	// addi r30,r31,2272
	r30.s64 = r31.s64 + 2272;
	// addi r28,r31,5052
	r28.s64 = r31.s64 + 5052;
loc_82452474:
	// lbzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82452494
	if (cr6.eq) goto loc_82452494;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828cf0d0
	ctx.lr = 0x82452494;
	sub_828CF0D0(ctx, base);
loc_82452494:
	// lwz r11,5032(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5032);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,224
	r30.s64 = r30.s64 + 224;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x82452474
	if (cr6.lt) goto loc_82452474;
loc_824524A8:
	// lwz r11,5036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5036);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x824524f4
	if (!cr6.gt) goto loc_824524F4;
	// addi r30,r31,4736
	r30.s64 = r31.s64 + 4736;
	// addi r28,r31,5063
	r28.s64 = r31.s64 + 5063;
loc_824524C0:
	// lbzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824524e0
	if (cr6.eq) goto loc_824524E0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828cf0d0
	ctx.lr = 0x824524E0;
	sub_828CF0D0(ctx, base);
loc_824524E0:
	// lwz r11,5036(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5036);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,288
	r30.s64 = r30.s64 + 288;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x824524c0
	if (cr6.lt) goto loc_824524C0;
loc_824524F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8298eb0c
	return;
}

DEFINE_REX_FUNC(sub_82462A40) {
	REX_FUNC_PROLOGUE();
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
	ctx.lr = 0x82462A48;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi cr6,r4,724
	cr6.compare<int32_t>(ctx.r4.s32, 724, xer);
	// beq cr6,0x82462a80
	if (cr6.eq) goto loc_82462A80;
	// cmpwi cr6,r4,734
	cr6.compare<int32_t>(ctx.r4.s32, 734, xer);
	// bne cr6,0x82462e74
	if (!cr6.eq) goto loc_82462E74;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82462858
	ctx.lr = 0x82462A78;
	sub_82462858(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eb18
	return;
loc_82462A80:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,2656(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 2656);
	// bl 0x8237b4a8
	ctx.lr = 0x82462A8C;
	sub_8237B4A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82462abc
	if (!cr6.eq) goto loc_82462ABC;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x82462AA4;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82462e70
	if (cr6.eq) goto loc_82462E70;
	// lwz r4,2656(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 2656);
	// bl 0x82346c30
	ctx.lr = 0x82462AB4;
	sub_82346C30(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eb18
	return;
loc_82462ABC:
	// lwz r11,2656(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 2656);
	// lwz r10,4836(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4836);
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x82462af0
	if (!cr6.eq) goto loc_82462AF0;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x82462AD8;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82462e70
	if (cr6.eq) goto loc_82462E70;
	// lwz r4,24(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 24);
	// bl 0x82457160
	ctx.lr = 0x82462AE8;
	sub_82457160(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eb18
	return;
loc_82462AF0:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r9,568(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 568);
	// rlwinm r9,r9,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82462c44
	if (!cr6.eq) goto loc_82462C44;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x82462c44
	if (cr6.eq) goto loc_82462C44;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r30,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r30.u8);
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// stb r30,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r30.u8);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stb r30,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r30.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f4,8904(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8904);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,-6544(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6544);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,3068(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3068);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,-32017
	ctx.r10.s64 = -2098266112;
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// addi r31,r10,-20792
	r31.s64 = ctx.r10.s64 + -20792;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82355128
	ctx.lr = 0x82462B64;
	sub_82355128(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x82462bfc
	if (cr6.eq) goto loc_82462BFC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r8,r31,2052
	ctx.r8.s64 = r31.s64 + 2052;
	// addi r11,r11,-27680
	ctx.r11.s64 = ctx.r11.s64 + -27680;
	// rlwinm r10,r10,21,11,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1FFFE0;
	// li r31,20
	r31.s64 = 20;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvlx v13,r11,r31
	temp.u32 = ctx.r11.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vupkhsh v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16))));
	// vcfsx v13,v13,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmulfp128 v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x821250b0
	ctx.lr = 0x82462BBC;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82462e70
	if (cr6.eq) goto loc_82462E70;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r4,2656(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 2656);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,23
	ctx.r6.s64 = 23;
	// stb r9,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r9.u8);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lfs f1,8624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8624);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82346f80
	ctx.lr = 0x82462BF4;
	sub_82346F80(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eb18
	return;
loc_82462BFC:
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x82462C08;
	sub_821250B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82462e70
	if (cr6.eq) goto loc_82462E70;
	// bl 0x823313f8
	ctx.lr = 0x82462C18;
	sub_823313F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r11,r11,13604
	ctx.r11.s64 = ctx.r11.s64 + 13604;
	// stb r30,25(r31)
	REX_STORE_U8(r31.u32 + 25, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,26(r31)
	REX_STORE_U8(r31.u32 + 26, r30.u8);
	// stb r10,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r10.u8);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eb18
	return;
loc_82462C44:
	// lwz r11,572(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 572);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82462cc8
	if (cr6.eq) goto loc_82462CC8;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x82462C60;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82462e70
	if (cr6.eq) goto loc_82462E70;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,24(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,2656(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 2656);
	// li r31,20
	r31.s64 = 20;
	// stb r30,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r30.u8);
	// li r9,30
	ctx.r9.s64 = 30;
	// li r29,4
	r29.s64 = 4;
	// lfs f4,-6944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6944);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,40
	ctx.r8.s64 = 40;
	// stb r10,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r10.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// lfs f3,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f3.f64 = double(temp.f32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82346e50
	ctx.lr = 0x82462CC0;
	sub_82346E50(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eb18
	return;
loc_82462CC8:
	// lwz r11,532(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 532);
	// lwz r11,284(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(ctx.r11.s32, 2, xer);
	// bne cr6,0x82462d68
	if (!cr6.eq) goto loc_82462D68;
	// lbz r11,2448(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 2448);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// beq cr6,0x82462cf4
	if (cr6.eq) goto loc_82462CF4;
	// bl 0x8227f738
	ctx.lr = 0x82462CE8;
	sub_8227F738(ctx, base);
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x82462d68
	if (!cr6.gt) goto loc_82462D68;
loc_82462CF4:
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x82462D00;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82462e70
	if (cr6.eq) goto loc_82462E70;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,24(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,2656(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 2656);
	// li r31,20
	r31.s64 = 20;
	// stb r30,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r30.u8);
	// li r9,30
	ctx.r9.s64 = 30;
	// li r29,4
	r29.s64 = 4;
	// lfs f4,-6944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6944);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,40
	ctx.r8.s64 = 40;
	// stb r10,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r10.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// lfs f3,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f3.f64 = double(temp.f32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82346e50
	ctx.lr = 0x82462D60;
	sub_82346E50(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eb18
	return;
loc_82462D68:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r10,2656(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2656);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82462dfc
	if (cr6.eq) goto loc_82462DFC;
	// lwz r11,568(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 568);
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82462dfc
	if (cr6.eq) goto loc_82462DFC;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x82462D94;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82462e70
	if (cr6.eq) goto loc_82462E70;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,24(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,2656(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 2656);
	// li r31,20
	r31.s64 = 20;
	// stb r30,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r30.u8);
	// li r9,30
	ctx.r9.s64 = 30;
	// li r29,4
	r29.s64 = 4;
	// lfs f4,-6944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6944);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,40
	ctx.r8.s64 = 40;
	// stb r10,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r10.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// lfs f3,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f3.f64 = double(temp.f32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82346e50
	ctx.lr = 0x82462DF4;
	sub_82346E50(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eb18
	return;
loc_82462DFC:
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x82462E08;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82462e70
	if (cr6.eq) goto loc_82462E70;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,24(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,2656(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 2656);
	// li r31,20
	r31.s64 = 20;
	// stb r30,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, r30.u8);
	// li r9,30
	ctx.r9.s64 = 30;
	// li r29,4
	r29.s64 = 4;
	// lfs f4,-6944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6944);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,40
	ctx.r8.s64 = 40;
	// stb r10,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, ctx.r10.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// lfs f3,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f3.f64 = double(temp.f32);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82346e50
	ctx.lr = 0x82462E68;
	sub_82346E50(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eb18
	return;
loc_82462E70:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82462E74:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_82489118) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac0
	ctx.lr = 0x82489120;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// addi r30,r31,180
	r30.s64 = r31.s64 + 180;
	// lwz r3,180(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 180);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82489154
	if (cr6.eq) goto loc_82489154;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823e5680
	ctx.lr = 0x82489150;
	sub_823E5680(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
loc_82489154:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8248917c
	if (!cr6.eq) goto loc_8248917C;
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// lwz r11,-30064(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30064);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,172(r31)
	REX_STORE_U32(r31.u32 + 172, r29.u32);
	// stw r29,176(r31)
	REX_STORE_U32(r31.u32 + 176, r29.u32);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8298eb10
	return;
loc_8248917C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r27,184(r31)
	REX_STORE_U32(r31.u32 + 184, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,172(r31)
	REX_STORE_U32(r31.u32 + 172, r29.u32);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// bl 0x823e5630
	ctx.lr = 0x82489194;
	sub_823E5630(ctx, base);
	// stw r26,176(r31)
	REX_STORE_U32(r31.u32 + 176, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8298eb10
	return;
}

DEFINE_REX_FUNC(sub_8248E888) {
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
	ctx.lr = 0x8248E890;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823313b0
	ctx.lr = 0x8248E8A4;
	sub_823313B0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// addi r11,r11,-4092
	ctx.r11.s64 = ctx.r11.s64 + -4092;
	// addi r4,r31,28
	ctx.r4.s64 = r31.s64 + 28;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stb r10,20(r31)
	REX_STORE_U8(r31.u32 + 20, ctx.r10.u8);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// beq cr6,0x8248e8d8
	if (cr6.eq) goto loc_8248E8D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e5630
	ctx.lr = 0x8248E8D8;
	sub_823E5630(ctx, base);
loc_8248E8D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_8248FF68) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lfs f3,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f2,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,10176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10176);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82416228
	ctx.lr = 0x8248FFAC;
	sub_82416228(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// addi r11,r11,-3108
	ctx.r11.s64 = ctx.r11.s64 + -3108;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8248ffd0
	if (cr6.eq) goto loc_8248FFD0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e5630
	ctx.lr = 0x8248FFD0;
	sub_823E5630(ctx, base);
loc_8248FFD0:
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

DEFINE_REX_FUNC(sub_824970C8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-4004
	ctx.r11.s64 = ctx.r11.s64 + -4004;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82497104
	if (cr6.eq) goto loc_82497104;
	// bl 0x823e5680
	ctx.lr = 0x82497104;
	sub_823E5680(ctx, base);
loc_82497104:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823313e8
	ctx.lr = 0x8249710C;
	sub_823313E8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82497170
	if (cr6.eq) goto loc_82497170;
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r11,-21944(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
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
	// bge cr6,0x82497164
	if (!cr6.lt) goto loc_82497164;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82497164:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82497170:
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

DEFINE_REX_FUNC(sub_8249DDC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,22000(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 22000);
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-2668
	ctx.r11.s64 = ctx.r11.s64 + -2668;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8249F148) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,-2828(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -2828);
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// lwz r3,-2612(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -2612);
	// b 0x8285fb48
	sub_8285FB48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824A0298) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	ctx.lr = 0x824A02A0;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// lwz r11,20944(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20944);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x824a0628
	if (!cr6.eq) goto loc_824A0628;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-31982
	r28.s64 = -2095972352;
	// lis r31,-32014
	r31.s64 = -2098069504;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f30,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,22000(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 22000);
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r5,-2632(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + -2632);
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f31,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	f31.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A0310;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249ea40
	ctx.lr = 0x824A031C;
	sub_8249EA40(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r5,-2632(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + -2632);
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x8249fd18
	ctx.lr = 0x824A033C;
	sub_8249FD18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82852d58
	ctx.lr = 0x824A0348;
	sub_82852D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82852d58
	ctx.lr = 0x824A0354;
	sub_82852D58(ctx, base);
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// lis r31,-32014
	r31.s64 = -2098069504;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,-2744(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -2744);
	// lwz r3,-2608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -2608);
	// bl 0x82857880
	ctx.lr = 0x824A0370;
	sub_82857880(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,-2608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -2608);
	// bl 0x828577e0
	ctx.lr = 0x824A037C;
	sub_828577E0(ctx, base);
	// lwz r29,0(r13)
	r29.u64 = REX_LOAD_U32(ctx.r13.u32 + 0);
	// li r30,1708
	r30.s64 = 1708;
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// stwx r11,r30,r29
	REX_STORE_U32(r30.u32 + r29.u32, ctx.r11.u32);
	// bne cr6,0x824a03a0
	if (!cr6.eq) goto loc_824A03A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82865e78
	ctx.lr = 0x824A03A0;
	sub_82865E78(ctx, base);
loc_824A03A0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmr f9,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = f31.f64;
	// li r27,-1
	r27.s64 = -1;
	// fmr f8,f31
	ctx.f8.f64 = f31.f64;
	// fmr f7,f30
	ctx.f7.f64 = f30.f64;
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
	// fmr f5,f30
	ctx.f5.f64 = f30.f64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82865e98
	ctx.lr = 0x824A03D8;
	sub_82865E98(ctx, base);
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stwx r11,r30,r29
	REX_STORE_U32(r30.u32 + r29.u32, ctx.r11.u32);
	// bne 0x824a03ec
	if (!cr0.eq) goto loc_824A03EC;
	// bl 0x82865e90
	ctx.lr = 0x824A03EC;
	sub_82865E90(ctx, base);
loc_824A03EC:
	// lwz r3,-2608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -2608);
	// bl 0x82857818
	ctx.lr = 0x824A03F4;
	sub_82857818(ctx, base);
	// lwz r3,-2608(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -2608);
	// bl 0x828573b8
	ctx.lr = 0x824A03FC;
	sub_828573B8(ctx, base);
	// lis r31,-31982
	r31.s64 = -2095972352;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// bl 0x829c95d0
	ctx.lr = 0x824A040C;
	sub_829C95D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82852d58
	ctx.lr = 0x824A0418;
	sub_82852D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,364
	ctx.r3.s64 = 364;
	// bl 0x8284ff18
	ctx.lr = 0x824A0424;
	sub_8284FF18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,360
	ctx.r3.s64 = 360;
	// bl 0x8284ff18
	ctx.lr = 0x824A0430;
	sub_8284FF18(ctx, base);
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// li r3,308
	ctx.r3.s64 = 308;
	// lwz r4,-2544(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -2544);
	// bl 0x8284ff18
	ctx.lr = 0x824A0440;
	sub_8284FF18(ctx, base);
	// bl 0x82850de8
	ctx.lr = 0x824A0444;
	sub_82850DE8(ctx, base);
	// lis r11,-256
	ctx.r11.s64 = -16777216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,22000(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 22000);
	// stfs f31,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stfs f31,180(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,200(r1)
	REX_STORE_U8(ctx.r1.u32 + 200, ctx.r10.u8);
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stb r11,196(r1)
	REX_STORE_U8(ctx.r1.u32 + 196, ctx.r11.u8);
	// stb r11,197(r1)
	REX_STORE_U8(ctx.r1.u32 + 197, ctx.r11.u8);
	// stb r11,198(r1)
	REX_STORE_U8(ctx.r1.u32 + 198, ctx.r11.u8);
	// stb r11,199(r1)
	REX_STORE_U8(ctx.r1.u32 + 199, ctx.r11.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A0498;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// lwz r3,22000(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 22000);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,-2628(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -2628);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A04C8;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249ea40
	ctx.lr = 0x824A04D4;
	sub_8249EA40(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// bl 0x829ca1a0
	ctx.lr = 0x824A04E0;
	sub_829CA1A0(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// lwz r3,18992(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 18992);
	// bl 0x8284e428
	ctx.lr = 0x824A04EC;
	sub_8284E428(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824a0500
	if (!cr6.eq) goto loc_824A0500;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
loc_824A0500:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// bl 0x829ca978
	ctx.lr = 0x824A050C;
	sub_829CA978(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// bl 0x829c9538
	ctx.lr = 0x824A0518;
	sub_829C9538(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// bl 0x829c9568
	ctx.lr = 0x824A0524;
	sub_829C9568(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82852d58
	ctx.lr = 0x824A0530;
	sub_82852D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82852d58
	ctx.lr = 0x824A053C;
	sub_82852D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82852d58
	ctx.lr = 0x824A0548;
	sub_82852D58(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// bl 0x829c95d0
	ctx.lr = 0x824A0554;
	sub_829C95D0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// bl 0x829c9600
	ctx.lr = 0x824A0560;
	sub_829C9600(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// bl 0x829c9630
	ctx.lr = 0x824A056C;
	sub_829C9630(ctx, base);
	// li r4,255
	ctx.r4.s64 = 255;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// bl 0x829c9660
	ctx.lr = 0x824A0578;
	sub_829C9660(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x8249f178
	ctx.lr = 0x824A0584;
	sub_8249F178(ctx, base);
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// stwx r11,r30,r29
	REX_STORE_U32(r30.u32 + r29.u32, ctx.r11.u32);
	// bne cr6,0x824a05a0
	if (!cr6.eq) goto loc_824A05A0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82865e78
	ctx.lr = 0x824A05A0;
	sub_82865E78(ctx, base);
loc_824A05A0:
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// fmr f9,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = f31.f64;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// fmr f8,f31
	ctx.f8.f64 = f31.f64;
	// fmr f7,f30
	ctx.f7.f64 = f30.f64;
	// fmr f6,f30
	ctx.f6.f64 = f30.f64;
	// fmr f5,f30
	ctx.f5.f64 = f30.f64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82865e98
	ctx.lr = 0x824A05D4;
	sub_82865E98(ctx, base);
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stwx r11,r30,r29
	REX_STORE_U32(r30.u32 + r29.u32, ctx.r11.u32);
	// bne 0x824a05e8
	if (!cr0.eq) goto loc_824A05E8;
	// bl 0x82865e90
	ctx.lr = 0x824A05E8;
	sub_82865E90(ctx, base);
loc_824A05E8:
	// bl 0x8249f3e8
	ctx.lr = 0x824A05EC;
	sub_8249F3E8(ctx, base);
	// bl 0x8249ec78
	ctx.lr = 0x824A05F0;
	sub_8249EC78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// bl 0x829c9600
	ctx.lr = 0x824A05FC;
	sub_829C9600(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// bl 0x829d0080
	ctx.lr = 0x824A0608;
	sub_829D0080(ctx, base);
	// lwz r3,22000(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 22000);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824A0628;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
loc_824A0628:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8298eb14
	return;
}

DEFINE_REX_FUNC(sub_824B65C0) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac0
	ctx.lr = 0x824B65C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r27,24
	r27.s64 = 24;
	// addi r28,r26,16
	r28.s64 = r26.s64 + 16;
	// li r29,0
	r29.s64 = 0;
loc_824B65DC:
	// mr r31,r28
	r31.u64 = r28.u64;
	// li r30,8
	r30.s64 = 8;
loc_824B65E4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8218be78
	ctx.lr = 0x824B65EC;
	sub_8218BE78(ctx, base);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// sth r29,4(r31)
	REX_STORE_U16(r31.u32 + 4, r29.u16);
	// sth r29,6(r31)
	REX_STORE_U16(r31.u32 + 6, r29.u16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne cr6,0x824b65e4
	if (!cr6.eq) goto loc_824B65E4;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addi r28,r28,84
	r28.s64 = r28.s64 + 84;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x824b65dc
	if (!cr6.eq) goto loc_824B65DC;
	// lwz r3,2016(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 2016);
	// bl 0x8218be78
	ctx.lr = 0x824B6620;
	sub_8218BE78(ctx, base);
	// stw r29,2016(r26)
	REX_STORE_U32(r26.u32 + 2016, r29.u32);
	// sth r29,2020(r26)
	REX_STORE_U16(r26.u32 + 2020, r29.u16);
	// sth r29,2022(r26)
	REX_STORE_U16(r26.u32 + 2022, r29.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8298eb10
	return;
}

DEFINE_REX_FUNC(sub_824BB9E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x8231bb80
	ctx.lr = 0x824BB9F8;
	sub_8231BB80(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r31,100
	ctx.r11.s64 = r31.s64 + 100;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r8,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r8.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_824BBA10:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824bba10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824BBA10;
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

DEFINE_REX_FUNC(sub_824C1150) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac0
	ctx.lr = 0x824C1158;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,112(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824c1210
	if (cr6.eq) goto loc_824C1210;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82318f10
	ctx.lr = 0x824C1174;
	sub_82318F10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,112(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 112);
	// bl 0x824b95f0
	ctx.lr = 0x824C1180;
	sub_824B95F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,112(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 112);
	// bl 0x824b95c8
	ctx.lr = 0x824C118C;
	sub_824B95C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x824c1210
	if (!cr6.gt) goto loc_824C1210;
	// lis r11,-32012
	ctx.r11.s64 = -2097938432;
	// lis r26,-32083
	r26.s64 = -2102591488;
	// addi r27,r11,5752
	r27.s64 = ctx.r11.s64 + 5752;
loc_824C11AC:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,96(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 96);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + r27.u32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8219b640
	ctx.lr = 0x824C11CC;
	sub_8219B640(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824c1200
	if (cr6.eq) goto loc_824C1200;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,-17100(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + -17100);
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// srawi r3,r11,12
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 12;
	// bl 0x821a86b8
	ctx.lr = 0x824C11F4;
	sub_821A86B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824c121c
	if (cr6.eq) goto loc_824C121C;
loc_824C1200:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x824c11ac
	if (cr6.lt) goto loc_824C11AC;
loc_824C1210:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8298eb10
	return;
loc_824C121C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8298eb10
	return;
}

DEFINE_REX_FUNC(sub_824CC378) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x824cb4b8
	sub_824CB4B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824CDDF0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824cde34
	if (cr6.eq) goto loc_824CDE34;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824cde34
	if (!cr6.eq) goto loc_824CDE34;
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824cde34
	if (!cr6.eq) goto loc_824CDE34;
	// li r6,9
	ctx.r6.s64 = 9;
loc_824CDE34:
	// lbz r11,529(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 529);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824cde84
	if (cr6.eq) goto loc_824CDE84;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lis r11,-32056
	ctx.r11.s64 = -2100822016;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lwz r11,-7564(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7564);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,8256(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8256);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x824cde84
	if (!cr6.gt) goto loc_824CDE84;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
loc_824CDE84:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824cb4b8
	ctx.lr = 0x824CDE90;
	sub_824CB4B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824cdec8
	if (cr6.eq) goto loc_824CDEC8;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// rlwinm r10,r11,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824cdec8
	if (cr6.eq) goto loc_824CDEC8;
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824cdec8
	if (cr6.eq) goto loc_824CDEC8;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r10,127
	ctx.r10.s64 = 127;
	// rlwimi r11,r10,9,8,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFF00) | (ctx.r11.u64 & 0xFFFFFFFFFF0000FF);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_824CDEC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D59E8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-80
	ctx.r3.s64 = ctx.r3.s64 + -80;
	// b 0x824d7028
	sub_824D7028(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D6080) {
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
	ctx.lr = 0x824D6088;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lbz r11,30648(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 30648);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824d611c
	if (cr6.eq) goto loc_824D611C;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824d611c
	if (!cr6.eq) goto loc_824D611C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82317268
	ctx.lr = 0x824D60D4;
	sub_82317268(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(ctx.r11.s32, 3, xer);
	// beq cr6,0x824d611c
	if (cr6.eq) goto loc_824D611C;
	// addi r31,r26,672
	r31.s64 = r26.s64 + 672;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x824d611c
	if (cr6.eq) goto loc_824D611C;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d46f0
	ctx.lr = 0x824D610C;
	sub_824D46F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
loc_824D611C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f1,7956(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 7956);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824d5fe0
	ctx.lr = 0x824D6130;
	sub_824D5FE0(ctx, base);
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r1,228
	ctx.r11.s64 = ctx.r1.s64 + 228;
	// lvx128 v0,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,228(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lvx128 v13,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vsubfp v0,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvlx v12,0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// vmulfp128 v13,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82435030
	ctx.lr = 0x824D6184;
	sub_82435030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8298eb0c
	return;
}

DEFINE_REX_FUNC(sub_824DF530) {
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
	ctx.lr = 0x824DF538;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lhz r11,14(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 14);
	// rlwinm r11,r11,21,11,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1FFFFF;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824df568
	if (cr6.eq) goto loc_824DF568;
	// lis r11,-32011
	ctx.r11.s64 = -2097872896;
	// lis r10,10922
	ctx.r10.s64 = 715784192;
	// ori r9,r10,43691
	ctx.r9.u64 = ctx.r10.u64 | 43691;
	// lwz r11,-6164(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6164);
	// b 0x824df668
	goto loc_824DF668;
loc_824DF568:
	// lis r11,10922
	ctx.r11.s64 = 715784192;
	// lbz r3,23(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 23);
	// lis r28,-32011
	r28.s64 = -2097872896;
	// ori r31,r11,43691
	r31.u64 = ctx.r11.u64 | 43691;
	// lis r11,-32048
	ctx.r11.s64 = -2100297728;
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// addi r29,r11,16992
	r29.s64 = ctx.r11.s64 + 16992;
	// bne cr6,0x824df5b4
	if (!cr6.eq) goto loc_824DF5B4;
	// lwz r11,-6164(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -6164);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// mulhw r11,r11,r31
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(r31.s32)) >> 32;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x824c14e0
	ctx.lr = 0x824DF5AC;
	sub_824C14E0(ctx, base);
	// cmpwi cr6,r3,255
	cr6.compare<int32_t>(ctx.r3.s32, 255, xer);
	// beq cr6,0x824df660
	if (cr6.eq) goto loc_824DF660;
loc_824DF5B4:
	// lwz r11,-6164(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -6164);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r29,84
	ctx.r7.s64 = r29.s64 + 84;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mulhw r11,r11,r31
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(r31.s32)) >> 32;
	// srawi r10,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + r29.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r6,r9,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824df634
	if (cr6.eq) goto loc_824DF634;
	// addi r30,r11,80
	r30.s64 = ctx.r11.s64 + 80;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824DF608;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,14796
	ctx.r4.s64 = ctx.r11.s64 + 14796;
	// lis r11,-32011
	ctx.r11.s64 = -2097872896;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r31,r11,-6160
	r31.s64 = ctx.r11.s64 + -6160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8298f1f0
	ctx.lr = 0x824DF628;
	sub_8298F1F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_824DF634:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r7,r11,80
	ctx.r7.s64 = ctx.r11.s64 + 80;
	// addi r4,r10,14788
	ctx.r4.s64 = ctx.r10.s64 + 14788;
	// lis r10,-32011
	ctx.r10.s64 = -2097872896;
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// addi r31,r10,-6160
	r31.s64 = ctx.r10.s64 + -6160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8298f1f0
	ctx.lr = 0x824DF654;
	sub_8298F1F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
loc_824DF660:
	// lwz r11,-6164(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -6164);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_824DF668:
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mulhw r11,r11,r9
	ctx.r11.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32)) >> 32;
	// addi r4,r10,14776
	ctx.r4.s64 = ctx.r10.s64 + 14776;
	// lis r10,-32011
	ctx.r10.s64 = -2097872896;
	// srawi r11,r11,2
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r31,r10,-6160
	r31.s64 = ctx.r10.s64 + -6160;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8298f1f0
	ctx.lr = 0x824DF698;
	sub_8298F1F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_824E7F20) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab0
	ctx.lr = 0x824E7F28;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r30,1
	r30.s64 = 1;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e7f78
	if (cr6.eq) goto loc_824E7F78;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x824e7f68
	if (cr6.eq) goto loc_824E7F68;
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// bne cr6,0x824e7f6c
	if (!cr6.eq) goto loc_824E7F6C;
loc_824E7F68:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_824E7F6C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824e8708
	if (!cr6.eq) goto loc_824E8708;
loc_824E7F78:
	// lbz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824e7fac
	if (!cr6.eq) goto loc_824E7FAC;
	// li r11,32
	ctx.r11.s64 = 32;
	// stb r30,60(r31)
	REX_STORE_U8(r31.u32 + 60, r30.u8);
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8298eb00
	return;
loc_824E7FAC:
	// lbz r11,69(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 69);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e7fd8
	if (cr6.eq) goto loc_824E7FD8;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e7fc8
	if (cr6.eq) goto loc_824E7FC8;
	// stb r30,112(r11)
	REX_STORE_U8(ctx.r11.u32 + 112, r30.u8);
loc_824E7FC8:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e7fd8
	if (cr6.eq) goto loc_824E7FD8;
	// stb r30,112(r11)
	REX_STORE_U8(ctx.r11.u32 + 112, r30.u8);
loc_824E7FD8:
	// addi r24,r31,32
	r24.s64 = r31.s64 + 32;
	// lvx128 v13,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r10,-32011
	ctx.r10.s64 = -2097872896;
	// lvx128 v0,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lbz r11,-5795(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + -5795);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x824e8028
	if (!cr6.eq) goto loc_824E8028;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f0,-6548(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6548);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x824e8708
	if (cr6.lt) goto loc_824E8708;
loc_824E8028:
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// stvx128 v0,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,61(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 61);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824e8708
	if (!cr6.eq) goto loc_824E8708;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r22,r25
	r22.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e805c
	if (cr6.eq) goto loc_824E805C;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r22,r11,28,31,31
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
loc_824E805C:
	// lbz r11,-5795(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + -5795);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824e80bc
	if (!cr6.eq) goto loc_824E80BC;
	// lbz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824e80bc
	if (!cr6.eq) goto loc_824E80BC;
	// lbz r11,71(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 71);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824e80bc
	if (!cr6.eq) goto loc_824E80BC;
	// lvx128 v0,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f0,10456(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10456);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x824e80d8
	if (!cr6.gt) goto loc_824E80D8;
loc_824E80BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e77e8
	ctx.lr = 0x824E80CC;
	sub_824E77E8(ctx, base);
	// lvx128 v0,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r25,71(r31)
	REX_STORE_U8(r31.u32 + 71, r25.u8);
	// stvx128 v0,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824E80D8:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lis r26,-32011
	r26.s64 = -2097872896;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r27,r25
	r27.u64 = r25.u64;
	// stw r11,-5824(r26)
	REX_STORE_U32(r26.u32 + -5824, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvx128 v13,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsubfp v11,v11,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// lfs f0,5180(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r11,-720
	ctx.r11.s64 = ctx.r11.s64 + -720;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// vor v10,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vrefp v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_load_ps(ctx.v0.f32)));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// vnmsubfp v12,v0,v10,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v12.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// fmadds f0,f0,f0,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// vmaddfp v0,v0,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// fmadds f0,f13,f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// vmaddfp v0,v11,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// fsqrts f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// lfs f0,2980(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8624(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8624);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// beq cr6,0x824e8198
	if (cr6.eq) goto loc_824E8198;
	// bl 0x8227f600
	ctx.lr = 0x824E8188;
	sub_8227F600(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x824e8198
	if (!cr6.eq) goto loc_824E8198;
	// mr r27,r30
	r27.u64 = r30.u64;
loc_824E8198:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r23,-1
	r23.s64 = -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824e8470
	if (cr6.eq) goto loc_824E8470;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x824e8470
	if (!cr6.gt) goto loc_824E8470;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824E81C4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824E81E0;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f31,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// bne cr6,0x824e822c
	if (!cr6.eq) goto loc_824E822C;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822eed10
	ctx.lr = 0x824E820C;
	sub_822EED10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824e822c
	if (!cr6.eq) goto loc_824E822C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823de160
	ctx.lr = 0x824E8224;
	sub_823DE160(ctx, base);
	// stw r25,56(r31)
	REX_STORE_U32(r31.u32 + 56, r25.u32);
	// b 0x824e84c0
	goto loc_824E84C0;
loc_824E822C:
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823d9768
	ctx.lr = 0x824E823C;
	sub_823D9768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824e84c4
	if (cr6.eq) goto loc_824E84C4;
loc_824E8244:
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823da610
	ctx.lr = 0x824E8258;
	sub_823DA610(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x824ba8c8
	ctx.lr = 0x824E826C;
	sub_824BA8C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e83a8
	if (cr6.eq) goto loc_824E83A8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stb r25,70(r31)
	REX_STORE_U8(r31.u32 + 70, r25.u8);
	// bl 0x823d9c00
	ctx.lr = 0x824E828C;
	sub_823D9C00(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x824e8460
	if (!cr6.eq) goto loc_824E8460;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x823d9870
	ctx.lr = 0x824E82A8;
	sub_823D9870(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e8450
	if (cr6.eq) goto loc_824E8450;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x823db910
	ctx.lr = 0x824E82C4;
	sub_823DB910(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x824e8320
	if (!cr6.eq) goto loc_824E8320;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,25080
	ctx.r4.s64 = ctx.r11.s64 + 25080;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82284f28
	ctx.lr = 0x824E8304;
	sub_82284F28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823db910
	ctx.lr = 0x824E8314;
	sub_823DB910(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824e83c4
	if (cr6.eq) goto loc_824E83C4;
loc_824E8320:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// bl 0x825ee268
	ctx.lr = 0x824E833C;
	sub_825EE268(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e8354
	if (cr6.eq) goto loc_824E8354;
	// lbz r10,115(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 115);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824e83a0
	if (!cr6.eq) goto loc_824E83A0;
loc_824E8354:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,25080
	ctx.r4.s64 = ctx.r11.s64 + 25080;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x82284f28
	ctx.lr = 0x824E8388;
	sub_82284F28(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ee268
	ctx.lr = 0x824E839C;
	sub_825EE268(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_824E83A0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824e83ec
	if (!cr6.eq) goto loc_824E83EC;
loc_824E83A8:
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823d9768
	ctx.lr = 0x824E83B8;
	sub_823D9768(ctx, base);
	// cmplw cr6,r29,r3
	cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, xer);
	// blt cr6,0x824e8244
	if (cr6.lt) goto loc_824E8244;
	// b 0x824e84c4
	goto loc_824E84C4;
loc_824E83C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e7060
	ctx.lr = 0x824E83CC;
	sub_824E7060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824e84c4
	if (!cr6.eq) goto loc_824E84C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e7e80
	ctx.lr = 0x824E83E0;
	sub_824E7E80(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8298eb00
	return;
loc_824E83EC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823de160
	ctx.lr = 0x824E83F8;
	sub_823DE160(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bl 0x823d9c00
	ctx.lr = 0x824E840C;
	sub_823D9C00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// bl 0x823dcb08
	ctx.lr = 0x824E8420;
	sub_823DCB08(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e84c4
	if (cr6.eq) goto loc_824E84C4;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// rlwinm r10,r10,0,6,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3C00000;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x824e84c4
	if (!cr6.eq) goto loc_824E84C4;
	// sth r23,68(r11)
	REX_STORE_U16(ctx.r11.u32 + 68, r23.u16);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// sth r23,66(r11)
	REX_STORE_U16(ctx.r11.u32 + 66, r23.u16);
	// b 0x824e84c4
	goto loc_824E84C4;
loc_824E8450:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823de160
	ctx.lr = 0x824E8458;
	sub_823DE160(ctx, base);
	// stw r25,56(r31)
	REX_STORE_U32(r31.u32 + 56, r25.u32);
	// b 0x824e84c0
	goto loc_824E84C0;
loc_824E8460:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823de160
	ctx.lr = 0x824E8468;
	sub_823DE160(ctx, base);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// b 0x824e84c4
	goto loc_824E84C4;
loc_824E8470:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stb r25,70(r31)
	REX_STORE_U8(r31.u32 + 70, r25.u8);
	// lis r30,-32011
	r30.s64 = -2097872896;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,384
	ctx.r6.s64 = 384;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r4,r11,25080
	ctx.r4.s64 = ctx.r11.s64 + 25080;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// stb r11,-5796(r30)
	REX_STORE_U8(r30.u32 + -5796, ctx.r11.u8);
	// bl 0x82284f28
	ctx.lr = 0x824E84B4;
	sub_82284F28(ctx, base);
	// lbz r11,-5796(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + -5796);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824e84c4
	if (!cr6.eq) goto loc_824E84C4;
loc_824E84C0:
	// stw r25,48(r31)
	REX_STORE_U32(r31.u32 + 48, r25.u32);
loc_824E84C4:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r25,64(r31)
	REX_STORE_U32(r31.u32 + 64, r25.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824e84f4
	if (cr6.eq) goto loc_824E84F4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bgt cr6,0x824e84ec
	if (cr6.gt) goto loc_824E84EC;
	// lwz r11,-5824(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + -5824);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e84f4
	if (cr6.eq) goto loc_824E84F4;
loc_824E84EC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823dcb08
	ctx.lr = 0x824E84F4;
	sub_823DCB08(ctx, base);
loc_824E84F4:
	// lbz r11,69(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 69);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e8638
	if (cr6.eq) goto loc_824E8638;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824e8638
	if (cr6.eq) goto loc_824E8638;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x824e8524
	if (!cr6.eq) goto loc_824E8524;
	// lwz r11,-5824(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + -5824);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e853c
	if (cr6.eq) goto loc_824E853C;
loc_824E8524:
	// lbz r11,115(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 115);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e853c
	if (cr6.eq) goto loc_824E853C;
	// bl 0x824e6a00
	ctx.lr = 0x824E8534;
	sub_824E6A00(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x82528fa8
	ctx.lr = 0x824E853C;
	sub_82528FA8(ctx, base);
loc_824E853C:
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x824e8638
	if (!cr6.gt) goto loc_824E8638;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r28,r25
	r28.u64 = r25.u64;
	// bl 0x823d9768
	ctx.lr = 0x824E8554;
	sub_823D9768(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824e8638
	if (cr6.eq) goto loc_824E8638;
loc_824E855C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823d9870
	ctx.lr = 0x824E856C;
	sub_823D9870(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e8620
	if (cr6.eq) goto loc_824E8620;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823db910
	ctx.lr = 0x824E8588;
	sub_823DB910(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824e8620
	if (cr6.eq) goto loc_824E8620;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824E85AC;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824E85C4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f1,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// bl 0x822eecc0
	ctx.lr = 0x824E85E0;
	sub_822EECC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e8620
	if (cr6.eq) goto loc_824E8620;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// bl 0x825ee268
	ctx.lr = 0x824E8608;
	sub_825EE268(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824e861c
	if (cr6.eq) goto loc_824E861C;
	// bl 0x824e6a00
	ctx.lr = 0x824E8618;
	sub_824E6A00(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824E861C:
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
loc_824E8620:
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823d9768
	ctx.lr = 0x824E8630;
	sub_823D9768(ctx, base);
	// cmplw cr6,r28,r3
	cr6.compare<uint32_t>(r28.u32, ctx.r3.u32, xer);
	// blt cr6,0x824e855c
	if (cr6.lt) goto loc_824E855C;
loc_824E8638:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824e8708
	if (cr6.eq) goto loc_824E8708;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e86a0
	if (cr6.eq) goto loc_824E86A0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stb r11,64(r3)
	REX_STORE_U8(ctx.r3.u32 + 64, ctx.r11.u8);
	// lis r11,-32015
	ctx.r11.s64 = -2098135040;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,-3324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -3324);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r11,r10,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// b 0x824e86a4
	goto loc_824E86A4;
loc_824E86A0:
	// stw r23,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, r23.u32);
loc_824E86A4:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x824e86e4
	if (cr6.eq) goto loc_824E86E4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x824e86e4
	if (!cr6.gt) goto loc_824E86E4;
	// clrlwi r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x824e8708
	if (!cr6.eq) goto loc_824E8708;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824E86D8;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8298eb00
	return;
loc_824E86E4:
	// clrlwi r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x824e8708
	if (!cr6.eq) goto loc_824E8708;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824E8700;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5808
	ctx.lr = 0x824E8708;
	sub_824E5808(ctx, base);
loc_824E8708:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8298eb00
	return;
}

DEFINE_REX_FUNC(sub_8253EFC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x8253EFC8;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r11,25492
	ctx.r3.s64 = ctx.r11.s64 + 25492;
	// li r5,0
	ctx.r5.s64 = 0;
	// extsh r4,r31
	ctx.r4.s64 = r31.s16;
	// bl 0x82683078
	ctx.lr = 0x8253EFE8;
	sub_82683078(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-26648
	ctx.r4.s64 = ctx.r11.s64 + -26648;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828e0a68
	ctx.lr = 0x8253EFFC;
	sub_828E0A68(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8253f020
	if (!cr6.eq) goto loc_8253F020;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,-26728
	ctx.r4.s64 = ctx.r11.s64 + -26728;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8298f1f0
	ctx.lr = 0x8253F018;
	sub_8298F1F0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8298eb1c
	return;
loc_8253F020:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253F034;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8253f05c
	if (cr6.eq) goto loc_8253F05C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8253f058
	if (cr6.eq) goto loc_8253F058;
	// bl 0x826c98a0
	ctx.lr = 0x8253F050;
	sub_826C98A0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8298eb1c
	return;
loc_8253F058:
	// bl 0x826ca278
	ctx.lr = 0x8253F05C;
	sub_826CA278(ctx, base);
loc_8253F05C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_82541078) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-32284
	ctx.r4.s64 = ctx.r11.s64 + -32284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x828e0a68
	ctx.lr = 0x8254109C;
	sub_828E0A68(ctx, base);
	// bl 0x826711b8
	ctx.lr = 0x825410A0;
	sub_826711B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82541D50) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82674550
	ctx.lr = 0x82541D68;
	sub_82674550(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82541d8c
	if (cr6.eq) goto loc_82541D8C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-30156
	ctx.r4.s64 = ctx.r11.s64 + -30156;
	// bl 0x828e0a68
	ctx.lr = 0x82541D84;
	sub_828E0A68(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82541d9c
	goto loc_82541D9C;
loc_82541D8C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-30200
	ctx.r4.s64 = ctx.r11.s64 + -30200;
	// bl 0x828e0a68
	ctx.lr = 0x82541D98;
	sub_828E0A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82541D9C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82543900) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x82543908;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r11,25492
	ctx.r3.s64 = ctx.r11.s64 + 25492;
	// li r5,0
	ctx.r5.s64 = 0;
	// extsh r4,r31
	ctx.r4.s64 = r31.s16;
	// bl 0x82683078
	ctx.lr = 0x82543928;
	sub_82683078(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825439ac
	if (cr6.eq) goto loc_825439AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82543944;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825439a0
	if (cr6.eq) goto loc_825439A0;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,31824(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 31824);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82543968;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lbzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825439c4
	goto loc_825439C4;
loc_825439A0:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-21896
	ctx.r4.s64 = ctx.r11.s64 + -21896;
	// b 0x825439b4
	goto loc_825439B4;
loc_825439AC:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-21968
	ctx.r4.s64 = ctx.r11.s64 + -21968;
loc_825439B4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8298f1f0
	ctx.lr = 0x825439C0;
	sub_8298F1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_825439C4:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-21992
	ctx.r4.s64 = ctx.r11.s64 + -21992;
	// bl 0x828e0a68
	ctx.lr = 0x825439D8;
	sub_828E0A68(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_82548038) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82547770
	sub_82547770(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82548058) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// b 0x825477e8
	sub_825477E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82548078) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82547878
	sub_82547878(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82548098) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,31824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31824);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// srawi r10,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x825480e8
	if (!cr6.eq) goto loc_825480E8;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x825480ec
	goto loc_825480EC;
loc_825480E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825480EC:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,556(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 556);
	// beq cr6,0x82548108
	if (cr6.eq) goto loc_82548108;
	// rlwinm r10,r10,0,14,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r10,556(r11)
	REX_STORE_U32(ctx.r11.u32 + 556, ctx.r10.u32);
	// blr 
	return;
loc_82548108:
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// stw r10,556(r11)
	REX_STORE_U32(ctx.r11.u32 + 556, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8254AEF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32017
	ctx.r10.s64 = -2098266112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-20792
	ctx.r3.s64 = ctx.r10.s64 + -20792;
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82350f40
	ctx.lr = 0x8254AF44;
	sub_82350F40(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8254D758) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-28376(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28376);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8254F160) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r11,r6
	ctx.r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// xori r8,r7,1
	ctx.r8.u64 = ctx.r7.u64 ^ 1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// xori r7,r6,1
	ctx.r7.u64 = ctx.r6.u64 ^ 1;
	// cntlzw r6,r5
	ctx.r6.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r10,r6,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_825542A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8254ed98
	ctx.lr = 0x825542CC;
	sub_8254ED98(ctx, base);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82555610) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// b 0x825537c8
	sub_825537C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82556E78) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f4,f4
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// addi r4,r11,10920
	ctx.r4.s64 = ctx.r11.s64 + 10920;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r31,0
	r31.s64 = 0;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,16
	ctx.r6.s64 = 16;
	// stb r11,165(r1)
	REX_STORE_U8(ctx.r1.u32 + 165, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r31,164(r1)
	REX_STORE_U8(ctx.r1.u32 + 164, r31.u8);
	// lfs f0,8916(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8916);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822837c8
	ctx.lr = 0x82556F00;
	sub_822837C8(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82556f50
	if (cr6.eq) goto loc_82556F50;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r11,r10,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82556f54
	goto loc_82556F54;
loc_82556F50:
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
loc_82556F54:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_8255EEF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8255ae40
	ctx.lr = 0x8255EF18;
	sub_8255AE40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82560148) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,24544(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24544);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srawi r9,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
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
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82299a50
	sub_82299A50(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825608C8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,24544(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24544);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// srawi r10,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x82560918
	if (!cr6.eq) goto loc_82560918;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8256091c
	goto loc_8256091C;
loc_82560918:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256091C:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8256092c
	if (cr6.eq) goto loc_8256092C;
	// b 0x823980b8
	sub_823980B8(ctx, base);
	return;
loc_8256092C:
	// b 0x823980c8
	sub_823980C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82560E58) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,24544(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24544);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// srawi r10,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x82560eb4
	if (!cr6.eq) goto loc_82560EB4;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r10,r8,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
loc_82560EB4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwimi r10,r8,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82561510) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r10,-32017
	ctx.r10.s64 = -2098266112;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,24544(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24544);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// srawi r11,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lbzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// bne cr6,0x82561554
	if (!cr6.eq) goto loc_82561554;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82561558
	goto loc_82561558;
loc_82561554:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82561558:
	// stb r8,3974(r3)
	REX_STORE_U8(ctx.r3.u32 + 3974, ctx.r8.u8);
	// stb r7,3975(r3)
	REX_STORE_U8(ctx.r3.u32 + 3975, ctx.r7.u8);
	// b 0x8237a6c0
	sub_8237A6C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82561F38) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,24544(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24544);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// srawi r10,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r10,3855(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3855);
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// rlwimi r10,r9,6,25,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x40) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFBF);
	// stb r10,3855(r11)
	REX_STORE_U8(ctx.r11.u32 + 3855, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82563C30) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-29328
	ctx.r3.s64 = ctx.r11.s64 + -29328;
	// b 0x82563ac0
	sub_82563AC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82568A48) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82567138
	ctx.lr = 0x82568A68;
	sub_82567138(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8256A410) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82674588
	ctx.lr = 0x8256A430;
	sub_82674588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8256a490
	if (!cr6.eq) goto loc_8256A490;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x8256a44c
	if (!cr6.eq) goto loc_8256A44C;
	// li r31,20000
	r31.s64 = 20000;
	// b 0x8256a45c
	goto loc_8256A45C;
loc_8256A44C:
	// cmpwi cr6,r31,-2
	cr6.compare<int32_t>(r31.s32, -2, xer);
	// bne cr6,0x8256a45c
	if (!cr6.eq) goto loc_8256A45C;
	// lis r31,32767
	r31.s64 = 2147418112;
	// ori r31,r31,65535
	r31.u64 = r31.u64 | 65535;
loc_8256A45C:
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x8256A468;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8256a480
	if (cr6.eq) goto loc_8256A480;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8214cf40
	ctx.lr = 0x8256A478;
	sub_8214CF40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8256a484
	goto loc_8256A484;
loc_8256A480:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8256A484:
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d33c8
	ctx.lr = 0x8256A490;
	sub_821D33C8(ctx, base);
loc_8256A490:
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

DEFINE_REX_FUNC(sub_82571320) {
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
	// bl 0x82674588
	ctx.lr = 0x82571340;
	sub_82674588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825713e4
	if (!cr6.eq) goto loc_825713E4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x825713b0
	if (cr6.eq) goto loc_825713B0;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// srawi r10,r31,8
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r10.s64 = r31.s32 >> 8;
	// clrlwi r8,r31,24
	ctx.r8.u64 = r31.u32 & 0xFF;
	// lwz r11,31824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31824);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82571398
	if (!cr6.eq) goto loc_82571398;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r8,r10
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r30,24
	ctx.r9.u64 = r30.u32 & 0xFF;
	// lwz r10,556(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 556);
	// rlwimi r10,r9,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r10,556(r11)
	REX_STORE_U32(ctx.r11.u32 + 556, ctx.r10.u32);
	// b 0x825713e4
	goto loc_825713E4;
loc_82571398:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r9,r30,24
	ctx.r9.u64 = r30.u32 & 0xFF;
	// lwz r10,556(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 556);
	// rlwimi r10,r9,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r10,556(r11)
	REX_STORE_U32(ctx.r11.u32 + 556, ctx.r10.u32);
	// b 0x825713e4
	goto loc_825713E4;
loc_825713B0:
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lwz r3,-21944(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -21944);
	// bl 0x821250b0
	ctx.lr = 0x825713BC;
	sub_821250B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825713d4
	if (cr6.eq) goto loc_825713D4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825668a8
	ctx.lr = 0x825713CC;
	sub_825668A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825713d8
	goto loc_825713D8;
loc_825713D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_825713D8:
	// li r5,78
	ctx.r5.s64 = 78;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821d33c8
	ctx.lr = 0x825713E4;
	sub_821D33C8(ctx, base);
loc_825713E4:
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

DEFINE_REX_FUNC(sub_825774A8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8227f5e8
	ctx.lr = 0x825774C4;
	sub_8227F5E8(ctx, base);
	// lwz r11,1168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1168);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// stw r11,1168(r3)
	REX_STORE_U32(ctx.r3.u32 + 1168, ctx.r11.u32);
	// beq cr6,0x82577598
	if (cr6.eq) goto loc_82577598;
	// lis r11,-32072
	ctx.r11.s64 = -2101870592;
	// addi r30,r11,-16060
	r30.s64 = ctx.r11.s64 + -16060;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	REX_STORE_U8(r30.u32 + 0, ctx.r11.u8);
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// lis r11,-32065
	ctx.r11.s64 = -2101411840;
	// addi r11,r11,-14792
	ctx.r11.s64 = ctx.r11.s64 + -14792;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// ble cr6,0x8257752c
	if (!cr6.gt) goto loc_8257752C;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x8257751c
	if (cr6.eq) goto loc_8257751C;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x8257751c
	if (cr6.eq) goto loc_8257751C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,9596
	ctx.r4.s64 = ctx.r11.s64 + 9596;
	// b 0x82577570
	goto loc_82577570;
loc_8257751C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,9588
	ctx.r4.s64 = ctx.r11.s64 + 9588;
	// b 0x82577570
	goto loc_82577570;
loc_8257752C:
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(ctx.r11.s32, 4, xer);
	// beq cr6,0x82577558
	if (cr6.eq) goto loc_82577558;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// beq cr6,0x82577558
	if (cr6.eq) goto loc_82577558;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// neg r5,r31
	ctx.r5.s64 = static_cast<int64_t>(-r31.u64);
	// blt cr6,0x8257754c
	if (cr6.lt) goto loc_8257754C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_8257754C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,9580
	ctx.r4.s64 = ctx.r11.s64 + 9580;
	// b 0x82577570
	goto loc_82577570;
loc_82577558:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// neg r5,r31
	ctx.r5.s64 = static_cast<int64_t>(-r31.u64);
	// blt cr6,0x82577568
	if (cr6.lt) goto loc_82577568;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82577568:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,9572
	ctx.r4.s64 = ctx.r11.s64 + 9572;
loc_82577570:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8298f1f0
	ctx.lr = 0x82577578;
	sub_8298F1F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257757C:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x8257757c
	if (!cr6.eq) goto loc_8257757C;
loc_82577598:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_82582320) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// srawi r10,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,31824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31824);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82582354
	if (!cr6.eq) goto loc_82582354;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r8,r10
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82582358
	goto loc_82582358;
loc_82582354:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82582358:
	// lwz r3,2480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2480);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// beq cr6,0x82582380
	if (cr6.eq) goto loc_82582380;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x825c17f8
	sub_825C17F8(ctx, base);
	return;
loc_82582380:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x825c17f8
	sub_825C17F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825855E0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8257e5e8
	ctx.lr = 0x82585604;
	sub_8257E5E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82586698) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,31824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31824);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// srawi r10,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x825866dc
	if (!cr6.eq) goto loc_825866DC;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stb r8,761(r11)
	REX_STORE_U8(ctx.r11.u32 + 761, ctx.r8.u8);
	// blr 
	return;
loc_825866DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r8,761(r11)
	REX_STORE_U8(ctx.r11.u32 + 761, ctx.r8.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825885B8) {
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
	ctx.lr = 0x825885C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8257c238
	ctx.lr = 0x825885E0;
	sub_8257C238(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825885fc
	if (cr6.eq) goto loc_825885FC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82518ba8
	ctx.lr = 0x825885FC;
	sub_82518BA8(ctx, base);
loc_825885FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_82588EE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82582548
	sub_82582548(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8258A810) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,31824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31824);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// srawi r10,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bne cr6,0x8258a860
	if (!cr6.eq) goto loc_8258A860;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8258a864
	goto loc_8258A864;
loc_8258A860:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8258A864:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// lwz r9,556(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 556);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwimi r9,r10,5,26,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x20) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r9,556(r11)
	REX_STORE_U32(ctx.r11.u32 + 556, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8258B498) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,31824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31824);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// srawi r10,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r7,r10
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,560(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 560);
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// rlwimi r10,r9,9,22,22
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x200) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFDFF);
	// stw r10,560(r11)
	REX_STORE_U32(ctx.r11.u32 + 560, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8258FB08) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82581360
	ctx.lr = 0x8258FB34;
	sub_82581360(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82594E50) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x823ec870
	ctx.lr = 0x82594E6C;
	sub_823EC870(ctx, base);
	// bl 0x82674588
	ctx.lr = 0x82594E70;
	sub_82674588(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82594eac
	if (cr6.eq) goto loc_82594EAC;
	// bl 0x82674600
	ctx.lr = 0x82594E80;
	sub_82674600(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82594eac
	if (cr6.eq) goto loc_82594EAC;
	// lis r11,-32048
	ctx.r11.s64 = -2100297728;
	// lbz r11,-23916(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -23916);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82594eac
	if (cr6.eq) goto loc_82594EAC;
	// lis r11,-31992
	ctx.r11.s64 = -2096627712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,22588
	ctx.r3.s64 = ctx.r11.s64 + 22588;
	// bl 0x8268f670
	ctx.lr = 0x82594EAC;
	sub_8268F670(ctx, base);
loc_82594EAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82596BB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,16744
	ctx.r3.s64 = ctx.r11.s64 + 16744;
	// b 0x82596af0
	sub_82596AF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8259D9A0) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32081
	ctx.r9.s64 = -2102460416;
	// addi r3,r9,-16736
	ctx.r3.s64 = ctx.r9.s64 + -16736;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x823acc88
	ctx.lr = 0x8259D9EC;
	sub_823ACC88(ctx, base);
	// lis r11,-32039
	ctx.r11.s64 = -2099707904;
	// lwz r30,15072(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 15072);
	// bl 0x821d2088
	ctx.lr = 0x8259D9F8;
	sub_821D2088(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,19
	ctx.r5.s64 = 19;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x823093a8
	ctx.lr = 0x8259DA14;
	sub_823093A8(ctx, base);
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

DEFINE_REX_FUNC(sub_825A2D30) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32014
	ctx.r11.s64 = -2098069504;
	// addi r3,r11,26488
	ctx.r3.s64 = ctx.r11.s64 + 26488;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x824b2758
	sub_824B2758(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825A4F00) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// srawi r10,r9,8
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lwz r11,31824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31824);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bne cr6,0x825a4f44
	if (!cr6.eq) goto loc_825A4F44;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r8,r10
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x825a4f48
	goto loc_825A4F48;
loc_825A4F44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825A4F48:
	// addi r3,r11,1264
	ctx.r3.s64 = ctx.r11.s64 + 1264;
	// b 0x82411af0
	sub_82411AF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_825AD4F8) {
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
	ctx.lr = 0x825AD500;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r3,3678(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 3678);
	// bl 0x82396c70
	ctx.lr = 0x825AD514;
	sub_82396C70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237ba28
	ctx.lr = 0x825AD520;
	sub_8237BA28(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ad538
	if (!cr6.eq) goto loc_825AD538;
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ad540
	if (!cr6.eq) goto loc_825AD540;
loc_825AD538:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823794f8
	ctx.lr = 0x825AD540;
	sub_823794F8(ctx, base);
loc_825AD540:
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82655160
	ctx.lr = 0x825AD558;
	sub_82655160(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ad570
	if (!cr6.eq) goto loc_825AD570;
loc_825AD564:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb1c
	return;
loc_825AD570:
	// lis r11,-32017
	ctx.r11.s64 = -2098266112;
	// lbz r11,-25428(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -25428);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825ad590
	if (!cr6.eq) goto loc_825AD590;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// lbz r11,-931(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -931);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad608
	if (cr6.eq) goto loc_825AD608;
loc_825AD590:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x825ad5d0
	if (!cr6.gt) goto loc_825AD5D0;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// lfs f0,-944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -944);
	ctx.f0.f64 = double(temp.f32);
	// b 0x825ad5d8
	goto loc_825AD5D8;
loc_825AD5D0:
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// lfs f0,-940(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -940);
	ctx.f0.f64 = double(temp.f32);
loc_825AD5D8:
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f13,-948(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -948);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x825ad564
	if (cr6.gt) goto loc_825AD564;
loc_825AD608:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237a768
	ctx.lr = 0x825AD614;
	sub_8237A768(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x825ad564
	if (cr6.eq) goto loc_825AD564;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825acb38
	ctx.lr = 0x825AD628;
	sub_825ACB38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_825C30C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298ea90
	ctx.lr = 0x825C30C8;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32005
	ctx.r11.s64 = -2097479680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r15,r11,-3376
	r15.s64 = ctx.r11.s64 + -3376;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r22,0
	r22.s64 = 0;
	// addi r11,r11,-25488
	ctx.r11.s64 = ctx.r11.s64 + -25488;
	// mr r30,r22
	r30.u64 = r22.u64;
	// addi r20,r31,1344
	r20.s64 = r31.s64 + 1344;
	// lis r18,-32070
	r18.s64 = -2101739520;
	// li r19,3
	r19.s64 = 3;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-32005
	ctx.r11.s64 = -2097479680;
	// li r17,2
	r17.s64 = 2;
	// addi r14,r11,-3360
	r14.s64 = ctx.r11.s64 + -3360;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r16,r11,-25460
	r16.s64 = ctx.r11.s64 + -25460;
	// lis r11,-32005
	ctx.r11.s64 = -2097479680;
	// addi r11,r11,-3372
	ctx.r11.s64 = ctx.r11.s64 + -3372;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,-13988
	ctx.r11.s64 = ctx.r11.s64 + -13988;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_825C3124:
	// li r21,15
	r21.s64 = 15;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// bne cr6,0x825c3138
	if (!cr6.eq) goto loc_825C3138;
	// li r21,22
	r21.s64 = 22;
	// b 0x825c3144
	goto loc_825C3144;
loc_825C3138:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// bne cr6,0x825c3144
	if (!cr6.eq) goto loc_825C3144;
	// li r21,15
	r21.s64 = 15;
loc_825C3144:
	// addi r11,r30,53
	ctx.r11.s64 = r30.s64 + 53;
	// lbzx r23,r20,r30
	r23.u64 = REX_LOAD_U8(r20.u32 + r30.u32);
	// rlwinm r25,r11,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r23,1
	ctx.r11.s64 = r23.s64 + 1;
	// srawi r10,r11,1
	xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrlwi r24,r11,24
	r24.u64 = ctx.r11.u32 & 0xFF;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + r25.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r27,r10,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r10,r27,r31
	ctx.r10.u64 = REX_LOAD_U8(r27.u32 + r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825c32a8
	if (cr6.eq) goto loc_825C32A8;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x825c32e4
	if (cr6.eq) goto loc_825C32E4;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x825c32f4
	if (!cr6.eq) goto loc_825C32F4;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r31
	r28.u64 = ctx.r11.u64 + r31.u64;
	// lwz r10,1276(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 1276);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825c32f4
	if (cr6.eq) goto loc_825C32F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825c20f8
	ctx.lr = 0x825C31C8;
	sub_825C20F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c32f4
	if (!cr6.eq) goto loc_825C32F4;
	// addi r11,r30,338
	ctx.r11.s64 = r30.s64 + 338;
	// lwz r9,-1812(r18)
	ctx.r9.u64 = REX_LOAD_U32(r18.u32 + -1812);
	// rlwinm r26,r11,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r31
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + r31.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x825c32f4
	if (!cr6.lt) goto loc_825C32F4;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x825c32f4
	if (!cr6.eq) goto loc_825C32F4;
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// stb r22,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r22.u8);
	// clrlwi r10,r21,24
	ctx.r10.u64 = r21.u32 & 0xFF;
	// li r5,63
	ctx.r5.s64 = 63;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r9,1347(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1347);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// divw r8,r9,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r9.s32 / ctx.r10.s32 : 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subf r11,r8,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r8.u64;
	// andc r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// clrlwi r29,r11,24
	r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8298eb40
	ctx.lr = 0x825C3240;
	rexcrt_memset(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// clrlwi r7,r29,24
	ctx.r7.u64 = r29.u32 & 0xFF;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x825c3260
	if (!cr6.eq) goto loc_825C3260;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x825c3268
	goto loc_825C3268;
loc_825C3260:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r11,r14
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + r14.u32);
loc_825C3268:
	// bl 0x82149320
	ctx.lr = 0x825C326C;
	sub_82149320(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x828a5b48
	ctx.lr = 0x825C3278;
	sub_828A5B48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(ctx.r11.u32, 65535, xer);
	// beq cr6,0x825c32f4
	if (cr6.eq) goto loc_825C32F4;
	// lwz r3,1276(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 1276);
	// sth r4,1280(r28)
	REX_STORE_U16(r28.u32 + 1280, ctx.r4.u16);
	// bl 0x82897258
	ctx.lr = 0x825C3294;
	sub_82897258(ctx, base);
	// stbx r22,r27,r31
	REX_STORE_U8(r27.u32 + r31.u32, r22.u8);
	// lwz r11,-1812(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + -1812);
	// addi r11,r11,1500
	ctx.r11.s64 = ctx.r11.s64 + 1500;
	// stwx r11,r26,r31
	REX_STORE_U32(r26.u32 + r31.u32, ctx.r11.u32);
	// b 0x825c32f4
	goto loc_825C32F4;
loc_825C32A8:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lhz r4,1280(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 1280);
	// lwz r3,1276(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1276);
	// bl 0x82897340
	ctx.lr = 0x825C32CC;
	sub_82897340(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825c32ec
	if (cr6.eq) goto loc_825C32EC;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x825c32e4
	if (cr6.eq) goto loc_825C32E4;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x825c32f4
	if (!cr6.eq) goto loc_825C32F4;
loc_825C32E4:
	// stbx r19,r27,r31
	REX_STORE_U8(r27.u32 + r31.u32, r19.u8);
	// b 0x825c32f4
	goto loc_825C32F4;
loc_825C32EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stbx r11,r27,r31
	REX_STORE_U8(r27.u32 + r31.u32, ctx.r11.u8);
loc_825C32F4:
	// lbzx r11,r20,r30
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + r30.u32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(ctx.r11.u32, 3, xer);
	// bgt cr6,0x825c33e8
	if (cr6.gt) goto loc_825C33E8;
	// lis r12,-32164
	ctx.r12.s64 = -2107899904;
	// addi r12,r12,13100
	ctx.r12.s64 = ctx.r12.s64 + 13100;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_825C33D4;
	case 1:
		goto loc_825C33D4;
	case 2:
		goto loc_825C33A4;
	case 3:
		goto loc_825C333C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_825C333C:
	// lbzx r11,r27,r31
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x825c33e8
	if (!cr6.eq) goto loc_825C33E8;
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// stbx r17,r27,r31
	REX_STORE_U8(r27.u32 + r31.u32, r17.u8);
	// clrlwi r7,r21,24
	ctx.r7.u64 = r21.u32 & 0xFF;
	// stbx r24,r20,r30
	REX_STORE_U8(r20.u32 + r30.u32, r24.u8);
	// addi r11,r30,344
	ctx.r11.s64 = r30.s64 + 344;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,1347(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1347);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// divw r6,r9,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r9.s32 / ctx.r7.s32 : 0);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// stb r9,1347(r10)
	REX_STORE_U8(ctx.r10.u32 + 1347, ctx.r9.u8);
	// stb r22,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r22.u8);
	// stb r22,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, r22.u8);
	// stb r22,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r22.u8);
	// stb r22,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r22.u8);
	// b 0x825c33e8
	goto loc_825C33E8;
loc_825C33A4:
	// addi r10,r30,344
	ctx.r10.s64 = r30.s64 + 344;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
loc_825C33B4:
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbzx r8,r11,r15
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + r15.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x825c33d4
	if (!cr6.lt) goto loc_825C33D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(ctx.r11.u32, 4, xer);
	// blt cr6,0x825c33b4
	if (cr6.lt) goto loc_825C33B4;
	// b 0x825c33e8
	goto loc_825C33E8;
loc_825C33D4:
	// add r11,r23,r25
	ctx.r11.u64 = r23.u64 + r25.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stbx r19,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, r19.u8);
loc_825C33E8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// blt cr6,0x825c3124
	if (cr6.lt) goto loc_825C3124;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8298eae0
	return;
}

DEFINE_REX_FUNC(sub_82675854) {
	REX_FUNC_PROLOGUE();
	PPCRegister r19{};
	// lwz r19,22884(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22884);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22884(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22884);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22884(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22884);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22884(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22884);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22884(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22884);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22884(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22884);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22884(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22884);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22892(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22892);
	// lwz r19,22884(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22884);
	// lwz r19,22884(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22884);
	// lwz r19,22884(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22884);
	// lwz r19,22884(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22884);
	// lwz r19,22884(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 22884);
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82793EB8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// bl 0x827ec0d8
	ctx.lr = 0x82793EE0;
	sub_827EC0D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82793efc
	if (cr6.eq) goto loc_82793EFC;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82793f00
	if (!cr6.eq) goto loc_82793F00;
loc_82793EFC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82793F00:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82793f28
	if (cr6.eq) goto loc_82793F28;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8297c118
	ctx.lr = 0x82793F18;
	sub_8297C118(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82793f2c
	if (!cr6.eq) goto loc_82793F2C;
loc_82793F28:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82793F2C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

DEFINE_REX_FUNC(sub_82796F58) {
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
	ctx.lr = 0x82796F60;
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,11928
	ctx.r11.s64 = ctx.r11.s64 + 11928;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,999
	ctx.r6.s64 = 999;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82794088
	ctx.lr = 0x82796F94;
	sub_82794088(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82796fcc
	if (cr6.eq) goto loc_82796FCC;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82718c30
	ctx.lr = 0x82796FBC;
	sub_82718C30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82796fd0
	if (!cr6.eq) goto loc_82796FD0;
loc_82796FCC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82796FD0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_8279BEA0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r31,r11,19512
	r31.s64 = ctx.r11.s64 + 19512;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8279c024
	if (!cr6.eq) goto loc_8279C024;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8218be28
	ctx.lr = 0x8279BED0;
	sub_8218BE28(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8279bee4
	if (cr6.eq) goto loc_8279BEE4;
	// bl 0x827fdc48
	ctx.lr = 0x8279BEE0;
	sub_827FDC48(ctx, base);
	// b 0x8279bee8
	goto loc_8279BEE8;
loc_8279BEE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8279BEE8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lis r9,-32134
	ctx.r9.s64 = -2105933824;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r11,r11,6876
	ctx.r11.s64 = ctx.r11.s64 + 6876;
	// lis r10,-32135
	ctx.r10.s64 = -2105999360;
	// addi r9,r9,-20224
	ctx.r9.s64 = ctx.r9.s64 + -20224;
	// li r8,40
	ctx.r8.s64 = 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,-16344
	ctx.r11.s64 = ctx.r10.s64 + -16344;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// std r10,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x827fcd60
	ctx.lr = 0x8279BF4C;
	sub_827FCD60(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8218be28
	ctx.lr = 0x8279BF58;
	sub_8218BE28(ctx, base);
	// lis r10,-32134
	ctx.r10.s64 = -2105933824;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,-18488
	ctx.r10.s64 = ctx.r10.s64 + -18488;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// sth r9,58(r30)
	REX_STORE_U16(r30.u32 + 58, ctx.r9.u16);
	// stb r8,60(r30)
	REX_STORE_U8(r30.u32 + 60, ctx.r8.u8);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x828e0a68
	ctx.lr = 0x8279BF84;
	sub_828E0A68(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r11,-10972
	ctx.r4.s64 = ctx.r11.s64 + -10972;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8276bad0
	ctx.lr = 0x8279BF9C;
	sub_8276BAD0(ctx, base);
	// lis r11,-32134
	ctx.r11.s64 = -2105933824;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-21496
	ctx.r11.s64 = ctx.r11.s64 + -21496;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x828e0a68
	ctx.lr = 0x8279BFB0;
	sub_828E0A68(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// addi r4,r11,-4096
	ctx.r4.s64 = ctx.r11.s64 + -4096;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8276bad0
	ctx.lr = 0x8279BFC8;
	sub_8276BAD0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8276b548
	ctx.lr = 0x8279BFD0;
	sub_8276B548(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827e8bd0
	ctx.lr = 0x8279BFE0;
	sub_827E8BD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,28
	ctx.r3.s64 = ctx.r10.s64 + 28;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827e8ca0
	ctx.lr = 0x8279BFFC;
	sub_827E8CA0(ctx, base);
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,19508
	ctx.r4.s64 = ctx.r11.s64 + 19508;
	// bl 0x827fd440
	ctx.lr = 0x8279C00C;
	sub_827FD440(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,31964(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31964);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x827eb590
	ctx.lr = 0x8279C024;
	sub_827EB590(ctx, base);
loc_8279C024:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_827B3320) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x8298ea90
	ctx.lr = 0x827B3328;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x829900e4
	ctx.lr = 0x827B3330;
	// addi r31,r1,-368
	r31.s64 = ctx.r1.s64 + -368;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r5,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r5.u32);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// cntlzw r9,r24
	ctx.r9.u64 = r24.u32 == 0 ? 32 : __builtin_clz(r24.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lfs f28,3068(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f28.f64 = double(temp.f32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r24,412(r31)
	REX_STORE_U32(r31.u32 + 412, r24.u32);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// fmr f0,f28
	ctx.f0.f64 = f28.f64;
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
	// stw r26,388(r31)
	REX_STORE_U32(r31.u32 + 388, r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r25,420(r31)
	REX_STORE_U32(r31.u32 + 420, r25.u32);
	// cmpwi cr6,r22,4
	cr6.compare<int32_t>(r22.s32, 4, xer);
	// stb r11,80(r31)
	REX_STORE_U8(r31.u32 + 80, ctx.r11.u8);
	// blt cr6,0x827b33c8
	if (cr6.lt) goto loc_827B33C8;
	// addi r10,r22,-4
	ctx.r10.s64 = r22.s64 + -4;
	// addi r11,r19,8
	ctx.r11.s64 = r19.s64 + 8;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_827B3398:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// bne cr6,0x827b3398
	if (!cr6.eq) goto loc_827B3398;
loc_827B33C8:
	// cmpw cr6,r10,r22
	cr6.compare<int32_t>(ctx.r10.s32, r22.s32, xer);
	// bge cr6,0x827b33f4
	if (!cr6.lt) goto loc_827B33F4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r10,r22
	ctx.r11.u64 = r22.u64 - ctx.r10.u64;
	// add r10,r9,r19
	ctx.r10.u64 = ctx.r9.u64 + r19.u64;
loc_827B33DC:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827b33dc
	if (!cr6.eq) goto loc_827B33DC;
loc_827B33F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,2592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	f27.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - f27.f64));
	// lfs f26,10640(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10640);
	f26.f64 = double(temp.f32);
	// fsel f0,f13,f27,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f27.f64 : ctx.f0.f64;
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, f26.f64);
	// ble cr6,0x827b341c
	if (!cr6.gt) goto loc_827B341C;
	// fmr f23,f28
	f23.f64 = f28.f64;
	// b 0x827b3420
	goto loc_827B3420;
loc_827B341C:
	// fsubs f23,f27,f0
	ctx.fpscr.disableFlushMode();
	f23.f64 = double(float(f27.f64 - ctx.f0.f64));
loc_827B3420:
	// rlwinm r16,r22,2,0,29
	r16.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r16
	ctx.r11.s64 = static_cast<int64_t>(-r16.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82991244
	ctx.lr = 0x827B3430;
	sub_82991244(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// neg r10,r16
	ctx.r10.s64 = static_cast<int64_t>(-r16.u64);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r21,r1,80
	r21.s64 = ctx.r1.s64 + 80;
	// bl 0x82991244
	ctx.lr = 0x827B3448;
	sub_82991244(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// neg r10,r16
	ctx.r10.s64 = static_cast<int64_t>(-r16.u64);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// addi r20,r1,80
	r20.s64 = ctx.r1.s64 + 80;
	// bl 0x82991244
	ctx.lr = 0x827B3460;
	sub_82991244(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r17,r1,80
	r17.s64 = ctx.r1.s64 + 80;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x829a1260
	ctx.lr = 0x827B347C;
	sub_829A1260(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lhz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x827b3950
	if (!cr6.gt) goto loc_827B3950;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32245
	ctx.r9.s64 = -2113208320;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r15,0
	r15.s64 = 0;
	// lfs f24,-4732(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4732);
	f24.f64 = double(temp.f32);
	// li r14,16
	r14.s64 = 16;
	// lfd f29,-6912(r9)
	f29.u64 = REX_LOAD_U64(ctx.r9.u32 + -6912);
	// lfd f30,-6920(r10)
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + -6920);
	// lfs f25,8772(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8772);
	f25.f64 = double(temp.f32);
loc_827B34B8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r28,r11,r15
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// stfs f27,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lhz r5,6(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 6);
	// lbz r4,5(r28)
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + 5);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827B34E8;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x827b3938
	if (cr6.eq) goto loc_827B3938;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	cr6.compare(ctx.f0.f64, f27.f64);
	// beq cr6,0x827b35a4
	if (cr6.eq) goto loc_827B35A4;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r22,4
	cr6.compare<int32_t>(r22.s32, 4, xer);
	// blt cr6,0x827b356c
	if (cr6.lt) goto loc_827B356C;
	// addi r11,r22,-4
	ctx.r11.s64 = r22.s64 + -4;
	// addi r10,r19,12
	ctx.r10.s64 = r19.s64 + 12;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r21,4
	ctx.r11.s64 = r21.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r7,r21,r19
	ctx.r7.u64 = r19.u64 - r21.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_827B3528:
	// lfs f13,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f13,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x827b3528
	if (!cr6.eq) goto loc_827B3528;
loc_827B356C:
	// cmplw cr6,r8,r22
	cr6.compare<uint32_t>(ctx.r8.u32, r22.u32, xer);
	// bge cr6,0x827b35b4
	if (!cr6.lt) goto loc_827B35B4;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r21,r19
	ctx.r9.u64 = r19.u64 - r21.u64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// subf r10,r8,r22
	ctx.r10.u64 = r22.u64 - ctx.r8.u64;
loc_827B3584:
	// lfsx f13,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827b3584
	if (!cr6.eq) goto loc_827B3584;
	// b 0x827b35b4
	goto loc_827B35B4;
loc_827B35A4:
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x829a0e58
	ctx.lr = 0x827B35B4;
	sub_829A0E58(ctx, base);
loc_827B35B4:
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x829a1260
	ctx.lr = 0x827B35C4;
	sub_829A1260(ctx, base);
	// li r23,1
	r23.s64 = 1;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x827b3700
	if (cr6.eq) goto loc_827B3700;
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 404);
	// mr r30,r18
	r30.u64 = r18.u64;
	// subf r26,r18,r17
	r26.u64 = r17.u64 - r18.u64;
	// subf r25,r17,r11
	r25.u64 = ctx.r11.u64 - r17.u64;
	// subf r29,r18,r20
	r29.u64 = r20.u64 - r18.u64;
	// subf r27,r18,r21
	r27.u64 = r21.u64 - r18.u64;
	// mr r24,r22
	r24.u64 = r22.u64;
loc_827B35EC:
	// add r10,r30,r26
	ctx.r10.u64 = r30.u64 + r26.u64;
	// lwzx r11,r30,r26
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r26.u32);
	// lwzx r6,r25,r10
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + ctx.r10.u32);
	// lhz r5,16(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 16);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// bge cr6,0x827b3668
	if (!cr6.lt) goto loc_827B3668;
loc_827B3604:
	// lbz r9,5(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 5);
	// lhz r8,6(r28)
	ctx.r8.u64 = REX_LOAD_U16(r28.u32 + 6);
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,12(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lbz r8,5(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lhz r4,6(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x827b3658
	if (cr6.eq) goto loc_827B3658;
	// bgt cr6,0x827b3668
	if (cr6.gt) goto loc_827B3668;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, xer);
	// blt cr6,0x827b3604
	if (cr6.lt) goto loc_827B3604;
	// b 0x827b3668
	goto loc_827B3668;
loc_827B3658:
	// stwx r11,r30,r29
	REX_STORE_U32(r30.u32 + r29.u32, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_827B3668:
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x827b36e0
	if (cr6.eq) goto loc_827B36E0;
	// stfs f27,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827b36d8
	if (!cr6.eq) goto loc_827B36D8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x827b36c0
	if (cr6.eq) goto loc_827B36C0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lhz r5,6(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 6);
	// lbz r4,5(r28)
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + 5);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827B36B4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x827b36d8
	if (cr6.eq) goto loc_827B36D8;
loc_827B36C0:
	// lfsx f0,r30,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r23,0
	r23.s64 = 0;
	// lfs f13,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfsx f0,r30,r27
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + r27.u32, temp.u32);
	// b 0x827b36e4
	goto loc_827B36E4;
loc_827B36D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r29
	REX_STORE_U32(r30.u32 + r29.u32, ctx.r11.u32);
loc_827B36E0:
	// stfsx f28,r30,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r30.u32 + r27.u32, temp.u32);
loc_827B36E4:
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x827b35ec
	if (!cr6.eq) goto loc_827B35EC;
	// lwz r25,420(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 420);
	// lwz r24,412(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 412);
	// lwz r26,388(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 388);
loc_827B3700:
	// clrlwi r11,r23,24
	ctx.r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827b3938
	if (!cr6.eq) goto loc_827B3938;
	// lbz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827b373c
	if (!cr6.eq) goto loc_827B373C;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lhz r5,6(r28)
	ctx.r5.u64 = REX_LOAD_U16(r28.u32 + 6);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lbz r4,5(r28)
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + 5);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827B373C;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
loc_827B373C:
	// fmr f13,f23
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f23.f64;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// ble cr6,0x827b3798
	if (!cr6.gt) goto loc_827B3798;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_827B3750:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f25
	cr6.compare(ctx.f13.f64, f25.f64);
	// blt cr6,0x827b3780
	if (cr6.lt) goto loc_827B3780;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsel f12,f0,f0,f30
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f30.f64;
	// fsel f0,f0,f0,f30
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : f30.f64;
	// fsub f12,f12,f29
	ctx.f12.f64 = ctx.f12.f64 - f29.f64;
	// fsel f0,f12,f29,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? f29.f64 : ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x827b3788
	goto loc_827B3788;
loc_827B3780:
	// stfs f28,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmr f13,f28
	ctx.f13.f64 = f28.f64;
loc_827B3788:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827b3750
	if (!cr6.eq) goto loc_827B3750;
loc_827B3798:
	// mr r30,r20
	r30.u64 = r20.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x827b3938
	if (cr6.eq) goto loc_827B3938;
	// subf r27,r20,r21
	r27.u64 = r21.u64 - r20.u64;
loc_827B37AC:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827b3928
	if (cr6.eq) goto loc_827B3928;
	// lfsx f31,r27,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + r30.u32);
	f31.f64 = double(temp.f32);
	// stfs f31,88(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// fcmpu cr6,f31,f28
	cr6.compare(f31.f64, f28.f64);
	// ble cr6,0x827b3928
	if (!cr6.gt) goto loc_827B3928;
	// lbz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 4);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(ctx.r11.u32, 1, xer);
	// bne cr6,0x827b38c0
	if (!cr6.eq) goto loc_827B38C0;
	// rlwinm r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827b3928
	if (!cr6.eq) goto loc_827B3928;
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
	// addi r11,r31,112
	ctx.r11.s64 = r31.s64 + 112;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// ld r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// bl 0x821bad60
	ctx.lr = 0x827B380C;
	sub_821BAD60(ctx, base);
	// lfs f13,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f26
	cr6.compare(ctx.f0.f64, f26.f64);
	// ble cr6,0x827b384c
	if (!cr6.gt) goto loc_827B384C;
	// lfs f0,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f28
	cr6.compare(ctx.f13.f64, f28.f64);
	// ble cr6,0x827b384c
	if (!cr6.gt) goto loc_827B384C;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x821bab48
	ctx.lr = 0x827B384C;
	sub_821BAB48(ctx, base);
loc_827B384C:
	// lfs f13,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f0,28(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,24(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f4,f0,f8
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f12,20(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f11,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f7,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fmsubs f6,f0,f10,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f6.f64)));
	// fmadds f3,f12,f9,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f3.f64)));
	// fmadds f4,f12,f10,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f12.f64, ctx.f10.f64, ctx.f4.f64)));
	// fmadds f5,f0,f9,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f5.f64)));
	// fnmsubs f6,f12,f8,f6
	ctx.f6.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f8.f64, -ctx.f6.f64)));
	// fmadds f0,f0,f7,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f3.f64)));
	// fmadds f4,f13,f7,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f4.f64)));
	// fmadds f5,f13,f10,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f5.f64)));
	// fnmsubs f10,f11,f7,f6
	ctx.f10.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f7.f64, -ctx.f6.f64)));
	// stfs f10,28(r28)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r28.u32 + 28, temp.u32);
	// fnmsubs f0,f13,f8,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f0.f64)));
	// stfs f0,24(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 24, temp.u32);
	// fnmsubs f11,f11,f9,f4
	ctx.f11.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f9.f64, -ctx.f4.f64)));
	// stfs f11,20(r28)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r28.u32 + 20, temp.u32);
	// fnmsubs f12,f12,f7,f5
	ctx.f12.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f7.f64, -ctx.f5.f64)));
	// stfs f12,16(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 16, temp.u32);
	// b 0x827b3928
	goto loc_827B3928;
loc_827B38C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827b3904
	if (!cr6.eq) goto loc_827B3904;
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 * f31.f64));
	// fcmpu cr6,f0,f24
	cr6.compare(ctx.f0.f64, f24.f64);
	// ble cr6,0x827b3928
	if (!cr6.gt) goto loc_827B3928;
	// rlwinm r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827b3928
	if (!cr6.eq) goto loc_827B3928;
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// lvx128 v13,r9,r14
	ea = (ctx.r9.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r28,16
	ctx.r11.s64 = r28.s64 + 16;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x827b3928
	goto loc_827B3928;
loc_827B3904:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(ctx.r11.u32, 2, xer);
	// bne cr6,0x827b3928
	if (!cr6.eq) goto loc_827B3928;
	// rlwinm r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x827b3928
	if (!cr6.eq) goto loc_827B3928;
	// lfs f0,16(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f31,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f13.f64)));
	// stfs f0,16(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 16, temp.u32);
loc_827B3928:
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x827b37ac
	if (!cr6.eq) goto loc_827B37AC;
loc_827B3938:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// bne cr6,0x827b34b8
	if (!cr6.eq) goto loc_827B34B8;
loc_827B3950:
	// addi r1,r31,368
	ctx.r1.s64 = r31.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82990130
	ctx.lr = 0x827B395C;
	// b 0x8298eae0
	return;
}

DEFINE_REX_FUNC(sub_827D5200) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,-1116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -1116);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827E9858) {
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
	ctx.lr = 0x827E9860;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x827e989c
	if (cr6.eq) goto loc_827E989C;
	// li r31,0
	r31.s64 = 0;
loc_827E987C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x8218be78
	ctx.lr = 0x827E9888;
	sub_8218BE78(ctx, base);
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, ctx.r11.s32, xer);
	// blt cr6,0x827e987c
	if (cr6.lt) goto loc_827E987C;
loc_827E989C:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827e98b8
	if (cr6.eq) goto loc_827E98B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827fa890
	ctx.lr = 0x827E98B0;
	sub_827FA890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218be78
	ctx.lr = 0x827E98B8;
	sub_8218BE78(ctx, base);
loc_827E98B8:
	// lhz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 10);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x827e98cc
	if (cr6.eq) goto loc_827E98CC;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8218be78
	ctx.lr = 0x827E98CC;
	sub_8218BE78(ctx, base);
loc_827E98CC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_827ECD38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827ec7a0
	ctx.lr = 0x827ECD50;
	sub_827EC7A0(ctx, base);
	// lfs f13,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f6,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f5,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f11,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f10,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,2592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fmuls f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f6,f3,f10,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f8,f8,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f6.f64)));
	// fnmsubs f11,f9,f11,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f8.f64)));
	// fnmsubs f13,f13,f7,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f13,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f6,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f5,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f11,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f10,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f6,f3,f10,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f8,f8,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f6.f64)));
	// fnmsubs f11,f9,f11,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f8.f64)));
	// fnmsubs f13,f13,f7,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,16(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f8,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f6,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// lfs f12,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f6,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// lfs f9,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lfs f5,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f13,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fmuls f6,f4,f12
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmadds f6,f3,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f6.f64)));
	// fmadds f9,f9,f13,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f6.f64)));
	// fnmsubs f12,f10,f12,f9
	ctx.f12.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f9.f64)));
	// fnmsubs f13,f8,f13,f12
	ctx.f13.f64 = double(float(-std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f12.f64)));
	// fnmsubs f13,f7,f11,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f11.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,32(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f13,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f5,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// lfs f7,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f6,f4,f10
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmadds f6,f3,f11,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f6.f64)));
	// fmadds f8,f8,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f6.f64)));
	// fnmsubs f13,f13,f7,f8
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f8.f64)));
	// fnmsubs f13,f12,f11,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f13.f64)));
	// fnmsubs f13,f9,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,48(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lfs f13,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f6,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f5,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f11,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f10,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f6,f3,f10,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f8,f8,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f6.f64)));
	// fnmsubs f11,f9,f11,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f8.f64)));
	// fnmsubs f13,f13,f7,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f6,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f5,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f11,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f10,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f6,f3,f10,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f8,f8,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f6.f64)));
	// fnmsubs f11,f9,f11,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f8.f64)));
	// fnmsubs f13,f13,f7,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,20(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f13,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f5,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f6,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f11,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// lfs f10,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmadds f6,f3,f10,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f8,f8,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f6.f64)));
	// fnmsubs f11,f9,f11,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f8.f64)));
	// fnmsubs f13,f13,f7,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,36(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lfs f13,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f6,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f5,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f11,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f5,f6
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// lfs f8,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f6,f3,f8,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f8.f64, ctx.f5.f64)));
	// fmadds f9,f9,f7,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f6.f64)));
	// fnmsubs f11,f10,f11,f9
	ctx.f11.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f9.f64)));
	// fnmsubs f13,f13,f7,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f8,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f8.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,52(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f6,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f5,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f11,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f10,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f6,f3,f10,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f8,f8,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f6.f64)));
	// fnmsubs f11,f9,f11,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f8.f64)));
	// fnmsubs f13,f13,f7,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f6,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f5,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f11,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f10,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f6,f3,f10,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f8,f8,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f6.f64)));
	// fnmsubs f11,f9,f11,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f8.f64)));
	// fnmsubs f13,f13,f7,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,24(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f10,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f7,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// lfs f5,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// lfs f6,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f4,f3,f9,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f9.f64, ctx.f4.f64)));
	// fmadds f7,f7,f6,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f6.f64, ctx.f4.f64)));
	// fnmsubs f11,f10,f11,f7
	ctx.f11.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f7.f64)));
	// fnmsubs f13,f13,f6,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f6.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f9,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f9.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,40(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f6,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f5,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f11,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f10,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f6,f3,f10,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f8,f8,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f6.f64)));
	// fnmsubs f11,f9,f11,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f8.f64)));
	// fnmsubs f13,f13,f7,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,56(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lfs f13,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f6,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f5,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f11,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f10,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f6,f3,f10,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f8,f8,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f6.f64)));
	// fnmsubs f11,f9,f11,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f8.f64)));
	// fnmsubs f13,f13,f7,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f6,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f2,f6,f7
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f10,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f5,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmadds f4,f3,f10,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f4.f64)));
	// fmadds f8,f2,f5,f4
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f4.f64)));
	// fnmsubs f11,f9,f11,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f8.f64)));
	// fnmsubs f13,f13,f5,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f5.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,28(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f6,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f5,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f11,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f10,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f6,f3,f10,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f8,f8,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f6.f64)));
	// fnmsubs f11,f9,f11,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f8.f64)));
	// fnmsubs f13,f13,f7,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,44(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lfs f13,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f8,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f6,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// lfs f5,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lfs f11,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f9,f5,f9
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lfs f10,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f5,f4,f11
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f6,f3,f10,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f8,f8,f7,f6
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f6.f64)));
	// fnmsubs f11,f9,f11,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f8.f64)));
	// fnmsubs f13,f13,f7,f11
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fnmsubs f13,f12,f10,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f10.f64, -ctx.f13.f64)));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828076A8) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x827d87e8
	sub_827D87E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82850508) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addic. r11,r11,-1
	xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bne 0x82850544
	if (!cr0.eq) goto loc_82850544;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x829d92e8
	ctx.lr = 0x82850534;
	D3DResource_Release(ctx, base);
	// bl 0x827d8590
	ctx.lr = 0x82850538;
	sub_827D8590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218be78
	ctx.lr = 0x82850540;
	sub_8218BE78(ctx, base);
	// bl 0x827d85d0
	ctx.lr = 0x82850544;
	sub_827D85D0(ctx, base);
loc_82850544:
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

DEFINE_REX_FUNC(sub_82850F98) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac0
	ctx.lr = 0x82850FA0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82850fcc
	if (cr6.eq) goto loc_82850FCC;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// ble cr6,0x82850fd0
	if (!cr6.gt) goto loc_82850FD0;
loc_82850FCC:
	// lwz r28,4(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 4);
loc_82850FD0:
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// addi r29,r10,19580
	r29.s64 = ctx.r10.s64 + 19580;
	// lis r31,-31982
	r31.s64 = -2095972352;
	// beq cr6,0x82851000
	if (cr6.eq) goto loc_82851000;
	// lwz r10,-388(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + -388);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82851000
	if (cr6.eq) goto loc_82851000;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,-388(r29)
	REX_STORE_U32(r29.u32 + -388, ctx.r11.u32);
	// bl 0x829d1490
	ctx.lr = 0x82851000;
	sub_829D1490(ctx, base);
loc_82851000:
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// lwz r4,12(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 12);
	// bl 0x829ca310
	ctx.lr = 0x8285100C;
	sub_829CA310(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,12(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,28(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// bl 0x829ca1f0
	ctx.lr = 0x8285102C;
	sub_829CA1F0(ctx, base);
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,19188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 19188);
	// addi r11,r11,16164
	ctx.r11.s64 = ctx.r11.s64 + 16164;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x829ccea8
	ctx.lr = 0x82851050;
	sub_829CCEA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8298eb10
	return;
}

DEFINE_REX_FUNC(sub_82855608) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82856B58) {
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
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r11,r11,22564
	ctx.r11.s64 = ctx.r11.s64 + 22564;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82856b84
	if (cr6.eq) goto loc_82856B84;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8024(r10)
	REX_STORE_U32(ctx.r10.u32 + 8024, ctx.r11.u32);
loc_82856B84:
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,22744
	ctx.r11.s64 = ctx.r11.s64 + 22744;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x82856ba4
	if (cr6.eq) goto loc_82856BA4;
	// bl 0x82878770
	ctx.lr = 0x82856BA0;
	sub_82878770(ctx, base);
	// b 0x82856ba8
	goto loc_82856BA8;
loc_82856BA4:
	// bl 0x8286d9d0
	ctx.lr = 0x82856BA8;
	sub_8286D9D0(ctx, base);
loc_82856BA8:
	// bl 0x82853c60
	ctx.lr = 0x82856BAC;
	sub_82853C60(ctx, base);
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// li r7,127
	ctx.r7.s64 = 127;
	// addi r3,r11,22488
	ctx.r3.s64 = ctx.r11.s64 + 22488;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x828719c8
	ctx.lr = 0x82856BC8;
	sub_828719C8(ctx, base);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// stw r3,22480(r11)
	REX_STORE_U32(ctx.r11.u32 + 22480, ctx.r3.u32);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// stw r3,-31144(r11)
	REX_STORE_U32(ctx.r11.u32 + -31144, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82858570) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x8285bc10
	ctx.lr = 0x8285858C;
	sub_8285BC10(ctx, base);
	// lhz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 14);
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r11,r11,22784
	ctx.r11.s64 = ctx.r11.s64 + 22784;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82859640
	ctx.lr = 0x828585AC;
	sub_82859640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828580a0
	ctx.lr = 0x828585B4;
	sub_828580A0(ctx, base);
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

DEFINE_REX_FUNC(sub_82859F70) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x82859e48
	ctx.lr = 0x82859F88;
	sub_82859E48(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82859fe8
	if (cr6.eq) goto loc_82859FE8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(ctx.r11.s32, 1, xer);
	// bne cr6,0x82859fb4
	if (!cr6.eq) goto loc_82859FB4;
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82859FB4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// bne cr6,0x82859fe8
	if (!cr6.eq) goto loc_82859FE8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82859FE8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8285D8A8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	ctx.lr = 0x8285D8B0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r4,r11,30824
	ctx.r4.s64 = ctx.r11.s64 + 30824;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827f13d8
	ctx.lr = 0x8285D8CC;
	sub_827F13D8(ctx, base);
	// lhz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 8);
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8285d990
	if (cr6.eq) goto loc_8285D990;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// li r24,0
	r24.s64 = 0;
	// addi r27,r11,30816
	r27.s64 = ctx.r11.s64 + 30816;
loc_8285D8E8:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lwzx r31,r11,r24
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// lhz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 140);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8285d97c
	if (cr6.eq) goto loc_8285D97C;
	// li r29,0
	r29.s64 = 0;
loc_8285D904:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8285d968
	if (cr6.eq) goto loc_8285D968;
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r9,132(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 132);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r4,64(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r26.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8295b098
	ctx.lr = 0x8285D94C;
	sub_8295B098(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82515a88
	ctx.lr = 0x8285D960;
	sub_82515A88(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
loc_8285D968:
	// lhz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 140);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x8285d904
	if (cr6.lt) goto loc_8285D904;
loc_8285D97C:
	// lhz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 8);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, ctx.r11.s32, xer);
	// blt cr6,0x8285d8e8
	if (cr6.lt) goto loc_8285D8E8;
loc_8285D990:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x827f1428
	ctx.lr = 0x8285D998;
	sub_827F1428(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8298eb04
	return;
}

DEFINE_REX_FUNC(sub_82866758) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298ea98
	ctx.lr = 0x82866760;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r11,r27,12
	ctx.r11.s64 = r27.s64 + 12;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwzx r21,r11,r3
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// li r16,32
	r16.s64 = 32;
	// li r17,48
	r17.s64 = 48;
	// li r19,16
	r19.s64 = 16;
	// beq cr6,0x828667d0
	if (cr6.eq) goto loc_828667D0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r31,r16
	ea = (r31.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r31,r19
	ea = (r31.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r31,r17
	ea = (r31.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82866810
	goto loc_82866810;
loc_828667D0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvx128 v0,r26,r19
	ea = (r26.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,2592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82866810:
	// lhz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 4);
	// li r29,-2
	r29.s64 = -2;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828669b4
	if (cr6.eq) goto loc_828669B4;
	// li r25,0
	r25.s64 = 0;
	// lis r22,-31982
	r22.s64 = -2095972352;
	// li r18,1
	r18.s64 = 1;
loc_82866830:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwzx r30,r25,r11
	r30.u64 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x828669a0
	if (cr6.eq) goto loc_828669A0;
	// lbz r5,23(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 23);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82866870
	if (cr6.eq) goto loc_82866870;
	// clrlwi r11,r28,27
	ctx.r11.u64 = r28.u32 & 0x1F;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// srawi r9,r28,5
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1F) != 0);
	ctx.r9.s64 = r28.s32 >> 5;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r11.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828669a0
	if (cr6.eq) goto loc_828669A0;
loc_82866870:
	// lbz r11,25(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 25);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828668b0
	if (cr6.eq) goto loc_828668B0;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82866894
	if (cr6.eq) goto loc_82866894;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,18992(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 18992);
	// bl 0x8284e430
	ctx.lr = 0x82866890;
	sub_8284E430(ctx, base);
	// li r29,-1
	r29.s64 = -1;
loc_82866894:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82855890
	ctx.lr = 0x828668AC;
	sub_82855890(ctx, base);
	// b 0x828669a0
	goto loc_828669A0;
loc_828668B0:
	// cmpw cr6,r5,r29
	cr6.compare<int32_t>(ctx.r5.s32, r29.s32, xer);
	// beq cr6,0x8286698c
	if (cr6.eq) goto loc_8286698C;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8285c038
	ctx.lr = 0x828668C8;
	sub_8285C038(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82866980
	if (cr6.eq) goto loc_82866980;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r31,r17
	ea = (r31.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r31,r19
	ea = (r31.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r31,r16
	ea = (r31.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vspltw v7,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xFF));
	// vspltw v2,v11,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0xAA));
	// vspltw v11,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// vmulfp128 v7,v0,v7
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)));
	// vspltw v6,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vspltw v1,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xAA));
	// vspltw v10,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// lvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// vspltw v5,v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v6,v0,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v6.f32)));
	// vspltw v31,v9,1
	simde_mm_store_si128((simde__m128i*)v31.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0xAA));
	// vspltw v9,v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), 0x55));
	// lvx128 v8,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v5,v0,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)));
	// vspltw v3,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xFF));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// vspltw v30,v8,1
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0xAA));
	// vmaddfp v7,v13,v2,v7
	simde_mm_store_ps(ctx.v7.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v2.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vspltw v8,v8,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), 0x55));
	// vmaddfp v0,v0,v3,v4
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v3.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v6,v13,v1,v6
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v1.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v5,v13,v31,v5
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v31.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v0,v13,v30,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(v30.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v12,v11,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v11,v12,v10,v6
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v10,v12,v9,v5
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v0,v12,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82866980:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,18992(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 18992);
	// bl 0x8284e430
	ctx.lr = 0x8286698C;
	sub_8284E430(ctx, base);
loc_8286698C:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82855650
	ctx.lr = 0x828669A0;
	sub_82855650(ctx, base);
loc_828669A0:
	// lhz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, ctx.r11.s32, xer);
	// blt cr6,0x82866830
	if (cr6.lt) goto loc_82866830;
loc_828669B4:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8298eae8
	return;
}

DEFINE_REX_FUNC(sub_828855F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82885620;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r4,r11,-27852
	ctx.r4.s64 = ctx.r11.s64 + -27852;
	// bl 0x827f1fb0
	ctx.lr = 0x82885634;
	sub_827F1FB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82885648;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
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

DEFINE_REX_FUNC(sub_82888830) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r31,r11,-28916
	r31.s64 = ctx.r11.s64 + -28916;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8288895c
	if (!cr6.eq) goto loc_8288895C;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8218be28
	ctx.lr = 0x82888860;
	sub_8218BE28(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82888874
	if (cr6.eq) goto loc_82888874;
	// bl 0x827fdc48
	ctx.lr = 0x82888870;
	sub_827FDC48(ctx, base);
	// b 0x82888878
	goto loc_82888878;
loc_82888874:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82888878:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r11,r11,-25688
	ctx.r11.s64 = ctx.r11.s64 + -25688;
	// lis r10,-32120
	ctx.r10.s64 = -2105016320;
	// addi r9,r9,-30904
	ctx.r9.s64 = ctx.r9.s64 + -30904;
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r11,r10,22720
	ctx.r11.s64 = ctx.r10.s64 + 22720;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// lis r30,-31981
	r30.s64 = -2095906816;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// std r9,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r9.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// std r10,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r10.u64);
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// li r10,60
	ctx.r10.s64 = 60;
	// lwz r4,-28932(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + -28932);
	// addi r11,r11,8748
	ctx.r11.s64 = ctx.r11.s64 + 8748;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bne cr6,0x828888f4
	if (!cr6.eq) goto loc_828888F4;
	// bl 0x82885a78
	ctx.lr = 0x828888F0;
	sub_82885A78(ctx, base);
	// lwz r4,-28932(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + -28932);
loc_828888F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x827fcd60
	ctx.lr = 0x82888900;
	sub_827FCD60(ctx, base);
	// lwz r11,-28932(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28932);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r4,r11,16,22,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FF;
	// bl 0x827e8bd0
	ctx.lr = 0x82888918;
	sub_827E8BD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,28
	ctx.r3.s64 = ctx.r10.s64 + 28;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x827e8ca0
	ctx.lr = 0x82888934;
	sub_827E8CA0(ctx, base);
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,8772
	ctx.r4.s64 = ctx.r11.s64 + 8772;
	// bl 0x827fd440
	ctx.lr = 0x82888944;
	sub_827FD440(ctx, base);
	// lis r11,-31980
	ctx.r11.s64 = -2095841280;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,31964(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 31964);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x827eb590
	ctx.lr = 0x8288895C;
	sub_827EB590(ctx, base);
loc_8288895C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_82893148) {
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
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-28832
	ctx.r3.s64 = ctx.r11.s64 + -28832;
	// bl 0x828af2a8
	ctx.lr = 0x82893164;
	sub_828AF2A8(ctx, base);
	// bl 0x828994f8
	ctx.lr = 0x82893168;
	sub_828994F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8289AC30) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x8289AC38;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// beq cr6,0x8289ad00
	if (cr6.eq) goto loc_8289AD00;
	// lbz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 64);
	// lwz r7,116(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mulli r9,r11,14560
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14560));
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r11,r11,-19824
	ctx.r11.s64 = ctx.r11.s64 + -19824;
	// lwz r10,232(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwz r10,14516(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 14516);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x8289acb4
	if (cr6.eq) goto loc_8289ACB4;
	// lbz r11,232(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 232);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8289acb4
	if (!cr6.eq) goto loc_8289ACB4;
	// rotlwi r3,r7,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289ACA8;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fa988
	ctx.lr = 0x8289ACB4;
	sub_822FA988(ctx, base);
loc_8289ACB4:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8289acf8
	if (cr6.eq) goto loc_8289ACF8;
	// lbz r11,232(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 232);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8289acf8
	if (cr6.eq) goto loc_8289ACF8;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x8289acf8
	if (!cr6.eq) goto loc_8289ACF8;
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289ACF8;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
loc_8289ACF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828a7420
	ctx.lr = 0x8289AD00;
	sub_828A7420(ctx, base);
loc_8289AD00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_828A3758) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab4
	ctx.lr = 0x828A3760;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// addi r23,r31,100
	r23.s64 = r31.s64 + 100;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_828A3784:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x828a3784
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_828A3784;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r24,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r24.u32);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// lfs f31,2592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2592);
	f31.f64 = double(temp.f32);
loc_828A37A0:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// stfsx f31,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x828a37a0
	if (cr6.lt) goto loc_828A37A0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r30,1
	r30.s64 = 1;
	// addi r4,r11,-13624
	ctx.r4.s64 = ctx.r11.s64 + -13624;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r25,5
	r25.s64 = 5;
	// addi r29,r31,132
	r29.s64 = r31.s64 + 132;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r30,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stb r25,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r25.u8);
	// bl 0x828a3618
	ctx.lr = 0x828A37F4;
	sub_828A3618(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// li r26,4
	r26.s64 = 4;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// addi r4,r11,-13628
	ctx.r4.s64 = ctx.r11.s64 + -13628;
	// stb r30,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, r30.u8);
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r28,r31,128
	r28.s64 = r31.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r26,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r26.u8);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x828a3618
	ctx.lr = 0x828A3828;
	sub_828A3618(ctx, base);
	// li r27,3
	r27.s64 = 3;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-3608
	ctx.r4.s64 = ctx.r11.s64 + -3608;
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r27,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r27.u8);
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// bl 0x828a3618
	ctx.lr = 0x828A3850;
	sub_828A3618(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r27,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r27.u8);
	// addi r4,r11,-13632
	ctx.r4.s64 = ctx.r11.s64 + -13632;
	// stw r26,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r26.u32);
	// addi r5,r31,116
	ctx.r5.s64 = r31.s64 + 116;
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828a3618
	ctx.lr = 0x828A3874;
	sub_828A3618(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r5,r31,124
	ctx.r5.s64 = r31.s64 + 124;
	// stb r27,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r27.u8);
	// addi r4,r11,-13644
	ctx.r4.s64 = ctx.r11.s64 + -13644;
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x828a3618
	ctx.lr = 0x828A389C;
	sub_828A3618(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// li r28,2
	r28.s64 = 2;
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r25,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stb r28,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r28.u8);
	// stb r28,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, r28.u8);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_828A38E4:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x828a38e4
	if (cr6.lt) goto loc_828A38E4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r29,r31,120
	r29.s64 = r31.s64 + 120;
	// addi r4,r11,-13660
	ctx.r4.s64 = ctx.r11.s64 + -13660;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x828a3618
	ctx.lr = 0x828A3928;
	sub_828A3618(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_828A392C:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(ctx.r11.u32, 5, xer);
	// stfsx f31,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// blt cr6,0x828a392c
	if (cr6.lt) goto loc_828A392C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stb r30,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// addi r4,r11,-13680
	ctx.r4.s64 = ctx.r11.s64 + -13680;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stb r30,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828a3618
	ctx.lr = 0x828A3974;
	sub_828A3618(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r30,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// addi r4,r11,-13704
	ctx.r4.s64 = ctx.r11.s64 + -13704;
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828a3618
	ctx.lr = 0x828A3998;
	sub_828A3618(ctx, base);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stb r30,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// addi r4,r11,-13724
	ctx.r4.s64 = ctx.r11.s64 + -13724;
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// addi r5,r31,108
	ctx.r5.s64 = r31.s64 + 108;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828a3618
	ctx.lr = 0x828A39BC;
	sub_828A3618(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_828A39C4:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x828a39f0
	if (cr6.eq) goto loc_828A39F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(ctx.r11.s32, 9, xer);
	// blt cr6,0x828a39c4
	if (cr6.lt) goto loc_828A39C4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8298eb04
	return;
loc_828A39F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8298eb04
	return;
}

DEFINE_REX_FUNC(sub_828BA198) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,3068(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3068);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x828ba1f0
	if (!cr6.lt) goto loc_828BA1F0;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828ba1f0
	if (!cr6.eq) goto loc_828BA1F0;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828ba1f0
	if (!cr6.eq) goto loc_828BA1F0;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// b 0x828ba510
	goto loc_828BA510;
loc_828BA1F0:
	// lbz r11,193(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 193);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828ba214
	if (!cr6.eq) goto loc_828BA214;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x828ba214
	if (!cr6.eq) goto loc_828BA214;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	ctx.f1.f64 = double(temp.f32);
	// b 0x828ba510
	goto loc_828BA510;
loc_828BA214:
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r30,r10,-19824
	r30.s64 = ctx.r10.s64 + -19824;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// lfs f29,2592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2592);
	f29.f64 = double(temp.f32);
	// beq cr6,0x828ba254
	if (cr6.eq) goto loc_828BA254;
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// bgt cr6,0x828ba244
	if (cr6.gt) goto loc_828BA244;
	// fmr f31,f30
	f31.f64 = f30.f64;
	// b 0x828ba334
	goto loc_828BA334;
loc_828BA244:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f29.f64);
	// blt cr6,0x828ba334
	if (cr6.lt) goto loc_828BA334;
	// fmr f31,f29
	f31.f64 = f29.f64;
	// b 0x828ba334
	goto loc_828BA334;
loc_828BA254:
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lbz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 64);
	// lbz r8,192(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 192);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r11,-18780
	ctx.r10.s64 = ctx.r11.s64 + -18780;
	// lwz r11,232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 232);
	// mulli r9,r9,14560
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(14560));
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,200(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 200);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwz r11,14516(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 14516);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r9,-31981
	ctx.r9.s64 = -2095906816;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,-18764(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + -18764);
	// lbz r9,231(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 231);
	// rlwinm r9,r9,30,2,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFF8;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v0,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82895aa8
	ctx.lr = 0x828BA2BC;
	sub_82895AA8(ctx, base);
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// beq cr6,0x828ba2ec
	if (cr6.eq) goto loc_828BA2EC;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828ba2f0
	goto loc_828BA2F0;
loc_828BA2EC:
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
loc_828BA2F0:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ba304
	if (cr6.eq) goto loc_828BA304;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// b 0x828ba308
	goto loc_828BA308;
loc_828BA304:
	// lfs f12,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
loc_828BA308:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x828ba318
	if (cr6.gt) goto loc_828BA318;
	// fmr f31,f30
	f31.f64 = f30.f64;
	// b 0x828ba334
	goto loc_828BA334;
loc_828BA318:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x828ba328
	if (cr6.lt) goto loc_828BA328;
	// fmr f31,f29
	f31.f64 = f29.f64;
	// b 0x828ba334
	goto loc_828BA334;
loc_828BA328:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fdivs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_828BA334:
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f29,f31
	ctx.f0.f64 = double(float(f29.f64 - f31.f64));
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,560
	ctx.r11.s64 = ctx.r11.s64 + 560;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lbz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 72);
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vlogefp v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v13.f32[0] = log2f(ctx.v13.f32[0]);
	ctx.v13.f32[1] = log2f(ctx.v13.f32[1]);
	ctx.v13.f32[2] = log2f(ctx.v13.f32[2]);
	ctx.v13.f32[3] = log2f(ctx.v13.f32[3]);
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-24(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f31,f13
	ctx.f11.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// vmulfp128 v13,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vlogefp v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v13.f32[0] = log2f(ctx.v13.f32[0]);
	ctx.v13.f32[1] = log2f(ctx.v13.f32[1]);
	ctx.v13.f32[2] = log2f(ctx.v13.f32[2]);
	ctx.v13.f32[3] = log2f(ctx.v13.f32[3]);
	// vmulfp128 v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5248(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 5248);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,-28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 196);
	// fsel f29,f11,f13,f0
	f29.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f30,f10,f12,f0
	f30.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// beq cr6,0x828ba414
	if (cr6.eq) goto loc_828BA414;
	// lbz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 64);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r7,232(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 232);
	// mulli r9,r9,14560
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(14560));
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r9,14512(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 14512);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x828ba414
	if (cr6.eq) goto loc_828BA414;
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x828ba404
	if (cr6.eq) goto loc_828BA404;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x828ba408
	goto loc_828BA408;
loc_828BA404:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828BA408:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x828ef860
	ctx.lr = 0x828BA410;
	sub_828EF860(ctx, base);
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 196);
loc_828BA414:
	// lbz r9,73(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 73);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x828ba468
	if (cr6.eq) goto loc_828BA468;
	// lbz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 64);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r7,232(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 232);
	// mulli r10,r10,14560
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14560));
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,14512(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 14512);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x828ba468
	if (cr6.eq) goto loc_828BA468;
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x828ba458
	if (cr6.eq) goto loc_828BA458;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x828ba45c
	goto loc_828BA45C;
loc_828BA458:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828BA45C:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x828ef860
	ctx.lr = 0x828BA464;
	sub_828EF860(ctx, base);
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 196);
loc_828BA468:
	// lbz r9,74(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 74);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x828ba4bc
	if (cr6.eq) goto loc_828BA4BC;
	// lbz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 64);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r7,232(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 232);
	// mulli r10,r10,14560
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14560));
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,14512(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 14512);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x828ba4bc
	if (cr6.eq) goto loc_828BA4BC;
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x828ba4ac
	if (cr6.eq) goto loc_828BA4AC;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x828ba4b0
	goto loc_828BA4B0;
loc_828BA4AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828BA4B0:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x828ef860
	ctx.lr = 0x828BA4B8;
	sub_828EF860(ctx, base);
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 196);
loc_828BA4BC:
	// lbz r9,75(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 75);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x828ba50c
	if (cr6.eq) goto loc_828BA50C;
	// lbz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 64);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r7,232(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 232);
	// mulli r10,r10,14560
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14560));
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,14512(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 14512);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x828ba50c
	if (cr6.eq) goto loc_828BA50C;
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x828ba500
	if (cr6.eq) goto loc_828BA500;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x828ba504
	goto loc_828BA504;
loc_828BA500:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828BA504:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x828ef860
	ctx.lr = 0x828BA50C;
	sub_828EF860(ctx, base);
loc_828BA50C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_828BA510:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828E0D70) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eacc
	ctx.lr = 0x828E0D78;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r30,0
	r30.s64 = 0;
	// lhz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828e0dcc
	if (cr6.eq) goto loc_828E0DCC;
	// li r31,0
	r31.s64 = 0;
loc_828E0D9C:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 48);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828E0DB8;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 52);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, ctx.r11.s32, xer);
	// blt cr6,0x828e0d9c
	if (cr6.lt) goto loc_828E0D9C;
loc_828E0DCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_828E4CF8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828e4288
	ctx.lr = 0x828E4D10;
	sub_828E4288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828e0b48
	ctx.lr = 0x828E4D18;
	sub_828E0B48(ctx, base);
	// bl 0x828e0af0
	ctx.lr = 0x828E4D1C;
	sub_828E0AF0(ctx, base);
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

DEFINE_REX_FUNC(sub_828E6050) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lfs f0,516(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// vspltw v13,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// vmulfp128 v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32)));
	// bgelr cr6
	if (!cr6.lt) return;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// li r6,480
	ctx.r6.s64 = 480;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,464
	ctx.r7.s64 = 464;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_828E609C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r11,688
	ctx.r8.s64 = ctx.r11.s64 + 688;
	// lvx128 v0,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v0,v0,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v13,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v10,v13,99
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x9C));
	// lvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpermwi128 v13,v13,135
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x78));
	// addi r11,r11,672
	ctx.r11.s64 = ctx.r11.s64 + 672;
	// vpermwi128 v9,v0,135
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v8,v0,99
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x9C));
	// vmaddfp v11,v9,v10,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v10.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v13,v8,v13,v11
	simde_mm_store_ps(ctx.v13.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, xer);
	// blt cr6,0x828e609c
	if (cr6.lt) goto loc_828E609C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828EF880) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x828ef8c0
	if (cr6.eq) goto loc_828EF8C0;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lbz r11,686(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 686);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x828ef8c0
	if (cr6.eq) goto loc_828EF8C0;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
loc_828EF8C0:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x828ef8d4
	if (cr6.eq) goto loc_828EF8D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828ca2b0
	ctx.lr = 0x828EF8D4;
	sub_828CA2B0(ctx, base);
loc_828EF8D4:
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
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

DEFINE_REX_FUNC(sub_828F1C58) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// bgt cr6,0x828f1e64
	if (cr6.gt) goto loc_828F1E64;
	// lis r12,-32113
	ctx.r12.s64 = -2104557568;
	// addi r12,r12,7300
	ctx.r12.s64 = ctx.r12.s64 + 7300;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_828F1CB8;
	case 1:
		goto loc_828F1CE4;
	case 2:
		goto loc_828F1E64;
	case 3:
		goto loc_828F1D08;
	case 4:
		goto loc_828F1D44;
	case 5:
		goto loc_828F1D68;
	case 6:
		goto loc_828F1D8C;
	case 7:
		goto loc_828F1DB0;
	case 8:
		goto loc_828F1DD4;
	case 9:
		goto loc_828F1DF8;
	case 10:
		goto loc_828F1E1C;
	case 11:
		goto loc_828F1E64;
	case 12:
		goto loc_828F1E40;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_828F1CB8:
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8218be28
	ctx.lr = 0x828F1CC0;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828f1e64
	if (cr6.eq) goto loc_828F1E64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828edea0
	ctx.lr = 0x828F1CD4;
	sub_828EDEA0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828F1CE4:
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x8218be28
	ctx.lr = 0x828F1CEC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828f1e64
	if (cr6.eq) goto loc_828F1E64;
	// bl 0x828eca88
	ctx.lr = 0x828F1CF8;
	sub_828ECA88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828F1D08:
	// li r3,576
	ctx.r3.s64 = 576;
	// bl 0x8218be28
	ctx.lr = 0x828F1D10;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828f1e64
	if (cr6.eq) goto loc_828F1E64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,2592(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2592);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8291e508
	ctx.lr = 0x828F1D34;
	sub_8291E508(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828F1D44:
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x8218be28
	ctx.lr = 0x828F1D4C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828f1e64
	if (cr6.eq) goto loc_828F1E64;
	// bl 0x828f8c78
	ctx.lr = 0x828F1D58;
	sub_828F8C78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828F1D68:
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x8218be28
	ctx.lr = 0x828F1D70;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828f1e64
	if (cr6.eq) goto loc_828F1E64;
	// bl 0x8290ce60
	ctx.lr = 0x828F1D7C;
	sub_8290CE60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828F1D8C:
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x8218be28
	ctx.lr = 0x828F1D94;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828f1e64
	if (cr6.eq) goto loc_828F1E64;
	// bl 0x8294e270
	ctx.lr = 0x828F1DA0;
	sub_8294E270(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828F1DB0:
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x8218be28
	ctx.lr = 0x828F1DB8;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828f1e64
	if (cr6.eq) goto loc_828F1E64;
	// bl 0x8294a788
	ctx.lr = 0x828F1DC4;
	sub_8294A788(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828F1DD4:
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x8218be28
	ctx.lr = 0x828F1DDC;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828f1e64
	if (cr6.eq) goto loc_828F1E64;
	// bl 0x82946448
	ctx.lr = 0x828F1DE8;
	sub_82946448(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828F1DF8:
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x8218be28
	ctx.lr = 0x828F1E00;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828f1e64
	if (cr6.eq) goto loc_828F1E64;
	// bl 0x8293fcf8
	ctx.lr = 0x828F1E0C;
	sub_8293FCF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828F1E1C:
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x8218be28
	ctx.lr = 0x828F1E24;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828f1e64
	if (cr6.eq) goto loc_828F1E64;
	// bl 0x8290fb78
	ctx.lr = 0x828F1E30;
	sub_8290FB78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828F1E40:
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x8218be28
	ctx.lr = 0x828F1E48;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x828f1e64
	if (cr6.eq) goto loc_828F1E64;
	// bl 0x828f3c90
	ctx.lr = 0x828F1E54;
	sub_828F3C90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_828F1E64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_828FEB98) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r30,r31,288
	r30.s64 = r31.s64 + 288;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828FEBD4;
	REX_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vspltisw v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_set1_epi32(int(0x0)));
	// lvx128 v0,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v9,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,320
	ctx.r11.s64 = 320;
	// vmrghw v12,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglw v10,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v11,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrglw v13,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v13,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v10,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrglw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmsum3fp128 v13,v0,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v11,v0,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmsum3fp128 v12,v0,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vmrghw v0,v11,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v13,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v0,r31,r11
	ea = (r31.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_829097C0) {
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
	ctx.lr = 0x829097C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32087
	ctx.r10.s64 = -2102853632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r29,r10,15288
	r29.s64 = ctx.r10.s64 + 15288;
	// lis r10,-31981
	ctx.r10.s64 = -2095906816;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,784
	ctx.r3.s64 = ctx.r10.s64 + 784;
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// bl 0x827eedf0
	ctx.lr = 0x829097F0;
	sub_827EEDF0(ctx, base);
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// addi r4,r11,15292
	ctx.r4.s64 = ctx.r11.s64 + 15292;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r3,r11,864
	ctx.r3.s64 = ctx.r11.s64 + 864;
	// bl 0x827eedf0
	ctx.lr = 0x82909804;
	sub_827EEDF0(ctx, base);
	// lis r11,58
	ctx.r11.s64 = 3801088;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r28,-1
	r28.s64 = -1;
	// ori r11,r11,47449
	ctx.r11.u64 = ctx.r11.u64 | 47449;
	// mulli r3,r31,1116
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(1116));
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, xer);
	// ble cr6,0x82909824
	if (!cr6.gt) goto loc_82909824;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82909824:
	// bl 0x8218be28
	ctx.lr = 0x82909828;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8290988c
	if (cr6.eq) goto loc_8290988C;
	// addi r7,r31,-1
	ctx.r7.s64 = r31.s64 + -1;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x82909884
	if (cr6.lt) goto loc_82909884;
	// lis r11,-21265
	ctx.r11.s64 = -1393623040;
	// addi r8,r3,36
	ctx.r8.s64 = ctx.r3.s64 + 36;
	// ori r9,r11,44269
	ctx.r9.u64 = ctx.r11.u64 | 44269;
loc_8290984C:
	// addi r11,r8,48
	ctx.r11.s64 = ctx.r8.s64 + 48;
	// stw r31,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r31.u32);
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r31,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r31.u32);
loc_8290985C:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8290985c
	if (!cr6.eq) goto loc_8290985C;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r8,r8,1116
	ctx.r8.s64 = ctx.r8.s64 + 1116;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x8290984c
	if (!cr6.lt) goto loc_8290984C;
loc_82909884:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82909894
	goto loc_82909894;
loc_8290988C:
	// li r31,0
	r31.s64 = 0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82909894:
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x829098b4
	if (!cr6.gt) goto loc_829098B4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_829098B4:
	// bl 0x8218be28
	ctx.lr = 0x829098B8;
	sub_8218BE28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// bl 0x8218be28
	ctx.lr = 0x829098C8;
	sub_8218BE28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,32(r30)
	REX_STORE_U32(r30.u32 + 32, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,36(r30)
	REX_STORE_U32(r30.u32 + 36, r31.u32);
	// stw r31,40(r30)
	REX_STORE_U32(r30.u32 + 40, r31.u32);
	// stw r31,44(r30)
	REX_STORE_U32(r30.u32 + 44, r31.u32);
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// bl 0x82904558
	ctx.lr = 0x829098E8;
	sub_82904558(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_829108D0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab0
	ctx.lr = 0x829108D8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,260(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// li r30,-1
	r30.s64 = -1;
	// li r28,-1
	r28.s64 = -1;
	// li r23,-1
	r23.s64 = -1;
	// lhz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 16);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bne cr6,0x8291091c
	if (!cr6.eq) goto loc_8291091C;
	// lhz r11,22(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 22);
	// li r23,0
	r23.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r30,r11,2
	r30.s64 = ctx.r11.s64 + 2;
	// b 0x8291097c
	goto loc_8291097C;
loc_8291091C:
	// lhz r11,18(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 18);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bne cr6,0x82910938
	if (!cr6.eq) goto loc_82910938;
	// li r30,0
	r30.s64 = 0;
	// li r23,1
	r23.s64 = 1;
	// li r28,2
	r28.s64 = 2;
	// b 0x8291097c
	goto loc_8291097C;
loc_82910938:
	// lhz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 20);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// lhz r11,22(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 22);
	// bne cr6,0x82910960
	if (!cr6.eq) goto loc_82910960;
	// subfic r11,r11,0
	xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// li r30,1
	r30.s64 = 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r23,2
	r23.s64 = 2;
	// clrlwi r28,r11,30
	r28.u64 = ctx.r11.u32 & 0x3;
	// b 0x8291097c
	goto loc_8291097C;
loc_82910960:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8291097c
	if (cr6.eq) goto loc_8291097C;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, xer);
	// bne cr6,0x8291097c
	if (!cr6.eq) goto loc_8291097C;
	// li r30,2
	r30.s64 = 2;
	// li r23,3
	r23.s64 = 3;
	// li r28,0
	r28.s64 = 0;
loc_8291097C:
	// mulli r11,r8,304
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(304));
	// add r24,r11,r5
	r24.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// addi r7,r28,8
	ctx.r7.s64 = r28.s64 + 8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r31,r11,r27
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + r27.u32);
	// lbz r11,80(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 80);
	// lhzx r29,r7,r27
	r29.u64 = REX_LOAD_U16(ctx.r7.u32 + r27.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x829109bc
	if (cr6.eq) goto loc_829109BC;
	// lwz r7,100(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 100);
	// cmpw cr6,r31,r7
	cr6.compare<int32_t>(r31.s32, ctx.r7.s32, xer);
	// beq cr6,0x829109c8
	if (cr6.eq) goto loc_829109C8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x829109d0
	if (!cr6.eq) goto loc_829109D0;
loc_829109BC:
	// lwz r11,104(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 104);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, ctx.r11.s32, xer);
	// bne cr6,0x829109d0
	if (!cr6.eq) goto loc_829109D0;
loc_829109C8:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// b 0x829109d8
	goto loc_829109D8;
loc_829109D0:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_829109D8:
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82910a48
	if (!cr6.gt) goto loc_82910A48;
	// addi r11,r5,292
	ctx.r11.s64 = ctx.r5.s64 + 292;
loc_829109E8:
	// cmpw cr6,r26,r8
	cr6.compare<int32_t>(r26.s32, ctx.r8.s32, xer);
	// beq cr6,0x82910a38
	if (cr6.eq) goto loc_82910A38;
	// lbz r31,0(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r22,r31,0,0,24
	r22.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x82910a38
	if (!cr6.eq) goto loc_82910A38;
	// rlwinm r31,r31,0,29,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82910a38
	if (!cr6.eq) goto loc_82910A38;
	// lbz r31,-212(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + -212);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82910a2c
	if (cr6.eq) goto loc_82910A2C;
	// lwz r22,-188(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + -188);
	// cmpw cr6,r22,r29
	cr6.compare<int32_t>(r22.s32, r29.s32, xer);
	// beq cr6,0x82910a54
	if (cr6.eq) goto loc_82910A54;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82910a38
	if (!cr6.eq) goto loc_82910A38;
loc_82910A2C:
	// lwz r31,-192(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -192);
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// beq cr6,0x82910a54
	if (cr6.eq) goto loc_82910A54;
loc_82910A38:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r11,r11,304
	ctx.r11.s64 = ctx.r11.s64 + 304;
	// cmpw cr6,r26,r6
	cr6.compare<int32_t>(r26.s32, ctx.r6.s32, xer);
	// blt cr6,0x829109e8
	if (cr6.lt) goto loc_829109E8;
loc_82910A48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8298eb00
	return;
loc_82910A54:
	// cmpw cr6,r26,r6
	cr6.compare<int32_t>(r26.s32, ctx.r6.s32, xer);
	// bge cr6,0x82910a48
	if (!cr6.lt) goto loc_82910A48;
	// add r31,r6,r25
	r31.u64 = ctx.r6.u64 + r25.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmpw cr6,r6,r31
	cr6.compare<int32_t>(ctx.r6.s32, r31.s32, xer);
	// bge cr6,0x82910aac
	if (!cr6.lt) goto loc_82910AAC;
	// mulli r11,r6,304
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(304));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
loc_82910A78:
	// lwz r6,124(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// cmplw cr6,r6,r3
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, xer);
	// bne cr6,0x82910a9c
	if (!cr6.eq) goto loc_82910A9C;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r6,r4
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, xer);
	// bne cr6,0x82910a9c
	if (!cr6.eq) goto loc_82910A9C;
	// lwz r6,-4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmpw cr6,r6,r29
	cr6.compare<int32_t>(ctx.r6.s32, r29.s32, xer);
	// beq cr6,0x82910aac
	if (cr6.eq) goto loc_82910AAC;
loc_82910A9C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,304
	ctx.r11.s64 = ctx.r11.s64 + 304;
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, r31.s32, xer);
	// blt cr6,0x82910a78
	if (cr6.lt) goto loc_82910A78;
loc_82910AAC:
	// cmpw cr6,r8,r31
	cr6.compare<int32_t>(ctx.r8.s32, r31.s32, xer);
	// bne cr6,0x82910a48
	if (!cr6.eq) goto loc_82910A48;
	// mulli r11,r8,304
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(304));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, r30.s32, xer);
	// lbz r8,292(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 292);
	// rlwimi r8,r6,6,0,25
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// stb r8,292(r11)
	REX_STORE_U8(ctx.r11.u32 + 292, ctx.r8.u8);
	// beq cr6,0x82910af8
	if (cr6.eq) goto loc_82910AF8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x82910ae4
	if (!cr6.gt) goto loc_82910AE4;
	// addi r7,r28,-1
	ctx.r7.s64 = r28.s64 + -1;
	// b 0x82910af8
	goto loc_82910AF8;
loc_82910AE4:
	// lhz r8,22(r27)
	ctx.r8.u64 = REX_LOAD_U16(r27.u32 + 22);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// addi r7,r8,2
	ctx.r7.s64 = ctx.r8.s64 + 2;
loc_82910AF8:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r4,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r4.u32);
	// stw r29,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, r29.u32);
	// li r31,16
	r31.s64 = 16;
	// li r28,112
	r28.s64 = 112;
	// li r25,128
	r25.s64 = 128;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f0,3068(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3068);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r3,160
	ctx.r8.s64 = ctx.r3.s64 + 160;
	// addi r7,r3,144
	ctx.r7.s64 = ctx.r3.s64 + 144;
	// stw r6,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r6.u32);
	// rlwinm r6,r29,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,176(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r29,r6
	ctx.r6.u64 = r29.u64 + ctx.r6.u64;
	// lvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r4,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + r30.u64;
	// lvlx v11,0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvrx v12,r31,r6
	temp.u32 = r31.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vupkhsh v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16))));
	// vcfsx v12,v12,0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmaddfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,176(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lvx128 v13,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx v12,r31,r8
	temp.u32 = r31.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r8,-32088
	ctx.r8.s64 = -2102919168;
	// vor v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// addi r4,r8,-656
	ctx.r4.s64 = ctx.r8.s64 + -656;
	// vupkhsh v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16))));
	// vcfsx v12,v12,0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmaddfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r11,r25
	ea = (ctx.r11.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x82910bc8
	if (cr6.lt) goto loc_82910BC8;
	// lwz r8,204(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// bge cr6,0x82910bc8
	if (!cr6.lt) goto loc_82910BC8;
	// lwz r8,140(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lvx128 v0,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82910bcc
	goto loc_82910BCC;
loc_82910BC8:
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82910BCC:
	// addi r8,r23,12
	ctx.r8.s64 = r23.s64 + 12;
	// addi r10,r11,144
	ctx.r10.s64 = ctx.r11.s64 + 144;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhzx r8,r8,r27
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + r27.u32);
	// cmplwi cr6,r8,65535
	cr6.compare<uint32_t>(ctx.r8.u32, 65535, xer);
	// beq cr6,0x82910c78
	if (cr6.eq) goto loc_82910C78;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x82910c0c
	if (cr6.lt) goto loc_82910C0C;
	// lwz r7,204(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bge cr6,0x82910c0c
	if (!cr6.lt) goto loc_82910C0C;
	// lwz r7,140(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lvx128 v0,r8,r7
	ea = (ctx.r8.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82910c10
	goto loc_82910C10;
loc_82910C0C:
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82910C10:
	// lvx128 v13,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-31983
	ctx.r8.s64 = -2096037888;
	// vaddfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vspltisw v9,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r8,r8,-8288
	ctx.r8.s64 = ctx.r8.s64 + -8288;
	// vor v13,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32088
	ctx.r8.s64 = -2102919168;
	// addi r8,r8,-704
	ctx.r8.s64 = ctx.r8.s64 + -704;
	// vmsum3fp128 v0,v13,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r8,-32088
	ctx.r8.s64 = -2102919168;
	// addi r8,r8,-720
	ctx.r8.s64 = ctx.r8.s64 + -720;
	// lvx128 v10,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v8,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vrsqrtefp v0,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_div_ps(simde_mm_set1_ps(1), simde_mm_sqrt_ps(simde_mm_load_ps(ctx.v0.f32))));
	// vor v7,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// vcmpeqfp v0,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cmpeq_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vsel v0,v7,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vmulfp128 v12,v0,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v8,v12,v10
	simde_mm_store_ps(ctx.v12.f32, simde_mm_xor_ps(simde_mm_sub_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v10.f32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v12,v11,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82910C78:
	// addi r10,r11,160
	ctx.r10.s64 = ctx.r11.s64 + 160;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// mulli r8,r26,304
	ctx.r8.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(304));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r9,r31
	ea = (ctx.r9.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lvx128 v0,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r3,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r3.u32);
	// lwz r10,232(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 232);
	// stw r10,232(r11)
	REX_STORE_U32(ctx.r11.u32 + 232, ctx.r10.u32);
	// lhz r10,76(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 76);
	// sth r10,76(r11)
	REX_STORE_U16(ctx.r11.u32 + 76, ctx.r10.u16);
	// lwz r10,224(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 224);
	// stw r10,224(r11)
	REX_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
	// lfs f0,68(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lhz r10,76(r8)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82910cf8
	if (cr6.lt) goto loc_82910CF8;
	// lwz r9,204(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bge cr6,0x82910cf8
	if (!cr6.lt) goto loc_82910CF8;
	// lwz r9,140(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lvx128 v0,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x82910cfc
	goto loc_82910CFC;
loc_82910CF8:
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82910CFC:
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// stvx128 v0,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r10,r10,-8560
	ctx.r10.s64 = ctx.r10.s64 + -8560;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x8293c7c8
	ctx.lr = 0x82910D18;
	sub_8293C7C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8298eb00
	return;
}

DEFINE_REX_FUNC(sub_829467B0) {
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
	ctx.lr = 0x829467B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r5,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r5.u64;
	// stfs f1,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// subf r10,r7,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stw r5,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r5.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r6,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r6.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r7,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r7.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r8.u32);
	// mullw r31,r10,r11
	r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lfs f0,2592(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2592);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stfs f0,132(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stw r10,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// mr r30,r31
	r30.u64 = r31.u64;
	// bgt cr6,0x8294680c
	if (cr6.gt) goto loc_8294680C;
	// li r30,4
	r30.s64 = 4;
loc_8294680C:
	// addi r29,r3,160
	r29.s64 = ctx.r3.s64 + 160;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82946828
	if (cr6.eq) goto loc_82946828;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82946608
	ctx.lr = 0x82946824;
	sub_82946608(ctx, base);
	// b 0x8294682c
	goto loc_8294682C;
loc_82946828:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8294682C:
	// clrlwi r11,r30,16
	ctx.r11.u64 = r30.u32 & 0xFFFF;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// sth r30,6(r29)
	REX_STORE_U16(r29.u32 + 6, r30.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82946864
	if (!cr6.eq) goto loc_82946864;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// sth r31,6(r29)
	REX_STORE_U16(r29.u32 + 6, r31.u16);
	// beq cr6,0x8294685c
	if (cr6.eq) goto loc_8294685C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82946608
	ctx.lr = 0x82946858;
	sub_82946608(ctx, base);
	// b 0x82946860
	goto loc_82946860;
loc_8294685C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82946860:
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_82946864:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// sth r31,4(r29)
	REX_STORE_U16(r29.u32 + 4, r31.u16);
	// ble cr6,0x829468a8
	if (!cr6.gt) goto loc_829468A8;
	// li r30,0
	r30.s64 = 0;
loc_82946874:
	// li r3,240
	ctx.r3.s64 = 240;
	// bl 0x8218be28
	ctx.lr = 0x8294687C;
	sub_8218BE28(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8294688c
	if (cr6.eq) goto loc_8294688C;
	// bl 0x8290fb78
	ctx.lr = 0x82946888;
	sub_8290FB78(ctx, base);
	// b 0x82946890
	goto loc_82946890;
loc_8294688C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82946890:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne cr6,0x82946874
	if (!cr6.eq) goto loc_82946874;
loc_829468A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8298eb1c
	return;
}

DEFINE_REX_FUNC(sub_8294DEA0) {
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
	ctx.lr = 0x8294DEA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r11,r11,25012
	ctx.r11.s64 = ctx.r11.s64 + 25012;
	// lwz r30,224(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8294df00
	if (cr6.eq) goto loc_8294DF00;
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8294dee8
	if (cr6.eq) goto loc_8294DEE8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x829669f8
	ctx.lr = 0x8294DEE0;
	sub_829669F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8218be78
	ctx.lr = 0x8294DEE8;
	sub_8218BE78(ctx, base);
loc_8294DEE8:
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8294def8
	if (cr6.eq) goto loc_8294DEF8;
	// bl 0x8218be78
	ctx.lr = 0x8294DEF8;
	sub_8218BE78(ctx, base);
loc_8294DEF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218be78
	ctx.lr = 0x8294DF00;
	sub_8218BE78(ctx, base);
loc_8294DF00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82963d80
	ctx.lr = 0x8294DF08;
	sub_82963D80(ctx, base);
	// clrlwi r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// beq cr6,0x8294df20
	if (cr6.eq) goto loc_8294DF20;
	// bl 0x8218be78
	ctx.lr = 0x8294DF1C;
	sub_8218BE78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8294DF20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_82952FD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r10,r10,21846
	ctx.r10.u64 = ctx.r10.u64 | 21846;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mulhw r10,r11,r10
	ctx.r10.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32)) >> 32;
	// lvx128 v0,r9,r3
	ea = (ctx.r9.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v0,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82956FD0) {
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
	ctx.lr = 0x82956FD8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// bge cr6,0x82957088
	if (!cr6.lt) goto loc_82957088;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// li r30,-32
	r30.s64 = -32;
	// addi r6,r10,-8464
	ctx.r6.s64 = ctx.r10.s64 + -8464;
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// addi r31,r10,-8432
	r31.s64 = ctx.r10.s64 + -8432;
loc_8295700C:
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand v12,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v11,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand v0,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vcmpgefp. v0,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_cmpge_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	cr6.setFromMask(simde_mm_load_ps(ctx.v0.f32), 0xF);
	// mfocrf r10,2
	ctx.r10.u64 = (cr6.lt << 7) | (cr6.gt << 6) | (cr6.eq << 5) | (cr6.so << 4);
	// rlwinm r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82957048
	if (!cr6.eq) goto loc_82957048;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82957048:
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r9,r4,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r28,16(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 16);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
	// sth r28,16(r9)
	REX_STORE_U16(ctx.r9.u32 + 16, r28.u16);
	// lbz r10,18(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 18);
	// stb r10,18(r9)
	REX_STORE_U8(ctx.r9.u32 + 18, ctx.r10.u8);
	// blt cr6,0x8295700c
	if (cr6.lt) goto loc_8295700C;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, xer);
loc_82957088:
	// bne cr6,0x829570bc
	if (!cr6.eq) goto loc_829570BC;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r9,r9,-32
	ctx.r9.s64 = ctx.r9.s64 + -32;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lvx128 v0,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 16);
	// sth r11,16(r10)
	REX_STORE_U16(ctx.r10.u32 + 16, ctx.r11.u16);
	// lbz r11,18(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 18);
	// stb r11,18(r10)
	REX_STORE_U8(ctx.r10.u32 + 18, ctx.r11.u8);
loc_829570BC:
	// lhz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r11,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// lbz r11,18(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 18);
	// stb r11,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x82956df8
	ctx.lr = 0x829570E0;
	sub_82956DF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8298eb18
	return;
}

DEFINE_REX_FUNC(sub_8295FF78) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eab8
	ctx.lr = 0x8295FF80;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r31,192
	ctx.r11.s64 = r31.s64 + 192;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,16
	r30.s64 = 16;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r8,r31,96
	ctx.r8.s64 = r31.s64 + 96;
	// lvx128 v12,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r9,32
	ctx.r7.s64 = ctx.r9.s64 + 32;
	// lvx128 v13,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v12,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v11,v11,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v10,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v10,v10,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vmrghw v13,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v12,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r31,3792
	ctx.r11.s64 = r31.s64 + 3792;
	// lvx128 v11,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r7,r30
	ea = (ctx.r7.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v9,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v8,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v11,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrglw v10,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmsum3fp128 v11,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v12,v13,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v10,v13,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v13,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v12,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vaddfp v13,v7,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lvx128 v13,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r7,80
	ctx.r9.s64 = ctx.r7.s64 + 80;
	// lvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v11,v11,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v10,r9,r30
	ea = (ctx.r9.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v8,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglw v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// lvx128 v11,r8,r30
	ea = (ctx.r8.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r7,16
	ctx.r8.s64 = ctx.r7.s64 + 16;
	// lvx128 v7,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx128 v12,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v9,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v11,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrglw v10,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmsum3fp128 v11,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v12,v13,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v10,v13,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v13,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v12,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vaddfp v13,v7,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lvx128 v13,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v10,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v11,v11,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// vmsum3fp128 v10,v10,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmrghw v13,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r24,-16
	r24.s64 = -16;
	// vmrghw v12,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v13,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r31,144
	ctx.r8.s64 = r31.s64 + 144;
	// lvx128 v11,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v9,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v8,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v12,v12,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrglw v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v11,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrglw v10,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmsum3fp128 v11,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v12,v13,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v10,v13,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v13,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v12,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vaddfp v13,v7,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lvx128 v13,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r9,80
	ctx.r11.s64 = ctx.r9.s64 + 80;
	// lvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v11,v11,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v10,r8,r30
	ea = (ctx.r8.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v9,v10,v13
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v10,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v8,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrglw v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v13,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// vmrghw v9,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v13,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v9.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v9,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// lvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v10,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrglw v9,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmsum3fp128 v12,v13,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v10,v13,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmsum3fp128 v9,v13,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v9.f32), 0xEF));
	// vmrghw v13,v10,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v12,v9,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vaddfp v13,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,2352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2352);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x829602f0
	if (!cr6.gt) goto loc_829602F0;
	// addi r6,r31,240
	ctx.r6.s64 = r31.s64 + 240;
	// addi r11,r31,1344
	ctx.r11.s64 = r31.s64 + 1344;
	// li r3,-1008
	ctx.r3.s64 = -1008;
	// li r4,-1040
	ctx.r4.s64 = -1040;
	// li r5,-1024
	ctx.r5.s64 = -1024;
loc_829601D8:
	// lvx128 v13,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lvx128 v11,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// lvx128 v10,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v11,v11,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v10,v10,v13
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// addi r8,r9,32
	ctx.r8.s64 = ctx.r9.s64 + 32;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// vmrghw v13,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v12,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// stvx128 v13,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r8,r30
	ea = (ctx.r8.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v9,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v8,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// addi r8,r9,80
	ctx.r8.s64 = ctx.r9.s64 + 80;
	// vmrglw v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v11,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrglw v10,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmsum3fp128 v11,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v12,v13,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v10,v13,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v13,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v12,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vaddfp v13,v7,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lvx128 v13,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v12,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v11,v11,v13
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v10,r8,r30
	ea = (ctx.r8.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v8,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw v10,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// lvx128 v11,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v11,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v11,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// lvx128 v12,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw v9,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrglw v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v11,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrghw v12,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), simde_mm_load_si128((simde__m128i*)ctx.v12.u32)));
	// vmrglw v10,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v8.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmsum3fp128 v11,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v12,v13,v12
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v10,v13,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v13,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v12,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v10.u32)));
	// vmrghw v13,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vaddfp v13,v7,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,2352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2352);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// blt cr6,0x829601d8
	if (cr6.lt) goto loc_829601D8;
loc_829602F0:
	// lwz r11,3776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// ble cr6,0x8296036c
	if (!cr6.gt) goto loc_8296036C;
	// addi r27,r31,2356
	r27.s64 = r31.s64 + 2356;
	// addi r26,r31,3456
	r26.s64 = r31.s64 + 3456;
	// addi r28,r31,2448
	r28.s64 = r31.s64 + 2448;
loc_8296030C:
	// lvx128 v0,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r28,r30
	ea = (r28.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v11,r28,r24
	ea = (r28.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v12,v12,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v11,v11,v0
	simde_mm_store_ps(ctx.v11.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum3fp128 v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32), 0xEF));
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r4,1356(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 1356);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// vmrghw v0,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v11.u32)));
	// vmrghw v13,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), simde_mm_load_si128((simde__m128i*)ctx.v13.u32)));
	// vmrghw v0,v0,v13
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), simde_mm_load_si128((simde__m128i*)ctx.v0.u32)));
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x828e9ca8
	ctx.lr = 0x82960350;
	sub_828E9CA8(ctx, base);
	// lwz r11,3776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, ctx.r11.s32, xer);
	// blt cr6,0x8296030c
	if (cr6.lt) goto loc_8296030C;
loc_8296036C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8298eb08
	return;
}

DEFINE_REX_FUNC(sub_82992FFC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,132(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// b 0x82993034
	goto loc_82993034;
loc_82993034:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82993f18
	ctx.lr = 0x8299303C;
	sub_82993F18(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82993F60) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bge cr6,0x82993f7c
	if (!cr6.lt) goto loc_82993F7C;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x82998af0
	sub_82998AF0(ctx, base);
	return;
loc_82993F7C:
	// addi r3,r4,32
	ctx.r3.s64 = ctx.r4.s64 + 32;
	// b 0x82a0267c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829947E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-31979
	ctx.r11.s64 = -2095775744;
	// stw r3,-31808(r11)
	REX_STORE_U32(ctx.r11.u32 + -31808, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82994928) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82994470
	ctx.lr = 0x82994938;
	sub_82994470(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8299494c
	if (!cr0.eq) goto loc_8299494C;
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// addi r3,r11,28632
	ctx.r3.s64 = ctx.r11.s64 + 28632;
	// b 0x82994950
	goto loc_82994950;
loc_8299494C:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
loc_82994950:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829974C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// bl 0x8298eac0
	ctx.lr = 0x829974C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,48
	r28.s64 = 48;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,1023
	r30.s64 = 1023;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge cr6,0x829974f0
	if (!cr6.lt) goto loc_829974F0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_829974F0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82997528
	if (!cr6.eq) goto loc_82997528;
	// bl 0x82994928
	ctx.lr = 0x829974FC;
	sub_82994928(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x829947f0
	ctx.lr = 0x82997520;
	sub_829947F0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82997900
	goto loc_82997900;
loc_82997528:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8299755c
	if (!cr6.eq) goto loc_8299755C;
	// bl 0x82994928
	ctx.lr = 0x82997534;
	sub_82994928(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_82997538:
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829947f0
	ctx.lr = 0x82997554;
	sub_829947F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82997900
	goto loc_82997900;
loc_8299755C:
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// stb r26,0(r31)
	REX_STORE_U8(r31.u32 + 0, r26.u8);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, xer);
	// bgt cr6,0x82997578
	if (cr6.gt) goto loc_82997578;
	// bl 0x82994928
	ctx.lr = 0x82997570;
	sub_82994928(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x82997538
	goto loc_82997538;
loc_82997578:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rlwinm r10,r11,0,20,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE;
	// cmpldi cr6,r10,4094
	cr6.compare<uint64_t>(ctx.r10.u64, 4094, xer);
	// bne cr6,0x82997620
	if (!cr6.eq) goto loc_82997620;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x82997598
	if (!cr6.eq) goto loc_82997598;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x8299759c
	goto loc_8299759C;
loc_82997598:
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
loc_8299759C:
	// addi r30,r31,2
	r30.s64 = r31.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x829973a8
	ctx.lr = 0x829975B0;
	sub_829973A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x829975c0
	if (cr0.eq) goto loc_829975C0;
	// stb r26,0(r31)
	REX_STORE_U8(r31.u32 + 0, r26.u8);
	// b 0x82997900
	goto loc_82997900;
loc_829975C0:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(ctx.r11.u32, 45, xer);
	// bne cr6,0x829975d4
	if (!cr6.eq) goto loc_829975D4;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_829975D4:
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// stb r28,0(r31)
	REX_STORE_U8(r31.u32 + 0, r28.u8);
	// li r4,101
	ctx.r4.s64 = 101;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,120
	ctx.r10.s64 = ctx.r10.s64 + 120;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// bl 0x82991550
	ctx.lr = 0x829975FC;
	rexcrt_strrchr(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x829978fc
	if (cr0.eq) goto loc_829978FC;
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r26,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, r26.u8);
	// b 0x829978fc
	goto loc_829978FC;
loc_82997620:
	// clrldi r11,r11,63
	ctx.r11.u64 = ctx.r11.u64 & 0x1;
	// li r27,45
	r27.s64 = 45;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// beq cr6,0x82997638
	if (cr6.eq) goto loc_82997638;
	// stb r27,0(r31)
	REX_STORE_U8(r31.u32 + 0, r27.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_82997638:
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// stb r28,0(r31)
	REX_STORE_U8(r31.u32 + 0, r28.u8);
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r9,r29,0
	xer.ca = r29.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - r29.u64;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,120
	ctx.r8.s64 = ctx.r10.s64 + 120;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// rlwinm r10,r9,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r10,97
	ctx.r10.s64 = ctx.r10.s64 + 97;
	// addi r5,r10,-58
	ctx.r5.s64 = ctx.r10.s64 + -58;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,0,20,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFE;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// bne cr6,0x829976a4
	if (!cr6.eq) goto loc_829976A4;
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r10,r10,0,51
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFF000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// bne cr6,0x8299769c
	if (!cr6.eq) goto loc_8299769C;
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x829976b0
	goto loc_829976B0;
loc_8299769C:
	// li r30,1022
	r30.s64 = 1022;
	// b 0x829976b0
	goto loc_829976B0;
loc_829976A4:
	// li r10,49
	ctx.r10.s64 = 49;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_829976B0:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x829976c8
	if (!cr6.eq) goto loc_829976C8;
	// stb r26,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, r26.u8);
	// b 0x829976dc
	goto loc_829976DC;
loc_829976C8:
	// lis r11,-32087
	ctx.r11.s64 = -2102853632;
	// lwz r11,31496(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31496);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_829976DC:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(ctx.r11.u64, 0, xer);
	// ble cr6,0x829977d4
	if (!cr6.gt) goto loc_829977D4;
	// li r10,15
	ctx.r10.s64 = 15;
	// rldicr r10,r10,48,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 48) & 0xFFFF000000000000;
loc_829976F4:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x8299774c
	if (!cr6.gt) goto loc_8299774C;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rldicl r11,r11,52,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,57
	cr6.compare<uint32_t>(ctx.r9.u32, 57, xer);
	// ble cr6,0x82997730
	if (!cr6.gt) goto loc_82997730;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82997730:
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// rldicl r10,r10,60,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsh. r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge 0x829976f4
	if (!cr0.lt) goto loc_829976F4;
loc_8299774C:
	// extsh. r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// blt 0x829977d4
	if (cr0.lt) goto loc_829977D4;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// rldicl r11,r11,52,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFFFFFFFFFFFF;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(ctx.r11.u32, 8, xer);
	// ble cr6,0x829977d4
	if (!cr6.gt) goto loc_829977D4;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
loc_82997778:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,102
	cr6.compare<int32_t>(ctx.r10.s32, 102, xer);
	// beq cr6,0x82997790
	if (cr6.eq) goto loc_82997790;
	// cmpwi cr6,r10,70
	cr6.compare<int32_t>(ctx.r10.s32, 70, xer);
	// bne cr6,0x8299779c
	if (!cr6.eq) goto loc_8299779C;
loc_82997790:
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r28.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82997778
	goto loc_82997778;
loc_8299779C:
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x829977c8
	if (cr6.eq) goto loc_829977C8;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bne cr6,0x829977bc
	if (!cr6.eq) goto loc_829977BC;
	// addi r10,r5,58
	ctx.r10.s64 = ctx.r5.s64 + 58;
	// b 0x829977c0
	goto loc_829977C0;
loc_829977BC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_829977C0:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// b 0x829977d4
	goto loc_829977D4;
loc_829977C8:
	// lbz r10,-1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r10.u8);
loc_829977D4:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82997800
	if (!cr6.gt) goto loc_82997800;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x829977fc
	if (cr0.eq) goto loc_829977FC;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_829977F0:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x829977f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_829977F0;
loc_829977FC:
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82997800:
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(ctx.r11.u32, 0, xer);
	// bne cr6,0x82997810
	if (!cr6.eq) goto loc_82997810;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82997810:
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + xer.ca < xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicl r11,r11,63,53
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0x7FF;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(ctx.r11.s64, 0, xer);
	// blt cr6,0x82997848
	if (cr6.lt) goto loc_82997848;
	// li r9,43
	ctx.r9.s64 = 43;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x82997850
	goto loc_82997850;
loc_82997848:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stb r27,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r27.u8);
loc_82997850:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpdi cr6,r11,1000
	cr6.compare<int64_t>(ctx.r11.s64, 1000, xer);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r28,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r28.u8);
	// blt cr6,0x82997890
	if (cr6.lt) goto loc_82997890;
	// li r9,1000
	ctx.r9.s64 = 1000;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r6,r11,r9
	ctx.r6.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,1000
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1000));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x82997898
	if (!cr6.eq) goto loc_82997898;
loc_82997890:
	// cmpdi cr6,r11,100
	cr6.compare<int64_t>(ctx.r11.s64, 100, xer);
	// blt cr6,0x829978bc
	if (cr6.lt) goto loc_829978BC;
loc_82997898:
	// li r9,100
	ctx.r9.s64 = 100;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r6,r11,r9
	ctx.r6.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mulli r7,r6,100
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(100));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_829978BC:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x829978cc
	if (!cr6.eq) goto loc_829978CC;
	// cmpdi cr6,r11,10
	cr6.compare<int64_t>(ctx.r11.s64, 10, xer);
	// blt cr6,0x829978f0
	if (cr6.lt) goto loc_829978F0;
loc_829978CC:
	// li r9,10
	ctx.r9.s64 = 10;
	// divd r8,r11,r9
	ctx.r8.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// divd r7,r11,r9
	ctx.r7.s64 = (ctx.r9.s64 && !(ctx.r11.s64 == INT64_MIN && ctx.r9.s64 == -1)) ? ctx.r11.s64 / ctx.r9.s64 : 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mulli r8,r7,10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(10));
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_829978F0:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r26,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, r26.u8);
loc_829978FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82997900:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8298eb10
	return;
}

DEFINE_REX_FUNC(sub_829A082C) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-31796(r10)
	REX_STORE_U32(ctx.r10.u32 + -31796, ctx.r11.u32);
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// stw r11,-31792(r10)
	REX_STORE_U32(ctx.r10.u32 + -31792, ctx.r11.u32);
	// bl 0x829a7fa8
	ctx.lr = 0x829A0844;
	sub_829A7FA8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x829a7910
	ctx.lr = 0x829A084C;
	sub_829A7910(ctx, base);
	// bl 0x829a0628
	ctx.lr = 0x829A0850;
	sub_829A0628(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x829a0860
	if (cr0.eq) goto loc_829A0860;
	// bl 0x82a023ec
	ctx.lr = 0x829A085C;
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_829A0860:
	// bl 0x829946b0
	ctx.lr = 0x829A0864;
	sub_829946B0(ctx, base);
	// bl 0x829a7e58
	ctx.lr = 0x829A0868;
	sub_829A7E58(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x829a7d78
	ctx.lr = 0x829A0870;
	sub_829A7D78(ctx, base);
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// lwz r11,7656(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7656);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq cr6,0x829a0998
	if (cr6.eq) goto loc_829A0998;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// li r29,0
	r29.s64 = 0;
	// mr r28,r29
	r28.u64 = r29.u64;
	// stw r28,96(r31)
	REX_STORE_U32(r31.u32 + 96, r28.u32);
	// bl 0x829a2788
	ctx.lr = 0x829A0898;
	sub_829A2788(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x829a097c
	if (cr0.eq) goto loc_829A097C;
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_829A08AC:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	REX_STORE_U8(r31.u32 + 80, ctx.r11.u8);
loc_829A08B4:
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x829a08f0
	if (cr0.eq) goto loc_829A08F0;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x829a08cc
	if (cr6.eq) goto loc_829A08CC;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x829a08f0
	if (!cr6.eq) goto loc_829A08F0;
loc_829A08CC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stb r29,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r29.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	REX_STORE_U8(r31.u32 + 80, ctx.r11.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x829a08b4
	goto loc_829A08B4;
loc_829A08F0:
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x829a0968
	if (cr0.eq) goto loc_829A0968;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r28,96(r31)
	REX_STORE_U32(r31.u32 + 96, r28.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r8,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r8.u32);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
loc_829A0914:
	// cmpwi cr6,r9,34
	cr6.compare<int32_t>(ctx.r9.s32, 34, xer);
	// beq cr6,0x829a092c
	if (cr6.eq) goto loc_829A092C;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// b 0x829a0938
	goto loc_829A0938;
loc_829A092C:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r8,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r8.u32);
loc_829A0938:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,80(r31)
	REX_STORE_U8(r31.u32 + 80, ctx.r11.u8);
	// extsb. r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x829a0968
	if (cr0.eq) goto loc_829A0968;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x829a0914
	if (!cr6.eq) goto loc_829A0914;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// beq cr6,0x829a0968
	if (cr6.eq) goto loc_829A0968;
	// cmpwi cr6,r9,9
	cr6.compare<int32_t>(ctx.r9.s32, 9, xer);
	// bne cr6,0x829a0914
	if (!cr6.eq) goto loc_829A0914;
loc_829A0968:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	cr0.compare<int32_t>(ctx.r11.s32, 0, xer);
	// beq 0x829a0978
	if (cr0.eq) goto loc_829A0978;
	// cmpwi cr6,r28,16
	cr6.compare<int32_t>(r28.s32, 16, xer);
	// ble cr6,0x829a08ac
	if (!cr6.gt) goto loc_829A08AC;
loc_829A0978:
	// stb r29,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r29.u8);
loc_829A097C:
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// b 0x829a09a0
	goto loc_829A09A0;
loc_829A0998:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_829A09A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8218bea8
	ctx.lr = 0x829A09A8;
	sub_8218BEA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82992620
	ctx.lr = 0x829A09B0;
	sub_82992620(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r3,r11,-18368
	ctx.r3.s64 = ctx.r11.s64 + -18368;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82a0274c
	ctx.lr = 0x829A09C0;
	__imp__DbgPrint(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82a023ec
	ctx.lr = 0x829A09D0;
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x829a0bb0
	ctx.lr = 0x829A09E0;
	sub_829A0BB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829A09C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82a023ec
	ctx.lr = 0x829A09D0;
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x829a0bb0
	ctx.lr = 0x829A09E0;
	sub_829A0BB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829A09CC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// bl 0x82a023ec
	ctx.lr = 0x829A09D0;
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x829a0bb0
	ctx.lr = 0x829A09E0;
	sub_829A0BB0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829A7838) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// lwz r22,84(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = ctx.r31.s64 + 320;
	// bl 0x829a787c
	ctx.lr = 0x829A7850;
	sub_829A787C(ctx, base);
	// lwz r3,356(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// addi r1,r31,320
	ctx.r1.s64 = ctx.r31.s64 + 320;
	// b 0x8298eaf4
	return;
}

DEFINE_REX_FUNC(sub_829C1590) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eaac
	ctx.lr = 0x829C1598;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lis r9,-32086
	ctx.r9.s64 = -2102788096;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r25,r7,320
	r25.s64 = ctx.r7.s64 + 320;
	// addi r24,r7,368
	r24.s64 = ctx.r7.s64 + 368;
	// lfs f0,-6932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -6932);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r28,r9,-30904
	r28.s64 = ctx.r9.s64 + -30904;
	// addi r11,r11,-10480
	ctx.r11.s64 = ctx.r11.s64 + -10480;
	// ble cr6,0x829c15d4
	if (!cr6.gt) goto loc_829C15D4;
	// addi r9,r11,1644
	ctx.r9.s64 = ctx.r11.s64 + 1644;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// b 0x829c15e0
	goto loc_829C15E0;
loc_829C15D4:
	// addi r22,r11,48
	r22.s64 = ctx.r11.s64 + 48;
	// addi r8,r28,24
	ctx.r8.s64 = r28.s64 + 24;
	// addi r9,r11,2744
	ctx.r9.s64 = ctx.r11.s64 + 2744;
loc_829C15E0:
	// stw r9,-112(r1)
	REX_STORE_U32(ctx.r1.u32 + -112, ctx.r9.u32);
	// addi r9,r28,48
	ctx.r9.s64 = r28.s64 + 48;
	// addi r3,r1,-112
	ctx.r3.s64 = ctx.r1.s64 + -112;
	// addi r6,r11,4324
	ctx.r6.s64 = ctx.r11.s64 + 4324;
	// addi r7,r11,3600
	ctx.r7.s64 = ctx.r11.s64 + 3600;
	// addi r11,r11,4984
	ctx.r11.s64 = ctx.r11.s64 + 4984;
	// addi r30,r9,-16
	r30.s64 = ctx.r9.s64 + -16;
	// subf r23,r3,r8
	r23.u64 = ctx.r8.u64 - ctx.r3.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r6,-104(r1)
	REX_STORE_U32(ctx.r1.u32 + -104, ctx.r6.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r7,-108(r1)
	REX_STORE_U32(ctx.r1.u32 + -108, ctx.r7.u32);
	// stw r11,-100(r1)
	REX_STORE_U32(ctx.r1.u32 + -100, ctx.r11.u32);
	// li r27,0
	r27.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// lfs f9,3068(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3068);
	ctx.f9.f64 = double(temp.f32);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lfs f10,2592(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2592);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,-112
	ctx.r6.s64 = ctx.r1.s64 + -112;
loc_829C1630:
	// cmpwi cr6,r26,4
	cr6.compare<int32_t>(r26.s32, 4, xer);
	// bge cr6,0x829c1704
	if (!cr6.lt) goto loc_829C1704;
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x829c1690
	if (!cr0.gt) goto loc_829C1690;
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,28(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
loc_829C1674:
	// lwz r21,0(r7)
	r21.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmpw cr6,r21,r31
	cr6.compare<int32_t>(r21.s32, r31.s32, xer);
	// beq cr6,0x829c16fc
	if (cr6.eq) goto loc_829C16FC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// blt cr6,0x829c1674
	if (cr6.lt) goto loc_829C1674;
loc_829C1690:
	// lwz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
loc_829C1694:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f8,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f13,f13
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f12,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f6,f0,f0,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f6.f64)));
	// fmsubs f13,f0,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f13.f64)));
	// fdivs f0,f10,f6
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f6.f64));
	// fmadds f13,f13,f0,f8
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f12,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f0,f13,f0,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f7.f64)));
	// b 0x829c1724
	goto loc_829C1724;
loc_829C16FC:
	// lwz r7,20(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x829c1694
	goto loc_829C1694;
loc_829C1704:
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_829C1724:
	// lwzx r9,r23,r6
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + ctx.r6.u32);
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// mr r31,r24
	r31.u64 = r24.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// subf r8,r25,r9
	ctx.r8.u64 = ctx.r9.u64 - r25.u64;
loc_829C1738:
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x829c1764
	if (!cr6.gt) goto loc_829C1764;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
loc_829C174C:
	// lfsx f13,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// bne 0x829c174c
	if (!cr0.eq) goto loc_829C174C;
loc_829C1764:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// add r8,r29,r8
	ctx.r8.u64 = r29.u64 + ctx.r8.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x829c1738
	if (!cr0.eq) goto loc_829C1738;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r28,48
	ctx.r7.s64 = r28.s64 + 48;
	// lfs f13,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r27,1
	ctx.r9.s64 = r27.s64 + 1;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r29,4
	ctx.r8.s64 = r29.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r27,r9,1
	r27.s64 = ctx.r9.s64 + 1;
	// addi r29,r8,4
	r29.s64 = ctx.r8.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r30,r7
	cr6.compare<int32_t>(r30.s32, ctx.r7.s32, xer);
	// blt cr6,0x829c1630
	if (cr6.lt) goto loc_829C1630;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x829c1808
	if (!cr6.gt) goto loc_829C1808;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// subf r9,r25,r22
	ctx.r9.u64 = r22.u64 - r25.u64;
	// subf r8,r25,r4
	ctx.r8.u64 = ctx.r4.u64 - r25.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_829C17EC:
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x829c17ec
	if (!cr0.eq) goto loc_829C17EC;
loc_829C1808:
	// b 0x8298eafc
	return;
}

DEFINE_REX_FUNC(sub_829DB538) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r9,2(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r11,r9,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,1023
	cr6.compare<uint32_t>(ctx.r9.u32, 1023, xer);
	// ble cr6,0x829db55c
	if (!cr6.gt) goto loc_829DB55C;
	// li r11,1023
	ctx.r11.s64 = 1023;
loc_829DB55C:
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// rlwinm r11,r11,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1FFFE;
	// lhzx r9,r10,r5
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// rotlwi r9,r9,6
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// sth r9,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// lhzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r5.u32);
	// lhzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sth r11,2(r3)
	REX_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829DE510) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,392
	ctx.r10.s64 = ctx.r1.s64 + 392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a0313c
	ctx.lr = 0x829DE558;
	__imp___vsnprintf(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0274c
	ctx.lr = 0x829DE560;
	__imp__DbgPrint(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829E1718) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8298eac0
	ctx.lr = 0x829E1720;
	// stwu r1,-2464(r1)
	ea = -2464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x829dfc00
	ctx.lr = 0x829E1738;
	sub_829DFC00(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// subf r9,r6,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r6.u64;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,21532(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21532);
	// lwz r8,21524(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 21524);
	// subf r3,r5,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r5.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x829e1794
	if (cr6.eq) goto loc_829E1794;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x829e1778
	if (cr6.lt) goto loc_829E1778;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x829e1778
	if (cr6.gt) goto loc_829E1778;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_829E1778:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x829e1794
	if (cr6.lt) goto loc_829E1794;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x829e1794
	if (cr6.gt) goto loc_829E1794;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
loc_829E1794:
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,21528(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 21528);
	// clrlwi r4,r30,16
	ctx.r4.u64 = r30.u32 & 0xFFFF;
	// rlwinm r27,r11,16,0,15
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// subf r30,r10,r8
	r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r30,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r30,r29,16
	r30.u64 = r29.u32 & 0xFFFF;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r30,r4,16,0,15
	r30.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r9,r1,992
	ctx.r9.s64 = ctx.r1.s64 + 992;
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// clrlwi r29,r7,16
	r29.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// or r7,r28,r27
	ctx.r7.u64 = r28.u64 | r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// rlwimi r29,r11,16,0,15
	r29.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (r29.u64 & 0xFFFFFFFF0000FFFF);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x829e11d0
	ctx.lr = 0x829E1828;
	sub_829E11D0(ctx, base);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,800
	ctx.r4.s64 = 800;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82a02a8c
	ctx.lr = 0x829E1838;
	__imp__RtlFillMemoryUlong(ctx, base);
	// li r4,220
	ctx.r4.s64 = 220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x829d8730
	ctx.lr = 0x829E1844;
	sub_829D8730(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// lwz r8,140(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r7,r1,992
	ctx.r7.s64 = ctx.r1.s64 + 992;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// clrlwi r26,r10,16
	r26.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r9,200
	ctx.r9.s64 = 200;
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwimi r26,r11,16,0,15
	r26.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (r26.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// or r6,r5,r27
	ctx.r6.u64 = ctx.r5.u64 | r27.u64;
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82a031fc
	ctx.lr = 0x829E18BC;
	__imp__VdInitializeScalerCommandBuffer(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x829907e0
	ctx.lr = 0x829E18D4;
	rexcrt_memcpy(ctx, base);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x8298eb10
	return;
}

DEFINE_REX_FUNC(sub_829EEE00) {
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
	// lis r11,-32015
	ctx.r11.s64 = -2098135040;
	// addi r31,r11,19744
	r31.s64 = ctx.r11.s64 + 19744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82893a08
	ctx.lr = 0x829EEE20;
	sub_82893A08(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// addi r11,r11,-30436
	ctx.r11.s64 = ctx.r11.s64 + -30436;
	// addi r3,r10,-6912
	ctx.r3.s64 = ctx.r10.s64 + -6912;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// sth r11,96(r31)
	REX_STORE_U16(r31.u32 + 96, ctx.r11.u16);
	// sth r11,98(r31)
	REX_STORE_U16(r31.u32 + 98, ctx.r11.u16);
	// bl 0x8298ed48
	ctx.lr = 0x829EEE48;
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

DEFINE_REX_FUNC(sub_829F1A80) {
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
	// addi r3,r11,17564
	ctx.r3.s64 = ctx.r11.s64 + 17564;
	// bl 0x827df440
	ctx.lr = 0x829F1A9C;
	sub_827DF440(ctx, base);
	// lis r11,-32009
	ctx.r11.s64 = -2097741824;
	// stw r3,-7560(r11)
	REX_STORE_U32(ctx.r11.u32 + -7560, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829F2C50) {
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
	// addi r3,r11,-18064
	ctx.r3.s64 = ctx.r11.s64 + -18064;
	// bl 0x8289deb8
	ctx.lr = 0x829F2C68;
	sub_8289DEB8(ctx, base);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,-5416
	ctx.r3.s64 = ctx.r11.s64 + -5416;
	// bl 0x8298ed48
	ctx.lr = 0x829F2C74;
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

DEFINE_REX_FUNC(sub_829F3BE0) {
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
	// addi r3,r11,2432
	ctx.r3.s64 = ctx.r11.s64 + 2432;
	// bl 0x8289deb8
	ctx.lr = 0x829F3BF8;
	sub_8289DEB8(ctx, base);
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,-4832
	ctx.r3.s64 = ctx.r11.s64 + -4832;
	// bl 0x8298ed48
	ctx.lr = 0x829F3C04;
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

DEFINE_REX_FUNC(sub_829F4EE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31983
	ctx.r11.s64 = -2096037888;
	// addi r11,r11,-8544
	ctx.r11.s64 = ctx.r11.s64 + -8544;
	// lvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-31997
	ctx.r11.s64 = -2096955392;
	// addi r11,r11,-10656
	ctx.r11.s64 = ctx.r11.s64 + -10656;
	// stvx128 v0,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829F6718) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r11,20696
	ctx.r5.s64 = ctx.r11.s64 + 20696;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r31,r11,5692
	r31.s64 = ctx.r11.s64 + 5692;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8296c6c8
	ctx.lr = 0x829F674C;
	sub_8296C6C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,29028
	ctx.r11.s64 = ctx.r11.s64 + 29028;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8214b360
	ctx.lr = 0x829F675C;
	sub_8214B360(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8296c738
	ctx.lr = 0x829F6764;
	sub_8296C738(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// addi r11,r11,20692
	ctx.r11.s64 = ctx.r11.s64 + 20692;
	// addi r3,r10,-1360
	ctx.r3.s64 = ctx.r10.s64 + -1360;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8298ed48
	ctx.lr = 0x829F677C;
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

DEFINE_REX_FUNC(sub_829F6F30) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r5,r11,-11720
	ctx.r5.s64 = ctx.r11.s64 + -11720;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-26536
	ctx.r4.s64 = ctx.r11.s64 + -26536;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r3,r11,6660
	ctx.r3.s64 = ctx.r11.s64 + 6660;
	// b 0x827fe310
	sub_827FE310(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829F6F50) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r6,126
	ctx.r6.s64 = 126;
	// addi r5,r11,-11592
	ctx.r5.s64 = ctx.r11.s64 + -11592;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-26512
	ctx.r4.s64 = ctx.r11.s64 + -26512;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r3,r11,6628
	ctx.r3.s64 = ctx.r11.s64 + 6628;
	// b 0x827fe310
	sub_827FE310(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829F6F70) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-26484
	ctx.r5.s64 = ctx.r11.s64 + -26484;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,6712
	ctx.r3.s64 = ctx.r11.s64 + 6712;
	// b 0x827eed68
	sub_827EED68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829F6FD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-25064
	ctx.r5.s64 = ctx.r11.s64 + -25064;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,6836
	ctx.r3.s64 = ctx.r11.s64 + 6836;
	// b 0x827eed68
	sub_827EED68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829F7090) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// li r6,21798
	ctx.r6.s64 = 21798;
	// addi r5,r11,616
	ctx.r5.s64 = ctx.r11.s64 + 616;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-19180
	ctx.r4.s64 = ctx.r11.s64 + -19180;
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r3,r11,9252
	ctx.r3.s64 = ctx.r11.s64 + 9252;
	// b 0x827fe310
	sub_827FE310(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829F70B0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// lis r11,-32090
	ctx.r11.s64 = -2103050240;
	// addi r11,r11,23332
	ctx.r11.s64 = ctx.r11.s64 + 23332;
	// lwz r9,-7772(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -7772);
	// stw r11,-7772(r10)
	REX_STORE_U32(ctx.r10.u32 + -7772, ctx.r11.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829F7198) {
	REX_FUNC_PROLOGUE();
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// lis r11,-32089
	ctx.r11.s64 = -2102984704;
	// addi r11,r11,2840
	ctx.r11.s64 = ctx.r11.s64 + 2840;
	// lwz r9,-7772(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -7772);
	// stw r11,-7772(r10)
	REX_STORE_U32(ctx.r10.u32 + -7772, ctx.r11.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829F9168) {
	REX_FUNC_PROLOGUE();
	// lis r10,-31983
	ctx.r10.s64 = -2096037888;
	// lis r11,-32088
	ctx.r11.s64 = -2102919168;
	// addi r11,r11,-3052
	ctx.r11.s64 = ctx.r11.s64 + -3052;
	// lwz r9,-7772(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -7772);
	// stw r11,-7772(r10)
	REX_STORE_U32(ctx.r10.u32 + -7772, ctx.r11.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829F99D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,3136
	ctx.r3.s64 = ctx.r11.s64 + 3136;
	// b 0x8298ed48
	sub_8298ED48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829F9D10) {
	REX_FUNC_PROLOGUE();
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-31244(r10)
	REX_STORE_U32(ctx.r10.u32 + -31244, ctx.r11.u32);
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-31256(r10)
	REX_STORE_U32(ctx.r10.u32 + -31256, ctx.r11.u32);
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// stw r11,-31248(r10)
	REX_STORE_U32(ctx.r10.u32 + -31248, ctx.r11.u32);
	// lis r10,-31982
	ctx.r10.s64 = -2095972352;
	// lis r11,32704
	ctx.r11.s64 = 2143289344;
	// stw r11,-31252(r10)
	REX_STORE_U32(ctx.r10.u32 + -31252, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829F9D78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12948
	ctx.r5.s64 = ctx.r11.s64 + 12948;
	// lis r11,-31982
	ctx.r11.s64 = -2095972352;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,20132
	ctx.r3.s64 = ctx.r11.s64 + 20132;
	// b 0x827eed68
	sub_827EED68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829FB370) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// addi r3,r11,4712
	ctx.r3.s64 = ctx.r11.s64 + 4712;
	// b 0x8298ed48
	sub_8298ED48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_829FCA08) {
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
	// li r5,120
	ctx.r5.s64 = 120;
	// addi r7,r11,3088
	ctx.r7.s64 = ctx.r11.s64 + 3088;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r11,-29124
	ctx.r6.s64 = ctx.r11.s64 + -29124;
	// lis r11,-31981
	ctx.r11.s64 = -2095906816;
	// addi r31,r11,5688
	r31.s64 = ctx.r11.s64 + 5688;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8296c700
	ctx.lr = 0x829FCA40;
	sub_8296C700(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r11,r11,29028
	ctx.r11.s64 = ctx.r11.s64 + 29028;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8214b360
	ctx.lr = 0x829FCA50;
	sub_8214B360(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8296c738
	ctx.lr = 0x829FCA58;
	sub_8296C738(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// addi r11,r11,-29128
	ctx.r11.s64 = ctx.r11.s64 + -29128;
	// addi r3,r10,8648
	ctx.r3.s64 = ctx.r10.s64 + 8648;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8298ed48
	ctx.lr = 0x829FCA70;
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

DEFINE_REX_FUNC(sub_829FEC20) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_829FEDE8) {
	REX_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lis r11,-32003
	ctx.r11.s64 = -2097348608;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// lhz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8218be78
	sub_8218BE78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82A00620) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r10,11768
	r31.s64 = ctx.r10.s64 + 11768;
	// addi r11,r11,29028
	ctx.r11.s64 = ctx.r11.s64 + 29028;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8214b360
	ctx.lr = 0x82A00648;
	sub_8214B360(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8296c788
	ctx.lr = 0x82A00650;
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

DEFINE_REX_FUNC(sub_82A00B60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-31985
	ctx.r11.s64 = -2096168960;
	// addi r3,r11,21760
	ctx.r3.s64 = ctx.r11.s64 + 21760;
	// b 0x827de118
	sub_827DE118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82A00C40) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82A06A30) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(ctx.r11.u32, 12, xer);
	// ble cr6,0x82a06a54
	if (!cr6.gt) goto loc_82A06A54;
	// li r11,12
	ctx.r11.s64 = 12;
loc_82A06A54:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r11.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// stw r10,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// bl 0x829907e0
	ctx.lr = 0x82A06A6C;
	rexcrt_memcpy(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82a06328
	ctx.lr = 0x82A06A74;
	sub_82A06328(ctx, base);
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

