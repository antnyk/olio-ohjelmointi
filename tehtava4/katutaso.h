#ifndef KATUTASO_H
#define KATUTASO_H
#include <iostream>
#include "asunto.h"
#include "kerros.h"

using namespace std;

class Katutaso : public Kerros
{
public:
    Katutaso();
    ~Katutaso();
    double laskeKulutus(double) override;
    void maaritaAsunnot() override;
private:
    // Composition
    Asunto as1;
    Asunto as2;
};

#endif // KATUTASO_H
