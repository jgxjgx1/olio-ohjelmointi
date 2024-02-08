#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H

#include "devicebaseclass.h"

class DeviceDisplay : public DeviceBaseClass
{
private:
    short displayResolution = 0;

public:
    DeviceDisplay(){
    }

    void setDisplayResolution();
    short getDisplayResolution();
};

#endif // DEVICEDISPLAY_H
