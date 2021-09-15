// WidgetBlueprintGeneratedClass TBP_UI_Cursor.TBP_UI_Cursor_C
// Size: 0x29c (Inherited: 0x280)
struct UTBP_UI_Cursor_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* CursorImage; // 0x288(0x08)
	float PreviousViewportScale; // 0x290(0x04)
	struct FVector2D Starting_Size; // 0x294(0x08)

	void Construct(); // Function TBP_UI_Cursor.TBP_UI_Cursor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_Cursor.TBP_UI_Cursor_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_Cursor.TBP_UI_Cursor_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void SetRenderOpacityForDuration(float InTime, float InOpacity); // Function TBP_UI_Cursor.TBP_UI_Cursor_C.SetRenderOpacityForDuration // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Cursor(int32_t EntryPoint); // Function TBP_UI_Cursor.TBP_UI_Cursor_C.ExecuteUbergraph_TBP_UI_Cursor // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

