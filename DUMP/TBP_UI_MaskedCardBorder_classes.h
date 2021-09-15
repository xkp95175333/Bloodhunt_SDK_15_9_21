// BlueprintGeneratedClass TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C
// Size: 0x191 (Inherited: 0x150)
struct UTBP_UI_MaskedCardBorder_C : UTigerDeferredGroupRetainerBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x150(0x08)
	float InitialCornerRadius; // 0x158(0x04)
	float InitialBorderWidth; // 0x15c(0x04)
	struct FLinearColor InitialBorderColor; // 0x160(0x10)
	struct UTexture2D* InitialWeatheringTexture; // 0x170(0x08)
	float InitialWeatheringOpacity; // 0x178(0x04)
	float InitialWeatheringWidth; // 0x17c(0x04)
	float InitialWeatheringFadeWidth; // 0x180(0x04)
	float InitialWeatheringScale; // 0x184(0x04)
	struct FVector2D InitialWeatheringOffset; // 0x188(0x08)
	bool bRandomizeInitialWeatheringOffset; // 0x190(0x01)

	void SetWeatheringOpacity(float InWeatheringOpacity); // Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void RandomizeWeatheringOffset(); // Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.RandomizeWeatheringOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetWeatheringOffset(struct FVector2D InWeatheringOffset); // Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetWeatheringScale(float InWeatheringScale); // Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetWeatheringFadeWidth(float InWeatheringFadeWidth); // Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringFadeWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetWeatheringWidth(float InWeatheringWidth); // Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetWeatheringTexture(struct UTexture2D* InWeatheringTexture); // Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetBorderColor(struct FLinearColor InBorderColor); // Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetBorderColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetBorderWidth(float InBorderWidth); // Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetBorderWidth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetCornerRadius(float InCornerRadius); // Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetCornerRadius // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void InitializeParameters(); // Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.InitializeParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.Construct // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_MaskedCardBorder(int32_t EntryPoint); // Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.ExecuteUbergraph_TBP_UI_MaskedCardBorder // (Final|UbergraphFunction) // @ game+0x16c0340
};

