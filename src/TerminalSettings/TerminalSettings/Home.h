﻿#pragma once

#include "Home.g.h"
#include "SettingsControlViewModel.h"

namespace winrt::SettingsControl::implementation
{
    struct Home : HomeT<Home>
    {
        Home();

        SettingsControl::SettingsControlViewModel HomeViewModel();

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
        void OnHomeGridItemClick(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);

        private:
        SettingsControl::SettingsControlViewModel m_homeViewModel{ nullptr };
    };
}

namespace winrt::SettingsControl::factory_implementation
{
    struct Home : HomeT<Home, implementation::Home>
    {
    };
}
