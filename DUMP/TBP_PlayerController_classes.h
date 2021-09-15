// BlueprintGeneratedClass TBP_PlayerController.TBP_PlayerController_C
// Size: 0xbe0 (Inherited: 0xba8)
struct ATBP_PlayerController_C : ATigerPlayerController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xba8(0x08)
	struct UTBP_ChatComponent_C* TBP_ChatComponent; // 0xbb0(0x08)
	struct UTBP_ContextualHelpComponent_C* TBP_ContextualHelpComponent; // 0xbb8(0x08)
	struct UTBP_PingControllerComponent_C* TBP_PingControllerComponent; // 0xbc0(0x08)
	struct UTBP_EmoteControllerComponent_C* TBP_EmoteControllerComponent; // 0xbc8(0x08)
	struct UTigerMenuWidget* ArchetypeHelpUI; // 0xbd0(0x08)
	struct UObject* ArchtypeHelpClass; // 0xbd8(0x08)

	void StopGasSounds(); // Function TBP_PlayerController.TBP_PlayerController_C.StopGasSounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void DebugCrosshairLineHitTest(struct FVector Start, struct FVector End); // Function TBP_PlayerController.TBP_PlayerController_C.DebugCrosshairLineHitTest // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnFailed_9B8C084C4CD6A1EBC4F972B66834EC9C(); // Function TBP_PlayerController.TBP_PlayerController_C.OnFailed_9B8C084C4CD6A1EBC4F972B66834EC9C // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnSuccess_9B8C084C4CD6A1EBC4F972B66834EC9C(); // Function TBP_PlayerController.TBP_PlayerController_C.OnSuccess_9B8C084C4CD6A1EBC4F972B66834EC9C // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InpActEvt_WriteAndSendChatMessage_K2Node_InputActionEvent_1(struct FKey Key); // Function TBP_PlayerController.TBP_PlayerController_C.InpActEvt_WriteAndSendChatMessage_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_PlayerController.TBP_PlayerController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function TBP_PlayerController.TBP_PlayerController_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReturnToElysium(); // Function TBP_PlayerController.TBP_PlayerController_C.ReturnToElysium // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowPostMatchScreen(); // Function TBP_PlayerController.TBP_PlayerController_C.ShowPostMatchScreen // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnGhostModeSet_Event(bool bIsGhostModeEnabled); // Function TBP_PlayerController.TBP_PlayerController_C.OnGhostModeSet_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BindOnGhostModeSet(); // Function TBP_PlayerController.TBP_PlayerController_C.BindOnGhostModeSet // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExitMatch(); // Function TBP_PlayerController.TBP_PlayerController_C.ExitMatch // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnToggleMainMenu(); // Function TBP_PlayerController.TBP_PlayerController_C.OnToggleMainMenu // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void Debug_ShowCharacterCard(); // Function TBP_PlayerController.TBP_PlayerController_C.Debug_ShowCharacterCard // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_PlayerController(int32_t EntryPoint); // Function TBP_PlayerController.TBP_PlayerController_C.ExecuteUbergraph_TBP_PlayerController // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

