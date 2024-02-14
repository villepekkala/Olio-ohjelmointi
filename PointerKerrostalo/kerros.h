#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <iostream>
using namespace std;


class Kerros
{
public:
    Kerros();
    virtual void maaritaAsunnot(void);
    double laskeKulutus(double);
    ~Kerros();

private:
    asunto* as1;
    asunto* as2;
    asunto* as3;
    asunto* as4;
};

#endif // KERROS_H
