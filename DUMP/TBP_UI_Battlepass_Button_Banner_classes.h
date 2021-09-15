// WidgetBlueprintGeneratedClass TBP_UI_Battlepass_Button_Banner.TBP_UI_Battlepass_Button_Banner_C
// Size: 0x370 (Inherited: 0x280)
struct UTBP_UI_Battlepass_Button_Banner_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* Arch_Bottom_Left; // 0x288(0x08)
	struct UImage* Arch_Bottom_Right; // 0x290(0x08)
	struct UImage* Arch_Top_Left; // 0x298(0x08)
	struct UImage* Arch_Top_Right; // 0x2a0(0x08)
	struct UImage* Arrow_Left; // 0x2a8(0x08)
	struct UImage* Arrow_Right; // 0x2b0(0x08)
	struct UImage* Arrow_Top; // 0x2b8(0x08)
	struct UImage* Diamond_Bottom_Left; // 0x2c0(0x08)
	struct UImage* Diamond_Bottom_Right; // 0x2c8(0x08)
	struct UImage* Diamond_Top_Left; // 0x2d0(0x08)
	struct UImage* Diamond_Top_Right; // 0x2d8(0x08)
	struct UImage* HorizLine_Left; // 0x2e0(0x08)
	struct UImage* HorizLine_Right; // 0x2e8(0x08)
	struct UImage* Horn_InnerLeft; // 0x2f0(0x08)
	struct UImage* Horn_InnerRight; // 0x2f8(0x08)
	struct UImage* Horn_OuterLeft; // 0x300(0x08)
	struct UImage* Horn_OuterRight; // 0x308(0x08)
	struct UImage* Horn_Top; // 0x310(0x08)
	struct UImage* Image_145; // 0x318(0x08)
	struct UImage* SeasonButtonImage; // 0x320(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_57; // 0x328(0x08)
	struct UImage* VertLine_Left; // 0x330(0x08)
	struct UImage* VertLine_Middle; // 0x338(0x08)
	struct UImage* VertLine_Right; // 0x340(0x08)
	struct UImage* VertLine_Top; // 0x348(0x08)
	struct FMulticastInlineDelegate OnClick; // 0x350(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x360(0x10)

	void OnLoaded_3063889143A813F7600FF1838B656080(struct UObject* Loaded); // Function TBP_UI_Battlepass_Button_Banner.TBP_UI_Battlepass_Button_Banner_C.OnLoaded_3063889143A813F7600FF1838B656080 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_Battlepass_Button_Banner.TBP_UI_Battlepass_Button_Banner_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void Update Banner Button(); // Function TBP_UI_Battlepass_Button_Banner.TBP_UI_Battlepass_Button_Banner_C.Update Banner Button // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_Battlepass_Button_Banner(int32_t EntryPoint); // Function TBP_UI_Battlepass_Button_Banner.TBP_UI_Battlepass_Button_Banner_C.ExecuteUbergraph_TBP_UI_Battlepass_Button_Banner // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
	void OnHovered__DelegateSignature(); // Function TBP_UI_Battlepass_Button_Banner.TBP_UI_Battlepass_Button_Banner_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OnClick__DelegateSignature(); // Function TBP_UI_Battlepass_Button_Banner.TBP_UI_Battlepass_Button_Banner_C.OnClick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
};

