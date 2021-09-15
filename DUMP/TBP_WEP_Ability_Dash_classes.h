// BlueprintGeneratedClass TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C
// Size: 0xd0 (Inherited: 0xc8)
struct UTBP_WEP_Ability_Dash_C : UTigerWeaponAbilityDash {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)

	void OnCharacterHit(struct ATigerCharacter* AHitTigerCharacter); // Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.OnCharacterHit // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnTerrainHitResult(struct AActor* InTerrainActor, struct UPrimitiveComponent* InHitComponent, struct FHitResult InHitResult); // Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.OnTerrainHitResult // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_WEP_Ability_Dash(int32_t EntryPoint); // Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.ExecuteUbergraph_TBP_WEP_Ability_Dash // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

