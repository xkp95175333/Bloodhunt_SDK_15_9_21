// WidgetBlueprintGeneratedClass TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C
// Size: 0x2a0 (Inherited: 0x288)
struct UTBP_UI_Social_PartyInviteList_C : UTigerSocialPartyInviteListUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UListView* PartyInviteListView; // 0x290(0x08)
	struct UScrollBox* ScrollBox_22; // 0x298(0x08)

	void Open(); // Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.Open // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Close(); // Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInviteReceived(struct UTigerPartyInvite* InInvite); // Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.OnInviteReceived // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnInviteRemoved(struct UTigerPartyInvite* InInvite); // Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.OnInviteRemoved // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Social_PartyInviteList(int32_t EntryPoint); // Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.ExecuteUbergraph_TBP_UI_Social_PartyInviteList // (Final|UbergraphFunction) // @ game+0x16c0340
};

