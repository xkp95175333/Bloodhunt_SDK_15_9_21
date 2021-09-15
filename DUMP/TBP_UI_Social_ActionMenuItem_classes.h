// WidgetBlueprintGeneratedClass TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C
// Size: 0x2f8 (Inherited: 0x280)
struct UTBP_UI_Social_ActionMenuItem_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* CooldownText; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* LabelText; // 0x290(0x08)
	struct UButton* MenuButton; // 0x298(0x08)
	struct FText Label; // 0x2a0(0x18)
	struct FMulticastInlineDelegate MenuClicked; // 0x2b8(0x10)
	struct UAkAudioEvent* MenuItemClickedAudioEvent; // 0x2c8(0x08)
	struct FDataTableRowHandle NeutralTextSyle; // 0x2d0(0x10)
	struct FDataTableRowHandle HoverdTextSyle; // 0x2e0(0x10)
	bool bIsEnabledFromStart; // 0x2f0(0x01)
	bool bIsOnCooldown; // 0x2f1(0x01)
	char pad_2F2[0x2]; // 0x2f2(0x02)
	float Cooldown; // 0x2f4(0x04)

	void SetCooldown(float InCooldown); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.SetCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MenuButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.BndEvt__MenuButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.BndEvt__MenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MenuButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.BndEvt__MenuButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Social_ActionMenuItem(int32_t EntryPoint); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.ExecuteUbergraph_TBP_UI_Social_ActionMenuItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void MenuClicked__DelegateSignature(); // Function TBP_UI_Social_ActionMenuItem.TBP_UI_Social_ActionMenuItem_C.MenuClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

