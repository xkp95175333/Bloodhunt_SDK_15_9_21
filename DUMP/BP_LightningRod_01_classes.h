// BlueprintGeneratedClass BP_LightningRod_01.BP_LightningRod_01_C
// Size: 0x2d8 (Inherited: 0x240)
struct ABP_LightningRod_01_C : ATBP_WeatherPS_01_C {
	int32_t Number Of Pieces; // 0x240(0x04)
	float Scale Middle Pieces; // 0x244(0x04)
	int32_t Top Piece; // 0x248(0x04)
	int32_t Middle Piece; // 0x24c(0x04)
	int32_t Bottom Piece; // 0x250(0x04)
	bool Enable Bottom Piece; // 0x254(0x01)
	bool Enable Top Piece; // 0x255(0x01)
	char pad_256[0xa]; // 0x256(0x0a)
	struct FTransform NextTransform; // 0x260(0x30)
	float Rotate Top; // 0x290(0x04)
	float Rotate Bottom; // 0x294(0x04)
	char pad_298[0x8]; // 0x298(0x08)
	struct FTransform ParticleLoc; // 0x2a0(0x30)
	struct UBP_LightningRod_01DataInterface_C* LightningRodCDO; // 0x2d0(0x08)

	void AddMiddleComponent(int32_t InIndex); // Function BP_LightningRod_01.BP_LightningRod_01_C.AddMiddleComponent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function BP_LightningRod_01.BP_LightningRod_01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

