#ifndef DHT_H
#define DHT_H
#include <iostream>
#include "lcd.h"

using namespace std;

//aliolio
class DHT : public LCD
{
public:
    DHT(int a);
    DHT();
    ~DHT();
};

#endif // DHT_H
