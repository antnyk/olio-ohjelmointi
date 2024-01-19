#include <iostream>
#include <vehicle.h>

using namespace std;

int main()
{
    //th3
    Vehicle v;
    v.setName("Ford");
    v.setSpeed(85);
    cout<<v.getName()+" , ";
    cout<<v.getSpeed();
    cout<<" km/h"<<endl;



    return 0;
}
