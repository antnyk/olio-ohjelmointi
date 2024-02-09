#include <iostream>
#include <memory>
using namespace std;
#include "asunto.h"
#include "kerrostalo.h"

int main()
{
    /*
    asunto olio;
    olio.maarita(2,100);
    cout<<"asunnon kulutus, kun hinta=1 on "<<olio.laskeKulutus(1)<<endl;
    */
    /*
    Katutaso olio;
    olio.maaritaAsunnot();
    cout<<"Katutason ja perityn kerroksen kulutus, kun hinta = 1 on "<<olio.laskeKulutus(1)<<endl;
    */
    //Kerrostalo talo;
    //cout<<"Kerrostalon kulutus, = "<<talo.laskeKulutus(1)<<endl;




    //pointer
    Kerrostalo* testi = new Kerrostalo;
    cout<<"Kerrostalon kulutus = " << testi->laskeKulutus(1)<<endl;
    delete testi;


    cout << "------------------------" << endl;

    //smart pointer
    unique_ptr<Kerrostalo> testitalo(new Kerrostalo());
    cout<<"Kerrostalon kulutus = "<<testitalo->laskeKulutus(1)<<endl;



    return 0;
}
