// BlueprintGeneratedClass TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C
// Size: 0x278 (Inherited: 0x261)
struct ATBP_BuffPostProcess_BlindingBeauty_C : ATBP_BuffPostProcess_Master_C {
	char pad_261[0x7]; // 0x261(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCurveFloat* FlashCurve; // 0x270(0x08)

	void SetParameters(float NormalizedDuration); // Function TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C.SetParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_BuffPostProcess_BlindingBeauty(int32_t EntryPoint); // Function TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C.ExecuteUbergraph_TBP_BuffPostProcess_BlindingBeauty // (Final|UbergraphFunction) // @ game+0x16c0340
};

