// WidgetBlueprintGeneratedClass TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C
// Size: 0x2b8 (Inherited: 0x2a8)
struct UTBP_UI_Social_FriendInviteList_C : UTigerSocialFriendInviteListUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UListView* FriendRequestListView; // 0x2b0(0x08)

	void OnPopulateInvites(struct TArray<struct UTigerFriendInvite*> InFriendInvites); // Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnPopulateInvites // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnInviteReceived(struct UTigerFriendInvite* InInvite); // Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnInviteReceived // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnInviteRemoved(struct UTigerFriendInvite* InInvite); // Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.OnInviteRemoved // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Social_FriendInviteList(int32_t EntryPoint); // Function TBP_UI_Social_FriendInviteList.TBP_UI_Social_FriendInviteList_C.ExecuteUbergraph_TBP_UI_Social_FriendInviteList // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

