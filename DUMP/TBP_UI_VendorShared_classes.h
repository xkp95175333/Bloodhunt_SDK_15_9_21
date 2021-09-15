// WidgetBlueprintGeneratedClass TBP_UI_VendorShared.TBP_UI_VendorShared_C
// Size: 0x3f2 (Inherited: 0x2e8)
struct UTBP_UI_VendorShared_C : UTigerSharedVendorUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct UWidgetAnimation* EnableShortcut; // 0x2f0(0x08)
	struct UWidgetAnimation* FadeInBackground; // 0x2f8(0x08)
	struct UWidgetAnimation* FadeOutBackground; // 0x300(0x08)
	struct UWidgetSwitcher* ActiveInteractionSwitcher; // 0x308(0x08)
	struct UImage* Background; // 0x310(0x08)
	struct UImage* Character; // 0x318(0x08)
	struct UWidgetSwitcher* CharacterSwitcher; // 0x320(0x08)
	struct UTBP_UI_InputMenuPrompt_C* CloseButtonPrompt; // 0x328(0x08)
	struct UImage* IMAGE_ShortcutBackground; // 0x330(0x08)
	struct UNamedSlot* MenuContent; // 0x338(0x08)
	struct UCanvasPanel* RootCanvas; // 0x340(0x08)
	struct UTBP_UI_VendorTabButton_C* ShortcutTabButton; // 0x348(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x350(0x08)
	struct UTBP_UI_NpcDialogueScreen_C* TBP_UI_NpcDialogueScreen; // 0x358(0x08)
	struct UTBP_UI_VerticalLine_C* TBP_UI_VerticalLine; // 0x360(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x368(0x08)
	struct UImage* Vendor; // 0x370(0x08)
	struct UCanvasPanel* VendorHeader; // 0x378(0x08)
	struct UImage* VendorIconImage; // 0x380(0x08)
	struct UTBP_UI_VendorTabButton_C* VendorTabButton; // 0x388(0x08)
	struct FMulticastInlineDelegate OnActiveMenuSwitched; // 0x390(0x10)
	struct TSoftObjectPtr<struct UTexture2D> VendorIconPath; // 0x3a0(0x28)
	struct TSoftObjectPtr<struct UTexture2D> VendorBackgroundPath; // 0x3c8(0x28)
	bool IsInteractionFullscreen; // 0x3f0(0x01)
	bool CONFIG_NeedPaperdoll; // 0x3f1(0x01)

	void UpdateInteractionSize(); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.UpdateInteractionSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OverrideNameAndPurpose(struct FText Name, struct FText Purpose); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.OverrideNameAndPurpose // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OverrideBackground(struct TSoftObjectPtr<struct UTexture2D> Image); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.OverrideBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CycleActiveInteraction(); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.CycleActiveInteraction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddAndActivateShopCanvas(struct UCanvasPanel* NewParam); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.AddAndActivateShopCanvas // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowPlayerCharacter(); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.ShowPlayerCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowVendorNPC(struct ATigerNPC* VendorNPC); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.ShowVendorNPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoaded_074CCE824EB764DB2242DBA1BD20B138(struct UObject* Loaded); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.OnLoaded_074CCE824EB764DB2242DBA1BD20B138 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoaded_8D766778435DA3B2F6BDA382CB67B356(struct UObject* Loaded); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.OnLoaded_8D766778435DA3B2F6BDA382CB67B356 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OneFrameLater(); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.OneFrameLater // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void TabMenuLeftGamepad(); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.TabMenuLeftGamepad // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void TabMenuRightGamepad(); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.TabMenuRightGamepad // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__VendorTabButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.BndEvt__VendorTabButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ShortcutTabButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.BndEvt__ShortcutTabButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void LoadVendorImages(); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.LoadVendorImages // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Back(); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.Back // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CloseButtonPrompt_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature(); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.BndEvt__CloseButtonPrompt_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_VendorShared(int32_t EntryPoint); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.ExecuteUbergraph_TBP_UI_VendorShared // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnActiveMenuSwitched__DelegateSignature(bool Is Dialogue Menu); // Function TBP_UI_VendorShared.TBP_UI_VendorShared_C.OnActiveMenuSwitched__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

