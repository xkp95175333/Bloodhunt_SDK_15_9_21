// Class AudioCapture.AudioCapture
// Size: 0xb0 (Inherited: 0xa8)
struct UAudioCapture : UAudioGenerator {
	char pad_A8[0x8]; // 0xa8(0x08)

	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0xe4fd50
	void StartCapturingAudio(); // Function AudioCapture.AudioCapture.StartCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0xe4fd30
	bool IsCapturingAudio(); // Function AudioCapture.AudioCapture.IsCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0xe4fd00
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo OutInfo); // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xe4fc60
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary {

	struct UAudioCapture* CreateAudioCapture(); // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xe4fc30
};

// Class AudioCapture.AudioCaptureComponent
// Size: 0x780 (Inherited: 0x6c0)
struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x6c0(0x04)
	char pad_6C4[0xbc]; // 0x6c4(0xbc)
};

