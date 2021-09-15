// WidgetBlueprintGeneratedClass TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C
// Size: 0x350 (Inherited: 0x280)
struct UTBP_UI_Social_PlayerCardBase_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UButton* AcceptButton; // 0x288(0x08)
	struct USizeBox* AcceptContainer; // 0x290(0x08)
	struct UMenuAnchor* ActionMenuAnchor; // 0x298(0x08)
	struct UButton* AddButton; // 0x2a0(0x08)
	struct USizeBox* AddContainer; // 0x2a8(0x08)
	struct UButton* BackgroundButton; // 0x2b0(0x08)
	struct UCanvasPanel* CardCanvas; // 0x2b8(0x08)
	struct UImage* ColorStripe; // 0x2c0(0x08)
	struct UButton* ExtraButton; // 0x2c8(0x08)
	struct USizeBox* ExtraContainer; // 0x2d0(0x08)
	struct UImage* Image; // 0x2d8(0x08)
	struct UImage* Image_2; // 0x2e0(0x08)
	struct UImage* Image_3; // 0x2e8(0x08)
	struct UImage* Image_4; // 0x2f0(0x08)
	struct UTigerStyledRichTextBlock* PlayerName; // 0x2f8(0x08)
	struct UImage* Portrait; // 0x300(0x08)
	struct UButton* RemoveButton; // 0x308(0x08)
	struct USizeBox* RemoveContainer; // 0x310(0x08)
	struct UHorizontalBox* StatusContainer; // 0x318(0x08)
	struct UImage* StatusDot; // 0x320(0x08)
	struct UTigerStyledRichTextBlock* StatusText; // 0x328(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x330(0x08)
	struct UTBP_UI_Social_ActionMenuBase_C* ActionMenuClass; // 0x338(0x08)
	struct UAkAudioEvent* ButtonClickedAudioEvent; // 0x340(0x08)
	struct ATigerPlayerState* PlayerState; // 0x348(0x08)

	void OnExtra(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnExtra // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnAdd(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnAdd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowAddButton(bool In Show); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowAddButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowExtraButton(bool IsShow); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowExtraButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetOnlineStatus(bool bInOnline); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetOnlineStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowStatus(bool InShow); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OpenActionMenu(struct FVector2D InCursorScreenSpace); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OpenActionMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CloseActionMenu(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.CloseActionMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct UWidget* GetActionMenu(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.GetActionMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnRemove(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnRemove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowRemoveButton(bool InShow); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowRemoveButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetPlayerName(struct FText InText); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetPlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetStatusText(struct FText InText); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetStatusText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowAcceptButton(bool InShow); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowAcceptButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnAccept(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnAccept // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ExtraButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AddButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_324_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__Button_324_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_324_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__Button_324_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ExtraButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__RemoveButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AddButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void Social_PlayerCard_SetBorder_Hovered(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Social_PlayerCard_SetBorder_Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Social_PlayerCard_SetBorder_UnHovered(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Social_PlayerCard_SetBorder_UnHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AddButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__ExtraButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__RemoveButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Social_PlayerCardBase(int32_t EntryPoint); // Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ExecuteUbergraph_TBP_UI_Social_PlayerCardBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

