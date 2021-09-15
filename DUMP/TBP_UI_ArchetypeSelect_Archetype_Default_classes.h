// WidgetBlueprintGeneratedClass TBP_UI_ArchetypeSelect_Archetype_Default.TBP_UI_ArchetypeSelect_Archetype_Default_C
// Size: 0x314 (Inherited: 0x260)
struct UTBP_UI_ArchetypeSelect_Archetype_Default_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OnSelect; // 0x268(0x08)
	struct UWidgetAnimation* OnDisable; // 0x270(0x08)
	struct UWidgetAnimation* OnHover; // 0x278(0x08)
	struct UImage* ArchetypeBackground; // 0x280(0x08)
	struct UImage* ArchetypeBeam; // 0x288(0x08)
	struct UImage* ArchetypeGlow; // 0x290(0x08)
	struct UImage* ArchetypeIcon; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* ArchetypeNameDefault_Text; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* ArchetypeNameSelected_Text; // 0x2a8(0x08)
	struct UImage* Background; // 0x2b0(0x08)
	struct UButton* CardButton; // 0x2b8(0x08)
	struct UImage* DefaultBorder; // 0x2c0(0x08)
	struct UImage* DisabledIcon; // 0x2c8(0x08)
	struct UImage* HoverGlow; // 0x2d0(0x08)
	struct UImage* SelectBorder; // 0x2d8(0x08)
	struct UImage* SelectedGlow; // 0x2e0(0x08)
	struct UImage* SelectedIcon; // 0x2e8(0x08)
	struct UCanvasPanel* SelectionDoneDeco; // 0x2f0(0x08)
	struct UTigerPowerKit* ArchetypeData; // 0x2f8(0x08)
	struct FMulticastInlineDelegate OnSelected; // 0x300(0x10)
	bool IsSelected; // 0x310(0x01)
	bool IsDisabled; // 0x311(0x01)
	bool IsHoverable; // 0x312(0x01)
	bool NewVar_1; // 0x313(0x01)

	void SetIsDeselected(); // Function TBP_UI_ArchetypeSelect_Archetype_Default.TBP_UI_ArchetypeSelect_Archetype_Default_C.SetIsDeselected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetIsSelected(); // Function TBP_UI_ArchetypeSelect_Archetype_Default.TBP_UI_ArchetypeSelect_Archetype_Default_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_ArchetypeSelect_Archetype_Default_Button_190_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_ArchetypeSelect_Archetype_Default.TBP_UI_ArchetypeSelect_Archetype_Default_C.BndEvt__TBP_UI_ArchetypeSelect_Archetype_Default_Button_190_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_ArchetypeSelect_Archetype_Default_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_ArchetypeSelect_Archetype_Default.TBP_UI_ArchetypeSelect_Archetype_Default_C.BndEvt__TBP_UI_ArchetypeSelect_Archetype_Default_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_ArchetypeSelect_Archetype_Default_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_ArchetypeSelect_Archetype_Default.TBP_UI_ArchetypeSelect_Archetype_Default_C.BndEvt__TBP_UI_ArchetypeSelect_Archetype_Default_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Event Set is Disabled(); // Function TBP_UI_ArchetypeSelect_Archetype_Default.TBP_UI_ArchetypeSelect_Archetype_Default_C.Event Set is Disabled // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Event Set is Not Disabled(); // Function TBP_UI_ArchetypeSelect_Archetype_Default.TBP_UI_ArchetypeSelect_Archetype_Default_C.Event Set is Not Disabled // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ArchetypeSelect_Archetype_Default.TBP_UI_ArchetypeSelect_Archetype_Default_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ArchetypeSelect_Archetype_Default(int32_t EntryPoint); // Function TBP_UI_ArchetypeSelect_Archetype_Default.TBP_UI_ArchetypeSelect_Archetype_Default_C.ExecuteUbergraph_TBP_UI_ArchetypeSelect_Archetype_Default // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnSelected__DelegateSignature(struct UTigerPowerKit* InArchetypeData); // Function TBP_UI_ArchetypeSelect_Archetype_Default.TBP_UI_ArchetypeSelect_Archetype_Default_C.OnSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

