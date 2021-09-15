// WidgetBlueprintGeneratedClass TBP_UI_TalentTrainer.TBP_UI_TalentTrainer_C
// Size: 0x2e8 (Inherited: 0x2b8)
struct UTBP_UI_TalentTrainer_C : UTigerVendorUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UCanvasPanel* BloodTrackBox; // 0x2c0(0x08)
	struct UWidgetSwitcher* MenuSwitcher; // 0x2c8(0x08)
	struct UCanvasPanel* ShopCanvas; // 0x2d0(0x08)
	struct UTBP_UI_BloodTrackCustomizer_C* TBP_UI_BloodTrackCustomizer; // 0x2d8(0x08)
	struct UTBP_UI_VendorShared_C* TBP_UI_VendorShared; // 0x2e0(0x08)

	void BndEvt__TalentsButton_K2Node_ComponentBoundEvent_71_OnButtonPressed__DelegateSignature(); // Function TBP_UI_TalentTrainer.TBP_UI_TalentTrainer_C.BndEvt__TalentsButton_K2Node_ComponentBoundEvent_71_OnButtonPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_TalentTrainer.TBP_UI_TalentTrainer_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_TalentTrainer.TBP_UI_TalentTrainer_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_TalentTrainer.TBP_UI_TalentTrainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function TBP_UI_TalentTrainer.TBP_UI_TalentTrainer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_TalentTrainer(int32_t EntryPoint); // Function TBP_UI_TalentTrainer.TBP_UI_TalentTrainer_C.ExecuteUbergraph_TBP_UI_TalentTrainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

