// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_ApplicationModel_UserActivities_H
#define WINRT_Windows_ApplicationModel_UserActivities_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230511.6"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230511.6"
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Security.Credentials.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.UI.Shell.2.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::State() const
    {
        winrt::Windows::ApplicationModel::UserActivities::UserActivityState value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->get_State(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ActivityId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->get_ActivityId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::VisualElements() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->get_VisualElements(&value));
        return winrt::Windows::ApplicationModel::UserActivities::UserActivityVisualElements{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ContentUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->get_ContentUri(&value));
        return winrt::Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ContentUri(winrt::Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->put_ContentUri(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ContentType() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->get_ContentType(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ContentType(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->put_ContentType(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::FallbackUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->get_FallbackUri(&value));
        return winrt::Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::FallbackUri(winrt::Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->put_FallbackUri(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ActivationUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->get_ActivationUri(&value));
        return winrt::Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ActivationUri(winrt::Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->put_ActivationUri(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ContentInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->get_ContentInfo(&value));
        return winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::ContentInfo(winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->put_ContentInfo(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::SaveAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->SaveAsync(&operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity<D>::CreateSession() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity)->CreateSession(&result));
        return winrt::Windows::ApplicationModel::UserActivities::UserActivitySession{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity2<D>::ToJson() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity2)->ToJson(&result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity3<D>::IsRoamable() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity3)->get_IsRoamable(&value));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivity3<D>::IsRoamable(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivity3)->put_IsRoamable(value));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>::IconUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution)->get_IconUri(&value));
        return winrt::Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>::IconUri(winrt::Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution)->put_IconUri(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>::AlternateText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution)->get_AlternateText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>::AlternateText(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution)->put_AlternateText(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>::AddImageQuery() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution)->get_AddImageQuery(&value));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityAttribution<D>::AddImageQuery(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution)->put_AddImageQuery(value));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityAttributionFactory<D>::CreateWithUri(winrt::Windows::Foundation::Uri const& iconUri) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory)->CreateWithUri(*(void**)(&iconUri), &value));
        return winrt::Windows::ApplicationModel::UserActivities::UserActivityAttribution{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel<D>::GetOrCreateUserActivityAsync(param::hstring const& activityId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel)->GetOrCreateUserActivityAsync(*(void**)(&activityId), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::UserActivities::UserActivity>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel<D>::DeleteActivityAsync(param::hstring const& activityId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel)->DeleteActivityAsync(*(void**)(&activityId), &operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel<D>::DeleteAllActivitiesAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel)->DeleteAllActivitiesAsync(&operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel2<D>::GetRecentUserActivitiesAsync(int32_t maxUniqueActivities) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel2)->GetRecentUserActivitiesAsync(maxUniqueActivities, &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::UserActivities::UserActivitySessionHistoryItem>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityChannel2<D>::GetSessionHistoryItemsForUserActivityAsync(param::hstring const& activityId, winrt::Windows::Foundation::DateTime const& startTime) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel2)->GetSessionHistoryItemsForUserActivityAsync(*(void**)(&activityId), impl::bind_in(startTime), &operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::UserActivities::UserActivitySessionHistoryItem>>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics)->GetDefault(&result));
        return winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics2<D>::DisableAutoSessionCreation() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics2)->DisableAutoSessionCreation());
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics2<D>::TryGetForWebAccount(winrt::Windows::Security::Credentials::WebAccount const& account) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics2)->TryGetForWebAccount(*(void**)(&account), &result));
        return winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityChannelStatics3<D>::GetForUser(winrt::Windows::System::User const& user) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics3)->GetForUser(*(void**)(&user), &result));
        return winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityContentInfo<D>::ToJson() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo)->ToJson(&result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityContentInfoStatics<D>::FromJson(param::hstring const& value) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics)->FromJson(*(void**)(&value), &result));
        return winrt::Windows::ApplicationModel::UserActivities::UserActivityContentInfo{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityFactory<D>::CreateWithActivityId(param::hstring const& activityId) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityFactory)->CreateWithActivityId(*(void**)(&activityId), &value));
        return winrt::Windows::ApplicationModel::UserActivities::UserActivity{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityRequest<D>::SetUserActivity(winrt::Windows::ApplicationModel::UserActivities::UserActivity const& activity) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequest)->SetUserActivity(*(void**)(&activity)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityRequestManager<D>::UserActivityRequested(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestManager, winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestManager)->add_UserActivityRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_ApplicationModel_UserActivities_IUserActivityRequestManager<D>::UserActivityRequested_revoker consume_Windows_ApplicationModel_UserActivities_IUserActivityRequestManager<D>::UserActivityRequested(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestManager, winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, UserActivityRequested_revoker>(this, UserActivityRequested(handler));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityRequestManager<D>::UserActivityRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestManager)->remove_UserActivityRequested(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityRequestManagerStatics<D>::GetForCurrentView() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestManagerStatics)->GetForCurrentView(&result));
        return winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityRequestedEventArgs<D>::Request() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs)->get_Request(&value));
        return winrt::Windows::ApplicationModel::UserActivities::UserActivityRequest{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityRequestedEventArgs<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs)->GetDeferral(&value));
        return winrt::Windows::Foundation::Deferral{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivitySession<D>::ActivityId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivitySession)->get_ActivityId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivitySessionHistoryItem<D>::UserActivity() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem)->get_UserActivity(&value));
        return winrt::Windows::ApplicationModel::UserActivities::UserActivity{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivitySessionHistoryItem<D>::StartTime() const
    {
        winrt::Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem)->get_StartTime(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivitySessionHistoryItem<D>::EndTime() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem)->get_EndTime(&value));
        return winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityStatics<D>::TryParseFromJson(param::hstring const& json) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityStatics)->TryParseFromJson(*(void**)(&json), &result));
        return winrt::Windows::ApplicationModel::UserActivities::UserActivity{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityStatics<D>::TryParseFromJsonArray(param::hstring const& json) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityStatics)->TryParseFromJsonArray(*(void**)(&json), &result));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::UserActivities::UserActivity>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityStatics<D>::ToJsonArray(param::iterable<winrt::Windows::ApplicationModel::UserActivities::UserActivity> const& activities) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityStatics)->ToJsonArray(*(void**)(&activities), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::DisplayText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->get_DisplayText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::DisplayText(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->put_DisplayText(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::Description() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->get_Description(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::Description(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->put_Description(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::BackgroundColor() const
    {
        winrt::Windows::UI::Color value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->get_BackgroundColor(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::BackgroundColor(winrt::Windows::UI::Color const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->put_BackgroundColor(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::Attribution() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->get_Attribution(&value));
        return winrt::Windows::ApplicationModel::UserActivities::UserActivityAttribution{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::Attribution(winrt::Windows::ApplicationModel::UserActivities::UserActivityAttribution const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->put_Attribution(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::Content(winrt::Windows::UI::Shell::IAdaptiveCard const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->put_Content(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements<D>::Content() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements)->get_Content(&value));
        return winrt::Windows::UI::Shell::IAdaptiveCard{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements2<D>::AttributionDisplayText() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements2)->get_AttributionDisplayText(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_ApplicationModel_UserActivities_IUserActivityVisualElements2<D>::AttributionDisplayText(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements2)->put_AttributionDisplayText(*(void**)(&value)));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivity> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivity>
    {
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivityState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ActivityId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ActivityId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_VisualElements(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivityVisualElements>(this->shim().VisualElements());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Uri>(this->shim().ContentUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentType(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentType(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentType(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FallbackUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Uri>(this->shim().FallbackUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FallbackUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FallbackUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ActivationUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Uri>(this->shim().ActivationUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ActivationUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ActivationUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>(this->shim().ContentInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentInfo(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentInfo(*reinterpret_cast<winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SaveAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().SaveAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateSession(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivitySession>(this->shim().CreateSession());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivity2> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivity2>
    {
        int32_t __stdcall ToJson(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().ToJson());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivity3> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivity3>
    {
        int32_t __stdcall get_IsRoamable(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsRoamable());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsRoamable(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsRoamable(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution>
    {
        int32_t __stdcall get_IconUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Uri>(this->shim().IconUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IconUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IconUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AlternateText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AlternateText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AlternateText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AlternateText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AddImageQuery(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AddImageQuery());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AddImageQuery(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddImageQuery(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory>
    {
        int32_t __stdcall CreateWithUri(void* iconUri, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivityAttribution>(this->shim().CreateWithUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&iconUri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel>
    {
        int32_t __stdcall GetOrCreateUserActivityAsync(void* activityId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::ApplicationModel::UserActivities::UserActivity>>(this->shim().GetOrCreateUserActivityAsync(*reinterpret_cast<hstring const*>(&activityId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteActivityAsync(void* activityId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().DeleteActivityAsync(*reinterpret_cast<hstring const*>(&activityId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall DeleteAllActivitiesAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().DeleteAllActivitiesAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel2> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel2>
    {
        int32_t __stdcall GetRecentUserActivitiesAsync(int32_t maxUniqueActivities, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::UserActivities::UserActivitySessionHistoryItem>>>(this->shim().GetRecentUserActivitiesAsync(maxUniqueActivities));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSessionHistoryItemsForUserActivityAsync(void* activityId, int64_t startTime, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::UserActivities::UserActivitySessionHistoryItem>>>(this->shim().GetSessionHistoryItemsForUserActivityAsync(*reinterpret_cast<hstring const*>(&activityId), *reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&startTime)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics2> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics2>
    {
        int32_t __stdcall DisableAutoSessionCreation() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisableAutoSessionCreation();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryGetForWebAccount(void* account, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel>(this->shim().TryGetForWebAccount(*reinterpret_cast<winrt::Windows::Security::Credentials::WebAccount const*>(&account)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics3> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics3>
    {
        int32_t __stdcall GetForUser(void* user, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel>(this->shim().GetForUser(*reinterpret_cast<winrt::Windows::System::User const*>(&user)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo>
    {
        int32_t __stdcall ToJson(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().ToJson());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics>
    {
        int32_t __stdcall FromJson(void* value, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivityContentInfo>(this->shim().FromJson(*reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityFactory> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityFactory>
    {
        int32_t __stdcall CreateWithActivityId(void* activityId, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivity>(this->shim().CreateWithActivityId(*reinterpret_cast<hstring const*>(&activityId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequest> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequest>
    {
        int32_t __stdcall SetUserActivity(void* activity) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetUserActivity(*reinterpret_cast<winrt::Windows::ApplicationModel::UserActivities::UserActivity const*>(&activity));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestManager> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestManager>
    {
        int32_t __stdcall add_UserActivityRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().UserActivityRequested(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestManager, winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_UserActivityRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserActivityRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestManagerStatics> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestManagerStatics>
    {
        int32_t __stdcall GetForCurrentView(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestManager>(this->shim().GetForCurrentView());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs>
    {
        int32_t __stdcall get_Request(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequest>(this->shim().Request());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivitySession> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivitySession>
    {
        int32_t __stdcall get_ActivityId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ActivityId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem>
    {
        int32_t __stdcall get_UserActivity(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivity>(this->shim().UserActivity());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartTime(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::DateTime>(this->shim().StartTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EndTime(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>>(this->shim().EndTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityStatics> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityStatics>
    {
        int32_t __stdcall TryParseFromJson(void* json, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivity>(this->shim().TryParseFromJson(*reinterpret_cast<hstring const*>(&json)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryParseFromJsonArray(void* json, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::ApplicationModel::UserActivities::UserActivity>>(this->shim().TryParseFromJsonArray(*reinterpret_cast<hstring const*>(&json)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ToJsonArray(void* activities, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().ToJsonArray(*reinterpret_cast<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::ApplicationModel::UserActivities::UserActivity> const*>(&activities)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements>
    {
        int32_t __stdcall get_DisplayText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Description(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Description(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BackgroundColor(struct struct_Windows_UI_Color* value) noexcept final try
        {
            zero_abi<winrt::Windows::UI::Color>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Color>(this->shim().BackgroundColor());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_BackgroundColor(struct struct_Windows_UI_Color value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().BackgroundColor(*reinterpret_cast<winrt::Windows::UI::Color const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Attribution(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::ApplicationModel::UserActivities::UserActivityAttribution>(this->shim().Attribution());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Attribution(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Attribution(*reinterpret_cast<winrt::Windows::ApplicationModel::UserActivities::UserActivityAttribution const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Content(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Content(*reinterpret_cast<winrt::Windows::UI::Shell::IAdaptiveCard const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Content(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::UI::Shell::IAdaptiveCard>(this->shim().Content());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements2> : produce_base<D, winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements2>
    {
        int32_t __stdcall get_AttributionDisplayText(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AttributionDisplayText());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AttributionDisplayText(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AttributionDisplayText(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities
{
    inline UserActivity::UserActivity(param::hstring const& activityId) :
        UserActivity(impl::call_factory<UserActivity, IUserActivityFactory>([&](IUserActivityFactory const& f) { return f.CreateWithActivityId(activityId); }))
    {
    }
    inline auto UserActivity::TryParseFromJson(param::hstring const& json)
    {
        return impl::call_factory<UserActivity, IUserActivityStatics>([&](IUserActivityStatics const& f) { return f.TryParseFromJson(json); });
    }
    inline auto UserActivity::TryParseFromJsonArray(param::hstring const& json)
    {
        return impl::call_factory<UserActivity, IUserActivityStatics>([&](IUserActivityStatics const& f) { return f.TryParseFromJsonArray(json); });
    }
    inline auto UserActivity::ToJsonArray(param::iterable<winrt::Windows::ApplicationModel::UserActivities::UserActivity> const& activities)
    {
        return impl::call_factory<UserActivity, IUserActivityStatics>([&](IUserActivityStatics const& f) { return f.ToJsonArray(activities); });
    }
    inline UserActivityAttribution::UserActivityAttribution() :
        UserActivityAttribution(impl::call_factory_cast<UserActivityAttribution(*)(winrt::Windows::Foundation::IActivationFactory const&), UserActivityAttribution>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<UserActivityAttribution>(); }))
    {
    }
    inline UserActivityAttribution::UserActivityAttribution(winrt::Windows::Foundation::Uri const& iconUri) :
        UserActivityAttribution(impl::call_factory<UserActivityAttribution, IUserActivityAttributionFactory>([&](IUserActivityAttributionFactory const& f) { return f.CreateWithUri(iconUri); }))
    {
    }
    inline auto UserActivityChannel::GetDefault()
    {
        return impl::call_factory_cast<winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel(*)(IUserActivityChannelStatics const&), UserActivityChannel, IUserActivityChannelStatics>([](IUserActivityChannelStatics const& f) { return f.GetDefault(); });
    }
    inline auto UserActivityChannel::DisableAutoSessionCreation()
    {
        impl::call_factory_cast<void(*)(IUserActivityChannelStatics2 const&), UserActivityChannel, IUserActivityChannelStatics2>([](IUserActivityChannelStatics2 const& f) { return f.DisableAutoSessionCreation(); });
    }
    inline auto UserActivityChannel::TryGetForWebAccount(winrt::Windows::Security::Credentials::WebAccount const& account)
    {
        return impl::call_factory<UserActivityChannel, IUserActivityChannelStatics2>([&](IUserActivityChannelStatics2 const& f) { return f.TryGetForWebAccount(account); });
    }
    inline auto UserActivityChannel::GetForUser(winrt::Windows::System::User const& user)
    {
        return impl::call_factory<UserActivityChannel, IUserActivityChannelStatics3>([&](IUserActivityChannelStatics3 const& f) { return f.GetForUser(user); });
    }
    inline auto UserActivityContentInfo::FromJson(param::hstring const& value)
    {
        return impl::call_factory<UserActivityContentInfo, IUserActivityContentInfoStatics>([&](IUserActivityContentInfoStatics const& f) { return f.FromJson(value); });
    }
    inline auto UserActivityRequestManager::GetForCurrentView()
    {
        return impl::call_factory_cast<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestManager(*)(IUserActivityRequestManagerStatics const&), UserActivityRequestManager, IUserActivityRequestManagerStatics>([](IUserActivityRequestManagerStatics const& f) { return f.GetForCurrentView(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivity> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivity2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivity3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttributionFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannelStatics3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfoStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivitySession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivity> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivityAttribution> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivityChannel> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivityContentInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivityRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivitySession> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivitySessionHistoryItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::UserActivities::UserActivityVisualElements> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif