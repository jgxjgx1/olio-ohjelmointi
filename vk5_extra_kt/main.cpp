#include <iostream>
using namespace std;

#include "mydeviceui.h"


int main()
{
    short menu_sel = 0;

    MyDeviceUI * ptrDeviceUI;
    ptrDeviceUI = new MyDeviceUI;

    do {
        ptrDeviceUI->uiShowMenu();
        cin >> menu_sel;

        switch(menu_sel) {
        case 1:
            ptrDeviceUI->uiSetMouseInformation(); // mouse info
            break;
        case 2:
            ptrDeviceUI->uiSetTouchPadInformation(); // touch pad info
            break;
        case 3:
            ptrDeviceUI->uiSetDisplayInformation(); // display info
            break;
        case 4:
            ptrDeviceUI->uiShowDeviceInformation(); // show devices info
            break;

        case 5:
            cout << "\nEnding... ";
            break; // finish
        default:
            cout << "\n Erroneous selection!" << endl;
        }

    } while(menu_sel != 5);


    delete ptrDeviceUI;
    ptrDeviceUI = nullptr;
    return 0;
}
