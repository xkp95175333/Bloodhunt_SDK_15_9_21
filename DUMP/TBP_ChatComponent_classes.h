// BlueprintGeneratedClass TBP_ChatComponent.TBP_ChatComponent_C
// Size: 0xfa (Inherited: 0xe8)
struct UTBP_ChatComponent_C : UTigerChatComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UUserWidget* ChatWindow; // 0xf0(0x08)
	bool bPreventMessages; // 0xf8(0x01)
	bool bIsSoloMatch; // 0xf9(0x01)

	void OnLoaded_5480FD144B182ADDBFA34EB41371AFF7(struct UObject* Loaded); // Function TBP_ChatComponent.TBP_ChatComponent_C.OnLoaded_5480FD144B182ADDBFA34EB41371AFF7 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Server_SendChatMessageToClients(struct FText MessageText, bool bWriteOnlyToGroupMembers); // Function TBP_ChatComponent.TBP_ChatComponent_C.Server_SendChatMessageToClients // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnMessageInput(struct FText MessageText, bool OnlyGroup); // Function TBP_ChatComponent.TBP_ChatComponent_C.OnMessageInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnChatMessageReceived(struct FTigerChatMessage InMessage); // Function TBP_ChatComponent.TBP_ChatComponent_C.OnChatMessageReceived // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OpenChatWindow(); // Function TBP_ChatComponent.TBP_ChatComponent_C.OpenChatWindow // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreventChatUntilInElysium(); // Function TBP_ChatComponent.TBP_ChatComponent_C.PreventChatUntilInElysium // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Welcome Players In Chat(); // Function TBP_ChatComponent.TBP_ChatComponent_C.Welcome Players In Chat // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void On Hud Preloading Done(); // Function TBP_ChatComponent.TBP_ChatComponent_C.On Hud Preloading Done // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateChatWindow(); // Function TBP_ChatComponent.TBP_ChatComponent_C.CreateChatWindow // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void OnBanStatusUpdated(struct FTigerMuteInfo InMuteInfo); // Function TBP_ChatComponent.TBP_ChatComponent_C.OnBanStatusUpdated // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_ChatComponent(int32_t EntryPoint); // Function TBP_ChatComponent.TBP_ChatComponent_C.ExecuteUbergraph_TBP_ChatComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

