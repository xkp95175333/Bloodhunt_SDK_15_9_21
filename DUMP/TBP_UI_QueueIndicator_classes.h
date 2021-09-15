// WidgetBlueprintGeneratedClass TBP_UI_QueueIndicator.TBP_UI_QueueIndicator_C
// Size: 0x339 (Inherited: 0x260)
struct UTBP_UI_QueueIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OnClick; // 0x268(0x08)
	struct UWidgetAnimation* OnSearch; // 0x270(0x08)
	struct UImage* Arrow_Left; // 0x278(0x08)
	struct UImage* Arrow_Right; // 0x280(0x08)
	struct UImage* Base; // 0x288(0x08)
	struct UImage* Base_2; // 0x290(0x08)
	struct UImage* Base_Click; // 0x298(0x08)
	struct UImage* Border; // 0x2a0(0x08)
	struct UNamedSlot* Content; // 0x2a8(0x08)
	struct UImage* Corner_Left; // 0x2b0(0x08)
	struct UImage* Corner_Right; // 0x2b8(0x08)
	struct UImage* Dot_Bottom; // 0x2c0(0x08)
	struct UImage* Dot_Left; // 0x2c8(0x08)
	struct UImage* Dot_Right; // 0x2d0(0x08)
	struct UImage* Dot_Top; // 0x2d8(0x08)
	struct UImage* Horn_Bottom; // 0x2e0(0x08)
	struct UImage* Horn_Top; // 0x2e8(0x08)
	struct UImage* Ornament_Bottom; // 0x2f0(0x08)
	struct UImage* Ornament_Left; // 0x2f8(0x08)
	struct UImage* Ornament_Right; // 0x300(0x08)
	struct UImage* Ornament_Top; // 0x308(0x08)
	struct FText ButtonText; // 0x310(0x18)
	struct FDataTableRowHandle TextStyle; // 0x328(0x10)
	bool EnableSmoke; // 0x338(0x01)

	void PreConstruct(bool IsDesignTime); // Function TBP_UI_QueueIndicator.TBP_UI_QueueIndicator_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_QueueIndicator(int32_t EntryPoint); // Function TBP_UI_QueueIndicator.TBP_UI_QueueIndicator_C.ExecuteUbergraph_TBP_UI_QueueIndicator // (Final|UbergraphFunction) // @ game+0x16c0340
};

