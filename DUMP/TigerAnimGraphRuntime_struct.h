// Enum TigerAnimGraphRuntime.ETigerBoolSettleTriggerDirection
enum class ETigerBoolSettleTriggerDirection : uint8 {
	TriggerOnTrue,
	TriggerOnFalse,
	TriggerOnBoth,
	ETigerBoolSettleTriggerDirection_MAX,
};

// ScriptStruct TigerAnimGraphRuntime.TigerAnimNode_AddMetaData
// Size: 0x30 (Inherited: 0x10)
struct FTigerAnimNode_AddMetaData : FAnimNode_Base {
	struct FPoseLink Base; // 0x10(0x10)
	struct UTigerAnimMetaDataAsset* AnimMetaDataAsset; // 0x20(0x08)
	struct FName AnimMetaDataName; // 0x28(0x08)
};

// ScriptStruct TigerAnimGraphRuntime.TigerAnimNode_ApplyAdditiveFiltered
// Size: 0xd0 (Inherited: 0xc8)
struct FTigerAnimNode_ApplyAdditiveFiltered : FAnimNode_ApplyAdditive {
	struct UTigerAnimationFilter* FilterAsset; // 0xc8(0x08)
};

// ScriptStruct TigerAnimGraphRuntime.TigerAnimNode_BlendByBoolWSettle
// Size: 0xb0 (Inherited: 0xa0)
struct FTigerAnimNode_BlendByBoolWSettle : FAnimNode_BlendListByBool {
	enum class ETigerBoolSettleTriggerDirection SettleTriggerDirection; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float SettleTriggerValue; // 0xa4(0x04)
	char SettleEventEnum; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct TigerAnimGraphRuntime.TigerFilteredLayeredBlend
// Size: 0xc8 (Inherited: 0xc0)
struct FTigerFilteredLayeredBlend : FAnimNode_LayeredBoneBlend {
	struct UTigerAnimationFilter* FilterAsset; // 0xc0(0x08)
};

// ScriptStruct TigerAnimGraphRuntime.TigerAnimNode_RandomPlayer
// Size: 0x98 (Inherited: 0x38)
struct FTigerAnimNode_RandomPlayer : FAnimNode_AssetPlayerBase {
	bool bShuffleMode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UTigerRandomSequenceList* SequenceList; // 0x40(0x08)
	char pad_48[0x48]; // 0x48(0x48)
	struct UTigerRandomSequenceList* ActiveSequenceList; // 0x90(0x08)
};

