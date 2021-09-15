// WidgetBlueprintGeneratedClass TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C
// Size: 0x350 (Inherited: 0x280)
struct UTBP_UI_BattlepassTierContainer_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTBP_UI_BattlepassRewardsContainer_C* FreeRewards; // 0x288(0x08)
	struct UImage* LevelBackground; // 0x290(0x08)
	struct UImage* LevelBorder; // 0x298(0x08)
	struct UImage* LevelGlow; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* LevelHeader; // 0x2a8(0x08)
	struct UImage* LockedBG; // 0x2b0(0x08)
	struct UImage* LockedOutline; // 0x2b8(0x08)
	struct UOverlay* LockedOverlay; // 0x2c0(0x08)
	struct UTBP_UI_BattlepassRewardsContainer_C* PremiumRewards; // 0x2c8(0x08)
	struct UImage* ProgressbarGlow; // 0x2d0(0x08)
	struct UOverlay* ProgressGradient; // 0x2d8(0x08)
	struct USpacer* ProgressSpacer; // 0x2e0(0x08)
	struct UOverlay* RotatedSquare; // 0x2e8(0x08)
	struct UProgressBar* SeasonXPBar; // 0x2f0(0x08)
	struct UProgressBar* SeasonXPBarBorderBot; // 0x2f8(0x08)
	struct UProgressBar* SeasonXPBarBorderTop; // 0x300(0x08)
	struct UTBP_UI_Gradient_C* TBP_UI_Gradient; // 0x308(0x08)
	struct UImage* UnlockedOutline; // 0x310(0x08)
	struct UTigerStyledRichTextBlock* XP; // 0x318(0x08)
	int32_t SeasonTier; // 0x320(0x04)
	char pad_324[0x4]; // 0x324(0x04)
	struct FMulticastInlineDelegate OnItemHovered; // 0x328(0x10)
	struct FMulticastInlineDelegate OnItemSelected; // 0x338(0x10)
	struct UTBP_UI_Battlepass_C* BattlepassRef; // 0x348(0x08)

	void CollapseRewardIfEmtpy(struct UTBP_UI_BattlepassRewardsContainer_C* InReward); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.CollapseRewardIfEmtpy // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetRewardAtIndex(int32_t InRewardIndex, bool bIsFree, struct UTBP_UI_BattlepassReward_C* OutReward); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetRewardAtIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetFirstPremiumReward(struct UTBP_UI_BattlepassReward_C* OutFirstFreeReward); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstPremiumReward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetFirstFreeReward(struct UTBP_UI_BattlepassReward_C* OutFirstFreeReward); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstFreeReward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetLastReward(struct UTBP_UI_BattlepassReward_C* OutLastChild); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetLastReward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetFirstReward(struct UTBP_UI_BattlepassReward_C* OutFirstChild); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstReward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateHeader(bool bIsUnlocked); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.UpdateHeader // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PopulateRewards(struct UTBP_UI_BattlepassRewardsContainer_C* InRewardsContainer, struct TArray<struct FTigerItemId> ItemIds, bool bIsUnlocked, bool IsFree); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.PopulateRewards // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateTierCollections(bool bIsUnlocked, struct TArray<struct UTigerClientSeasonalRewardTier*> InTiers, bool bWantsDoubleSize); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.UpdateTierCollections // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ItemSelected(struct FTigerItemId InItemId); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ItemSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CustomEvent_1(struct FTigerItemId ItemId, bool Item Is Free); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update XP Bar(); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.Update XP Bar // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BattlepassTierContainer(int32_t EntryPoint); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ExecuteUbergraph_TBP_UI_BattlepassTierContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnItemSelected__DelegateSignature(struct FTigerItemId InItemId, int32_t Item Rank); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.OnItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnItemHovered__DelegateSignature(struct FTigerItemId ItemId, int32_t Item Rank, bool Item Is Free); // Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.OnItemHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

