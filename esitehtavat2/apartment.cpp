#include "apartment.h"

Apartment::Apartment(int n, int a)
{
    numOfTenants = n;
    area = a;
    heatingCost();
}

int Apartment::heatingCost()
{
    int cost = numOfTenants * area;
    return cost;
}
