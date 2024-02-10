#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H
#include "devicebaseclass.h"
using namespace std;

class DeviceTouchPad
{
public:
    DeviceTouchPad();
    void setTouchPadSensitivity();
    short getTouchPadSensitivity();
private:
    short touchPadSensitivity;
};

#endif // DEVICETOUCHPAD_H
