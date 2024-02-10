#include <iostream>
#include "mydeviceui.h"//

using namespace std;

int main()
{
    //harjoittelu krääsää
    /*
    DeviceBaseClass testi;
    testi.setDeviceID();
    cout << "given id: " << testi.getDeviceID() << endl;
    */
    //--------------------------------------------//
    MyDeviceUI testaus;
    testaus.uiShowMenu();
    /*
    testaus.uiSetDisplayInformation();
    testaus.uiShowDeviceInformation();
    */
    return 0;
}
