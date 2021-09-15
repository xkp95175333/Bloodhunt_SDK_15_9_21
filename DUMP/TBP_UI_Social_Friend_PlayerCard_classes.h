// WidgetBlueprintGeneratedClass TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C
// Size: 0x360 (Inherited: 0x350)
struct UTBP_UI_Social_Friend_PlayerCard_C : UTBP_UI_Social_PlayerCardBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UTigerFriend* Friend; // 0x358(0x08)

	void OnExtra(); // Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnExtra // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnAdd(); // Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnAdd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLocationChanged(struct FString InLocation); // Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.OnLocationChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InviteToParty(); // Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.InviteToParty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RemoveFriend(); // Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.RemoveFriend // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update(); // Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ReEnableInviteFriendButton(); // Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.ReEnableInviteFriendButton // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Social_Friend_PlayerCard(int32_t EntryPoint); // Function TBP_UI_Social_Friend_PlayerCard.TBP_UI_Social_Friend_PlayerCard_C.ExecuteUbergraph_TBP_UI_Social_Friend_PlayerCard // (Final|UbergraphFunction) // @ game+0x16c0340
};

