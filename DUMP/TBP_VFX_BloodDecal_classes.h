// BlueprintGeneratedClass TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C
// Size: 0x260 (Inherited: 0x228)
struct ATBP_VFX_BloodDecal_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float FadeInTimeline_AlphaScaleTrack_588AF71A4B6DB400A9724382318A5E98; // 0x240(0x04)
	enum class ETimelineDirection FadeInTimeline__Direction_588AF71A4B6DB400A9724382318A5E98; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct UTimelineComponent* FadeInTimeline; // 0x248(0x08)
	float FadeOutTimeline_AlphaScaleTrack_FADD48494D9CA4FF7946218963114C70; // 0x250(0x04)
	enum class ETimelineDirection FadeOutTimeline__Direction_FADD48494D9CA4FF7946218963114C70; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UTimelineComponent* FadeOutTimeline; // 0x258(0x08)

	void FadeOutTimeline__FinishedFunc(); // Function TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.FadeOutTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void FadeOutTimeline__UpdateFunc(); // Function TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.FadeOutTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void FadeInTimeline__FinishedFunc(); // Function TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.FadeInTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x16c0340
	void FadeInTimeline__UpdateFunc(); // Function TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.FadeInTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BeginFadeOut(); // Function TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.BeginFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_VFX_BloodDecal(int32_t EntryPoint); // Function TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C.ExecuteUbergraph_TBP_VFX_BloodDecal // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

