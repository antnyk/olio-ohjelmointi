#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse = new DeviceMouse;
    objectDeviceTouchPad = new DeviceTouchPad;
    objectDeviceDisplay = new DeviceDisplay;
}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    delete objectDeviceTouchPad;
    delete objectDeviceDisplay;
}

void MyDeviceUI::uiShowMenu()
{

}

void MyDeviceUI::uiSetMouseInformation()
{

}

void MyDeviceUI::uiSetTouchPadInformation()
{

}

void MyDeviceUI::uiSetDisplayInformation()
{

}

void MyDeviceUI::uiShowDeviceInformation()
{

}
