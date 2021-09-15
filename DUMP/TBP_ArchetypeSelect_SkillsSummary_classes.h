// WidgetBlueprintGeneratedClass TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C
// Size: 0x430 (Inherited: 0x280)
struct UTBP_ArchetypeSelect_SkillsSummary_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UButton* ArchetpeSkill_Button; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* ArchetypeName; // 0x290(0x08)
	struct UImage* ArchetypeSkill_Arrow; // 0x298(0x08)
	struct UImage* ArchetypeSkill_BG; // 0x2a0(0x08)
	struct UImage* ArchetypeSkill_Icon; // 0x2a8(0x08)
	struct UImage* ArchetypeSkill_Outline; // 0x2b0(0x08)
	struct UTigerStyledRichTextBlock* ArchetypeTag; // 0x2b8(0x08)
	struct UImage* MoveSkill_Arrow; // 0x2c0(0x08)
	struct UImage* MoveSkill_BG; // 0x2c8(0x08)
	struct UButton* MoveSkill_Button; // 0x2d0(0x08)
	struct UImage* MoveSkill_Icon; // 0x2d8(0x08)
	struct UImage* MoveSkill_Outline; // 0x2e0(0x08)
	struct UImage* PassiveSkill_Arrow; // 0x2e8(0x08)
	struct UImage* PassiveSkill_BG; // 0x2f0(0x08)
	struct UButton* PassiveSkill_Button; // 0x2f8(0x08)
	struct UImage* PassiveSkill_Icon; // 0x300(0x08)
	struct UImage* PassiveSkill_Outline; // 0x308(0x08)
	struct UImage* PlayVideoIcon; // 0x310(0x08)
	struct UTigerStyledRichTextBlock* PowerDescription; // 0x318(0x08)
	struct UTigerStyledRichTextBlock* PowerName; // 0x320(0x08)
	struct UTigerStyledRichTextBlock* PowerType_Text; // 0x328(0x08)
	struct UTBP_UI_InputPromptCombined_C* Prompt_ViewVideo; // 0x330(0x08)
	struct UHorizontalBox* PromptBox; // 0x338(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x340(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x348(0x08)
	struct UImage* TextBG; // 0x350(0x08)
	struct UButton* VideoButton; // 0x358(0x08)
	struct UTBP_DisciplineConfigs_C* ArchetypeCONFIG; // 0x360(0x08)
	int32_t SelectedPower; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	struct UTigerPowerKit* Selected Archetype; // 0x370(0x08)
	struct TArray<struct UImage*> Skill Icons; // 0x378(0x10)
	struct TArray<struct UImage*> Outlines; // 0x388(0x10)
	struct FMulticastInlineDelegate Clicked_MoveSkill; // 0x398(0x10)
	struct FMulticastInlineDelegate Clicked_PassiveSkill; // 0x3a8(0x10)
	struct FMulticastInlineDelegate Clicked_ArchetypeSkill; // 0x3b8(0x10)
	struct FMulticastInlineDelegate Hovered_MoveSkill; // 0x3c8(0x10)
	struct FMulticastInlineDelegate Hovered_PassiveSkill; // 0x3d8(0x10)
	struct FMulticastInlineDelegate Hovered_ArchetypeSkill; // 0x3e8(0x10)
	struct FText Powers Header Text; // 0x3f8(0x18)
	struct TArray<struct UImage*> Backgrounds; // 0x410(0x10)
	struct TArray<struct UImage*> Arrows; // 0x420(0x10)

	void SetHovered(struct UImage* NewParam, bool Hovered); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.SetHovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Setup for Elysium Archetype Select(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.Setup for Elysium Archetype Select // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Update Archetype Data(struct UTigerPowerKit* Archetype Data); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.Update Archetype Data // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MoveSkill_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.BndEvt__MoveSkill_Button_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PassiveSkill_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.BndEvt__PassiveSkill_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ArchetpeSkill_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.BndEvt__ArchetpeSkill_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Update Selected Power(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.Update Selected Power // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MoveSkill_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.BndEvt__MoveSkill_Button_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PassiveSkill_Button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.BndEvt__PassiveSkill_Button_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ArchetpeSkill_Button_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.BndEvt__ArchetpeSkill_Button_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MoveSkill_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.BndEvt__MoveSkill_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PassiveSkill_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.BndEvt__PassiveSkill_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ArchetpeSkill_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.BndEvt__ArchetpeSkill_Button_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ArchetypeSelect_SkillsSummary(int32_t EntryPoint); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.ExecuteUbergraph_TBP_ArchetypeSelect_SkillsSummary // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void Hovered_ArchetypeSkill__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.Hovered_ArchetypeSkill__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Hovered_PassiveSkill__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.Hovered_PassiveSkill__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Hovered_MoveSkill__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.Hovered_MoveSkill__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Clicked_ArchetypeSkill__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.Clicked_ArchetypeSkill__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Clicked_PassiveSkill__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.Clicked_PassiveSkill__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Clicked_MoveSkill__DelegateSignature(); // Function TBP_ArchetypeSelect_SkillsSummary.TBP_ArchetypeSelect_SkillsSummary_C.Clicked_MoveSkill__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

