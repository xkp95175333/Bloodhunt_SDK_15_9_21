// WidgetBlueprintGeneratedClass TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C
// Size: 0x2a8 (Inherited: 0x290)
struct UTBP_UI_GroupInvitationList_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetSwitcher* InvitationQueue; // 0x298(0x08)
	struct UTBP_TigerGameInstance_C* GameInstance; // 0x2a0(0x08)

	void CheckIfRepeatedInviteFromPlayer(struct ATigerPlayerState* Inviter, bool NewInvite); // Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.CheckIfRepeatedInviteFromPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddInvitation(struct FTigerGroupInvitation Invitation, struct ATigerPlayerState* Inviter); // Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.AddInvitation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_GroupInvitationList(int32_t EntryPoint); // Function TBP_UI_GroupInvitationList.TBP_UI_GroupInvitationList_C.ExecuteUbergraph_TBP_UI_GroupInvitationList // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

