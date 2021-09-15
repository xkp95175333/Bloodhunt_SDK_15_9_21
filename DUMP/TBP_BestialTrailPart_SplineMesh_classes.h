// BlueprintGeneratedClass TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C
// Size: 0x590 (Inherited: 0x580)
struct UTBP_BestialTrailPart_SplineMesh_C : UTigerBestialTrailPart {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x580(0x08)
	struct ATigerBestialTrailVisualizer* Visualizer; // 0x588(0x08)

	void Setup(struct FVector Start Location, struct FVector End Location, struct FVector End Tangent, float New Dissappear Time Stamp); // Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ScheduleFade(float Dissappear At); // Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.ScheduleFade // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Fade Out(); // Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.Fade Out // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_BestialTrailPart_SplineMesh(int32_t EntryPoint); // Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.ExecuteUbergraph_TBP_BestialTrailPart_SplineMesh // (Final|UbergraphFunction) // @ game+0x16c0340
};

