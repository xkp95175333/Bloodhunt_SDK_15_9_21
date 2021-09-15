// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C
// Size: 0x310 (Inherited: 0x290)
struct UTBP_UI_SystemMenuAudioSettings_C : UTigerMenuWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UTBP_UI_CheckBox_C* AllowBackgroundAudio; // 0x298(0x08)
	struct UTBP_UI_SliderWBox_C* DialogueVolumeSlider; // 0x2a0(0x08)
	struct UTBP_UI_CheckBox_C* EnableDolbyAtmos; // 0x2a8(0x08)
	struct UTBP_UI_CheckBox_C* EnableVoiceChat; // 0x2b0(0x08)
	struct UTBP_UI_SliderWBox_C* MasterVolumeSlider; // 0x2b8(0x08)
	struct UTBP_UI_SliderWBox_C* MicVolumeSlider; // 0x2c0(0x08)
	struct UTBP_UI_SliderWBox_C* MusicVolumeSlider; // 0x2c8(0x08)
	struct UTBP_UI_SliderWBox_C* SfxVolumeSlider; // 0x2d0(0x08)
	struct UVerticalBox* SystemMenuSubItemBox; // 0x2d8(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_166; // 0x2e0(0x08)
	struct UTigerStyledRichTextBlock* TigerStyledRichTextBlock_383; // 0x2e8(0x08)
	struct UTBP_UI_CheckBox_C* UsePushToTalk; // 0x2f0(0x08)
	struct UTBP_UI_SliderWBox_C* VideoVolumeSlider; // 0x2f8(0x08)
	struct UTBP_UI_SliderWBox_C* VoiceChatVolumeSlider; // 0x300(0x08)
	struct UTBP_UI_SystemMenuItem_C* CurrentlySelectedSystemMenuItem; // 0x308(0x08)

	void UpdateVolumeSettings(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.UpdateVolumeSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Update Voip Settings(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Update Voip Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x16c0340
	void Construct(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x16c0340
	void OnOpen(); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.OnOpen // (Event|Protected|BlueprintEvent) // @ game+0x16c0340
	void BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__MasterVolumeSlider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__SfxVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__SfxVolumeSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__VoiceChatVolumeSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__DialogueVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__DialogueVolumeSlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__VideoVolumeSlider_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__MusicVolumeSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_SystemMenuAudioSettings_UsePushToTalk_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_UsePushToTalk_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_SystemMenuAudioSettings_MicVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_MicVolumeSlider_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_SystemMenuAudioSettings_MuteWhenMinimized_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_MuteWhenMinimized_K2Node_ComponentBoundEvent_9_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void BndEvt__TBP_UI_SystemMenuAudioSettings_EnableDolbyAtmos_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature(bool bIsChecked); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.BndEvt__TBP_UI_SystemMenuAudioSettings_EnableDolbyAtmos_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x16c0340
	void ExecuteUbergraph_TBP_UI_SystemMenuAudioSettings(int32_t EntryPoint); // Function TBP_UI_SystemMenuAudioSettings.TBP_UI_SystemMenuAudioSettings_C.ExecuteUbergraph_TBP_UI_SystemMenuAudioSettings // (Final|UbergraphFunction) // @ game+0x16c0340
};

