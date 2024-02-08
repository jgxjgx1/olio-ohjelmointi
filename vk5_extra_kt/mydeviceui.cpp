#include "mydeviceui.h"

void MyDeviceUI::uiShowMenu()
{
    cout << "\nDEVICE MENU\n===========" << endl;
    cout << "1: Set Mouse Info\n2: Set Touch Pad Info\n3: Set Display Info\n4: Show Devices Information\n5: Finish" << endl;
    cout << "\nChoose: ";
}


void MyDeviceUI::uiSetMouseInformation()
{
    objectDeviceMouse->setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    objectDeviceTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation()
{
    objectDeviceDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation() // get info
{
    cout <<"\nMouse Device ID: " << objectDeviceMouse->getDeviceID() <<endl;
    cout <<"Mouse Primary Button: "<< objectDeviceMouse->getPrimaryButton() <<endl;
    cout <<"\n";

    cout <<"TouchPad Device ID: " << objectDeviceTouchPad->getDeviceID() <<endl;
    cout <<"TouchPad Sensitivity: "<< objectDeviceTouchPad->getTouchPadSensitivty() <<endl;
    cout <<"\n";

    cout <<"Display Device ID: " << objectDeviceDisplay->getDeviceID() <<endl;
    cout <<"Display Resolution: "<< objectDeviceDisplay->getDisplayResolution() <<endl;
}
