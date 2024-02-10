#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include <devicedisplay.h>
#include <devicemouse.h>
#include <devicetouchpad.h>
using namespace std;


class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();
    //funktiot
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchPadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();

private:
    // tässä tapahtuu composition. Kun MyDeviceUi tuhotaan niin
    // tuhoutuu myös nämä jäsenet.
    DeviceMouse* objectDeviceMouse;
    DeviceTouchPad* objectDeviceTouchPad;
    DeviceDisplay* objectDeviceDisplay;
};

#endif // MYDEVICEUI_H
