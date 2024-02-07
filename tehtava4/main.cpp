#include <iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"

using namespace std;

int main()
{
    //miksi tehtävän annossa tulostetaan 6 kertaa 'asunto luotu', mutta tässä 7 kertaa
    cout << "************************" << endl;


    Kerrostalo* a = new Kerrostalo();
    a->maarita(2,100);
    a->maaritaAsunnot();
    a->maaritaAsunnot();
    /*
    Katutaso* b = new Katutaso();
    b->maarita(2,100);
    b->maaritaAsunnot();
    */

    /*
    Kerrostalo kamppa2;
    cout << "********************" << endl;
    kamppa2.maarita(2,100);
    kamppa2.maaritaAsunnot();
    kamppa2.maaritaAsunnot();
    */

    return 0;
}
