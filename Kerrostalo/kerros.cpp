#include "kerros.h"

kerros::kerros()
{
    cout << "Kerros luotu" << endl;
}
void kerros::maaritaAsunnot()
{
    cout << "Maaritetaan katukerrokselta perittyja asuntoja" << endl;
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;

    maarita(2, 100);
    maarita(2, 100);
}



void kerros::maarita(int asukasmaara, int nelio)
{
    cout << " Asunto maaritetty asukkaita = " << asukasmaara << " nelioita = " << nelio << endl;
    as1.maarita(nelio, asukasmaara);
}

double kerros::laskeKulutus(double hinta)
{
    double kulutus;
    kulutus = hinta*6*200;
    cout << "Katutason ja perityn kerroksen kulutus, kun hinta = " << hinta << " on " << kulutus << endl;
}

