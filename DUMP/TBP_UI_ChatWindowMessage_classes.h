// WidgetBlueprintGeneratedClass TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C
// Size: 0x2f0 (Inherited: 0x260)
struct UTBP_UI_ChatWindowMessage_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x268(0x08)
	struct UOverlay* NameContainer; // 0x270(0x08)
	struct UButton* NameMenuButton; // 0x278(0x08)
	struct UTigerStyledRichTextBlock* PlayerNameText; // 0x280(0x08)
	struct UTextBlock* TextBlockMessage; // 0x288(0x08)
	struct FTigerChatMessage ChatMessageData; // 0x290(0x58)
	struct UUserWidget* ChatWindow; // 0x2e8(0x08)

	void SetUIPadding(); // Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.SetUIPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetUIVisibilities(); // Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.SetUIVisibilities // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Is Another Player(bool bIsAnotherPlayer); // Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.Is Another Player // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void RecycleMessage(struct FTigerChatMessage InChatMessage); // Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.RecycleMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.BndEvt__NameMenuButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ChatWindowMessage(int32_t EntryPoint); // Function TBP_UI_ChatWindowMessage.TBP_UI_ChatWindowMessage_C.ExecuteUbergraph_TBP_UI_ChatWindowMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

