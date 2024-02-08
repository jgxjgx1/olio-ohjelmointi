#include "devicedisplay.h"

void DeviceDisplay::setDisplayResolution()
{
    cout << "SET DISPLAY INFORMATION\n=======================" << endl;
    cout << "Set Display Device ID: ";
    cin >> deviceID;

    cout << "Set Display Resolution: ";
    cin >> displayResolution;
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
