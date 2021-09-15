// Class TigerVoip.TigerVoipTencentBackendSettings
// Size: 0x58 (Inherited: 0x38)
struct UTigerVoipTencentBackendSettings : UDeveloperSettings {
	struct FString GMEAppId; // 0x38(0x10)
	struct FString GMEAppKey; // 0x48(0x10)
};

// Class TigerVoip.TigerVoipTalkerState
// Size: 0x60 (Inherited: 0x28)
struct UTigerVoipTalkerState : UObject {
	char pad_28[0x28]; // 0x28(0x28)
	struct TArray<struct FTalkingState> PlayerTalkingStates; // 0x50(0x10)

	bool IsPlayerTalking(struct FTigerPersistentPlayerID InPlayerId); // Function TigerVoip.TigerVoipTalkerState.IsPlayerTalking // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x346c010
};

