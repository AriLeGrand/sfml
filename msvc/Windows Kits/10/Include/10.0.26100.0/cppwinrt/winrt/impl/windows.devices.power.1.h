// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Devices_Power_1_H
#define WINRT_Windows_Devices_Power_1_H
#include "winrt/impl/Windows.Devices.Power.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Power
{
    struct __declspec(empty_bases) IBattery :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBattery>
    {
        IBattery(std::nullptr_t = nullptr) noexcept {}
        IBattery(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBatteryReport :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBatteryReport>
    {
        IBatteryReport(std::nullptr_t = nullptr) noexcept {}
        IBatteryReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IBatteryStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBatteryStatics>
    {
        IBatteryStatics(std::nullptr_t = nullptr) noexcept {}
        IBatteryStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPowerGridData :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPowerGridData>
    {
        IPowerGridData(std::nullptr_t = nullptr) noexcept {}
        IPowerGridData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPowerGridForecast :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPowerGridForecast>
    {
        IPowerGridForecast(std::nullptr_t = nullptr) noexcept {}
        IPowerGridForecast(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IPowerGridForecastStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPowerGridForecastStatics>
    {
        IPowerGridForecastStatics(std::nullptr_t = nullptr) noexcept {}
        IPowerGridForecastStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif