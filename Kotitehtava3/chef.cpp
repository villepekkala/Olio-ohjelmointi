#include "chef.h"
using namespace std;
#include <iostream>

Chef::Chef(string name): name(name)

{
    cout << "Chef " << name << " konstruktori" << endl;
}


void Chef::makeSalad()
{
    cout << "Chef " << name << " makes salad" << endl;
}

void Chef::makeSoup()
{
    cout << "Chef "<< name << " makes soup" << endl;
}

Chef::~Chef()
{
    cout << "Chef "<< name << " destruktori" << endl;
}

