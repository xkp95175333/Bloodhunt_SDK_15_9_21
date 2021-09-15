// BlueprintGeneratedClass TBP_Katana_Reflector.TBP_Katana_Reflector_C
// Size: 0x270 (Inherited: 0x228)
struct ATBP_Katana_Reflector_C : ATigerWeaponAbilityReflectActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct USceneComponent* Null; // 0x230(0x08)
	struct USceneComponent* Scene; // 0x238(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x240(0x08)
	struct USceneComponent* Null3; // 0x248(0x08)
	struct USceneComponent* Null2; // 0x250(0x08)
	struct AActor* ReflectedProjectile; // 0x258(0x08)
	float Start_time2; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct UNiagaraComponent* niagaravar; // 0x268(0x08)

	bool CanBeReflected(struct UPrimitiveComponent* InOverlappedComponent, struct AActor* InOtherActor, struct UPrimitiveComponent* InOtherComp, int32_t InOtherBodyIndex, bool bInFromSweep, struct FHitResult InSweepResult); // Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.CanBeReflected // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CheckIfProjectileHitWithinCone(struct FVector HitLocation, bool bIsWithinCone); // Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.CheckIfProjectileHitWithinCone // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_Katana_Reflector(int32_t EntryPoint); // Function TBP_Katana_Reflector.TBP_Katana_Reflector_C.ExecuteUbergraph_TBP_Katana_Reflector // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

