// UserDefinedStruct TS_ActiveBuffItemData.TS_ActiveBuffItemData
// Size: 0x28 (Inherited: 0x00)
struct FTS_ActiveBuffItemData {
	struct UTexture2D* StatusImage_16_8ADB1AC54EEE37D0645A32A71CABFFB1; // 0x00(0x08)
	struct FLinearColor StatusColor_7_856ECF6A48D86DAD6B43DD92F96F7A14; // 0x08(0x10)
	float CurrentDuration_2_84E79CB5423DCA9E428B1C84C028ADF9; // 0x18(0x04)
	float TotalDuration_4_3C24242B4F5A241017B5A7B7A1954F53; // 0x1c(0x04)
	enum class ETigerBuffProgressType ProgressType_18_57156BC440A9E62F809F729EB5259BE7; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t ID_13_562E133D42593891887D0BBA1252A630; // 0x24(0x04)
};

