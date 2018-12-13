
    //    Napiste program so zakladnou triedou class Animal. Trieda Animal má dva dátové členy name a age.
    //    Napíšte členskú funkciu set_data (), ktorá nastavuje hodnoty dátových členov age a name.
    //    Vytvorte dve odvodené triedy Zebra a Dolphin, ktoré vypíšu svoj vek, meno a miesto pôvodu

#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
protected:
    int age;char name[10];
public:
    void set_data (int a, char b[10])
    {
        //add code
    }

};

class Zebra:public Animal
{public:
//add code
};

class Dolphin: public Animal
{public:

    //add code
};


int main ()
{
   //add code

    return 0;
}