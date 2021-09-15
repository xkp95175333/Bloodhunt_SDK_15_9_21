// WidgetBlueprintGeneratedClass TBP_UI_CharacterCard_Icon.TBP_UI_CharacterCard_Icon_C
// Size: 0x2d0 (Inherited: 0x288)
struct UTBP_UI_CharacterCard_Icon_C : UTigerCharacterCardBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* IsReadyLines; // 0x290(0x08)
	struct UImage* IsReadyLinesCheckmark; // 0x298(0x08)
	struct UOverlay* IsReadyOverlay; // 0x2a0(0x08)
	struct UImage* PlayerIcon; // 0x2a8(0x08)
	struct UImage* PlayerIconBorder; // 0x2b0(0x08)
	struct URetainerBox* PlayerIconBorderMask; // 0x2b8(0x08)
	struct URetainerBox* PlayerIconMask; // 0x2c0(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x2c8(0x08)

	void SetPlayerIconBorderBackground(); // Function TBP_UI_CharacterCard_Icon.TBP_UI_CharacterCard_Icon_C.SetPlayerIconBorderBackground // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetCardShapeAndBackground(); // Function TBP_UI_CharacterCard_Icon.TBP_UI_CharacterCard_Icon_C.SetCardShapeAndBackground // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetPlayerIcon(); // Function TBP_UI_CharacterCard_Icon.TBP_UI_CharacterCard_Icon_C.SetPlayerIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_CharacterCard_Icon.TBP_UI_CharacterCard_Icon_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void BuildCharacterCard(); // Function TBP_UI_CharacterCard_Icon.TBP_UI_CharacterCard_Icon_C.BuildCharacterCard // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnInit(struct ATigerPlayerState* InRepresentedPlayer); // Function TBP_UI_CharacterCard_Icon.TBP_UI_CharacterCard_Icon_C.OnInit // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void UpdateReadyState(bool Is Ready); // Function TBP_UI_CharacterCard_Icon.TBP_UI_CharacterCard_Icon_C.UpdateReadyState // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_CharacterCard_Icon(int32_t EntryPoint); // Function TBP_UI_CharacterCard_Icon.TBP_UI_CharacterCard_Icon_C.ExecuteUbergraph_TBP_UI_CharacterCard_Icon // (Final|UbergraphFunction) // @ game+0x16c0340
};

