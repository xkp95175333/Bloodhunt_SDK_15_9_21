// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8 {
	None,
	DepthSensor,
	Front,
	Rear,
	Unknown,
	EMediaWebcamCaptureDeviceFilter_MAX,
};

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8 {
	None,
	Card,
	Software,
	Unknown,
	Webcam,
	EMediaVideoCaptureDeviceFilter_MAX,
};

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8 {
	None,
	Card,
	Microphone,
	Software,
	Unknown,
	EMediaAudioCaptureDeviceFilter_MAX,
};

// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8 {
	Audio,
	Caption,
	Metadata,
	Script,
	Subtitle,
	Text,
	Video,
	EMediaPlayerTrack_MAX,
};

// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8 {
	Min_65,
	Small_257,
	Medium_513,
	Large_1025,
	EMediaSoundComponentFFTSize_MAX,
};

// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8 {
	Mono,
	Stereo,
	Surround,
	EMediaSoundChannels_MAX,
};

// Enum MediaAssets.MediaTextureOrientation
enum class MediaTextureOrientation : uint8 {
	MTORI_Original,
	MTORI_CW90,
	MTORI_CW180,
	MTORI_CW270,
	MTORI_MAX,
};

// Enum MediaAssets.MediaTextureOutputFormat
enum class MediaTextureOutputFormat : uint8 {
	MTOF_Default,
	MTOF_SRGB_LINOUT,
	MTOF_MAX,
};

// ScriptStruct MediaAssets.MediaCaptureDevice
// Size: 0x28 (Inherited: 0x00)
struct FMediaCaptureDevice {
	struct FText DISPLAYNAME; // 0x00(0x18)
	struct FString URL; // 0x18(0x10)
};

// ScriptStruct MediaAssets.MediaSoundComponentSpectralData
// Size: 0x08 (Inherited: 0x00)
struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x00(0x04)
	float Magnitude; // 0x04(0x04)
};

