#include "asunto.h"
#include <iostream>
using namespace std;
asunto::asunto()
{
    cout << "Asunto luotu" << endl;
}

void asunto::maarita(int nelio, int asukasmaara)
{
    this->nelio = nelio;
    this->asukasmaara = asukasmaara;
    cout << " Asunto maaritetty asukkaita = " << asukasmaara << " nelioita = " << nelio << endl;
}


double asunto::laskeKulutus(double hinta) {
    double kulutus;
    kulutus = hinta * nelio * asukasmaara ;
    cout << kulutus << endl;
}
