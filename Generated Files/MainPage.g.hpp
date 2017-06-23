﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "MainPage.xaml.h"

void ::GpioOneWire::MainPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::GpioOneWire::MainPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                ::Windows::UI::Xaml::Controls::Page^ element1 = safe_cast<::Windows::UI::Xaml::Controls::Page^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::Page^>(element1))->Loaded += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::GpioOneWire::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::Page_Loaded);
            }
            break;
        case 2:
            {
                this->titleText = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 3:
            {
                this->pullResistorText = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 4:
            {
                this->humidityText = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 5:
            {
                this->temperatureText = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(this->temperatureText))->SelectionChanged += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::GpioOneWire::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::temperatureText_SelectionChanged);
            }
            break;
        case 6:
            {
                this->reliabilityText = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 7:
            {
                this->statusText = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 8:
            {
                this->resetButton = safe_cast<::Windows::UI::Xaml::Controls::RadioButton^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::RadioButton^>(this->resetButton))->Checked += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::GpioOneWire::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::radioButton_Checked);
            }
            break;
        case 9:
            {
                this->runButton = safe_cast<::Windows::UI::Xaml::Controls::RadioButton^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::RadioButton^>(this->runButton))->Checked += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::GpioOneWire::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::radioButton_Checked);
            }
            break;
        case 10:
            {
                this->setButton = safe_cast<::Windows::UI::Xaml::Controls::RadioButton^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::RadioButton^>(this->setButton))->Checked += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::GpioOneWire::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::radioButton_Checked);
            }
            break;
        case 11:
            {
                this->interruptButton = safe_cast<::Windows::UI::Xaml::Controls::RadioButton^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::RadioButton^>(this->interruptButton))->Checked += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::GpioOneWire::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::radioButton_Checked);
            }
            break;
        case 12:
            {
                this->pollingButton = safe_cast<::Windows::UI::Xaml::Controls::RadioButton^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::RadioButton^>(this->pollingButton))->Checked += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::GpioOneWire::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::radioButton_Checked);
            }
            break;
        case 13:
            {
                this->pauseButton = safe_cast<::Windows::UI::Xaml::Controls::RadioButton^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::RadioButton^>(this->pauseButton))->Checked += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::GpioOneWire::MainPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&MainPage::radioButton_Checked);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::GpioOneWire::MainPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}


