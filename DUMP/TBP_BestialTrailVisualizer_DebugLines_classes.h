// BlueprintGeneratedClass TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C
// Size: 0x2d0 (Inherited: 0x240)
struct ATBP_BestialTrailVisualizer_DebugLines_C : ATigerBestialTrailVisualizer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct FTigerPlayerSavedLocation PreviousPoint; // 0x250(0x10)
	struct FTigerPlayerSavedLocation SecondLocation; // 0x260(0x10)
	struct UTigerNosferatuPassiveBestialConfig* Config; // 0x270(0x08)
	struct UTBP_BestialTrailPart_SplineMesh_C* Latest Part; // 0x278(0x08)
	int32_t Number of Received Points; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UNiagaraComponent* NewVar_1; // 0x288(0x08)
	struct FVector 3rdPos; // 0x290(0x0c)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UNiagaraComponent* PreviousNiagaraBeam; // 0x2a0(0x08)
	float PreviousSpawnTime; // 0x2a8(0x04)
	float PreviousPointNumber; // 0x2ac(0x04)
	struct FSoftObjectPath NiagaraPath; // 0x2b0(0x18)
	struct UTBP_AnAcquiredTaste_C* Passive Component; // 0x2c8(0x08)

	void Decide LifeTime(float ExtraLifeTimePerStack, float FinalLifeTime); // Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.Decide LifeTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void AddPoint(struct FTigerPlayerSavedLocation New Location); // Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.AddPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BeginEndTracking(); // Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.BeginEndTracking // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReceiveInitialTrackingPoints(struct TArray<struct FTigerPlayerSavedLocation> Locations, struct ATigerPlayer* TrackedPlayer); // Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveInitialTrackingPoints // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ReceiveNewTrackingPoint(struct FTigerPlayerSavedLocation NewLocation); // Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveNewTrackingPoint // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_BestialTrailVisualizer_DebugLines(int32_t EntryPoint); // Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ExecuteUbergraph_TBP_BestialTrailVisualizer_DebugLines // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

