#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>

using namespace std;

class Asunto
{
public:
    Asunto();
    ~Asunto();
    void maarita(int,int);
    virtual double laskeKulutus(double);

    //variable
    int asukasMaara;
    int neliot;

};

#endif // ASUNTO_H
