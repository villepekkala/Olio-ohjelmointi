#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class kerros
{
public:
    kerros();
    void maaritaAsunnot();
    void maarita(int asukasmaara, int nelio);
       double laskeKulutus(double hinta);
protected:
    int nelio;
    int asukasmaara;
private:
    asunto as1;
    asunto as2;
    asunto as3;
    asunto as4;
};

#endif // KERROS_H
