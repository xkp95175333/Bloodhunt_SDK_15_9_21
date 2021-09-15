// BlueprintGeneratedClass TBP_LootVanBase.TBP_LootVanBase_C
// Size: 0x342 (Inherited: 0x300)
struct ATBP_LootVanBase_C : ATBP_LootContainerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UBoxComponent* PushBoxRight; // 0x308(0x08)
	struct UBoxComponent* PushBoxLeft; // 0x310(0x08)
	struct UStaticMeshComponent* RightTrunkDoor; // 0x318(0x08)
	struct UStaticMeshComponent* LeftTrunkDoor; // 0x320(0x08)
	float Timeline_0_Alpha_21B72AA04470F9BF4EEDBB86C39B4A15; // 0x328(0x04)
	enum class ETimelineDirection Timeline_0__Direction_21B72AA04470F9BF4EEDBB86C39B4A15; // 0x32c(0x01)
	char pad_32D[0x3]; // 0x32d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x330(0x08)
	float Launch Force; // 0x338(0x04)
	float DoorOpenRotation; // 0x33c(0x04)
	bool ShouldPushPlayers; // 0x340(0x01)
	bool DoorIsOpen; // 0x341(0x01)

	void GetPingInfo(struct FTS_PingableActorInfo OutInfo); // Function TBP_LootVanBase.TBP_LootVanBase_C.GetPingInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetPingCategory(struct FName OutCategory); // Function TBP_LootVanBase.TBP_LootVanBase_C.GetPingCategory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnAnimateOpen(); // Function TBP_LootVanBase.TBP_LootVanBase_C.OnAnimateOpen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Timeline_0__FinishedFunc(); // Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void Timeline_0__UpdateFunc(); // Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void Timeline_0__PushPlayers__EventFunc(); // Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__PushPlayers__EventFunc // (BlueprintEvent) // @ game+0x16c0340
	void StaticMeshComponentHit(struct FHitResult HitResult, struct FVector ImpactVelocity); // Function TBP_LootVanBase.TBP_LootVanBase_C.StaticMeshComponentHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnOpenTrunk(); // Function TBP_LootVanBase.TBP_LootVanBase_C.OnOpenTrunk // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(float DeltaSeconds); // Function TBP_LootVanBase.TBP_LootVanBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PushBoxLeft_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TBP_LootVanBase.TBP_LootVanBase_C.BndEvt__PushBoxLeft_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__PushBoxRight_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function TBP_LootVanBase.TBP_LootVanBase_C.BndEvt__PushBoxRight_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void CheckDoorOverlaps(); // Function TBP_LootVanBase.TBP_LootVanBase_C.CheckDoorOverlaps // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void EnableDoorBlock(struct UStaticMeshComponent* DoorComponent); // Function TBP_LootVanBase.TBP_LootVanBase_C.EnableDoorBlock // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TriggerAlarm(); // Function TBP_LootVanBase.TBP_LootVanBase_C.TriggerAlarm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_LootVanBase(int32_t EntryPoint); // Function TBP_LootVanBase.TBP_LootVanBase_C.ExecuteUbergraph_TBP_LootVanBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

