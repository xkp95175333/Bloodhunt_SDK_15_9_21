// BlueprintGeneratedClass TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C
// Size: 0x2a8 (Inherited: 0x278)
struct ATBP_Reward_Preview_Outfit_Store_C : ATigerBattlepassRewardPreview {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x278(0x08)
	struct UTigerSpotLightComponent* TigerSpotLight; // 0x280(0x08)
	struct UChildActorComponent* PaperdollComponentEditorPreview; // 0x288(0x08)
	struct UTigerItemPreviewInputComponent* TigerItemPreviewInput; // 0x290(0x08)
	struct UChildActorComponent* PaperdollComponent; // 0x298(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2a0(0x08)

	void ApplyItemToPaperdoll(struct FTigerPreviewerData InPreviewAppearance, enum class ETigerClan InClanType); // Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.ApplyItemToPaperdoll // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void LoadCharacterPresetFromPrimaryOwner(); // Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.LoadCharacterPresetFromPrimaryOwner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TryWithPlayerAppearance(bool bWasSuccessful); // Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.TryWithPlayerAppearance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnCharacterPresetsLoaded(struct TArray<struct UObject*> LoadedPresets); // Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.OnCharacterPresetsLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPreviewItemUpdated(); // Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.OnPreviewItemUpdated // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnAppearanceChanged(); // Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.OnAppearanceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PlayerApperanceFinishedLoading(); // Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.PlayerApperanceFinishedLoading // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_Reward_Preview_Outfit_Store(int32_t EntryPoint); // Function TBP_Reward_Preview_Outfit_Store.TBP_Reward_Preview_Outfit_Store_C.ExecuteUbergraph_TBP_Reward_Preview_Outfit_Store // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

