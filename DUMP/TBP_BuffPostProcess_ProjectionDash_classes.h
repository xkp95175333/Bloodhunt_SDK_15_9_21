// BlueprintGeneratedClass TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C
// Size: 0x298 (Inherited: 0x261)
struct ATBP_BuffPostProcess_ProjectionDash_C : ATBP_BuffPostProcess_Master_C {
	char pad_261[0x7]; // 0x261(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UMaterialInterface* Material; // 0x270(0x08)
	struct FLinearColor Color; // 0x278(0x10)
	struct FMulticastInlineDelegate Tick; // 0x288(0x10)

	void UserConstructionScript(); // Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(float DeltaSeconds); // Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_BuffPostProcess_ProjectionDash(int32_t EntryPoint); // Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.ExecuteUbergraph_TBP_BuffPostProcess_ProjectionDash // (Final|UbergraphFunction) // @ game+0x16c0340
	void Tick__DelegateSignature(); // Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.Tick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

