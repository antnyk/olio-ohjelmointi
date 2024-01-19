#ifndef MYCLASS_H
#define MYCLASS_H

using namespace std;

class myClass
{
public:
    string publicTextToPrint;
    myClass();
    ~myClass();
    void publicFunction(string);
private:
    string privateTextToPrint;
    void privateFunction();
protected:
    string protectedTextToPrint;
    void protectedFunction();
};
#endif // MYCLASS_H


