#ifndef APARTMENT_H
#define APARTMENT_H


class Apartment
{
public:
    Apartment(int n, int a);
    int heatingCost();
private:
    int numOfTenants;
    int area;
};

#endif // APARTMENT_H
