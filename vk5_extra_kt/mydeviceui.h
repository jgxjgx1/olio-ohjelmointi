#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H

#include <iostream>
using namespace std;


#include "devicemouse.h"
#include "devicetouchpad.h"
#include "devicedisplay.h"

class MyDeviceUI
{
private:
    // objects as composition
    DeviceMouse *objectDeviceMouse;
    DeviceTouchPad *objectDeviceTouchPad;
    DeviceDisplay *objectDeviceDisplay;

public:
    MyDeviceUI(){
        objectDeviceMouse = new DeviceMouse;
        objectDeviceTouchPad = new DeviceTouchPad;
        objectDeviceDisplay = new DeviceDisplay;
    }
    ~MyDeviceUI(){
        delete objectDeviceMouse;
        delete objectDeviceTouchPad;
        delete objectDeviceDisplay;
    }


    void uiShowMenu();

    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();
};

#endif // MYDEVICEUI_H
