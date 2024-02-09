#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    cout << "**********************" << endl;
    Chef perusKokki1("Mikko Mallikas");
    ItalianChef italianKokki1("Anthony Soprano", 10,30);
    perusKokki1.makeSalad();
    perusKokki1.makeSoup();
    cout << "**********************" << endl;
    Chef perusKokki2("Urho Kekkonen");
    ItalianChef italianKokki2("Silvio Dante", 50, 60);
    cout << "**********DESKTURKIO************" << endl;

    return 0;
}
