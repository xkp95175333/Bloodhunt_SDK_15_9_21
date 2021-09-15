// WidgetBlueprintGeneratedClass TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C
// Size: 0x288 (Inherited: 0x260)
struct UTBP_UI_RewardItemPreview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* ImageWidget; // 0x268(0x08)
	struct UTigerStyledRichTextBlock* ItemName_R; // 0x270(0x08)
	struct UTigerStyledRichTextBlock* RarityType_R; // 0x278(0x08)
	struct UTigerStyledRichTextBlock* RewardType_R; // 0x280(0x08)

	void OnLoaded_8DE233FE433FD044E1CDAD95B52009E5(struct UObject* Loaded); // Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.OnLoaded_8DE233FE433FD044E1CDAD95B52009E5 // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void SetItem(struct UTigerInventoryItemBase* Item, bool bInShowTexture); // Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.SetItem // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_RewardItemPreview(int32_t EntryPoint); // Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.ExecuteUbergraph_TBP_UI_RewardItemPreview // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

