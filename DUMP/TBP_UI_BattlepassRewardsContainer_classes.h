// WidgetBlueprintGeneratedClass TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C
// Size: 0x2e0 (Inherited: 0x280)
struct UTBP_UI_BattlepassRewardsContainer_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UOverlay* BackgroundWidget; // 0x288(0x08)
	struct UUniformGridPanel* RewardsContainer; // 0x290(0x08)
	struct FMulticastInlineDelegate OnItemHovered; // 0x298(0x10)
	struct FLinearColor BackgroundBrushColor; // 0x2a8(0x10)
	struct FMulticastInlineDelegate OnItemSelected; // 0x2b8(0x10)
	struct UTexture2D* Premium_BG_Texture; // 0x2c8(0x08)
	bool Is Free; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UTBP_UI_Battlepass_C* BattlepassRef; // 0x2d8(0x08)

	void SetUnlockedState(bool bIsUnlocked); // Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.SetUnlockedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PopulateRewards(struct TArray<struct FTigerItemId> ItemIds, bool bIsUnlocked, bool IsFree, int32_t InRank); // Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.PopulateRewards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ItemHovered(struct FTigerItemId ItemId); // Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ItemHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ItemSelected(struct FTigerItemId InItemId); // Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ItemSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BattlepassRewardsContainer(int32_t EntryPoint); // Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ExecuteUbergraph_TBP_UI_BattlepassRewardsContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnItemSelected__DelegateSignature(struct FTigerItemId InItemId); // Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.OnItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnItemHovered__DelegateSignature(struct FTigerItemId ItemId, bool Item Is Free); // Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.OnItemHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

