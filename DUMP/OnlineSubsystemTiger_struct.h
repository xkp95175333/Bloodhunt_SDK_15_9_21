// Enum OnlineSubsystemTiger.ETigerMatchResult
enum class ETigerMatchResult : uint8 {
	Success,
	Failure,
	Count,
	ETigerMatchResult_MAX,
};

// ScriptStruct OnlineSubsystemTiger.MutePush
// Size: 0x28 (Inherited: 0x00)
struct FMutePush {
	struct FString PlayerId; // 0x00(0x10)
	bool IsMuted; // 0x10(0x01)
	char MutedReason; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString MutedEndsAt; // 0x18(0x10)
};

// ScriptStruct OnlineSubsystemTiger.PresencePush
// Size: 0x28 (Inherited: 0x00)
struct FPresencePush {
	struct FString PlayerId; // 0x00(0x10)
	struct FString Location; // 0x10(0x10)
	bool IsOnline; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct OnlineSubsystemTiger.OnlinePresencePush
// Size: 0x18 (Inherited: 0x00)
struct FOnlinePresencePush {
	struct FString PlayerId; // 0x00(0x10)
	bool IsOnline; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct OnlineSubsystemTiger.LocationPresencePush
// Size: 0x20 (Inherited: 0x00)
struct FLocationPresencePush {
	struct FString PlayerId; // 0x00(0x10)
	struct FString Location; // 0x10(0x10)
};

// ScriptStruct OnlineSubsystemTiger.TigerPartyPokePush
// Size: 0x10 (Inherited: 0x00)
struct FTigerPartyPokePush {
	struct FString PartyId; // 0x00(0x10)
};

// ScriptStruct OnlineSubsystemTiger.TigerPartyTravelPush
// Size: 0x48 (Inherited: 0x00)
struct FTigerPartyTravelPush {
	struct FString SESSIONTYPE; // 0x00(0x10)
	struct FString PartyId; // 0x10(0x10)
	struct FString GameSessionToken; // 0x20(0x10)
	struct FString Host; // 0x30(0x10)
	int32_t Port; // 0x40(0x04)
	uint32_t StateUpdateId; // 0x44(0x04)
};

// ScriptStruct OnlineSubsystemTiger.TigerHeartbeatPush
// Size: 0x01 (Inherited: 0x00)
struct FTigerHeartbeatPush {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct OnlineSubsystemTiger.TigerRemovedFromPartyPush
// Size: 0x10 (Inherited: 0x00)
struct FTigerRemovedFromPartyPush {
	struct FString PartyId; // 0x00(0x10)
};

// ScriptStruct OnlineSubsystemTiger.TigerMemberLeftPush
// Size: 0x30 (Inherited: 0x00)
struct FTigerMemberLeftPush {
	struct FString PartyId; // 0x00(0x10)
	struct FString DepartingPlayerId; // 0x10(0x10)
	struct FString NewLeaderPlayerId; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemTiger.TigerMemberJoinedPush
// Size: 0x20 (Inherited: 0x00)
struct FTigerMemberJoinedPush {
	struct FString PartyId; // 0x00(0x10)
	struct FString JoiningPlayerId; // 0x10(0x10)
};

// ScriptStruct OnlineSubsystemTiger.TigerInviteResponsePush
// Size: 0x50 (Inherited: 0x00)
struct FTigerInviteResponsePush {
	struct FString InviteId; // 0x00(0x10)
	bool Accepted; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString PartyId; // 0x18(0x10)
	struct FString GuestPlayerId; // 0x28(0x10)
	struct TArray<struct FString> PlayerIds; // 0x38(0x10)
	int32_t LeaderIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct OnlineSubsystemTiger.TigerInvitePush
// Size: 0x40 (Inherited: 0x00)
struct FTigerInvitePush {
	struct FString InviteId; // 0x00(0x10)
	struct FString HostPlayerId; // 0x10(0x10)
	struct FString HostPlayerName; // 0x20(0x10)
	struct FString PartyInviteToken; // 0x30(0x10)
};

// ScriptStruct OnlineSubsystemTiger.TigerMatchmakingPush
// Size: 0x48 (Inherited: 0x00)
struct FTigerMatchmakingPush {
	enum class ETigerMatchResult Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Host; // 0x08(0x10)
	int32_t Port; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString GameSessionId; // 0x20(0x10)
	struct FString GameSessionToken; // 0x30(0x10)
	uint32_t MatchRequestId; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct OnlineSubsystemTiger.Request_CancelMatchmaking
// Size: 0x28 (Inherited: 0x00)
struct FRequest_CancelMatchmaking {
	struct FString SESSIONTYPE; // 0x00(0x10)
	struct FString DsVersion; // 0x10(0x10)
	uint32_t MatchRequestId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct OnlineSubsystemTiger.Response_StartMatchmaking
// Size: 0x18 (Inherited: 0x00)
struct FResponse_StartMatchmaking {
	bool OK; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Error; // 0x08(0x10)
};

// ScriptStruct OnlineSubsystemTiger.Request_StartMatchmaking
// Size: 0x60 (Inherited: 0x00)
struct FRequest_StartMatchmaking {
	struct FString SESSIONTYPE; // 0x00(0x10)
	struct FString DsVersion; // 0x10(0x10)
	struct FString MATCHMAKINGTOKEN; // 0x20(0x10)
	struct FString REGIONPINGS; // 0x30(0x10)
	int32_t GROUPINGMODE; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString GroupID; // 0x48(0x10)
	uint32_t MatchRequestId; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct OnlineSubsystemTiger.ResponseEnvelope
// Size: 0x18 (Inherited: 0x00)
struct FResponseEnvelope {
	bool OK; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Error; // 0x08(0x10)
};

