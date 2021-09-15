// BlueprintGeneratedClass TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C
// Size: 0xbf2 (Inherited: 0xbe0)
struct ATBP_ElysiumPlayerController_C : ATBP_PlayerController_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbe0(0x08)
	struct UTigerVendorComponent* TigerVendorComponent; // 0xbe8(0x08)
	bool bHasReceivedPlayerOutfit; // 0xbf0(0x01)
	bool bIsPreloadingDone; // 0xbf1(0x01)

	void InpActEvt_MapToggle_K2Node_InputActionEvent_1(struct FKey Key); // Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.InpActEvt_MapToggle_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(float DeltaSeconds); // Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnInGameMenuToggled(bool bIsOpen); // Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.OnInGameMenuToggled // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnPreloadingDone(); // Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.OnPreloadingDone // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ElysiumPlayerController(int32_t EntryPoint); // Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.ExecuteUbergraph_TBP_ElysiumPlayerController // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

