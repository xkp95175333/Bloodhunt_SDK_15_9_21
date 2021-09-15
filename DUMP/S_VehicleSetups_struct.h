// UserDefinedStruct S_VehicleSetups.S_VehicleSetups
// Size: 0x20 (Inherited: 0x00)
struct FS_VehicleSetups {
	struct UStaticMesh* Body_3_A04B70E042B135A23872E8B70E7D55A2; // 0x00(0x08)
	bool Bounceable_30_EBFA565D42EBC605F3435F98FCECB5B3; // 0x08(0x01)
	bool Squashable_31_717BD8EB42FF2C36933991B279F8ADEA; // 0x09(0x01)
	bool HasCarAlarm_55_7E456DA1487E28ADE885D7BF01B64C80; // 0x0a(0x01)
	bool CanBeTinted_71_FCFC5C134DA5673ED9CCD1BA11F8E37B; // 0x0b(0x01)
	bool LandingAnywhereCrushesAll_93_21C7945042571F7A39C758B1E3D855F0; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t HowManyCrushZones_81_DBECE90D4D86316169C718AAC49D2CB7; // 0x10(0x04)
	bool HasTwoExteriorMaterials_101_81EF98BD4D55699D16E4EEAB08AC95A4; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct AActor* LootableAsset_151_63BA99FC4FD0082BFE30C8954629978D; // 0x18(0x08)
};

