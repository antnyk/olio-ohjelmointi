#include "asunto.h"

Asunto::Asunto()
{
    cout << "Asunto luotu" << endl;
}

Asunto::~Asunto()
{
    cout << "Asunto tuhottu" << endl;
}

void Asunto::maarita(int a, int b)
{
    asukasMaara = a;
    neliot = b;
}

double Asunto::laskeKulutus(double hinta)
{

}
