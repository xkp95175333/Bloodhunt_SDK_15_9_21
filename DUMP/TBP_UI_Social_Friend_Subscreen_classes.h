// WidgetBlueprintGeneratedClass TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C
// Size: 0x321 (Inherited: 0x2a8)
struct UTBP_UI_Social_Friend_Subscreen_C : UTigerSocialFriendsUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UButton* AddFriendButton; // 0x2b0(0x08)
	struct UImage* AddFriendImage; // 0x2b8(0x08)
	struct UTigerStyledRichTextBlock* AddFriendText; // 0x2c0(0x08)
	struct UTigerStyledRichTextBlock* FriendDisabledReasonText; // 0x2c8(0x08)
	struct UCanvasPanel* FriendsDisabledPanel; // 0x2d0(0x08)
	struct UCanvasPanel* FriendServiceUnavailablePanel; // 0x2d8(0x08)
	struct UTBP_UI_Social_PlayerCardList_C* FriendsList; // 0x2e0(0x08)
	struct UVerticalBox* FriendsListPanel; // 0x2e8(0x08)
	struct UHorizontalBox* FriendsTItleContainer; // 0x2f0(0x08)
	struct UOverlay* Header; // 0x2f8(0x08)
	struct UTigerStyledRichTextBlock* NumberOfFriendsText; // 0x300(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x308(0x08)
	struct TArray<struct UTigerFriend*> FriendObjs; // 0x310(0x10)
	bool Friend olnine; // 0x320(0x01)

	void UpdateAvailability(); // Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.UpdateAvailability // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RemoveFriendFromList(struct UTigerFriend* InLostFriend); // Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.RemoveFriendFromList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddFriendToList(struct UTigerFriend* InNewFriend); // Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.AddFriendToList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RefreshFriendsList(); // Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.RefreshFriendsList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFriendAdded(struct UTigerFriend* InNewFriend); // Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendAdded // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnFriendRemoved(struct UTigerFriend* InLostFriend); // Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendRemoved // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnFriendsLoaded(); // Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendsLoaded // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnFriendServiceStatusChanged(enum class ETigerOnlineServiceStatus InServiceStatus); // Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendServiceStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Social_Friend_Subscreen(int32_t EntryPoint); // Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Friend_Subscreen // (Final|UbergraphFunction) // @ game+0x16c0340
};

