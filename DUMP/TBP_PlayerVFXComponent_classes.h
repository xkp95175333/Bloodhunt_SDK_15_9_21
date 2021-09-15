// BlueprintGeneratedClass TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C
// Size: 0xc8 (Inherited: 0xb0)
struct UTBP_PlayerVFXComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct ATBP_Player_C* OwnerPlayer; // 0xb8(0x08)
	struct UParticleSystemComponent* HeavyAttackPS; // 0xc0(0x08)

	void OnCharacterCustomizationChanged(); // Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnCharacterCustomizationChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnHeavyAttackChargeEnd(); // Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnHeavyAttackChargeEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnHeavyAttackChargeBegin(); // Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnHeavyAttackChargeBegin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnAppearance Changed(enum class ETigerPlayerApperanceChangeReason InReason); // Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.OnAppearance Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_PlayerVFXComponent(int32_t EntryPoint); // Function TBP_PlayerVFXComponent.TBP_PlayerVFXComponent_C.ExecuteUbergraph_TBP_PlayerVFXComponent // (Final|UbergraphFunction) // @ game+0x16c0340
};

