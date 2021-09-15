// BlueprintGeneratedClass TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C
// Size: 0x2908 (Inherited: 0x2900)
struct ATBP_TigerPlayerCameraManager_C : ATigerPlayerCameraManager {
	float HighSpeedCameraTreshold; // 0x2900(0x04)
	float MinMoveSpeedForMeleeCamera; // 0x2904(0x04)

	void OnChangingCameraPreset(struct UTigerCameraPreset* InCurrentCameraPresetClass, struct UTigerCameraPreset* InNewCameraPresetClass); // Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.OnChangingCameraPreset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct UCurveFloat* SelectPresetTransitionCurve(struct UTigerCameraPreset* InPreviousPreset, struct UTigerCameraPreset* InNewPreset); // Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.SelectPresetTransitionCurve // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct UTigerCameraPreset* EvaluateCameraPreset(); // Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.EvaluateCameraPreset // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

