#include "dht.h"

DHT::DHT()
{
    cout << "DHT Aliolio konstruktio" << endl;
}

DHT::DHT(int a) : LCD(a)
{
    cout << "DHT Aliolio konstruktio " << a << endl;
}


DHT::~DHT()
{
    cout << "DHT Aliolio dekonstruktio" << endl;
}
