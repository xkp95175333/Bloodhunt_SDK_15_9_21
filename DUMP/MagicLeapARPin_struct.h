// Enum MagicLeapARPin.EMagicLeapARPinType
enum class EMagicLeapARPinType : uint8 {
	SingleUserSingleSession,
	SingleUserMultiSession,
	MultiUserMultiSession,
	EMagicLeapARPinType_MAX,
};

// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8 {
	OnlyOnDataRestoration,
	Always,
	Never,
	EMagicLeapAutoPinType_MAX,
};

// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8 {
	None,
	LowMapQuality,
	UnableToLocalize,
	Unavailable,
	PrivilegeDenied,
	InvalidParam,
	UnspecifiedFailure,
	PrivilegeRequestPending,
	StartupPending,
	SharedWorldNotEnabled,
	NotImplemented,
	PinNotFound,
	EMagicLeapPassableWorldError_MAX,
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinState
// Size: 0x14 (Inherited: 0x00)
struct FMagicLeapARPinState {
	float Confidence; // 0x00(0x04)
	float ValidRadius; // 0x04(0x04)
	float RotationError; // 0x08(0x04)
	float TranslationError; // 0x0c(0x04)
	enum class EMagicLeapARPinType PinType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinQuery
// Size: 0x68 (Inherited: 0x00)
struct FMagicLeapARPinQuery {
	struct TSet<enum class EMagicLeapARPinType> Types; // 0x00(0x50)
	int32_t MaxResults; // 0x50(0x04)
	struct FVector TargetPoint; // 0x54(0x0c)
	float Radius; // 0x60(0x04)
	bool bSorted; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinObjectIdList
// Size: 0x50 (Inherited: 0x00)
struct FMagicLeapARPinObjectIdList {
	struct TSet<struct FString> ObjectIdList; // 0x00(0x50)
};

