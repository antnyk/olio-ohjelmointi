#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse = new DeviceMouse;
    objectDeviceTouchPad = new DeviceTouchPad;
    objectDeviceDisplay = new DeviceDisplay;
}

MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceMouse;
    delete objectDeviceTouchPad;
    delete objectDeviceDisplay;
}

void MyDeviceUI::uiShowMenu()
{
    int input = 0;
    do{
        cout << "DEVICE MENU\n" << endl;
        cout << "1:Set Mouse information"<<endl;
        cout << "2:Set Touch Pad information"<<endl;
        cout << "3:Set Display information"<<endl;
        cout << "4:Show Devices information"<<endl;
        cout << "5:Finish"<<endl;
        cin >> input;
        system("cls"); //pyyhkii näytön

        //muutetaan tietoja jos input ei ole 5
        if(input==1){
            uiSetMouseInformation();
        }
        else if(input==2){
            uiSetTouchPadInformation();
        }
        else if(input==3){
            uiSetDisplayInformation();
        }
        else if(input==4){
            uiShowDeviceInformation();
        }
    }while (input!=5);
}

void MyDeviceUI::uiSetMouseInformation()
{
    cout << "SET MOUSE INFORMATION\n" << endl;
    cout<<"Set mouse ID: ";
    objectDeviceMouse->setDeviceID();
    int arvo = 0;
    do{
        cout<<"Set main mouse button (1 or 2): ";
        objectDeviceMouse->setPrimaryButton();
        arvo = objectDeviceMouse->getPrimaryButton();
    }while(arvo < 1 || arvo > 2);
    Sleep(500);
    system("cls");
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout << "SET TOUCHPAD INFORMATION\n" << endl;
    cout<<"Set touchpad ID: ";
    objectDeviceTouchPad->setDeviceID();
    int arvo = 0;
    do{
        cout<<"Set touchpad sensitivity(1-5): ";
        objectDeviceTouchPad->setTouchPadSensitivity();
        arvo = objectDeviceTouchPad->getTouchPadSensitivity();
    }while(arvo < 1 || arvo > 5);
    Sleep(500);
    system("cls");
}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout << "SET DISPLAY INFORMATION\n" << endl;
    cout<<"Set display ID: ";
    objectDeviceDisplay->setDeviceID();
    int arvo = 0;
    do{
        cout<<"Set display resolution(1-10): ";
        objectDeviceDisplay->setDisplayResolution();
        arvo = objectDeviceDisplay->getDisplayResolution();
    }while(arvo < 1 || arvo > 10);
    Sleep(500);
    system("cls");
}

void MyDeviceUI::uiShowDeviceInformation()
{
    char input = 'a';
    do{
        system("cls");
        cout<<"ALL OF THE DEVICE INFORMATION\n"<<endl;
        cout<<"Mouse ID: "<<objectDeviceMouse->getDeviceID()<<endl;
        cout<<"Mouse: "<<objectDeviceMouse->getPrimaryButton()<<endl;
        cout<<"Touchpad ID: "<<objectDeviceTouchPad->getDeviceID()<<endl;
        cout<<"Touchpad: "<<objectDeviceTouchPad->getTouchPadSensitivity()<<endl;
        cout<<"Display ID: "<<objectDeviceDisplay->getDeviceID()<<endl;
        cout<<"Display: "<<objectDeviceDisplay->getDisplayResolution()<<endl;
        cout<<"\nQuit by typing Y and Enter: ";
        cin >> input;
    }while(input!='Y');
    system("cls");

}
