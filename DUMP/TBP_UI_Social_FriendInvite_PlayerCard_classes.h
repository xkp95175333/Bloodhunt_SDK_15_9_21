// WidgetBlueprintGeneratedClass TBP_UI_Social_FriendInvite_PlayerCard.TBP_UI_Social_FriendInvite_PlayerCard_C
// Size: 0x360 (Inherited: 0x350)
struct UTBP_UI_Social_FriendInvite_PlayerCard_C : UTBP_UI_Social_PlayerCardBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UTigerFriendInvite* Invite; // 0x358(0x08)

	void OnRemove(); // Function TBP_UI_Social_FriendInvite_PlayerCard.TBP_UI_Social_FriendInvite_PlayerCard_C.OnRemove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RejectFriendRequest(); // Function TBP_UI_Social_FriendInvite_PlayerCard.TBP_UI_Social_FriendInvite_PlayerCard_C.RejectFriendRequest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AcceptFriendRequest(); // Function TBP_UI_Social_FriendInvite_PlayerCard.TBP_UI_Social_FriendInvite_PlayerCard_C.AcceptFriendRequest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnAccept(); // Function TBP_UI_Social_FriendInvite_PlayerCard.TBP_UI_Social_FriendInvite_PlayerCard_C.OnAccept // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update(); // Function TBP_UI_Social_FriendInvite_PlayerCard.TBP_UI_Social_FriendInvite_PlayerCard_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BP_OnEntryReleased(); // Function TBP_UI_Social_FriendInvite_PlayerCard.TBP_UI_Social_FriendInvite_PlayerCard_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function TBP_UI_Social_FriendInvite_PlayerCard.TBP_UI_Social_FriendInvite_PlayerCard_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function TBP_UI_Social_FriendInvite_PlayerCard.TBP_UI_Social_FriendInvite_PlayerCard_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function TBP_UI_Social_FriendInvite_PlayerCard.TBP_UI_Social_FriendInvite_PlayerCard_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Social_FriendInvite_PlayerCard(int32_t EntryPoint); // Function TBP_UI_Social_FriendInvite_PlayerCard.TBP_UI_Social_FriendInvite_PlayerCard_C.ExecuteUbergraph_TBP_UI_Social_FriendInvite_PlayerCard // (Final|UbergraphFunction) // @ game+0x16c0340
};

