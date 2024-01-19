#include <iostream>
#include <vehicle.h>
#include <apartment.h>

using namespace std;

int main()
{
    //th4
    Apartment ap(2,60);
    int apCost = ap.heatingCost();
    cout << "Heating cost = "<< apCost << endl;


    //////
    cout << "*********************" << endl;

    //th3
    Vehicle v;
    v.setName("Ford");
    v.setSpeed(85);
    cout<<v.getName()+" , ";
    cout<<v.getSpeed();
    cout<<" km/h"<<endl;



    return 0;
}
