#ifndef DEVICEMOUSE_H
#define DEVICEMOUSE_H
#include "devicebaseclass.h"
using namespace std;

class DeviceMouse
{
public:
    DeviceMouse();
    void setPrimaryButton();
    short getPrimaryButton();
private:
    short primaryButton;
};

#endif // DEVICEMOUSE_H
