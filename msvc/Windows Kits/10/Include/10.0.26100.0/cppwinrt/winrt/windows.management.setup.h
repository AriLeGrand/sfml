// C++/WinRT v2.0.230511.6

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Management_Setup_H
#define WINRT_Windows_Management_Setup_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.230511.6"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.230511.6"
#include "winrt/Windows.Management.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Management.Setup.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Management_Setup_IAgentProvisioningProgressReport<D>::State() const
    {
        winrt::Windows::Management::Setup::DeploymentAgentProgressState value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IAgentProvisioningProgressReport)->get_State(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Setup_IAgentProvisioningProgressReport<D>::State(winrt::Windows::Management::Setup::DeploymentAgentProgressState const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IAgentProvisioningProgressReport)->put_State(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IAgentProvisioningProgressReport<D>::ProgressPercentage() const
    {
        double value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IAgentProvisioningProgressReport)->get_ProgressPercentage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Setup_IAgentProvisioningProgressReport<D>::ProgressPercentage(double value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IAgentProvisioningProgressReport)->put_ProgressPercentage(value));
    }
    template <typename D> auto consume_Windows_Management_Setup_IAgentProvisioningProgressReport<D>::EstimatedTimeRemaining() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IAgentProvisioningProgressReport)->get_EstimatedTimeRemaining(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Setup_IAgentProvisioningProgressReport<D>::EstimatedTimeRemaining(winrt::Windows::Foundation::TimeSpan const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IAgentProvisioningProgressReport)->put_EstimatedTimeRemaining(impl::bind_in(value)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IAgentProvisioningProgressReport<D>::DisplayProgress() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IAgentProvisioningProgressReport)->get_DisplayProgress(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IAgentProvisioningProgressReport<D>::DisplayProgress(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IAgentProvisioningProgressReport)->put_DisplayProgress(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IAgentProvisioningProgressReport<D>::DisplayProgressSecondary() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IAgentProvisioningProgressReport)->get_DisplayProgressSecondary(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IAgentProvisioningProgressReport<D>::DisplayProgressSecondary(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IAgentProvisioningProgressReport)->put_DisplayProgressSecondary(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IAgentProvisioningProgressReport<D>::Batches() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IAgentProvisioningProgressReport)->get_Batches(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Setup::DeploymentWorkloadBatch>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IAgentProvisioningProgressReport<D>::CurrentBatchIndex() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IAgentProvisioningProgressReport)->get_CurrentBatchIndex(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Setup_IAgentProvisioningProgressReport<D>::CurrentBatchIndex(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IAgentProvisioningProgressReport)->put_CurrentBatchIndex(value));
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentSessionConnectionChangedEventArgs<D>::SessionId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentSessionConnectionChangedEventArgs)->get_SessionId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentSessionConnectionChangedEventArgs<D>::Change() const
    {
        winrt::Windows::Management::Setup::DeploymentSessionConnectionChange value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentSessionConnectionChangedEventArgs)->get_Change(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentSessionHeartbeatRequestedEventArgs<D>::Handled() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentSessionHeartbeatRequestedEventArgs)->get_Handled(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentSessionHeartbeatRequestedEventArgs<D>::Handled(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentSessionHeartbeatRequestedEventArgs)->put_Handled(value));
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentSessionStateChangedEventArgs<D>::SessionId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentSessionStateChangedEventArgs)->get_SessionId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentSessionStateChangedEventArgs<D>::Change() const
    {
        winrt::Windows::Management::Setup::DeploymentSessionStateChange value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentSessionStateChangedEventArgs)->get_Change(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::DisplayFriendlyName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->get_DisplayFriendlyName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::DisplayFriendlyName(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->put_DisplayFriendlyName(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::StartTime() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->get_StartTime(&value));
        return winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::StartTime(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->put_StartTime(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::EndTime() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->get_EndTime(&value));
        return winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::EndTime(winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->put_EndTime(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::ErrorCode() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->get_ErrorCode(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::ErrorCode(uint32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->put_ErrorCode(value));
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::ErrorMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->get_ErrorMessage(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::ErrorMessage(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->put_ErrorMessage(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::PossibleCause() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->get_PossibleCause(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::PossibleCause(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->put_PossibleCause(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::PossibleResolution() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->get_PossibleResolution(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::PossibleResolution(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->put_PossibleResolution(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::State() const
    {
        winrt::Windows::Management::Setup::DeploymentWorkloadState value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->get_State(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::State(winrt::Windows::Management::Setup::DeploymentWorkloadState const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->put_State(static_cast<int32_t>(value)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::StateDetails() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->get_StateDetails(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkload<D>::StateDetails(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkload)->put_StateDetails(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkloadBatch<D>::Id() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkloadBatch)->get_Id(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkloadBatch<D>::DisplayCategoryTitle() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkloadBatch)->get_DisplayCategoryTitle(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkloadBatch<D>::DisplayCategoryTitle(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkloadBatch)->put_DisplayCategoryTitle(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkloadBatch<D>::BatchWorkloads() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkloadBatch)->get_BatchWorkloads(&value));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Setup::DeploymentWorkload>{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkloadBatchFactory<D>::CreateInstance(uint32_t id) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkloadBatchFactory)->CreateInstance(id, &value));
        return winrt::Windows::Management::Setup::DeploymentWorkloadBatch{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDeploymentWorkloadFactory<D>::CreateInstance(param::hstring const& id) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDeploymentWorkloadFactory)->CreateInstance(*(void**)(&id), &value));
        return winrt::Windows::Management::Setup::DeploymentWorkload{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IDevicePreparationExecutionContext<D>::Context() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IDevicePreparationExecutionContext)->get_Context(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IMachineProvisioningProgressReporter<D>::SessionId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IMachineProvisioningProgressReporter)->get_SessionId(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Setup_IMachineProvisioningProgressReporter<D>::SessionConnection() const
    {
        winrt::Windows::Management::Setup::DeploymentSessionConnectionChange value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IMachineProvisioningProgressReporter)->get_SessionConnection(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Setup_IMachineProvisioningProgressReporter<D>::SessionState() const
    {
        winrt::Windows::Management::Setup::DeploymentSessionStateChange value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IMachineProvisioningProgressReporter)->get_SessionState(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Setup_IMachineProvisioningProgressReporter<D>::SessionStateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Management::Setup::MachineProvisioningProgressReporter, winrt::Windows::Management::Setup::DeploymentSessionStateChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IMachineProvisioningProgressReporter)->add_SessionStateChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Management_Setup_IMachineProvisioningProgressReporter<D>::SessionStateChanged_revoker consume_Windows_Management_Setup_IMachineProvisioningProgressReporter<D>::SessionStateChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Management::Setup::MachineProvisioningProgressReporter, winrt::Windows::Management::Setup::DeploymentSessionStateChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, SessionStateChanged_revoker>(this, SessionStateChanged(handler));
    }
    template <typename D> auto consume_Windows_Management_Setup_IMachineProvisioningProgressReporter<D>::SessionStateChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IMachineProvisioningProgressReporter)->remove_SessionStateChanged(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Management_Setup_IMachineProvisioningProgressReporter<D>::SessionConnectionChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Management::Setup::MachineProvisioningProgressReporter, winrt::Windows::Management::Setup::DeploymentSessionConnectionChangedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IMachineProvisioningProgressReporter)->add_SessionConnectionChanged(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Management_Setup_IMachineProvisioningProgressReporter<D>::SessionConnectionChanged_revoker consume_Windows_Management_Setup_IMachineProvisioningProgressReporter<D>::SessionConnectionChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Management::Setup::MachineProvisioningProgressReporter, winrt::Windows::Management::Setup::DeploymentSessionConnectionChangedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, SessionConnectionChanged_revoker>(this, SessionConnectionChanged(handler));
    }
    template <typename D> auto consume_Windows_Management_Setup_IMachineProvisioningProgressReporter<D>::SessionConnectionChanged(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IMachineProvisioningProgressReporter)->remove_SessionConnectionChanged(impl::bind_in(token));
    }
    template <typename D> auto consume_Windows_Management_Setup_IMachineProvisioningProgressReporter<D>::ReportProgress(winrt::Windows::Management::Setup::AgentProvisioningProgressReport const& updateReport) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IMachineProvisioningProgressReporter)->ReportProgress(*(void**)(&updateReport)));
    }
    template <typename D> auto consume_Windows_Management_Setup_IMachineProvisioningProgressReporter<D>::GetDevicePreparationExecutionContextAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IMachineProvisioningProgressReporter)->GetDevicePreparationExecutionContextAsync(&operation));
        return winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Setup::DevicePreparationExecutionContext>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Setup_IMachineProvisioningProgressReporterStatics<D>::GetForLaunchUri(winrt::Windows::Foundation::Uri const& launchUri, winrt::Windows::Management::Setup::DeploymentSessionHeartbeatRequested const& heartbeatHandler) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Setup::IMachineProvisioningProgressReporterStatics)->GetForLaunchUri(*(void**)(&launchUri), *(void**)(&heartbeatHandler), &result));
        return winrt::Windows::Management::Setup::MachineProvisioningProgressReporter{ result, take_ownership_from_abi };
    }
    template <typename H> struct delegate<winrt::Windows::Management::Setup::DeploymentSessionHeartbeatRequested, H> final : implements_delegate<winrt::Windows::Management::Setup::DeploymentSessionHeartbeatRequested, H>
    {
        delegate(H&& handler) : implements_delegate<winrt::Windows::Management::Setup::DeploymentSessionHeartbeatRequested, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* eventArgs) noexcept final try
        {
            (*this)(*reinterpret_cast<winrt::Windows::Management::Setup::DeploymentSessionHeartbeatRequestedEventArgs const*>(&eventArgs));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Setup::IAgentProvisioningProgressReport> : produce_base<D, winrt::Windows::Management::Setup::IAgentProvisioningProgressReport>
    {
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Setup::DeploymentAgentProgressState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_State(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().State(*reinterpret_cast<winrt::Windows::Management::Setup::DeploymentAgentProgressState const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProgressPercentage(double* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<double>(this->shim().ProgressPercentage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProgressPercentage(double value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProgressPercentage(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_EstimatedTimeRemaining(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().EstimatedTimeRemaining());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_EstimatedTimeRemaining(int64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EstimatedTimeRemaining(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayProgress(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayProgress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayProgress(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayProgress(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayProgressSecondary(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayProgressSecondary());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayProgressSecondary(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayProgressSecondary(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Batches(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Setup::DeploymentWorkloadBatch>>(this->shim().Batches());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurrentBatchIndex(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().CurrentBatchIndex());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CurrentBatchIndex(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrentBatchIndex(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Setup::IDeploymentSessionConnectionChangedEventArgs> : produce_base<D, winrt::Windows::Management::Setup::IDeploymentSessionConnectionChangedEventArgs>
    {
        int32_t __stdcall get_SessionId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SessionId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Change(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Setup::DeploymentSessionConnectionChange>(this->shim().Change());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Setup::IDeploymentSessionHeartbeatRequestedEventArgs> : produce_base<D, winrt::Windows::Management::Setup::IDeploymentSessionHeartbeatRequestedEventArgs>
    {
        int32_t __stdcall get_Handled(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Handled());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Handled(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Handled(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Setup::IDeploymentSessionStateChangedEventArgs> : produce_base<D, winrt::Windows::Management::Setup::IDeploymentSessionStateChangedEventArgs>
    {
        int32_t __stdcall get_SessionId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SessionId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Change(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Setup::DeploymentSessionStateChange>(this->shim().Change());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Setup::IDeploymentWorkload> : produce_base<D, winrt::Windows::Management::Setup::IDeploymentWorkload>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayFriendlyName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayFriendlyName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayFriendlyName(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayFriendlyName(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StartTime(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime>>(this->shim().StartTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StartTime(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StartTime(*reinterpret_cast<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const*>(&value));
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
        int32_t __stdcall put_EndTime(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().EndTime(*reinterpret_cast<winrt::Windows::Foundation::IReference<winrt::Windows::Foundation::DateTime> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorCode(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ErrorCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ErrorCode(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ErrorCode(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ErrorMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ErrorMessage(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ErrorMessage(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PossibleCause(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PossibleCause());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PossibleCause(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PossibleCause(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PossibleResolution(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PossibleResolution());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PossibleResolution(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PossibleResolution(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Setup::DeploymentWorkloadState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_State(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().State(*reinterpret_cast<winrt::Windows::Management::Setup::DeploymentWorkloadState const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StateDetails(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().StateDetails());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_StateDetails(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().StateDetails(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Setup::IDeploymentWorkloadBatch> : produce_base<D, winrt::Windows::Management::Setup::IDeploymentWorkloadBatch>
    {
        int32_t __stdcall get_Id(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayCategoryTitle(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayCategoryTitle());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayCategoryTitle(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayCategoryTitle(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_BatchWorkloads(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Management::Setup::DeploymentWorkload>>(this->shim().BatchWorkloads());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Setup::IDeploymentWorkloadBatchFactory> : produce_base<D, winrt::Windows::Management::Setup::IDeploymentWorkloadBatchFactory>
    {
        int32_t __stdcall CreateInstance(uint32_t id, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Setup::DeploymentWorkloadBatch>(this->shim().CreateInstance(id));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Setup::IDeploymentWorkloadFactory> : produce_base<D, winrt::Windows::Management::Setup::IDeploymentWorkloadFactory>
    {
        int32_t __stdcall CreateInstance(void* id, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Setup::DeploymentWorkload>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&id)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Setup::IDevicePreparationExecutionContext> : produce_base<D, winrt::Windows::Management::Setup::IDevicePreparationExecutionContext>
    {
        int32_t __stdcall get_Context(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Context());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Setup::IMachineProvisioningProgressReporter> : produce_base<D, winrt::Windows::Management::Setup::IMachineProvisioningProgressReporter>
    {
        int32_t __stdcall get_SessionId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().SessionId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SessionConnection(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Setup::DeploymentSessionConnectionChange>(this->shim().SessionConnection());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SessionState(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Setup::DeploymentSessionStateChange>(this->shim().SessionState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_SessionStateChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SessionStateChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Management::Setup::MachineProvisioningProgressReporter, winrt::Windows::Management::Setup::DeploymentSessionStateChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SessionStateChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SessionStateChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_SessionConnectionChanged(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().SessionConnectionChanged(*reinterpret_cast<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Management::Setup::MachineProvisioningProgressReporter, winrt::Windows::Management::Setup::DeploymentSessionConnectionChangedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_SessionConnectionChanged(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SessionConnectionChanged(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall ReportProgress(void* updateReport) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportProgress(*reinterpret_cast<winrt::Windows::Management::Setup::AgentProvisioningProgressReport const*>(&updateReport));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDevicePreparationExecutionContextAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Management::Setup::DevicePreparationExecutionContext>>(this->shim().GetDevicePreparationExecutionContextAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Setup::IMachineProvisioningProgressReporterStatics> : produce_base<D, winrt::Windows::Management::Setup::IMachineProvisioningProgressReporterStatics>
    {
        int32_t __stdcall GetForLaunchUri(void* launchUri, void* heartbeatHandler, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Setup::MachineProvisioningProgressReporter>(this->shim().GetForLaunchUri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&launchUri), *reinterpret_cast<winrt::Windows::Management::Setup::DeploymentSessionHeartbeatRequested const*>(&heartbeatHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Management::Setup
{
    inline AgentProvisioningProgressReport::AgentProvisioningProgressReport() :
        AgentProvisioningProgressReport(impl::call_factory_cast<AgentProvisioningProgressReport(*)(winrt::Windows::Foundation::IActivationFactory const&), AgentProvisioningProgressReport>([](winrt::Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<AgentProvisioningProgressReport>(); }))
    {
    }
    inline DeploymentWorkload::DeploymentWorkload(param::hstring const& id) :
        DeploymentWorkload(impl::call_factory<DeploymentWorkload, IDeploymentWorkloadFactory>([&](IDeploymentWorkloadFactory const& f) { return f.CreateInstance(id); }))
    {
    }
    inline DeploymentWorkloadBatch::DeploymentWorkloadBatch(uint32_t id) :
        DeploymentWorkloadBatch(impl::call_factory<DeploymentWorkloadBatch, IDeploymentWorkloadBatchFactory>([&](IDeploymentWorkloadBatchFactory const& f) { return f.CreateInstance(id); }))
    {
    }
    inline auto MachineProvisioningProgressReporter::GetForLaunchUri(winrt::Windows::Foundation::Uri const& launchUri, winrt::Windows::Management::Setup::DeploymentSessionHeartbeatRequested const& heartbeatHandler)
    {
        return impl::call_factory<MachineProvisioningProgressReporter, IMachineProvisioningProgressReporterStatics>([&](IMachineProvisioningProgressReporterStatics const& f) { return f.GetForLaunchUri(launchUri, heartbeatHandler); });
    }
    template <typename L> DeploymentSessionHeartbeatRequested::DeploymentSessionHeartbeatRequested(L handler) :
        DeploymentSessionHeartbeatRequested(impl::make_delegate<DeploymentSessionHeartbeatRequested>(std::forward<L>(handler)))
    {
    }
    template <typename F> DeploymentSessionHeartbeatRequested::DeploymentSessionHeartbeatRequested(F* handler) :
        DeploymentSessionHeartbeatRequested([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> DeploymentSessionHeartbeatRequested::DeploymentSessionHeartbeatRequested(O* object, M method) :
        DeploymentSessionHeartbeatRequested([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> DeploymentSessionHeartbeatRequested::DeploymentSessionHeartbeatRequested(com_ptr<O>&& object, M method) :
        DeploymentSessionHeartbeatRequested([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> DeploymentSessionHeartbeatRequested::DeploymentSessionHeartbeatRequested(weak_ref<O>&& object, M method) :
        DeploymentSessionHeartbeatRequested([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto DeploymentSessionHeartbeatRequested::operator()(winrt::Windows::Management::Setup::DeploymentSessionHeartbeatRequestedEventArgs const& eventArgs) const
    {
        check_hresult((*(impl::abi_t<DeploymentSessionHeartbeatRequested>**)this)->Invoke(*(void**)(&eventArgs)));
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Management::Setup::IAgentProvisioningProgressReport> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::IDeploymentSessionConnectionChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::IDeploymentSessionHeartbeatRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::IDeploymentSessionStateChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::IDeploymentWorkload> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::IDeploymentWorkloadBatch> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::IDeploymentWorkloadBatchFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::IDeploymentWorkloadFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::IDevicePreparationExecutionContext> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::IMachineProvisioningProgressReporter> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::IMachineProvisioningProgressReporterStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::AgentProvisioningProgressReport> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::DeploymentSessionConnectionChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::DeploymentSessionHeartbeatRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::DeploymentSessionStateChangedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::DeploymentWorkload> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::DeploymentWorkloadBatch> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::DevicePreparationExecutionContext> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Setup::MachineProvisioningProgressReporter> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif