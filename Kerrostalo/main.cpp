#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katukerros.h"
using namespace std;

int main()
{
    kerros k;
    katukerros kt;


    kt.maaritaAsunnot();
    k.maaritaAsunnot();

    k.laskeKulutus(1);
    return 0;


}
