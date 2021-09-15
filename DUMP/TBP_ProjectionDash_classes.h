// BlueprintGeneratedClass TBP_ProjectionDash.TBP_ProjectionDash_C
// Size: 0x174 (Inherited: 0x168)
struct UTBP_ProjectionDash_C : UTigerDisciplineProjectionDash {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x168(0x08)
	float FullscreenFurthestFocusPoint; // 0x170(0x04)

	void OnDashStart(); // Function TBP_ProjectionDash.TBP_ProjectionDash_C.OnDashStart // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnDashEnd(); // Function TBP_ProjectionDash.TBP_ProjectionDash_C.OnDashEnd // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void UpdateFocusPoint(); // Function TBP_ProjectionDash.TBP_ProjectionDash_C.UpdateFocusPoint // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ProjectionDash(int32_t EntryPoint); // Function TBP_ProjectionDash.TBP_ProjectionDash_C.ExecuteUbergraph_TBP_ProjectionDash // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

