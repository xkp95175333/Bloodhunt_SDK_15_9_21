// Class OnlineSubsystemTiger.TigerOnlineSubsystemSettings
// Size: 0xb0 (Inherited: 0x38)
struct UTigerOnlineSubsystemSettings : UDeveloperSettings {
	struct FString OnlineServicesEnv; // 0x38(0x10)
	struct FString OnlineServicesBaseUrlDev; // 0x48(0x10)
	struct FString OnlineServicesBaseUrlUat; // 0x58(0x10)
	struct FString OnlineServicesBaseUrlProd; // 0x68(0x10)
	struct FString OnlineServicesBaseUrlLocal; // 0x78(0x10)
	struct FString SessionServiceUri; // 0x88(0x10)
	int32_t MaxRequestRetries; // 0x98(0x04)
	int32_t MatchmakingTimeoutSeconds; // 0x9c(0x04)
	struct FString DsVersion; // 0xa0(0x10)
};

