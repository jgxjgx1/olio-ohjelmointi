#include "devicetouchpad.h"

void DeviceTouchPad::setTouchPadSensitivity()
{
    cout << "SET TOUCHPAD INFORMATION\n========================" << endl;
    cout << "Set TouchPad Device ID: ";
    cin >> deviceID;

    cout << "Set TouchPad Sensitivity: ";
    cin >> touchPadSensitivity;
}

short DeviceTouchPad::getTouchPadSensitivty()
{
    return touchPadSensitivity;
}
