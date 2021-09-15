// WidgetBlueprintGeneratedClass TBP_UI_ChatWindow.TBP_UI_ChatWindow_C
// Size: 0x421 (Inherited: 0x280)
struct UTBP_UI_ChatWindow_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* CharacterLimitReached; // 0x288(0x08)
	struct UBorder* Border_139; // 0x290(0x08)
	struct UTigerStyledRichTextBlock* CharacterLimitErrorText; // 0x298(0x08)
	struct UVerticalBox* ChatWindowVerticalBox; // 0x2a0(0x08)
	struct UImage* Image_86; // 0x2a8(0x08)
	struct UOverlay* InputContainer; // 0x2b0(0x08)
	struct UEditableTextBox* InputTextBox; // 0x2b8(0x08)
	struct UOverlay* MessageBackgroundContainer; // 0x2c0(0x08)
	struct UVerticalBox* MessagesBox; // 0x2c8(0x08)
	struct UScrollBox* MessageScrollBox; // 0x2d0(0x08)
	struct UTBP_UI_Social_ActionMenuItem_C* OptionsAddFriend; // 0x2d8(0x08)
	struct UOverlay* OptionsContainer; // 0x2e0(0x08)
	struct UTBP_UI_Social_ActionMenuItem_C* OptionsInviteToGroup; // 0x2e8(0x08)
	struct UTBP_UI_Social_ActionMenuItem_C* OptionsMute; // 0x2f0(0x08)
	struct UTigerStyledRichTextBlock* PlayerNameText; // 0x2f8(0x08)
	struct UTBP_UI_Divider_C* TBP_UI_Divider; // 0x300(0x08)
	struct UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x308(0x08)
	struct UTigerStyledRichTextBlock* ToText; // 0x310(0x08)
	struct FLinearColor BorderColor; // 0x318(0x10)
	struct FMulticastInlineDelegate OnMessageInput; // 0x328(0x10)
	bool bTakesInput; // 0x338(0x01)
	bool bWriteOnlyToGroupMembers; // 0x339(0x01)
	char pad_33A[0x2]; // 0x33a(0x02)
	int32_t CharcterLimit; // 0x33c(0x04)
	struct FText CharacterLimitTextFormat; // 0x340(0x18)
	struct FText TextBoxText; // 0x358(0x18)
	bool PostEnter; // 0x370(0x01)
	char pad_371[0x3]; // 0x371(0x03)
	int32_t MaxStoredChatMessages; // 0x374(0x04)
	bool bIsHoveringChatName; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FTigerChatMessage CurrentSelectedChatMessage; // 0x380(0x58)
	struct FTimerHandle OptionsMenuTimerHandle; // 0x3d8(0x08)
	struct FString AllChatPrefix; // 0x3e0(0x10)
	struct FString AllChatShortPrefix; // 0x3f0(0x10)
	struct FString GroupChatPrefix; // 0x400(0x10)
	struct FString GroupChatShortPrefix; // 0x410(0x10)
	bool bIsInMatch; // 0x420(0x01)

	void SetChatPosition(bool HasMatchStarted); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.SetChatPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void NotifyBannedStatus(struct UTigerChatComponent* InChatComponent); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.NotifyBannedStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void VerifyCanSendMessage(bool bCanSend); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.VerifyCanSendMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Should Prevent Trying To Type In General Chat(bool bShouldPrevent); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Should Prevent Trying To Type In General Chat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Has Chat Prefix(struct FString InChatMessage, struct FString InPrefix, struct FString InPrefixShort, bool bHasPrefix); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Has Chat Prefix // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void CreateGameMessage(struct FText InGameMessage, bool bIsBanMessage); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.CreateGameMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetChatMode(bool bIsGroupChat); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.SetChatMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Remove Muted Players Messages(struct FTigerPersistentPlayerID InMutedPlayerId); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Remove Muted Players Messages // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EnableOptionsMenu(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.EnableOptionsMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddAsFriend(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddAsFriend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InviteToGroup(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.InviteToGroup // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddNewMessage(struct FTigerChatMessage InChatMessage); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddNewMessage // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void FadeOutWindow(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeOutWindow // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FadeInWindow(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeInWindow // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void StartFadeOutTimer(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.StartFadeOutTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__InputTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void FadeInBackground(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeInBackground // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddMessage(struct FTigerChatMessage InChatMessage); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddMessage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Focus on Input Box(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Focus on Input Box // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void FadeOutBackground(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeOutBackground // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnMessageNameHovered(struct FTigerChatMessage InChatData); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageNameHovered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnMessageNameUnhovered(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageNameUnhovered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOptionsBoxOpened(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnOptionsBoxOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__OptionsInviteToGroup_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsInviteToGroup_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__OptionsAddFriend_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsAddFriend_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void HideOptionsMenu(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.HideOptionsMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__OptionsMute_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsMute_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnRightClicked(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnRightClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__InputTextBox_K2Node_ComponentBoundEvent_55_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_55_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnSwapChatInputPressed(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnSwapChatInputPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void WelcomePlayersInElysium(); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.WelcomePlayersInElysium // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnBanStatusChanged(struct FTigerMuteInfo InMuteInfo); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnBanStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPreMatchStateChanged(struct FTigerPreMatchStateInfo PreMatchState); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnPreMatchStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ChatWindow(int32_t EntryPoint); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.ExecuteUbergraph_TBP_UI_ChatWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnMessageInput__DelegateSignature(struct FText MessageText, bool bWriteOnlyToGroupMembers); // Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageInput__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

