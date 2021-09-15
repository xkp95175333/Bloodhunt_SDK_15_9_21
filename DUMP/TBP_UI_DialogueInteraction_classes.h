// WidgetBlueprintGeneratedClass TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C
// Size: 0x2e8 (Inherited: 0x2b0)
struct UTBP_UI_DialogueInteraction_C : UTigerDialogueInteractionScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UTBP_UI_InputMenuPrompt_C* CloseButtonPrompt; // 0x2b8(0x08)
	struct UTBP_UI_InputMenuPrompt_C* ContinueButtonPrompt; // 0x2c0(0x08)
	struct UTBP_UI_DialogueText_C* DialogueText; // 0x2c8(0x08)
	struct UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x2d0(0x08)
	int32_t LastAkEvent; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UABP_Vendor_C* VendorAnimationInstance; // 0x2e0(0x08)

	void EndInteraction(); // Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.EndInteraction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StartInteraction(); // Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.StartInteraction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void NextDialoguePack(); // Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.NextDialoguePack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void NextDialogueLine(struct FText InText, struct FText InQuestObjective); // Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.NextDialogueLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ContinueButtonPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature(); // Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.BndEvt__ContinueButtonPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__CloseButtonPrompt_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature(); // Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.BndEvt__CloseButtonPrompt_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnInitialized(); // Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void Continue(); // Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.Continue // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseDialogueInteraction(); // Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.CloseDialogueInteraction // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_DialogueInteraction(int32_t EntryPoint); // Function TBP_UI_DialogueInteraction.TBP_UI_DialogueInteraction_C.ExecuteUbergraph_TBP_UI_DialogueInteraction // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

