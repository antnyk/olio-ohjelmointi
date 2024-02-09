#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;

    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;

    // SMART POINTER
    /*
    unique_ptr<Katutaso> eka(new Katutaso());
    unique_ptr<Katutaso> toka(new Katutaso());
    unique_ptr<Katutaso> kolmas(new Katutaso());
    */

    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete kolmas;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double katutasonKulutus = eka->laskeKulutus(hinta);
    double kerrostenKulutus = toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);
    return katutasonKulutus+kerrostenKulutus;
}
