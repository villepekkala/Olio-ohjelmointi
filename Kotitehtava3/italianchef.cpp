#include "italianchef.h"

ItalianChef::ItalianChef(string name):Chef(name)
{
    cout  << "Chef " << name << " makes pasta with special recipe" << endl;
}

void ItalianChef::makePasta(int jauhot, int vesi)
{
    cout << "Chef " << name << " uses jauhot = " << jauhot << "\n" <<
        "Chef " << name << " uses vesi = " << vesi << endl;
}



//void ItalianChef::makePasta()
//{
//    cout << "Chef " << name << " makes pasta" << endl;
//}

//string ItalianChef::getName(name)
//{
//    return name;
//}



