#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H

#include "devicebaseclass.h"

class DeviceTouchPad : public DeviceBaseClass
{
private:
    short touchPadSensitivity = 0;

public:
    DeviceTouchPad(){
    }

    void setTouchPadSensitivity();
    short getTouchPadSensitivty();
};

#endif // DEVICETOUCHPAD_H
