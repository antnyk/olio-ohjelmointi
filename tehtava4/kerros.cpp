#include "kerros.h"

Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
}

Kerros::~Kerros()
{
    cout << "Kerros tuhottu" << endl;
}

void Kerros::maaritaAsunnot()
{
    cout << "Kerros asunto maaritetty: asukkaita = " << asukasMaara
         << " neliot = " << neliot << endl;
}

double Kerros::laskeKulutus(double)
{

}
