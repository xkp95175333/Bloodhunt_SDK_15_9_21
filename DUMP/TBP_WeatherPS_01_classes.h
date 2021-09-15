// BlueprintGeneratedClass TBP_WeatherPS_01.TBP_WeatherPS_01_C
// Size: 0x240 (Inherited: 0x228)
struct ATBP_WeatherPS_01_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UBillboardComponent* EditorOnlyVisualizer; // 0x230(0x08)
	struct USceneComponent* Root; // 0x238(0x08)

	void UpdateWeatherParentFunc(); // Function TBP_WeatherPS_01.TBP_WeatherPS_01_C.UpdateWeatherParentFunc // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateWeatherComponents(); // Function TBP_WeatherPS_01.TBP_WeatherPS_01_C.UpdateWeatherComponents // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ReceiveBeginPlay(); // Function TBP_WeatherPS_01.TBP_WeatherPS_01_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_WeatherPS_01(int32_t EntryPoint); // Function TBP_WeatherPS_01.TBP_WeatherPS_01_C.ExecuteUbergraph_TBP_WeatherPS_01 // (Final|UbergraphFunction) // @ game+0x16c0340
};

