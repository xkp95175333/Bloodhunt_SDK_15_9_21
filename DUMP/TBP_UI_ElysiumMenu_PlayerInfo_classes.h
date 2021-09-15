// WidgetBlueprintGeneratedClass TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C
// Size: 0x2c0 (Inherited: 0x280)
struct UTBP_UI_ElysiumMenu_PlayerInfo_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* IsReadyLines; // 0x288(0x08)
	struct UImage* IsReadyLinesCheckmark; // 0x290(0x08)
	struct UOverlay* IsReadyOverlay; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* PlayerArchetype; // 0x2a0(0x08)
	struct UImage* PlayerAvatarImage; // 0x2a8(0x08)
	struct UTigerStyledRichTextBlock* PlayerName; // 0x2b0(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x2b8(0x08)

	void TBP_UI_ElysiumMenu_PlayerInfo_AutoGenFunc(bool bInIsGroupReady); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.TBP_UI_ElysiumMenu_PlayerInfo_AutoGenFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetPlayerName(); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetPlayerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdatePlayerName(); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.UpdatePlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetArchetypeText(enum class ETigerPowerKitType InArchetypeType); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetArchetypeText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdatePlayerArchetype(struct UTigerPlayerClanData* InClanData, struct UTigerPowerKit* InArchetypeData); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.UpdatePlayerArchetype // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetupPlayerIcon(); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetupPlayerIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetCharacterIcon(); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetCharacterIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PopulatePlayerInfo(enum class ETigerPowerKitType InArchetypeType); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.PopulatePlayerInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnPlayerBeginPlay(struct ATigerPlayer* InPlayer); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerBeginPlay // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnValidPawnFound(struct APawn* NewPawn); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnValidPawnFound // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Destruct(); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ElysiumMenu_PlayerInfo(int32_t EntryPoint); // Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.ExecuteUbergraph_TBP_UI_ElysiumMenu_PlayerInfo // (Final|UbergraphFunction) // @ game+0x16c0340
};

