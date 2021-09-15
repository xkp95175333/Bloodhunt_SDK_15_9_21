// BlueprintGeneratedClass TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C
// Size: 0x2a8 (Inherited: 0x278)
struct ATBP_RewardPreview_Outfit_C : ATigerBattlepassRewardPreview {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UTigerSpotLightComponent* TigerSpotLight; // 0x280(0x08)
	struct UChildActorComponent* PaperdollComponentEditorPreview; // 0x288(0x08)
	struct UTigerItemPreviewInputComponent* TigerItemPreviewInput; // 0x290(0x08)
	struct UChildActorComponent* PaperdollComponent; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)

	void WaitForPlayerAppearanceAsync(); // Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.WaitForPlayerAppearanceAsync // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ApplyItemToPaperdoll(struct FTigerPreviewerData InPreviewAppearance, enum class ETigerClan InClanType); // Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ApplyItemToPaperdoll // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void LoadCharacterPresetFromPrimaryOwner(); // Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.LoadCharacterPresetFromPrimaryOwner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TryWithPlayerAppearance(bool bWasSuccessful); // Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.TryWithPlayerAppearance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCharacterPresetsLoaded(struct TArray<struct UObject*> LoadedPresets); // Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnCharacterPresetsLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPreviewItemUpdated(); // Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnPreviewItemUpdated // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnAppearanceChanged(); // Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.OnAppearanceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayerApperanceFinishedLoading(); // Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.PlayerApperanceFinishedLoading // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update Camera(); // Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.Update Camera // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_RewardPreview_Outfit(int32_t EntryPoint); // Function TBP_RewardPreview_Outfit.TBP_RewardPreview_Outfit_C.ExecuteUbergraph_TBP_RewardPreview_Outfit // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

