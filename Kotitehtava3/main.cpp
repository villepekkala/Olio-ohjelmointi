#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    //Chef k ("Gordon Ramsay");
   // k.makeSalad();
    //k.makeSoup();
  //  Chef ik ("Anthony Bourdain");
   // ik.makeSalad();
    //ik.makeSoup();

    //Chef J ("Jyrki");
    ItalianChef m ("Mario");
    m.makePasta(250, 100);
    //J.makeSalad();
   // m.makePasta();
    //J.makeSoup();
   return 0;
}
