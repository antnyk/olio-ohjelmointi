#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"

using namespace std;

//Ali luokka
class ItalianChef: public Chef
{
public:
    ItalianChef(string, int, int);
    ~ItalianChef();

    string getName();
    void makePasta(int, int);
private:
    //variable
    int vesi;
    int jauho;
};

#endif // ITALIANCHEF_H
