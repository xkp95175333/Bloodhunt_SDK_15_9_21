// WidgetBlueprintGeneratedClass TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C
// Size: 0x2cc (Inherited: 0x280)
struct UTBP_UI_ActiveBuffItem_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x288(0x08)
	struct UProgressBar* Progress; // 0x290(0x08)
	struct UImage* SkillIcon; // 0x298(0x08)
	float TotalDuration; // 0x2a0(0x04)
	float Start Time; // 0x2a4(0x04)
	enum class ETigerBuffProgressType ProgressType; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UCurveFloat* OnShowOpacity; // 0x2b0(0x08)
	struct UCurveFloat* OnHideOpacity; // 0x2b8(0x08)
	bool WasRefreshed; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	float CurrentProgress; // 0x2c4(0x04)
	float ElapsedTime; // 0x2c8(0x04)

	void GetRemainingTime(float Remaining Time); // Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetRemainingTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetCurrentProgress(float Progress); // Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetCurrentProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void GetElapsedTime(float Elapsed Time); // Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.GetElapsedTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void ApplyItemData(struct UTexture2D* StatusImage, struct FLinearColor StatusColor, float CurrentDuration, float TotalDuration, enum class ETigerBuffProgressType ProgressType); // Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.ApplyItemData // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void CreateItem(struct UTexture2D* StatusImage, struct FLinearColor StatusColor, float TotalDuration, enum class ETigerBuffProgressType ProgressType); // Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.CreateItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RefreshItem(struct UTexture2D* StatusImage, struct FLinearColor StatusColor, float CurrentDuration, float TotalDuration, enum class ETigerBuffProgressType ProgressType); // Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.RefreshItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ActiveBuffItem(int32_t EntryPoint); // Function TBP_UI_ActiveBuffItem.TBP_UI_ActiveBuffItem_C.ExecuteUbergraph_TBP_UI_ActiveBuffItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

