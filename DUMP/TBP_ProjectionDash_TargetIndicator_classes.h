// BlueprintGeneratedClass TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C
// Size: 0x248 (Inherited: 0x228)
struct ATBP_ProjectionDash_TargetIndicator_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UPointLightComponent* PointLight; // 0x230(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void ReceiveBeginPlay(); // Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReceiveDestroyed(); // Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ProjectionDash_TargetIndicator(int32_t EntryPoint); // Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ExecuteUbergraph_TBP_ProjectionDash_TargetIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

