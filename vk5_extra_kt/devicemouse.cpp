#include "devicemouse.h"


void DeviceMouse::setPrimaryButton()
{
    cout << "SET MOUSE INFORMATION\n=====================" << endl;
    cout << "Set Mouse Device ID: ";
    cin >> deviceID;

    cout << "Set Mouse Primary Button: ";
    cin >> primaryButton;
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
