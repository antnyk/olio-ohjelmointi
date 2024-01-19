#include "myclass.h"

myClass::myClass()
{
    cout << "this is " << endl;
}

void myClass::privateFunction()
{
    cout << "This is privateFunction printing text =" << endl;
}


myClass::myClass()
{
    cout<<"this is myClass contructor! Initializing private and protected member string variables"<<endl;
    privateTextToPrint = "This is private text to be printed";
    protectedTextToPrint = "This is protected text to be printed";
    publicTextToPrint = "empty";
    privateFunction();
    protectedFunction();
}
myClass::~myClass()
{
    cout<<"This is myClass destructor!"<<endl;
}
void myClass::privateFunction(string s)
{
    cout<<"This is privateFunction printing text ="<<privateTextToPrint<<endl;
}
void myClass::protectedFunction()
{
    cout<<"This is protectedFunction printing text ="<<protectedTextToPrint<<endl;
}
void myClass::publicFunction(string s)
{
    publicTextToPrint = s;
    cout<<"This is publicFunction printing text ="<<s<<endl;
}
