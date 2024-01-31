#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"
using namespace std;

class ItalianChef:public Chef
{
public:

    ItalianChef(string name);
   void makePasta(int jauhot, int vesi);
    string getName();
};

#endif // ITALIANCHEF_H
