// BlueprintGeneratedClass TBP_CullingPlane.TBP_CullingPlane_C
// Size: 0x238 (Inherited: 0x228)
struct ATBP_CullingPlane_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UStaticMeshComponent* SM_CullingPlane; // 0x230(0x08)

	void EnableCullingPlanes(); // Function TBP_CullingPlane.TBP_CullingPlane_C.EnableCullingPlanes // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DisableCullingPlanes(); // Function TBP_CullingPlane.TBP_CullingPlane_C.DisableCullingPlanes // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_CullingPlane(int32_t EntryPoint); // Function TBP_CullingPlane.TBP_CullingPlane_C.ExecuteUbergraph_TBP_CullingPlane // (Final|UbergraphFunction) // @ game+0x16c0340
};

