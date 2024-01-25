#include "italianchef.h"

ItalianChef::ItalianChef(string nimi, int vedenMaara, int jauhonMaara) : Chef(nimi)
{
    cout << "Chef " << name << " KONSTRUKTORI" << endl;
    cout << "Chef " << name << " VEDEN MAARA: " << vedenMaara << endl;
    cout << "Chef " << name << " JAUHON MAARA: " << jauhonMaara << endl;
    makePasta(vedenMaara, jauhonMaara);
}

ItalianChef::~ItalianChef()
{

}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta(int a, int b)
{
    if ((a+b) > 100){
        cout << name << " makes pasta with special recipe" << endl;
    }
    else
        cout << name << " can't make special recipe" << endl;
}

