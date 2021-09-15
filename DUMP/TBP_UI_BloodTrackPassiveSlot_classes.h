// WidgetBlueprintGeneratedClass TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C
// Size: 0x2e0 (Inherited: 0x260)
struct UTBP_UI_BloodTrackPassiveSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BlackCircle; // 0x268(0x08)
	struct UCanvasPanel* IconCanvas; // 0x270(0x08)
	struct UImage* IconImage; // 0x278(0x08)
	struct UScaleBox* InnerScaleBox; // 0x280(0x08)
	struct UScaleBox* InnerScaleBox_2; // 0x288(0x08)
	struct UScaleBox* InnerScaleBox_3; // 0x290(0x08)
	struct UScaleBox* InnerScaleBox_4; // 0x298(0x08)
	struct UTBP_UI_BloodTrackLevelHeader_C* TBP_UI_BloodTrackLevelHeader; // 0x2a0(0x08)
	struct UTBP_UI_BloodTrackSlot_C* TBP_UI_BloodTrackSlot; // 0x2a8(0x08)
	struct UImage* UltimatePredBorder; // 0x2b0(0x08)
	struct UImage* WhiteCircleBorder; // 0x2b8(0x08)
	struct UTigerBloodTrackPassiveConfig* Current Passive; // 0x2c0(0x08)
	bool CanBeDragged; // 0x2c8(0x01)
	bool IsInPassivePool; // 0x2c9(0x01)
	char pad_2CA[0x2]; // 0x2ca(0x02)
	int32_t Index; // 0x2cc(0x04)
	float TargetTranslationOffsetX; // 0x2d0(0x04)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct UTBP_UI_BloodTrack_C* BloodTrack; // 0x2d8(0x08)

	void SetToUltimatePredatorPassive(); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.SetToUltimatePredatorPassive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetOpacity(float InOpacity); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.SetOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragOver // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	bool CanPassiveOccupyThisSlot(struct UTigerBloodTrackPassiveConfig* New Passive); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.CanPassiveOccupyThisSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void CalculateBloodTrackMovement(struct UTBP_BloodTrack_DragDropReorderOperation_C* Drag Operation, struct TArray<int32_t> Movement); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.CalculateBloodTrackMovement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDrop // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RestoreIcon(); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.RestoreIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void GetAbsoluteIconLocation(float Absolute X); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.GetAbsoluteIconLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void MoveIconToAbsoluteLocation(float AbsoluteX); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.MoveIconToAbsoluteLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetPassive(struct UTigerBloodTrackPassiveConfig* Passive); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.SetPassive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnDragCancelled(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_BloodTrackPassiveSlot(int32_t EntryPoint); // Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.ExecuteUbergraph_TBP_UI_BloodTrackPassiveSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

