// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Devices_Power_0_H
#define WINRT_Windows_Devices_Power_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::System::Power
{
    enum class BatteryStatus : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Power
{
    struct IBattery;
    struct IBatteryReport;
    struct IBatteryStatics;
    struct IPowerGridData;
    struct IPowerGridForecast;
    struct IPowerGridForecastStatics;
    struct Battery;
    struct BatteryReport;
    struct PowerGridData;
    struct PowerGridForecast;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::Power::IBattery>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Power::IBatteryReport>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Power::IBatteryStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Power::IPowerGridData>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Power::IPowerGridForecast>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Power::IPowerGridForecastStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Power::Battery>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Power::BatteryReport>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Power::PowerGridData>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Power::PowerGridForecast>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Power::Battery> = L"Windows.Devices.Power.Battery";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Power::BatteryReport> = L"Windows.Devices.Power.BatteryReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Power::PowerGridData> = L"Windows.Devices.Power.PowerGridData";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Power::PowerGridForecast> = L"Windows.Devices.Power.PowerGridForecast";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Power::IBattery> = L"Windows.Devices.Power.IBattery";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Power::IBatteryReport> = L"Windows.Devices.Power.IBatteryReport";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Power::IBatteryStatics> = L"Windows.Devices.Power.IBatteryStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Power::IPowerGridData> = L"Windows.Devices.Power.IPowerGridData";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Power::IPowerGridForecast> = L"Windows.Devices.Power.IPowerGridForecast";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Power::IPowerGridForecastStatics> = L"Windows.Devices.Power.IPowerGridForecastStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Power::IBattery>{ 0xBC894FC6,0x0072,0x47C8,{ 0x8B,0x5D,0x61,0x4A,0xAA,0x7A,0x43,0x7E } }; // BC894FC6-0072-47C8-8B5D-614AAA7A437E
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Power::IBatteryReport>{ 0xC9858C3A,0x4E13,0x420A,{ 0xA8,0xD0,0x24,0xF1,0x8F,0x39,0x54,0x01 } }; // C9858C3A-4E13-420A-A8D0-24F18F395401
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Power::IBatteryStatics>{ 0x79CD72B6,0x9E5E,0x4452,{ 0xBE,0xA6,0xDF,0xCD,0x54,0x1E,0x59,0x7F } }; // 79CD72B6-9E5E-4452-BEA6-DFCD541E597F
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Power::IPowerGridData>{ 0xC360FB17,0xFC92,0x5F6E,{ 0x99,0x9D,0x16,0xA4,0xCF,0x9D,0x6C,0x40 } }; // C360FB17-FC92-5F6E-999D-16A4CF9D6C40
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Power::IPowerGridForecast>{ 0x077E4DE9,0xED60,0x58BB,{ 0xA8,0x50,0x00,0x3C,0x6A,0x13,0x86,0x85 } }; // 077E4DE9-ED60-58BB-A850-003C6A138685
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Power::IPowerGridForecastStatics>{ 0x5B78C806,0x2E4E,0x5BCC,{ 0xBB,0x34,0xCB,0x81,0xC6,0x0F,0x9E,0x12 } }; // 5B78C806-2E4E-5BCC-BB34-CB81C60F9E12
    template <> struct default_interface<winrt::Windows::Devices::Power::Battery>{ using type = winrt::Windows::Devices::Power::IBattery; };
    template <> struct default_interface<winrt::Windows::Devices::Power::BatteryReport>{ using type = winrt::Windows::Devices::Power::IBatteryReport; };
    template <> struct default_interface<winrt::Windows::Devices::Power::PowerGridData>{ using type = winrt::Windows::Devices::Power::IPowerGridData; };
    template <> struct default_interface<winrt::Windows::Devices::Power::PowerGridForecast>{ using type = winrt::Windows::Devices::Power::IPowerGridForecast; };
    template <> struct abi<winrt::Windows::Devices::Power::IBattery>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall GetReport(void**) noexcept = 0;
            virtual int32_t __stdcall add_ReportUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ReportUpdated(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Power::IBatteryReport>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChargeRateInMilliwatts(void**) noexcept = 0;
            virtual int32_t __stdcall get_DesignCapacityInMilliwattHours(void**) noexcept = 0;
            virtual int32_t __stdcall get_FullChargeCapacityInMilliwattHours(void**) noexcept = 0;
            virtual int32_t __stdcall get_RemainingCapacityInMilliwattHours(void**) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Power::IBatteryStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AggregateBattery(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Power::IPowerGridData>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Severity(double*) noexcept = 0;
            virtual int32_t __stdcall get_IsLowUserExperienceImpact(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Power::IPowerGridForecast>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_StartTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_BlockDuration(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_Forecast(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Power::IPowerGridForecastStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForecast(void**) noexcept = 0;
            virtual int32_t __stdcall add_ForecastUpdated(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ForecastUpdated(winrt::event_token) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Power_IBattery
    {
        [[nodiscard]] auto DeviceId() const;
        auto GetReport() const;
        auto ReportUpdated(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Power::Battery, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using ReportUpdated_revoker = impl::event_revoker<winrt::Windows::Devices::Power::IBattery, &impl::abi_t<winrt::Windows::Devices::Power::IBattery>::remove_ReportUpdated>;
        [[nodiscard]] ReportUpdated_revoker ReportUpdated(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Devices::Power::Battery, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto ReportUpdated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Devices::Power::IBattery>
    {
        template <typename D> using type = consume_Windows_Devices_Power_IBattery<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Power_IBatteryReport
    {
        [[nodiscard]] auto ChargeRateInMilliwatts() const;
        [[nodiscard]] auto DesignCapacityInMilliwattHours() const;
        [[nodiscard]] auto FullChargeCapacityInMilliwattHours() const;
        [[nodiscard]] auto RemainingCapacityInMilliwattHours() const;
        [[nodiscard]] auto Status() const;
    };
    template <> struct consume<winrt::Windows::Devices::Power::IBatteryReport>
    {
        template <typename D> using type = consume_Windows_Devices_Power_IBatteryReport<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Power_IBatteryStatics
    {
        [[nodiscard]] auto AggregateBattery() const;
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDeviceSelector() const;
    };
    template <> struct consume<winrt::Windows::Devices::Power::IBatteryStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Power_IBatteryStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Power_IPowerGridData
    {
        [[nodiscard]] auto Severity() const;
        [[nodiscard]] auto IsLowUserExperienceImpact() const;
    };
    template <> struct consume<winrt::Windows::Devices::Power::IPowerGridData>
    {
        template <typename D> using type = consume_Windows_Devices_Power_IPowerGridData<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Power_IPowerGridForecast
    {
        [[nodiscard]] auto StartTime() const;
        [[nodiscard]] auto BlockDuration() const;
        [[nodiscard]] auto Forecast() const;
    };
    template <> struct consume<winrt::Windows::Devices::Power::IPowerGridForecast>
    {
        template <typename D> using type = consume_Windows_Devices_Power_IPowerGridForecast<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Power_IPowerGridForecastStatics
    {
        auto GetForecast() const;
        auto ForecastUpdated(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using ForecastUpdated_revoker = impl::event_revoker<winrt::Windows::Devices::Power::IPowerGridForecastStatics, &impl::abi_t<winrt::Windows::Devices::Power::IPowerGridForecastStatics>::remove_ForecastUpdated>;
        [[nodiscard]] ForecastUpdated_revoker ForecastUpdated(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto ForecastUpdated(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::Devices::Power::IPowerGridForecastStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Power_IPowerGridForecastStatics<D>;
    };
}
#endif