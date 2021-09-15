// BlueprintGeneratedClass TBP_MightyLeap.TBP_MightyLeap_C
// Size: 0x160 (Inherited: 0x158)
struct UTBP_MightyLeap_C : UTigerDisciplineJump {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)

	struct FVector GetTargetPosition(struct FVector PlayerEyeLocation, struct FRotator CameraRotation, float JumpCheckDistance); // Function TBP_MightyLeap.TBP_MightyLeap_C.GetTargetPosition // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLeapEnded(); // Function TBP_MightyLeap.TBP_MightyLeap_C.OnLeapEnded // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnLeapStarted(); // Function TBP_MightyLeap.TBP_MightyLeap_C.OnLeapStarted // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_MightyLeap(int32_t EntryPoint); // Function TBP_MightyLeap.TBP_MightyLeap_C.ExecuteUbergraph_TBP_MightyLeap // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

