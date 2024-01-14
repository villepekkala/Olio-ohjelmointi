#include <iostream>

using namespace std;
int game(){
    int yritykset;
    srand (time(NULL));
    int luku = rand () % 40;
    int arvaus;
    do {
        yritykset++;
        std::cout << "Arvaa luku: ";
        std::cin >> arvaus;
        if (arvaus < luku) {std::cout << "Luku on suurempi.\n";}
        if (arvaus > luku) {std::cout << "Luku on pienempi.\n";}
        if (arvaus ==luku){std::cout <<"Arvasit oikein \n";
            break;  }
    } while (true);
    std :: cout << "Sinulla meni " << yritykset << " kertaa arvata";
}
int main()
{
    game();
}
