// BlueprintGeneratedClass TBP_CheckLureTargetValidity.TBP_CheckLureTargetValidity_C
// Size: 0xcc (Inherited: 0x98)
struct UTBP_CheckLureTargetValidity_C : UBTService_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FBlackboardKeySelector LureTarget; // 0xa0(0x28)
	float LureRadiusSquared; // 0xc8(0x04)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function TBP_CheckLureTargetValidity.TBP_CheckLureTargetValidity_C.ReceiveTickAI // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_CheckLureTargetValidity(int32_t EntryPoint); // Function TBP_CheckLureTargetValidity.TBP_CheckLureTargetValidity_C.ExecuteUbergraph_TBP_CheckLureTargetValidity // (Final|UbergraphFunction) // @ game+0x16c0340
};

