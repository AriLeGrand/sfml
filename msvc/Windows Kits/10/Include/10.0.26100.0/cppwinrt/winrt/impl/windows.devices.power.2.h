// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Devices_Power_2_H
#define WINRT_Windows_Devices_Power_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Devices.Power.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Power
{
    struct __declspec(empty_bases) Battery : winrt::Windows::Devices::Power::IBattery
    {
        Battery(std::nullptr_t) noexcept {}
        Battery(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Power::IBattery(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AggregateBattery();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelector();
    };
    struct __declspec(empty_bases) BatteryReport : winrt::Windows::Devices::Power::IBatteryReport
    {
        BatteryReport(std::nullptr_t) noexcept {}
        BatteryReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Power::IBatteryReport(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PowerGridData : winrt::Windows::Devices::Power::IPowerGridData
    {
        PowerGridData(std::nullptr_t) noexcept {}
        PowerGridData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Power::IPowerGridData(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) PowerGridForecast : winrt::Windows::Devices::Power::IPowerGridForecast
    {
        PowerGridForecast(std::nullptr_t) noexcept {}
        PowerGridForecast(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Power::IPowerGridForecast(ptr, take_ownership_from_abi) {}
        static auto GetForecast();
        static auto ForecastUpdated(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using ForecastUpdated_revoker = impl::factory_event_revoker<winrt::Windows::Devices::Power::IPowerGridForecastStatics, &impl::abi_t<winrt::Windows::Devices::Power::IPowerGridForecastStatics>::remove_ForecastUpdated>;
        [[nodiscard]] static ForecastUpdated_revoker ForecastUpdated(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto ForecastUpdated(winrt::event_token const& token);
    };
}
#endif