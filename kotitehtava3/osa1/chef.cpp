#include "chef.h"

Chef::Chef(string nimi)
{
    name = nimi;
    cout << "Chef " << name << " KONSTRUKTORI" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << name << " DEKONSTRUKTORI" << endl;
}

void Chef::makeSalad()
{
    cout << name << " MAKES SALAD" << endl;
}

void Chef::makeSoup()
{
    cout << name << " MAKES SOUP" << endl;
}
