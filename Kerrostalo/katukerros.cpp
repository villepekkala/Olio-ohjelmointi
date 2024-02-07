#include "katukerros.h"

katukerros::katukerros()
{
    cout << "Katukerros luotu" << endl;
}

void katukerros::maaritaAsunnot()
{
cout << "Maaritetaan 2 kpl katukerroksen asuntoja" << endl;
    maarita(2, 100);
    maarita(2, 100);
}
void katukerros :: maarita(int asukasmaara, int nelio)
{
    cout << " Asunto maaritetty asukkaita = " << asukasmaara << " nelioita = " << nelio << endl;
}
