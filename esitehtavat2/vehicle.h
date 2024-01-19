#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>

using namespace std;

class Vehicle
{
public:
    Vehicle();
    //setter speed
    void setSpeed(int s);
    //setter name
    void setName(string n);


    //getter speed
    int getSpeed();
    //getter name
    string getName();


private:
    int speed;
    string name;

};

#endif // VEHICLE_H
