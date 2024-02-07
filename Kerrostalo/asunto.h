#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;
class asunto
{
public:
    asunto();
    void maarita (int nelio, int asukasmaara);
    double laskeKulutus(double hinta);
protected:
    int nelio;
    int asukasmaara;
};

#endif // ASUNTO_H
