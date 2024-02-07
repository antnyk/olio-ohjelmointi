#include "katutaso.h"

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

Katutaso::~Katutaso()
{
    cout << "Katutaso tuhottu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Katutason asunto maaritetty: asukkaita = " << asukasMaara
         << " neliot = " << neliot << endl;
}

double Katutaso::laskeKulutus(double)
{

}
