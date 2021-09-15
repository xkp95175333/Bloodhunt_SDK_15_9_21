// ScriptStruct TigerCore.TigerPersistentPlayerID
// Size: 0x10 (Inherited: 0x00)
struct FTigerPersistentPlayerID {
	struct FString UniqueID; // 0x00(0x10)
};

// ScriptStruct TigerCore.TigerAnimInstanceProxy
// Size: 0x790 (Inherited: 0x760)
struct FTigerAnimInstanceProxy : FAnimInstanceProxy {
	char pad_760[0x10]; // 0x760(0x10)
	struct TArray<struct UAnimMetaData*> MetaData; // 0x770(0x10)
	char pad_780[0x10]; // 0x780(0x10)
};

// ScriptStruct TigerCore.TigerSettleEvent
// Size: 0x01 (Inherited: 0x00)
struct FTigerSettleEvent {
	char SettleEventEnum; // 0x00(0x01)
};

