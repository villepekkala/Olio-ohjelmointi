#ifndef KATUKERROS_H
#define KATUKERROS_H
#include "kerros.h"
#include "asunto.h"
class katukerros
{
public:
    katukerros();
    void maaritaAsunnot();
   void maarita(int asukasmaara, int nelio);
       double laskeKulutus(double hinta);
private:
    asunto as5;
    asunto as6;
};

#endif // KATUKERROS_H
