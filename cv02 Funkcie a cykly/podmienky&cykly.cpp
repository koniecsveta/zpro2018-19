#include <iostream>
using namespace std;


int main ()
{
    int x = 100;

    //if podmienka, ktora vypise ci je v premennej x ulozena hodnota 100
    if (x == 100)
        cout << "x is 100";
    else
        cout << "x is not 100";

    cout << '\n';

    //spajanie if podmienok
    if (x > 0)
        cout << "x is positive";
    else if (x < 0)
        cout << "x is negative";
    else
        cout << "x is 0";

    cout << '\n';

    //odpocitavanie s vyuzitim while cyklu
    int n = 10;

    while (n>0) {
        cout << n << ", ";
        --n;
    }
    cout << "liftoff!\n";

    cout << '\n';

    //ozvena s vyuzitim do while cyklu
    string str;
    do {
        cout << "Enter text: ";
        getline (cin,str);
        cout << "You entered: " << str << '\n';
    } while (str != "goodbye");

    cout << '\n';

    //odpocitavanie s vyuzitim for cyklu
    for (int n=10; n>0; n--) {
        cout << n << ", ";
    }
    cout << "liftoff!\n";


}

