// WidgetBlueprintGeneratedClass TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C
// Size: 0x2f8 (Inherited: 0x280)
struct UTBP_UI_NpcDialogueScreen_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTigerStyledRichTextBlock* Dialogue; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* DialogueHeader; // 0x290(0x08)
	struct UImage* DialogueScrollbarCornerBottom; // 0x298(0x08)
	struct UImage* DialogueScrollbarCornerTop; // 0x2a0(0x08)
	struct UImage* OptionScrollbarCorner1; // 0x2a8(0x08)
	struct UImage* OptionScrollbarCorner2; // 0x2b0(0x08)
	struct UScrollBox* ScrollingDialogueOptionsBox; // 0x2b8(0x08)
	struct UScrollBox* ScrollingTextBox; // 0x2c0(0x08)
	struct UImage* SelectedOptionHoveredImage; // 0x2c8(0x08)
	struct UTBP_UI_MenuButton_C* TBP_UI_MenuButton; // 0x2d0(0x08)
	struct UTBP_UI_VendorShared_C* SharedVendorUI; // 0x2d8(0x08)
	struct UTigerInteractiveNpcComponent* InteractiveNpcComponent; // 0x2e0(0x08)
	int32_t LastAkEvent; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UAnimMontage* LastPlayedMontage; // 0x2f0(0x08)

	void CloseDialogueScreen(); // Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.CloseDialogueScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowNextDialogueLine(struct FText InText); // Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.ShowNextDialogueLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct UAnimInstance* GetPaperDollAnimationInstance(); // Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.GetPaperDollAnimationInstance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayPaperDollAnimation(struct UAnimMontage* InAnimationMontage); // Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.PlayPaperDollAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BeginDialogueInteraction(struct UTigerInteractiveNpcComponent* InInteractiveComponent, struct UTBP_UI_VendorShared_C* InVendorUi); // Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.BeginDialogueInteraction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowNewDialoguePack(struct FTigerNpcDialogue InDialogueAsset, struct FText InNextLine); // Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.ShowNewDialoguePack // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature(); // Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_NpcDialogueScreen(int32_t EntryPoint); // Function TBP_UI_NpcDialogueScreen.TBP_UI_NpcDialogueScreen_C.ExecuteUbergraph_TBP_UI_NpcDialogueScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

