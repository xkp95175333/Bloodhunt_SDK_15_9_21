// BlueprintGeneratedClass BP_Weather_Controller.BP_Weather_Controller_C
// Size: 0x304 (Inherited: 0x228)
struct ABP_Weather_Controller_C : ATigerWeatherController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UExponentialHeightFogComponent* DefaultFog; // 0x230(0x08)
	struct UExponentialHeightFogComponent* LightFog; // 0x238(0x08)
	struct UExponentialHeightFogComponent* HeavyFog; // 0x240(0x08)
	struct USceneCaptureComponent2D* TopDownRenderCamera; // 0x248(0x08)
	struct UBillboardComponent* Billboard; // 0x250(0x08)
	struct UChildActorComponent* Wind Directional Source; // 0x258(0x08)
	float Wind Strength; // 0x260(0x04)
	float Rain Rate; // 0x264(0x04)
	float Puddles Amount; // 0x268(0x04)
	int32_t Player Index; // 0x26c(0x04)
	struct TArray<struct UParticleSystemComponent*> Particles Update List; // 0x270(0x10)
	bool Update Player; // 0x280(0x01)
	char pad_281[0x3]; // 0x281(0x03)
	int32_t RandomWeatherInteger; // 0x284(0x04)
	bool bHasSyncedWeather; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float RenderHeight; // 0x28c(0x04)
	struct FVector LastRenderLocation; // 0x290(0x0c)
	float LastHeight; // 0x29c(0x04)
	struct UNiagaraComponent* RainSystem; // 0x2a0(0x08)
	bool UseNiagaraRain; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct FSoftObjectPath NiagaraRainPath; // 0x2b0(0x18)
	struct UNiagaraSystem* CachedRainEffect; // 0x2c8(0x08)
	float No Rain; // 0x2d0(0x04)
	float Heavy Rain Chance; // 0x2d4(0x04)
	float Light Rain Chance; // 0x2d8(0x04)
	float Lightning Chance; // 0x2dc(0x04)
	float Foggy Chance; // 0x2e0(0x04)
	float Puddles Rings Intensity; // 0x2e4(0x04)
	float AI Perception; // 0x2e8(0x04)
	float Puddles Wind Tiling; // 0x2ec(0x04)
	bool UseCustomSettings; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	int32_t RandomIntForLightning; // 0x2f4(0x04)
	float LightningSpawnTimerMin; // 0x2f8(0x04)
	float LightningSpawTimerMax; // 0x2fc(0x04)
	float Wind Speed; // 0x300(0x04)

	void UpdateAllActors(); // Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateAllActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetWeatherScenarioParameters(struct UDA_WeatherScenario_C* WeatherScenario); // Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenarioParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetWeatherScenario(struct UTigerWeatherScenarioData* WeatherScenario); // Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenario // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetServerWeather(int32_t WeatherOverride); // Function BP_Weather_Controller.BP_Weather_Controller_C.SetServerWeather // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MoveNiagaraCamera(struct FVector CameraPos); // Function BP_Weather_Controller.BP_Weather_Controller_C.MoveNiagaraCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateNiagaraWeatherParameters(float Delta); // Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraWeatherParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateNiagaraCameraAndNiagaraParticles(float Delta); // Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraCameraAndNiagaraParticles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetNPCSightModifier(float Modifier); // Function BP_Weather_Controller.BP_Weather_Controller_C.SetNPCSightModifier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetWeatherParameters(struct UDA_WeatherScenario_C* WeatherScenario); // Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherParameters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UserConstructionScript(); // Function BP_Weather_Controller.BP_Weather_Controller_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnLoaded_76949F3E485234FD5D11ADBB3F91FB95(struct UObject* Loaded); // Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_76949F3E485234FD5D11ADBB3F91FB95 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ReceiveTick(float DeltaSeconds); // Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x16c0340
	void HandleOnWeatherSenarioChangedEvent(struct UTigerWeatherScenarioData* WeatherScenarioData); // Function BP_Weather_Controller.BP_Weather_Controller_C.HandleOnWeatherSenarioChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void TigerSetFogDensity(float FogDensity); // Function BP_Weather_Controller.BP_Weather_Controller_C.TigerSetFogDensity // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_BP_Weather_Controller(int32_t EntryPoint); // Function BP_Weather_Controller.BP_Weather_Controller_C.ExecuteUbergraph_BP_Weather_Controller // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

