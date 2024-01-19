#include "postilaatikko.h"

Postilaatikko::Postilaatikko()
{
    cout << "Luodaan postilaatikko" << endl;
    maara = 0;

}

void Postilaatikko::lisaaPosti(int m)
{
    cout << "Listaan postia " << m << " kpl" << endl;
    maara += m;
    cout << "posti maara on: " << maara << " kpl" << endl;

}

void Postilaatikko::otaPosti(int m)
{
    cout << "otetaan postia " << m << " kpl" << endl;
    maara -= m;
    cout << "posti maara on: " << maara << " kpl" << endl;

}

void Postilaatikko::asetaNimi(string n)
{
    cout << "ollaan asetaNimi" << endl;
}
