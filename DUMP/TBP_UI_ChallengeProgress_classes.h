// WidgetBlueprintGeneratedClass TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C
// Size: 0x33c (Inherited: 0x280)
struct UTBP_UI_ChallengeProgress_C : UTigerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* HideChallangeProgress; // 0x288(0x08)
	struct UWidgetAnimation* ShowChallangeComplete; // 0x290(0x08)
	struct UTBP_UI_AnimatedCompletionIcon_C* AnimatedCompleteIcon; // 0x298(0x08)
	struct UTigerStyledRichTextBlock* ChallengeExpReward; // 0x2a0(0x08)
	struct UTigerStyledRichTextBlock* ChallengeExpXPText; // 0x2a8(0x08)
	struct UProgressBar* ChallengeProgressBar; // 0x2b0(0x08)
	struct UHorizontalBox* ChallengeProgressHB; // 0x2b8(0x08)
	struct UHorizontalBox* ChanllengeCompleteHB; // 0x2c0(0x08)
	struct UTigerStyledRichTextBlock* DescriptionWidget; // 0x2c8(0x08)
	struct USizeBox* DividerSizeBox; // 0x2d0(0x08)
	struct UHorizontalBox* ExpTextBox; // 0x2d8(0x08)
	struct UImage* Image_112; // 0x2e0(0x08)
	struct UTigerStyledRichTextBlock* ProgressTextWidget; // 0x2e8(0x08)
	struct UTigerStyledRichTextBlock* ProgressTextWidget_2; // 0x2f0(0x08)
	struct USizeBox* RewardSizeBox_2; // 0x2f8(0x08)
	struct UTBP_UI_Image_C* TBP_UI_Image; // 0x300(0x08)
	struct UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_2; // 0x308(0x08)
	struct USizeBox* WidgetSizeBox; // 0x310(0x08)
	struct UTigerChallenge* Challenge; // 0x318(0x08)
	struct FLinearColor CompletedColor; // 0x320(0x10)
	int32_t TargetValue; // 0x330(0x04)
	float PreMatchProgress; // 0x334(0x04)
	float PostMatchProgress; // 0x338(0x04)

	void SequenceEvent__ENTRYPOINTTBP_UI_ChallengeProgress_1(struct UHorizontalBox* ChallengeProgressHB); // Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_ChallengeProgress_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void OverrideMinSize(float MinWidth, float MinHeight); // Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.OverrideMinSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HideExpRewardText(); // Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.HideExpRewardText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Reward Display From Item(); // Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Reward Display From Item // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void HasFinishedProgressBarAnimation(bool HasUpdatedProgressBar); // Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.HasFinishedProgressBarAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x16c0340
	void Set Progress(float InProgressBarPercentage, struct FText InProgressText); // Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Progress // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void MoveProgressBar(float LerpValue); // Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.MoveProgressBar // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Set Challenge Data(struct FTigerProgressedChallengeWrapper Challenge Progress Wrapper); // Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Challenge Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ShowComplete(struct UHorizontalBox* ChallengeProgressHB); // Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.ShowComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnChallengeCompleted(); // Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.OnChallengeCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void UpdateProgress(); // Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.UpdateProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_ChallengeProgress(int32_t EntryPoint); // Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.ExecuteUbergraph_TBP_UI_ChallengeProgress // (Final|UbergraphFunction|HasDefaults) // @ game+0x16c0340
};

