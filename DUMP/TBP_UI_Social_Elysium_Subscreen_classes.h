// WidgetBlueprintGeneratedClass TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C
// Size: 0x2d0 (Inherited: 0x288)
struct UTBP_UI_Social_Elysium_Subscreen_C : UTigerSocialElysiumUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UTigerStyledRichTextBlock* NumberOfPlayerInElysium; // 0x290(0x08)
	struct UTBP_UI_Social_PlayerCardList_C* PlayerList; // 0x298(0x08)
	struct TArray<struct UTBP_UI_Social_Elysium_PlayerCard_C*> PlayerCards; // 0x2a0(0x10)
	struct TArray<struct APlayerState*> PlayerStates; // 0x2b0(0x10)
	struct TArray<struct FTigerPlayerStateFriendPair> PlayerFriendPairs; // 0x2c0(0x10)

	void RefreshPlayerListIfNeeded(); // Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.RefreshPlayerListIfNeeded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddPlayerEntry(struct ATigerElysiumPlayerState* PlayerState, int32_t Index); // Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.AddPlayerEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RefreshPlayerList(); // Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.RefreshPlayerList // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnClose(); // Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnClose // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void AddPlayer(struct ATigerPlayerState* PlayerState, int32_t Index); // Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.AddPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPartyUpdated(); // Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.OnPartyUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Social_Elysium_Subscreen(int32_t EntryPoint); // Function TBP_UI_Social_Elysium_Subscreen.TBP_UI_Social_Elysium_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Elysium_Subscreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

