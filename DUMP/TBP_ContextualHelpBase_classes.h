// BlueprintGeneratedClass TBP_ContextualHelpBase.TBP_ContextualHelpBase_C
// Size: 0xc4 (Inherited: 0xb0)
struct UTBP_ContextualHelpBase_C : UTigerContextualHelp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	int32_t ShowCountRemaining; // 0xb8(0x04)
	struct FName Additional Input; // 0xbc(0x08)

	void SetWantsToShowOff(); // Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.SetWantsToShowOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetWantsToShow(); // Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.SetWantsToShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HasReachedMaxLimitInMatch(bool bLimitReached); // Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.HasReachedMaxLimitInMatch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void OnHide(struct ATigerPlayerController* InTigerPlayerController); // Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.OnHide // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ContextualHelpBase(int32_t EntryPoint); // Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.ExecuteUbergraph_TBP_ContextualHelpBase // (Final|UbergraphFunction) // @ game+0x16c0340
};

