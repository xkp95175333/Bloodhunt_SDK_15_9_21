// BlueprintGeneratedClass TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C
// Size: 0x258 (Inherited: 0x228)
struct ATBP_VFX_BloodPuddle_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float Timeline_0_NewTrack_2_6AA50CA342AD366CED304ABD16EA7169; // 0x240(0x04)
	float Timeline_0_NewTrack_1_6AA50CA342AD366CED304ABD16EA7169; // 0x244(0x04)
	float Timeline_0_NewTrack_0_6AA50CA342AD366CED304ABD16EA7169; // 0x248(0x04)
	enum class ETimelineDirection Timeline_0__Direction_6AA50CA342AD366CED304ABD16EA7169; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x250(0x08)

	void Timeline_0__FinishedFunc(); // Function TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void Timeline_0__UpdateFunc(); // Function TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_VFX_BloodPuddle(int32_t EntryPoint); // Function TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.ExecuteUbergraph_TBP_VFX_BloodPuddle // (Final|UbergraphFunction) // @ game+0x16c0340
};

