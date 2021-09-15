// WidgetBlueprintGeneratedClass TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C
// Size: 0x2e0 (Inherited: 0x288)
struct UTBP_UI_CharacterCard_Info_C : UTigerCharacterCardBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* BackgroundImage; // 0x290(0x08)
	struct UBorder* CardBorder; // 0x298(0x08)
	struct URetainerBox* CardShapeMask; // 0x2a0(0x08)
	struct UImage* PlayerIcon; // 0x2a8(0x08)
	struct UImage* PlayerIconBorder; // 0x2b0(0x08)
	struct URetainerBox* PlayerIconBorderMask; // 0x2b8(0x08)
	struct URetainerBox* PlayerIconMask; // 0x2c0(0x08)
	struct UTigerStyledRichTextBlock* PlayerNameText; // 0x2c8(0x08)
	struct UImage* SpeakerIcon; // 0x2d0(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x2d8(0x08)

	void SetPlayerIconBorderBackground(); // Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetPlayerIconBorderBackground // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetCardShapeAndBackground(); // Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetCardShapeAndBackground // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetPlayerIcon(); // Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetPlayerIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void BuildCharacterCard(); // Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.BuildCharacterCard // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void PreConstruct(bool IsDesignTime); // Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnInit(struct ATigerPlayerState* InRepresentedPlayer); // Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.OnInit // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_CharacterCard_Info(int32_t EntryPoint); // Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.ExecuteUbergraph_TBP_UI_CharacterCard_Info // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

