// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::System::Power {

struct IBackgroundEnergyManagerStatics;
struct IForegroundEnergyManagerStatics;
struct IPowerManagerStatics;

}

namespace Windows::System::Power {

struct IBackgroundEnergyManagerStatics;
struct IForegroundEnergyManagerStatics;
struct IPowerManagerStatics;
struct BackgroundEnergyManager;
struct ForegroundEnergyManager;
struct PowerManager;

}

namespace Windows::System::Power {

enum class BatteryStatus
{
    NotPresent = 0,
    Discharging = 1,
    Idle = 2,
    Charging = 3,
};

enum class EnergySaverStatus
{
    Disabled = 0,
    Off = 1,
    On = 2,
};

enum class PowerSupplyStatus
{
    NotPresent = 0,
    Inadequate = 1,
    Adequate = 2,
};

}

}
