// BlueprintGeneratedClass BP_SmallSpotlLight_01.BP_SmallSpotlLight_01_C
// Size: 0x298 (Inherited: 0x228)
struct ABP_SmallSpotlLight_01_C : AActor {
	struct UTigerSpotLightComponent* TigerSpotLightMoveable; // 0x228(0x08)
	struct UTigerSpotLightComponent* TigerSpotLightStatic; // 0x230(0x08)
	struct UStaticMeshComponent* SM_SmallSpotLight; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)
	bool Enable real light; // 0x248(0x01)
	char pad_249[0x3]; // 0x249(0x03)
	float Real Light Intensity; // 0x24c(0x04)
	struct FColor light color; // 0x250(0x04)
	float RotationX; // 0x254(0x04)
	float RotationY; // 0x258(0x04)
	float Real Light Attenuation Radius; // 0x25c(0x04)
	float RealLightOuterConeAngle; // 0x260(0x04)
	float Real Light Inner Cone Radius; // 0x264(0x04)
	bool off; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	float Volumetric Intensity; // 0x26c(0x04)
	bool ShadowCasting; // 0x270(0x01)
	bool Static; // 0x271(0x01)
	char pad_272[0x2]; // 0x272(0x02)
	struct FVector PoleLocation; // 0x274(0x0c)
	struct FRotator PoleRotation; // 0x280(0x0c)
	struct FVector PoleScale; // 0x28c(0x0c)

	void LightSetup(struct UTigerSpotLightComponent* LightToKeep, struct UTigerSpotLightComponent* LightToDestroy); // Function BP_SmallSpotlLight_01.BP_SmallSpotlLight_01_C.LightSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetCustomPrimitiveData(); // Function BP_SmallSpotlLight_01.BP_SmallSpotlLight_01_C.SetCustomPrimitiveData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function BP_SmallSpotlLight_01.BP_SmallSpotlLight_01_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

