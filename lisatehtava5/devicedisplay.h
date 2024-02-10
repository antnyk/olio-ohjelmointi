#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H
#include "devicebaseclass.h"
using namespace std;

class DeviceDisplay
{
public:
    DeviceDisplay();
    void setDisplayResolution();
    short getDisplayResolution();
private:
    short displayResolution;
};

#endif // DEVICEDISPLAY_H
