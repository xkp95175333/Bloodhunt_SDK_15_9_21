// WidgetBlueprintGeneratedClass TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C
// Size: 0x360 (Inherited: 0x350)
struct UTBP_UI_SocialPartyMemberListItem_C : UTBP_UI_Social_PlayerCardBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UTigerUser* Item; // 0x358(0x08)

	void BP_OnEntryReleased(); // Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_SocialPartyMemberListItem(int32_t EntryPoint); // Function TBP_UI_SocialPartyMemberListItem.TBP_UI_SocialPartyMemberListItem_C.ExecuteUbergraph_TBP_UI_SocialPartyMemberListItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

