// WidgetBlueprintGeneratedClass TBP_UI_MatchMaker.TBP_UI_MatchMaker_C
// Size: 0x2f0 (Inherited: 0x2b8)
struct UTBP_UI_MatchMaker_C : UTigerVendorUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UWidgetSwitcher* ActiveSubMenuSwitcher; // 0x2c0(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* BattlepassButton; // 0x2c8(0x08)
	struct UTBP_UI_MatchMaker_TabButton_C* MatchmakingButton; // 0x2d0(0x08)
	struct UTBP_UI_MatchMaker_MatchmakingMenu_C* MatchmakingMenu; // 0x2d8(0x08)
	struct UHorizontalBox* TabsContainer; // 0x2e0(0x08)
	struct UTBP_UI_VendorShared_C* TBP_UI_VendorShared; // 0x2e8(0x08)

	void BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_184_OnButtonPressed__DelegateSignature(); // Function TBP_UI_MatchMaker.TBP_UI_MatchMaker_C.BndEvt__MatchmakingButton_K2Node_ComponentBoundEvent_184_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BattlepassButton_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature(); // Function TBP_UI_MatchMaker.TBP_UI_MatchMaker_C.BndEvt__BattlepassButton_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_MatchMaker.TBP_UI_MatchMaker_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_MatchMaker(int32_t EntryPoint); // Function TBP_UI_MatchMaker.TBP_UI_MatchMaker_C.ExecuteUbergraph_TBP_UI_MatchMaker // (Final|UbergraphFunction) // @ game+0x16c0340
};

