// BlueprintGeneratedClass TBP_LootContainerBase.TBP_LootContainerBase_C
// Size: 0x300 (Inherited: 0x298)
struct ATBP_LootContainerBase_C : ATigerLootContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UAkComponent* ContainerOpenAudioEvent; // 0x2a0(0x08)
	struct UAkComponent* HeigthenedSensesDetectLoopAudioEvent; // 0x2a8(0x08)
	struct USphereComponent* HeightenedSensesCollider; // 0x2b0(0x08)
	struct UStaticMeshComponent* OutlineMesh; // 0x2b8(0x08)
	struct UStaticMeshComponent* LootMistGlow; // 0x2c0(0x08)
	struct UBP_DynamicLootSpawner_C* BP_DynamicLootSpawner; // 0x2c8(0x08)
	struct UStaticMeshComponent* BaseMesh; // 0x2d0(0x08)
	struct UStaticMeshComponent* HeightenedSensesMesh; // 0x2d8(0x08)
	float HeightenedSensesTimeline_Item_Alpha_19091A904278DD250B11EC9B6FF28B50; // 0x2e0(0x04)
	enum class ETimelineDirection HeightenedSensesTimeline__Direction_19091A904278DD250B11EC9B6FF28B50; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct UTimelineComponent* HeightenedSensesTimeline; // 0x2e8(0x08)
	struct TArray<struct FTransform> ItemSpawnTransforms; // 0x2f0(0x10)

	void GetPingInfo(struct FTS_PingableActorInfo OutInfo); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.GetPingInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetPingCategory(struct FName OutCategory); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.GetPingCategory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnAnimateOpen(); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnAnimateOpen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSpawnLoot(); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnSpawnLoot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInteractFinished(); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnInteractFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HeightenedSensesTimeline__FinishedFunc(); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.HeightenedSensesTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void HeightenedSensesTimeline__UpdateFunc(); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.HeightenedSensesTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(float DeltaSeconds); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnLeaveHeightenedSenseArea(); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnLeaveHeightenedSenseArea // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnEnterHeightenedSenseAreaInitial(); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnEnterHeightenedSenseAreaInitial // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnEnterHeightenedSenseArea(); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnEnterHeightenedSenseArea // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInteract(enum class EInteractiveObjectState ActivatedTrigger); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnInteract // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnBecameClosestLootContainerInHeightenedSenses(); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnBecameClosestLootContainerInHeightenedSenses // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnStoppedBeingClosestLootContainerInHeightenedSenses(); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnStoppedBeingClosestLootContainerInHeightenedSenses // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnJumpToFinalState(); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnJumpToFinalState // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_LootContainerBase(int32_t EntryPoint); // Function TBP_LootContainerBase.TBP_LootContainerBase_C.ExecuteUbergraph_TBP_LootContainerBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

