// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Gaming_Input_Preview_0_H
#define WINRT_Windows_Gaming_Input_Preview_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
}
WINRT_EXPORT namespace winrt::Windows::Gaming::Input
{
    struct IGameController;
}
WINRT_EXPORT namespace winrt::Windows::Gaming::Input::Custom
{
    struct IGameControllerProvider;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    struct User;
}
WINRT_EXPORT namespace winrt::Windows::Gaming::Input::Preview
{
    enum class DeviceCommand : int32_t
    {
        Reset = 0,
    };
    enum class GameControllerBatteryChargingState : int32_t
    {
        Unknown = 0,
        Inactive = 1,
        Active = 2,
        Error = 3,
    };
    enum class GameControllerBatteryKind : int32_t
    {
        Unknown = 0,
        None = 1,
        Standard = 2,
        Rechargeable = 3,
    };
    enum class GameControllerBatteryLevel : int32_t
    {
        Unknown = 0,
        Critical = 1,
        Low = 2,
        Medium = 3,
        Full = 4,
    };
    enum class GameControllerFirmwareCorruptReason : int32_t
    {
        Unknown = 0,
        NotCorrupt = 1,
        TwoUpCorrupt = 2,
        AppCorrupt = 3,
        RadioCorrupt = 4,
        EepromCorrupt = 5,
        SafeToUpdate = 6,
    };
    enum class HeadsetLevel : int32_t
    {
        Off = 0,
        Low = 1,
        Medium = 2,
        High = 3,
    };
    enum class HeadsetOperation : int32_t
    {
        Geq = 0,
        BassBoostGain = 1,
        SmartMute = 2,
        SideTone = 3,
        MuteLedBrightness = 4,
        SwapMixAndVolumeDials = 5,
    };
    enum class RemappingButtonCategory : int32_t
    {
        ButtonSettings = 0,
        AnalogSettings = 1,
        VibrationSettings = 2,
        ShareShortPress = 3,
        ShareShortPressMetaData = 4,
        ShareShortPressMetaDataDisplay = 5,
        ShareLongPress = 6,
        ShareLongPressMetaData = 7,
        ShareLongPressMetaDataDisplay = 8,
        ShareDoublePress = 9,
        ShareDoublePressMetaData = 10,
        ShareDoublePressMetaDataDisplay = 11,
    };
    struct IGameControllerProviderInfoStatics;
    struct ILegacyGipGameControllerProvider;
    struct ILegacyGipGameControllerProviderStatics;
    struct GameControllerProviderInfo;
    struct LegacyGipGameControllerProvider;
    struct HeadsetGeqGains;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Gaming::Input::Preview::GameControllerProviderInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::Gaming::Input::Preview::LegacyGipGameControllerProvider>{ using type = class_category; };
    template <> struct category<winrt::Windows::Gaming::Input::Preview::DeviceCommand>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Gaming::Input::Preview::GameControllerBatteryChargingState>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Gaming::Input::Preview::GameControllerBatteryKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Gaming::Input::Preview::GameControllerBatteryLevel>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Gaming::Input::Preview::GameControllerFirmwareCorruptReason>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Gaming::Input::Preview::HeadsetLevel>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Gaming::Input::Preview::HeadsetOperation>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Gaming::Input::Preview::RemappingButtonCategory>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Gaming::Input::Preview::HeadsetGeqGains>{ using type = struct_category<int32_t, int32_t, int32_t, int32_t, int32_t>; };
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::GameControllerProviderInfo> = L"Windows.Gaming.Input.Preview.GameControllerProviderInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::LegacyGipGameControllerProvider> = L"Windows.Gaming.Input.Preview.LegacyGipGameControllerProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::DeviceCommand> = L"Windows.Gaming.Input.Preview.DeviceCommand";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::GameControllerBatteryChargingState> = L"Windows.Gaming.Input.Preview.GameControllerBatteryChargingState";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::GameControllerBatteryKind> = L"Windows.Gaming.Input.Preview.GameControllerBatteryKind";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::GameControllerBatteryLevel> = L"Windows.Gaming.Input.Preview.GameControllerBatteryLevel";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::GameControllerFirmwareCorruptReason> = L"Windows.Gaming.Input.Preview.GameControllerFirmwareCorruptReason";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::HeadsetLevel> = L"Windows.Gaming.Input.Preview.HeadsetLevel";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::HeadsetOperation> = L"Windows.Gaming.Input.Preview.HeadsetOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::RemappingButtonCategory> = L"Windows.Gaming.Input.Preview.RemappingButtonCategory";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::HeadsetGeqGains> = L"Windows.Gaming.Input.Preview.HeadsetGeqGains";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics> = L"Windows.Gaming.Input.Preview.IGameControllerProviderInfoStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider> = L"Windows.Gaming.Input.Preview.ILegacyGipGameControllerProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics> = L"Windows.Gaming.Input.Preview.ILegacyGipGameControllerProviderStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>{ 0x0BE1E6C5,0xD9BD,0x44EE,{ 0x83,0x62,0x48,0x8B,0x2E,0x46,0x4B,0xFB } }; // 0BE1E6C5-D9BD-44EE-8362-488B2E464BFB
    template <> inline constexpr guid guid_v<winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider>{ 0x2DA3ED52,0xFFD9,0x43E2,{ 0x82,0x5C,0x1D,0x27,0x90,0xE0,0x4D,0x14 } }; // 2DA3ED52-FFD9-43E2-825C-1D2790E04D14
    template <> inline constexpr guid guid_v<winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics>{ 0xD40DDA17,0xB1F4,0x499A,{ 0x87,0x4C,0x70,0x95,0xAA,0xC1,0x52,0x91 } }; // D40DDA17-B1F4-499A-874C-7095AAC15291
    template <> struct default_interface<winrt::Windows::Gaming::Input::Preview::LegacyGipGameControllerProvider>{ using type = winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider; };
    template <> struct abi<winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetParentProviderId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetProviderId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BatteryChargingState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BatteryKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BatteryLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetDeviceFirmwareCorruptionState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsFirmwareCorrupted(bool*) noexcept = 0;
            virtual int32_t __stdcall IsInterfaceSupported(winrt::guid, bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSyntheticDevice(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PreferredTypes(void**) noexcept = 0;
            virtual int32_t __stdcall ExecuteCommand(int32_t) noexcept = 0;
            virtual int32_t __stdcall SetHomeLedIntensity(uint8_t) noexcept = 0;
            virtual int32_t __stdcall GetExtendedDeviceInfo(uint32_t* __bufferSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall SetHeadsetOperation(int32_t, uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GetHeadsetOperation(int32_t, uint32_t* __bufferSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall get_AppCompatVersion(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SetStandardControllerButtonRemapping(void*, bool, void*) noexcept = 0;
            virtual int32_t __stdcall GetStandardControllerButtonRemapping(void*, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromGameController(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromGameControllerProvider(void*, void**) noexcept = 0;
            virtual int32_t __stdcall PairPilotToCopilot(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall ClearPairing(void*, void*) noexcept = 0;
            virtual int32_t __stdcall IsPilot(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall IsCopilot(void*, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics
    {
        auto GetParentProviderId(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const;
        auto GetProviderId(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const;
    };
    template <> struct consume<winrt::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider
    {
        [[nodiscard]] auto BatteryChargingState() const;
        [[nodiscard]] auto BatteryKind() const;
        [[nodiscard]] auto BatteryLevel() const;
        auto GetDeviceFirmwareCorruptionState() const;
        [[nodiscard]] auto IsFirmwareCorrupted() const;
        auto IsInterfaceSupported(winrt::guid const& interfaceId) const;
        [[nodiscard]] auto IsSyntheticDevice() const;
        [[nodiscard]] auto PreferredTypes() const;
        auto ExecuteCommand(winrt::Windows::Gaming::Input::Preview::DeviceCommand const& command) const;
        auto SetHomeLedIntensity(uint8_t intensity) const;
        auto GetExtendedDeviceInfo() const;
        auto SetHeadsetOperation(winrt::Windows::Gaming::Input::Preview::HeadsetOperation const& operation, array_view<uint8_t const> buffer) const;
        auto GetHeadsetOperation(winrt::Windows::Gaming::Input::Preview::HeadsetOperation const& operation) const;
        [[nodiscard]] auto AppCompatVersion() const;
        auto SetStandardControllerButtonRemapping(winrt::Windows::System::User const& user, bool previous, param::map_view<winrt::Windows::Gaming::Input::Preview::RemappingButtonCategory, winrt::Windows::Foundation::IInspectable> const& remapping) const;
        auto GetStandardControllerButtonRemapping(winrt::Windows::System::User const& user, bool previous) const;
    };
    template <> struct consume<winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProviderStatics
    {
        auto FromGameController(winrt::Windows::Gaming::Input::IGameController const& controller) const;
        auto FromGameControllerProvider(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const;
        auto PairPilotToCopilot(winrt::Windows::System::User const& user, param::hstring const& pilotControllerProviderId, param::hstring const& copilotControllerProviderId) const;
        auto ClearPairing(winrt::Windows::System::User const& user, param::hstring const& controllerProviderId) const;
        auto IsPilot(winrt::Windows::System::User const& user, param::hstring const& controllerProviderId) const;
        auto IsCopilot(winrt::Windows::System::User const& user, param::hstring const& controllerProviderId) const;
    };
    template <> struct consume<winrt::Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProviderStatics<D>;
    };
    struct struct_Windows_Gaming_Input_Preview_HeadsetGeqGains
    {
        int32_t band1Gain;
        int32_t band2Gain;
        int32_t band3Gain;
        int32_t band4Gain;
        int32_t band5Gain;
    };
    template <> struct abi<Windows::Gaming::Input::Preview::HeadsetGeqGains>
    {
        using type = struct_Windows_Gaming_Input_Preview_HeadsetGeqGains;
    };
}
#endif