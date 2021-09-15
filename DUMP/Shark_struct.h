// Enum Shark.EShAccountChannel
enum class EShAccountChannel : uint8 {
	DEV,
	STEAM,
	SHARKNET,
	PS5,
	UNKNOWN,
	EShAccountChannel_MAX,
};

// Enum Shark.EShMidasResultCode
enum class EShMidasResultCode : uint8 {
	NOT_SUPPORTED,
	GENERAL_ERROR,
	OK,
	CANCEL,
	LOGIN_EXPIRED,
	DISCONNECTED,
	CONNECTION_ERROR,
	EShMidasResultCode_MAX,
};

// Enum Shark.ESharkCustomPrimitiveFloatDataName
enum class ESharkCustomPrimitiveFloatDataName : uint8 {
	AlbedoHueShift,
	Alpha,
	AmbientOcclusion,
	DiffuseDesaturation,
	DirtAmount,
	EmissiveMultiplier,
	Height,
	Metallic,
	Roughness,
	RoughnessOffset,
	WindStrength,
	GlassDestruction_Use,
	GlassDestruction_UseUv,
	Vehicle_Roughness,
	Vehicle_Rustiness,
	Vehicle_Dirtiness,
	Vehicle_EmissiveStrength,
	Vehicle_Metalness,
	Vehicle_CrushAllZones,
	Vehicle_CrushZone0,
	Vehicle_CrushZone1,
	Vehicle_CrushZone2,
	Vehicle_CrushZone3,
	Vehicle_CrushZone4,
	Vehicle_CanBounce,
	Vehicle_CanSquash,
	Custom_1,
	Custom_2,
	Custom_3,
	Custom_4,
	Custom_5,
	Custom_6,
	Custom_7,
	Custom_8,
	Custom_9,
	Custom_10,
	Custom_11,
	Custom_12,
	Custom_13,
	Custom_14,
	Custom_15,
	Custom_16,
	Custom_17,
	Custom_18,
	Custom_19,
	Custom_20,
	Custom_21,
	Custom_22,
	Custom_23,
	Custom_24,
	Custom_25,
	Custom_26,
	Custom_27,
	Custom_28,
	Custom_29,
	Custom_30,
	Custom_31,
	Custom_32,
	Count,
	ESharkCustomPrimitiveFloatDataName_MAX,
};

// Enum Shark.ESharkCustomPrimitiveVector2DataName
enum class ESharkCustomPrimitiveVector2DataName : uint8 {
	UvOffset,
	UvScale,
	GlassDestruction_Tiling,
	Custom_0_2,
	Custom_2_4,
	Custom_4_6,
	Custom_6_8,
	Custom_8_10,
	Custom_10_12,
	Custom_12_14,
	Custom_14_16,
	Custom_16_18,
	Custom_18_20,
	Custom_20_22,
	Custom_22_24,
	Custom_24_26,
	Custom_26_28,
	Custom_28_30,
	Custom_30_32,
	Count,
	ESharkCustomPrimitiveVector2DataName_MAX,
};

// Enum Shark.ESharkCustomPrimitiveVector3DataName
enum class ESharkCustomPrimitiveVector3DataName : uint8 {
	Color1_Rgb,
	Color2_Rgb,
	EmissiveColor_Rgb,
	GlassDestruction_Pos,
	GlassDestruction_ProjX,
	GlassDestruction_ProjY,
	Vehicle_ColorTintRgb,
	Vehicle_InteriorColorTintRgb,
	Vehicle_BounceXyz,
	Custom_0_3,
	Custom_1_4,
	Custom_4_7,
	Custom_5_8,
	Custom_8_11,
	Custom_9_12,
	Custom_12_15,
	Custom_13_16,
	Custom_16_19,
	Custom_17_20,
	Custom_20_23,
	Custom_21_24,
	Custom_24_27,
	Custom_25_28,
	Custom_28_31,
	Custom_29_32,
	Count,
	ESharkCustomPrimitiveVector3DataName_MAX,
};

// Enum Shark.ESharkCustomPrimitiveVector4DataName
enum class ESharkCustomPrimitiveVector4DataName : uint8 {
	ColorRgba,
	Custom_0_4,
	Custom_4_8,
	Custom_8_12,
	Custom_12_16,
	Custom_16_20,
	Custom_20_24,
	Custom_24_28,
	Custom_28_32,
	Count,
	ESharkCustomPrimitiveVector4DataName_MAX,
};

// Enum Shark.ESharkFourWayDirection
enum class ESharkFourWayDirection : uint8 {
	Forward,
	Right,
	Back,
	Left,
	Count,
	ESharkFourWayDirection_MAX,
};

// Enum Shark.ESharkTelemtryResponseCodes
enum class ESharkTelemtryResponseCodes : uint8 {
	UNKNOWN_CODE,
	Success,
	StandardHTTPCode,
	InvalidMessage,
	IllegalTitleInput,
	IllegalDataInput,
	IllegalMessage,
	ServerException,
	InvalidURL,
	InvalidVerbOrContentType,
	ESharkTelemtryResponseCodes_MAX,
};

// ScriptStruct Shark.SharkAccountActionResult
// Size: 0x30 (Inherited: 0x00)
struct FSharkAccountActionResult {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString InternalErrorMessage; // 0x08(0x10)
	struct FString InternalThirdPartyErrorMessage; // 0x18(0x10)
	int32_t ErrorCode; // 0x28(0x04)
	int32_t ThirdPartyErrorCode; // 0x2c(0x04)
};

// ScriptStruct Shark.SharkLoginResult
// Size: 0x98 (Inherited: 0x30)
struct FSharkLoginResult : FSharkAccountActionResult {
	struct FString UserName; // 0x30(0x10)
	struct FString OpenId; // 0x40(0x10)
	struct FString Token; // 0x50(0x10)
	struct FString PfKey; // 0x60(0x10)
	struct FString Pf; // 0x70(0x10)
	struct FString SharkmobToken; // 0x80(0x10)
	enum class EShAccountChannel AuthenticationChannelId; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct Shark.SharkAccountRegistrationData
// Size: 0x50 (Inherited: 0x00)
struct FSharkAccountRegistrationData {
	struct FString Email; // 0x00(0x10)
	struct FString Password; // 0x10(0x10)
	int32_t RegionId; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString UserName; // 0x28(0x10)
	struct FString VerificationCode; // 0x38(0x10)
	int32_t RecieveEmail; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Shark.ShMidasPremiumCurrencyPack
// Size: 0x58 (Inherited: 0x00)
struct FShMidasPremiumCurrencyPack {
	struct FString ID; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Currency; // 0x18(0x10)
	struct FString ImagePath; // 0x28(0x10)
	int16_t Bonus; // 0x38(0x02)
	char pad_3A[0x6]; // 0x3a(0x06)
	double Price; // 0x40(0x08)
	struct FString CurrencyType; // 0x48(0x10)
};

// ScriptStruct Shark.SharkUserId
// Size: 0x10 (Inherited: 0x00)
struct FSharkUserId {
	struct FString ID; // 0x00(0x10)
};

// ScriptStruct Shark.SharkRandomDeviation
// Size: 0x08 (Inherited: 0x00)
struct FSharkRandomDeviation {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Shark.SharkInt8Vector
// Size: 0x03 (Inherited: 0x00)
struct FSharkInt8Vector {
	int8_t X; // 0x00(0x01)
	int8_t Y; // 0x01(0x01)
	int8_t Z; // 0x02(0x01)
};

// ScriptStruct Shark.SharkRandomDeviationInt
// Size: 0x08 (Inherited: 0x00)
struct FSharkRandomDeviationInt {
	int32_t Min; // 0x00(0x04)
	int32_t Max; // 0x04(0x04)
};

// ScriptStruct Shark.SharkTelemetryEventBase
// Size: 0x08 (Inherited: 0x00)
struct FSharkTelemetryEventBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Shark.SharkTelemetryDateTime
// Size: 0x01 (Inherited: 0x00)
struct FSharkTelemetryDateTime {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Shark.ShChannelInfo
// Size: 0x10 (Inherited: 0x00)
struct FShChannelInfo {
	struct FShMapInfo map_info; // 0x00(0x10)
};

// ScriptStruct Shark.ShMapInfo
// Size: 0x10 (Inherited: 0x00)
struct FShMapInfo {
	struct FString sacc_token; // 0x00(0x10)
};

// ScriptStruct Shark.SharkGameInstanceId
// Size: 0x10 (Inherited: 0x00)
struct FSharkGameInstanceId {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Shark.SharkRoundRobinClassSettings
// Size: 0x30 (Inherited: 0x00)
struct FSharkRoundRobinClassSettings {
	SoftClassProperty Class; // 0x00(0x28)
	enum class ETickingGroup TickingGroup; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	uint32_t FramesBetweenUpdates; // 0x2c(0x04)
};

// ScriptStruct Shark.SharkServerMetricsConfig
// Size: 0x28 (Inherited: 0x00)
struct FSharkServerMetricsConfig {
	float UploadIntervalSeconds; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString UploadURI; // 0x08(0x10)
	struct FString Database; // 0x18(0x10)
};

// ScriptStruct Shark.SharkTelemtryEventData
// Size: 0x28 (Inherited: 0x00)
struct FSharkTelemtryEventData {
	char pad_0[0x18]; // 0x00(0x18)
	struct UStruct* StaticPropertyStruct; // 0x18(0x08)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Shark.SharkTelemetrySettings
// Size: 0x50 (Inherited: 0x00)
struct FSharkTelemetrySettings {
	struct FString DomainURL; // 0x00(0x10)
	struct FString SecretKey; // 0x10(0x10)
	struct FString ApplicationName; // 0x20(0x10)
	struct FString ApplicationID; // 0x30(0x10)
	int32_t DefaultRequestRetryCount; // 0x40(0x04)
	int32_t ChunkDispatchMaxBodySizeBytes; // 0x44(0x04)
	int32_t ChunkDispatchAmountThreshold; // 0x48(0x04)
	float ChunkDispatchTimeSecondsThreshold; // 0x4c(0x04)
};

// ScriptStruct Shark.SharkTelemetryHTTPSResponse
// Size: 0x98 (Inherited: 0x00)
struct FSharkTelemetryHTTPSResponse {
	struct FSharkTelemetryHTTPSRequestHeader Title; // 0x00(0x80)
	struct FSharkTelemetryHTTPSResponseDataChunk Data; // 0x80(0x18)
};

// ScriptStruct Shark.SharkTelemetryHTTPSResponseDataChunk
// Size: 0x18 (Inherited: 0x00)
struct FSharkTelemetryHTTPSResponseDataChunk {
	int32_t code; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Msg; // 0x08(0x10)
};

// ScriptStruct Shark.SharkTelemetryHTTPSRequestHeader
// Size: 0x80 (Inherited: 0x00)
struct FSharkTelemetryHTTPSRequestHeader {
	struct FString app_id; // 0x00(0x10)
	struct FString app_name; // 0x10(0x10)
	struct FString Timestamp; // 0x20(0x10)
	struct FString seq_id; // 0x30(0x10)
	struct FString retry_times; // 0x40(0x10)
	struct FString key_x; // 0x50(0x10)
	struct FString key_y; // 0x60(0x10)
	struct FString key_z; // 0x70(0x10)
};

// ScriptStruct Shark.SharkTelemetryHTTPSRequest
// Size: 0x90 (Inherited: 0x00)
struct FSharkTelemetryHTTPSRequest {
	struct FSharkTelemetryHTTPSRequestHeader Title; // 0x00(0x80)
	struct TArray<struct FSharkTelemetryHTTPSRequestDataChunk> Data; // 0x80(0x10)
};

// ScriptStruct Shark.SharkTelemetryHTTPSRequestDataChunk
// Size: 0x20 (Inherited: 0x00)
struct FSharkTelemetryHTTPSRequestDataChunk {
	struct FString log_name; // 0x00(0x10)
	struct FString log_fields; // 0x10(0x10)
};

// ScriptStruct Shark.SharkTokenBucket
// Size: 0x0c (Inherited: 0x00)
struct FSharkTokenBucket {
	char pad_0[0x4]; // 0x00(0x04)
	float Capacity; // 0x04(0x04)
	float TokenFillRatePerSecond; // 0x08(0x04)
};

