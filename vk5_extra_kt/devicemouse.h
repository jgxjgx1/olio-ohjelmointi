#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H

#include <iostream>
using namespace std;

#include "devicebaseclass.h"

class DeviceMouse : public DeviceBaseClass
{
private:
    short primaryButton = 0;

public:
    DeviceMouse(){
    }

    void setPrimaryButton();
    short getPrimaryButton();
};

#endif // DEVICEMOUSE_H
