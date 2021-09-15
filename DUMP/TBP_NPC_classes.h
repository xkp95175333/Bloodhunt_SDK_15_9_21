// BlueprintGeneratedClass TBP_NPC.TBP_NPC_C
// Size: 0xc0c (Inherited: 0xb10)
struct ATBP_NPC_C : ATigerNPC {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb10(0x08)
	struct UStaticMeshComponent* OutlineBillboard; // 0xb18(0x08)
	struct UStaticMeshComponent* DirectionIndicator; // 0xb20(0x08)
	struct UTBP_FeedingComponent_C* TBP_FeedingComponent; // 0xb28(0x08)
	struct UWidgetComponent* HealthBarWidget; // 0xb30(0x08)
	struct UPatrolComponent* Patrol; // 0xb38(0x08)
	float TimelineHeightenedSenses_Opacity_1EFAF17B4589A86FDB5A4DBF424780C0; // 0xb40(0x04)
	float TimelineHeightenedSenses_Emissive_1EFAF17B4589A86FDB5A4DBF424780C0; // 0xb44(0x04)
	enum class ETimelineDirection TimelineHeightenedSenses__Direction_1EFAF17B4589A86FDB5A4DBF424780C0; // 0xb48(0x01)
	char pad_B49[0x7]; // 0xb49(0x07)
	struct UTimelineComponent* TimelineHeightenedSenses; // 0xb50(0x08)
	float Timeline_1_BloodyBite_352DA62F4D7A8869132FD4B12C3940BD; // 0xb58(0x04)
	float Timeline_1_Veins_352DA62F4D7A8869132FD4B12C3940BD; // 0xb5c(0x04)
	float Timeline_1_Desaturation_352DA62F4D7A8869132FD4B12C3940BD; // 0xb60(0x04)
	enum class ETimelineDirection Timeline_1__Direction_352DA62F4D7A8869132FD4B12C3940BD; // 0xb64(0x01)
	char pad_B65[0x3]; // 0xb65(0x03)
	struct UTimelineComponent* Timeline_2; // 0xb68(0x08)
	float Timeline_0_BloodyBite_73AE1FB04C8F7578E285F3A21FC09467; // 0xb70(0x04)
	float Timeline_0_Veins_73AE1FB04C8F7578E285F3A21FC09467; // 0xb74(0x04)
	float Timeline_0_Desaturation_73AE1FB04C8F7578E285F3A21FC09467; // 0xb78(0x04)
	enum class ETimelineDirection Timeline_0__Direction_73AE1FB04C8F7578E285F3A21FC09467; // 0xb7c(0x01)
	char pad_B7D[0x3]; // 0xb7d(0x03)
	struct UTimelineComponent* Timeline_1; // 0xb80(0x08)
	bool Jump Button Down; // 0xb88(0x01)
	bool Crouch Button Down; // 0xb89(0x01)
	char pad_B8A[0x6]; // 0xb8a(0x06)
	struct FTimerHandle HSensesDelayHandle; // 0xb90(0x08)
	struct UTigerNearbySoundCueComponent* HightPotenceBloodSoundComponent; // 0xb98(0x08)
	struct UMaterialInstanceDynamic* FaceMaterial; // 0xba0(0x08)
	struct UNiagaraComponent* PotencyParticle; // 0xba8(0x08)
	struct UNiagaraSystem* CashedPotencyParticle2; // 0xbb0(0x08)
	struct FSoftObjectPath NiagaraPotencyPath; // 0xbb8(0x18)
	struct FSoftObjectPath NiagaraPotencyPath2; // 0xbd0(0x18)
	struct UNiagaraSystem* CashedPotencyParticle; // 0xbe8(0x08)
	float SmoothTime; // 0xbf0(0x04)
	char pad_BF4[0x4]; // 0xbf4(0x04)
	struct UMaterialInterface* EntityVisorLODMaterial; // 0xbf8(0x08)
	int32_t HeartBeatAkEventID; // 0xc00(0x04)
	struct FName MasqueradeBreakVO; // 0xc04(0x08)

	void RemoveAwarenessParticle(); // Function TBP_NPC.TBP_NPC_C.RemoveAwarenessParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetStencilIndex(int32_t OutIndex); // Function TBP_NPC.TBP_NPC_C.GetStencilIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void ResetEntityVisor(); // Function TBP_NPC.TBP_NPC_C.ResetEntityVisor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MakeEntityVisorVisibleInHS(); // Function TBP_NPC.TBP_NPC_C.MakeEntityVisorVisibleInHS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetPotencyParticleActive(bool InIsActive); // Function TBP_NPC.TBP_NPC_C.SetPotencyParticleActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DisableScreenCullSize(); // Function TBP_NPC.TBP_NPC_C.DisableScreenCullSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitHealthBar(); // Function TBP_NPC.TBP_NPC_C.InitHealthBar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateOutlineParameters(); // Function TBP_NPC.TBP_NPC_C.UpdateOutlineParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RemoveHighPotenceBloodSoundComp(); // Function TBP_NPC.TBP_NPC_C.RemoveHighPotenceBloodSoundComp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateHighPotenceBloodSoundComp(); // Function TBP_NPC.TBP_NPC_C.CreateHighPotenceBloodSoundComp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function TBP_NPC.TBP_NPC_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Timeline_0__FinishedFunc(); // Function TBP_NPC.TBP_NPC_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void Timeline_0__UpdateFunc(); // Function TBP_NPC.TBP_NPC_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void Timeline_1__FinishedFunc(); // Function TBP_NPC.TBP_NPC_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void Timeline_1__UpdateFunc(); // Function TBP_NPC.TBP_NPC_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void TimelineHeightenedSenses__FinishedFunc(); // Function TBP_NPC.TBP_NPC_C.TimelineHeightenedSenses__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void TimelineHeightenedSenses__UpdateFunc(); // Function TBP_NPC.TBP_NPC_C.TimelineHeightenedSenses__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void SpawnBloodDecal(); // Function TBP_NPC.TBP_NPC_C.SpawnBloodDecal // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnLeaveHeightenedSenseArea(); // Function TBP_NPC.TBP_NPC_C.OnLeaveHeightenedSenseArea // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnEnterHeightenedSenseArea(); // Function TBP_NPC.TBP_NPC_C.OnEnterHeightenedSenseArea // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnEnterHeightenedSenseAreaInitial(); // Function TBP_NPC.TBP_NPC_C.OnEnterHeightenedSenseAreaInitial // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnPlayMeleeHitEffects(struct UTigerMeleeWeapon* WeaponHitBy, struct FVector ImpactLocation, struct FVector HitDirection); // Function TBP_NPC.TBP_NPC_C.OnPlayMeleeHitEffects // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnBloodPotencyChanged(enum class ETigerBloodPotency InBloodPotency); // Function TBP_NPC.TBP_NPC_C.OnBloodPotencyChanged // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TBP_NPC.TBP_NPC_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void PickHeartMeshes(); // Function TBP_NPC.TBP_NPC_C.PickHeartMeshes // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnShowDamageAmount(struct FVector InHitLocation, struct FLinearColor InDamageColor, int32_t InTotalDamageAmount, int32_t InHealthDamageAmount, bool bInHasExtraHealth, bool bInHasShield, float InRangedDamageFalloffPercent); // Function TBP_NPC.TBP_NPC_C.OnShowDamageAmount // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_NPC.TBP_NPC_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnDeath(); // Function TBP_NPC.TBP_NPC_C.OnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function TBP_NPC.TBP_NPC_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnGainedSightOfLocalPlayer(struct ATigerPlayer* InPlayer); // Function TBP_NPC.TBP_NPC_C.OnGainedSightOfLocalPlayer // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnLostSightOfLocalPlayer(struct ATigerPlayer* InPlayer); // Function TBP_NPC.TBP_NPC_C.OnLostSightOfLocalPlayer // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_0_OnOutlineModeRefreshed__DelegateSignature(enum class ETigerOutlineMode HighestPrioOutline); // Function TBP_NPC.TBP_NPC_C.BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_0_OnOutlineModeRefreshed__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void OnBecameClosestNpcWithPotencyInHeightenedSenses(); // Function TBP_NPC.TBP_NPC_C.OnBecameClosestNpcWithPotencyInHeightenedSenses // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnStoppedBeingClosestNpcWithPotencyInHeightenedSenses(); // Function TBP_NPC.TBP_NPC_C.OnStoppedBeingClosestNpcWithPotencyInHeightenedSenses // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnLocalPlayerUsedHS(bool bIsNowActive); // Function TBP_NPC.TBP_NPC_C.OnLocalPlayerUsedHS // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ToggleUIVisibility(); // Function TBP_NPC.TBP_NPC_C.ToggleUIVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFeedingStart(int32_t FeedingTicksLeft, int32_t MaxFeedingTicks); // Function TBP_NPC.TBP_NPC_C.OnFeedingStart // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFeedingEnd(); // Function TBP_NPC.TBP_NPC_C.OnFeedingEnd // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSawLocalPlayerBreachMasquerade(); // Function TBP_NPC.TBP_NPC_C.OnSawLocalPlayerBreachMasquerade // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_NPC(int32_t EntryPoint); // Function TBP_NPC.TBP_NPC_C.ExecuteUbergraph_TBP_NPC // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

