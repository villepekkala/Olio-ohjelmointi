#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>
using namespace std;
#include "katutaso.h"
#include "kerros.h"

class Kerrostalo
{
public:
    Kerrostalo();
    double laskeKulutus(double);
    ~Kerrostalo();

private:
    Katutaso* eka;
    Kerros* toka;
    Kerros* kolmas;
};

#endif // KERROSTALO_H
