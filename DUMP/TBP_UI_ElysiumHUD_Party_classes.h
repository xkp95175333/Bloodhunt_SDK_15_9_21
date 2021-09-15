// WidgetBlueprintGeneratedClass TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C
// Size: 0x2d4 (Inherited: 0x280)
struct UTBP_UI_ElysiumHUD_Party_C : UTigerGroupUIWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UOverlay* OverlayContainer; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* PartyText; // 0x290(0x08)
	struct UTBP_UI_CharacterCard_Icon_C* TBP_UI_CharacterCard_Icon; // 0x298(0x08)
	struct UTBP_UI_CharacterCard_Icon_C* TBP_UI_CharacterCard_Icon_2; // 0x2a0(0x08)
	struct UTBP_UI_CharacterCard_Icon_C* TBP_UI_CharacterCard_Icon_3; // 0x2a8(0x08)
	struct TArray<struct UTBP_UI_CharacterCard_Icon_C*> PlayerIcons; // 0x2b0(0x10)
	struct TArray<struct ATigerPlayerState*> PartyPlayerStates; // 0x2c0(0x10)
	float UpdateTimer; // 0x2d0(0x04)

	void Update Icons(); // Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Update Icons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdatePlayerStates(); // Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdatePlayerStates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateWidget(); // Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void On PartyUpdated(); // Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.On PartyUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerJoiendParty(struct FTigerPartyId InPartyId, struct FString InJoiningPlayerId); // Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnPlayerJoiendParty // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerLeftParty(struct FTigerPartyId InPartyId, struct FString InDepartingPlayerId); // Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnPlayerLeftParty // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update Cards(); // Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Update Cards // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateIsReady(bool bInIsGroupReady); // Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateIsReady // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GroupChanged(); // Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.GroupChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCardLoaded(); // Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnCardLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ElysiumHUD_Party(int32_t EntryPoint); // Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Party // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

