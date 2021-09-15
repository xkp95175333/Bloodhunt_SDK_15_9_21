// BlueprintGeneratedClass TBP_ANS_HeavyAttackRange.TBP_ANS_HeavyAttackRange_C
// Size: 0x40 (Inherited: 0x30)
struct UTBP_ANS_HeavyAttackRange_C : UTigerAnimNotifyState_HeavyAttackRange {
	struct TArray<struct UParticleSystemComponent*> ChargingParticles; // 0x30(0x10)

	void OnChargeUpEnded(struct ATigerPlayer* Player, struct UTigerMeleeWeapon* EquippedWeapon, float ChargeUpRatio); // Function TBP_ANS_HeavyAttackRange.TBP_ANS_HeavyAttackRange_C.OnChargeUpEnded // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function TBP_ANS_HeavyAttackRange.TBP_ANS_HeavyAttackRange_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x16c0340
};

