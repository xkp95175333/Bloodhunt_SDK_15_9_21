// Class TSS.TSSSdkTicker
// Size: 0x40 (Inherited: 0x28)
struct UTSSSdkTicker : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class TSS.TSSClientComponent
// Size: 0x108 (Inherited: 0xb0)
struct UTSSClientComponent : UActorComponent {
	char pad_B0[0x58]; // 0xb0(0x58)

	void Server_RetrieveClientDataFromSDK(struct FTSSClientDataReport InClientData); // Function TSS.TSSClientComponent.Server_RetrieveClientDataFromSDK // (Net|NetReliableNative|Event|Protected|NetServer) // @ game+0xbe6800
	void Client_ReceiveServerData(struct FTSSClientDataReport InServerData); // Function TSS.TSSClientComponent.Client_ReceiveServerData // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbe6760
	void Client_OnDisconnectClient(enum class ETSSDeleteUserResult InResultFromServer); // Function TSS.TSSClientComponent.Client_OnDisconnectClient // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbe66d0
	void Client_OnConnectClient(enum class ETSSAddUserResult InResultFromServer, struct FTSSAccountInfo InConfirmedLoginInfo); // Function TSS.TSSClientComponent.Client_OnConnectClient // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0xbe65d0
};

// Class TSS.TssSDKSettings
// Size: 0x50 (Inherited: 0x38)
struct UTssSDKSettings : UDeveloperSettings {
	uint32_t GameID; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString AuthToken; // 0x40(0x10)
};

