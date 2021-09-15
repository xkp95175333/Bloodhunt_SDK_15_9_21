// Class Shark.SharkLocalDeveloperSettings
// Size: 0x38 (Inherited: 0x38)
struct USharkLocalDeveloperSettings : UDeveloperSettings {
};

// Class Shark.SharkA2SProtocolHandler
// Size: 0xc8 (Inherited: 0x30)
struct USharkA2SProtocolHandler : UGameInstanceSubsystem {
	char pad_30[0x98]; // 0x30(0x98)
};

// Class Shark.SharkAccounts
// Size: 0x98 (Inherited: 0x28)
struct USharkAccounts : UObject {
	char pad_28[0x68]; // 0x28(0x68)
	struct UShAccountSettings* Settings; // 0x90(0x08)

	void SharkUsernameRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bIsAvailable, bool bIsProfanity, struct FString InUsername); // DelegateFunction Shark.SharkAccounts.SharkUsernameRegisteredQueryCallback__DelegateSignature // (Public|Delegate) // @ game+0x16c0340
	void SharkLoginCallback__DelegateSignature(struct FSharkLoginResult InResult); // DelegateFunction Shark.SharkAccounts.SharkLoginCallback__DelegateSignature // (Public|Delegate) // @ game+0x16c0340
	void SharkEmailRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bInRegistered, struct FString InEmail); // DelegateFunction Shark.SharkAccounts.SharkEmailRegisteredQueryCallback__DelegateSignature // (Public|Delegate) // @ game+0x16c0340
	void SharkAccountActionCallback__DelegateSignature(struct FSharkAccountActionResult InResult); // DelegateFunction Shark.SharkAccounts.SharkAccountActionCallback__DelegateSignature // (Public|Delegate) // @ game+0x16c0340
	void SendRegistrationVerificationCode(struct FString InEmail, struct FDelegate InCallback); // Function Shark.SharkAccounts.SendRegistrationVerificationCode // (Final|Native|Public|BlueprintCallable) // @ game+0x345c590
	void RegisterAndLogin(struct FSharkAccountRegistrationData InRegistrationData, struct FDelegate InCallback); // Function Shark.SharkAccounts.RegisterAndLogin // (Final|Native|Public|BlueprintCallable) // @ game+0x345c350
	void QueryUsernameRegisterStatus(struct FString InUsername, struct FDelegate InCallback); // Function Shark.SharkAccounts.QueryUsernameRegisterStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x345c200
	void QueryEmailRegisterStatus(struct FString InEmail, struct FDelegate InCallback); // Function Shark.SharkAccounts.QueryEmailRegisterStatus // (Final|Native|Public|BlueprintCallable) // @ game+0x345c0b0
	void PlatformLogin(struct FDelegate InCallback); // Function Shark.SharkAccounts.PlatformLogin // (Final|Native|Public|BlueprintCallable) // @ game+0x345c010
	void Login(struct FString InEmail, struct FString InPassword, struct FDelegate InCallback); // Function Shark.SharkAccounts.Login // (Final|Native|Public|BlueprintCallable) // @ game+0x345be40
};

// Class Shark.ShAccountSettings
// Size: 0x60 (Inherited: 0x38)
struct UShAccountSettings : UDeveloperSettings {
	enum class EShAccountChannel AccountChannel; // 0x38(0x01)
	enum class EShAccountChannel PlatformChannel; // 0x39(0x01)
	bool LogEnabled; // 0x3a(0x01)
	char pad_3B[0x5]; // 0x3b(0x05)
	struct FString SandboxUrl; // 0x40(0x10)
	struct FString ProductionUrl; // 0x50(0x10)
};

// Class Shark.SharkBlueprintFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct USharkBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void SetCustomPrimitiveDataVector4(struct UPrimitiveComponent* PrimitiveComponent, enum class ESharkCustomPrimitiveVector4DataName CustomDataName, struct FVector4 Value, bool bDoRuntimeUpdate); // Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector4 // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x345d060
	void SetCustomPrimitiveDataVector3(struct UPrimitiveComponent* PrimitiveComponent, enum class ESharkCustomPrimitiveVector3DataName CustomDataName, struct FVector Value, bool bDoRuntimeUpdate); // Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector3 // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x345cf00
	void SetCustomPrimitiveDataVector2(struct UPrimitiveComponent* PrimitiveComponent, enum class ESharkCustomPrimitiveVector2DataName CustomDataName, struct FVector2D Value, bool bDoRuntimeUpdate); // Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector2 // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x345cdc0
	void SetCustomPrimitiveDataFloat(struct UPrimitiveComponent* PrimitiveComponent, enum class ESharkCustomPrimitiveFloatDataName CustomDataName, float Value, bool bDoRuntimeUpdate); // Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataFloat // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x345cc70
	void SetCastDynamicShadows(struct UPrimitiveComponent* InPrimitiveComponent, bool InValue); // Function Shark.SharkBlueprintFunctionLibrary.SetCastDynamicShadows // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x345cbb0
	void OnAssetsLoaded__DelegateSignature(struct TArray<struct UObject*> InLoadedObjects); // DelegateFunction Shark.SharkBlueprintFunctionLibrary.OnAssetsLoaded__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x16c0340
	void LoadMultipleObjectsAsync(struct TArray<struct TSoftObjectPtr<struct UObject>> SoftObjects, struct FDelegate OnLoaded); // Function Shark.SharkBlueprintFunctionLibrary.LoadMultipleObjectsAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x345ca80
};

// Class Shark.ShMidasAdapter
// Size: 0x98 (Inherited: 0x28)
struct UShMidasAdapter : UObject {
	struct FMulticastInlineDelegate OnMidasPremiumCurrencyPacksChanged; // 0x28(0x10)
	char pad_38[0x58]; // 0x38(0x58)
	struct UShMidasPaymentSettings* Settings; // 0x90(0x08)

	void Logout(); // Function Shark.ShMidasAdapter.Logout // (Final|Native|Public|BlueprintCallable) // @ game+0x345d8f0
	bool IsInitialized(); // Function Shark.ShMidasAdapter.IsInitialized // (Final|Native|Public|BlueprintCallable) // @ game+0x345d8c0
	struct TArray<struct FShMidasPremiumCurrencyPack> GetPremiumCurrecyPacks(); // Function Shark.ShMidasAdapter.GetPremiumCurrecyPacks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x345d880
	bool Buy(struct FString InItemId, struct FString InCurrencyType, int32_t InNumItems, struct FDelegate InDelegate); // Function Shark.ShMidasAdapter.Buy // (Final|Native|Public|BlueprintCallable) // @ game+0x345d6f0
};

// Class Shark.ShMidasPaymentSettings
// Size: 0xa0 (Inherited: 0x38)
struct UShMidasPaymentSettings : UDeveloperSettings {
	struct FString IdcInfo; // 0x38(0x10)
	struct FString OfferId; // 0x48(0x10)
	struct FString ZoneId; // 0x58(0x10)
	struct FString GoodsZoneId; // 0x68(0x10)
	struct FString PaymentChannel; // 0x78(0x10)
	struct FString ProvideType; // 0x88(0x10)
	bool MidasLogEnabled; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// Class Shark.ShOnlineServerSettings
// Size: 0x78 (Inherited: 0x38)
struct UShOnlineServerSettings : UDeveloperSettings {
	struct FString ServerSecretDev; // 0x38(0x10)
	struct FString ServerSecretUat; // 0x48(0x10)
	struct FString ServerSecretProd; // 0x58(0x10)
	struct FString ServerSecretLocal; // 0x68(0x10)
};

// Class Shark.SharkOnlineSettings
// Size: 0x88 (Inherited: 0x38)
struct USharkOnlineSettings : UDeveloperSettings {
	struct FString OnlineServicesEnv; // 0x38(0x10)
	float MaximumRetryDelaySeconds; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString AccountRecoverUriProd; // 0x50(0x10)
	struct FString AccountRecoverUriUat; // 0x60(0x10)
	struct FString AccountRecoverUriDev; // 0x70(0x10)
	int32_t MinimumAccountCreationAge; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// Class Shark.SharkRenderingSettings
// Size: 0x1f8 (Inherited: 0x38)
struct USharkRenderingSettings : UDeveloperSettings {
	int32_t CustomPrimitiveFloatDataNameMapping[0x3a]; // 0x38(0xe8)
	int32_t CustomPrimitiveVector2DataNameMapping[0x13]; // 0x120(0x4c)
	int32_t CustomPrimitiveVector3DataNameMapping[0x19]; // 0x16c(0x64)
	int32_t CustomPrimitiveVector4DataNameMapping[0x9]; // 0x1d0(0x24)
	char pad_1F4[0x4]; // 0x1f4(0x04)
};

// Class Shark.SharkRoundRobinSettings
// Size: 0x50 (Inherited: 0x38)
struct USharkRoundRobinSettings : UDeveloperSettings {
	bool bEnabled; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FSharkRoundRobinClassSettings> GroupSettings; // 0x40(0x10)
};

// Class Shark.SharkRoundRobinSubsystem
// Size: 0xc0 (Inherited: 0x30)
struct USharkRoundRobinSubsystem : UWorldSubsystem {
	char pad_30[0x90]; // 0x30(0x90)
};

// Class Shark.SharkServerMetrics
// Size: 0xd8 (Inherited: 0x30)
struct USharkServerMetrics : UGameInstanceSubsystem {
	char pad_30[0xa8]; // 0x30(0xa8)
};

// Class Shark.SharkTelemetry
// Size: 0x100 (Inherited: 0x28)
struct USharkTelemetry : UObject {
	struct FSharkTelemetrySettings TelemetryApplicationSettings; // 0x28(0x50)
	char pad_78[0x18]; // 0x78(0x18)
	struct TArray<struct FSharkTelemtryEventData> BufferedEvents; // 0x90(0x10)
	char pad_A0[0x50]; // 0xa0(0x50)
	struct UGameInstance* GameInstance; // 0xf0(0x08)
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class Shark.ShUserSecrets
// Size: 0x28 (Inherited: 0x28)
struct UShUserSecrets : UObject {
};

