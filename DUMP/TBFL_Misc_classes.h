// BlueprintGeneratedClass TBFL_Misc.TBFL_Misc_C
// Size: 0x28 (Inherited: 0x28)
struct UTBFL_Misc_C : UBlueprintFunctionLibrary {

	void MoveWidgetsFromSideAngle(float InWidgetDistance, float InAngleDegrees, struct UWidget* InTranslationWidget, struct UWidget* InRotationWidget, struct UWidget* InInverseTranslationWidget, struct UObject* __WorldContext); // Function TBFL_Misc.TBFL_Misc_C.MoveWidgetsFromSideAngle // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ActivateClientAlarmAndReportAction(struct UAkAudioEvent* Event, struct FVector EventLocation, float ActionRange, struct ATigerCharacter* Character, enum class ETigerAIPlayerAction InAction, struct UObject* __WorldContext); // Function TBFL_Misc.TBFL_Misc_C.ActivateClientAlarmAndReportAction // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ActivateAlarmAndReportAction(struct FVector EventLocation, float ActionRange, struct ATigerCharacter* Character, enum class ETigerAIPlayerAction InAction, struct UObject* __WorldContext); // Function TBFL_Misc.TBFL_Misc_C.ActivateAlarmAndReportAction // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

