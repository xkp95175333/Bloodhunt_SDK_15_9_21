// WidgetBlueprintGeneratedClass TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C
// Size: 0x2b8 (Inherited: 0x290)
struct UTBP_UI_Social_Inbox_Subscreen_C : UTigerSocialInboxUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UTBP_UI_Social_FriendInviteList_C* FriendInviteList; // 0x298(0x08)
	struct UVerticalBox* FriendInvitePanel; // 0x2a0(0x08)
	struct UVerticalBox* PartyInvitationPanel; // 0x2a8(0x08)
	struct UTBP_UI_Social_PartyInviteList_C* PartyInviteList; // 0x2b0(0x08)

	void UpdateFriendAvailability(); // Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.UpdateFriendAvailability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnFriendServiceStatusChanged(enum class ETigerOnlineServiceStatus InServiceStatus); // Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.OnFriendServiceStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Social_Inbox_Subscreen(int32_t EntryPoint); // Function TBP_UI_Social_Inbox_Subscreen.TBP_UI_Social_Inbox_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Inbox_Subscreen // (Final|UbergraphFunction) // @ game+0x16c0340
};

