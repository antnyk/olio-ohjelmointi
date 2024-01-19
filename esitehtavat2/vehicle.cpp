#include "vehicle.h"

Vehicle::Vehicle()
{
    cout << "Luodaan Vehicle" << endl;
}

int Vehicle::getSpeed(){
    return speed;
}

void Vehicle::setSpeed(int s){
    speed = s;
}

string Vehicle::getName(){
    return name;
}

void Vehicle::setName(string n){
    name = n;
}
