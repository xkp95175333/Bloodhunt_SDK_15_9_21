// BlueprintGeneratedClass TBFL_UIColors.TBFL_UIColors_C
// Size: 0x28 (Inherited: 0x28)
struct UTBFL_UIColors_C : UBlueprintFunctionLibrary {

	void GetColorByItemType(struct UTigerItemAsset* InItemAsset, struct UObject* __WorldContext, struct FLinearColor OutColor); // Function TBFL_UIColors.TBFL_UIColors_C.GetColorByItemType // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetOutlineColor(enum class ETigerOutlineMode InOutlineMode, char InPlayerIndex, struct UObject* __WorldContext, struct FLinearColor Color); // Function TBFL_UIColors.TBFL_UIColors_C.GetOutlineColor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetBackgroundColorByPlayerStatus(enum class TBE_StatusIcon InPlayerStatus, struct UObject* __WorldContext, struct FSlateColor OutAccentColor); // Function TBFL_UIColors.TBFL_UIColors_C.GetBackgroundColorByPlayerStatus // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetAccentColorByPlayerStatus(enum class TBE_StatusIcon InPlayerStatus, struct UObject* __WorldContext, struct FLinearColor OutAccentColor); // Function TBFL_UIColors.TBFL_UIColors_C.GetAccentColorByPlayerStatus // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetPlayerColorByIndex(char InPlayerIndex, enum class ETigerColourSpace InColorSpace, struct UObject* __WorldContext, struct FLinearColor Color); // Function TBFL_UIColors.TBFL_UIColors_C.GetPlayerColorByIndex // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetUIColorSlate(enum class ETigerUIColor UIColor, enum class ETigerColourSpace ColorSpace, struct UObject* __WorldContext, struct FSlateColor SlateColor); // Function TBFL_UIColors.TBFL_UIColors_C.GetUIColorSlate // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetUIColorAsText(enum class ETigerUIColor UIColor, enum class ETigerColourSpace ColourSpace, struct UObject* __WorldContext, struct FText ColorText); // Function TBFL_UIColors.TBFL_UIColors_C.GetUIColorAsText // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetUIColor(enum class ETigerUIColor UIColor, enum class ETigerColourSpace ColourSpace, struct UObject* __WorldContext, struct FLinearColor LinearColor); // Function TBFL_UIColors.TBFL_UIColors_C.GetUIColor // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetData(struct UObject* __WorldContext, struct UTigerUIColorSet* ColorSet); // Function TBFL_UIColors.TBFL_UIColors_C.GetData // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
};

