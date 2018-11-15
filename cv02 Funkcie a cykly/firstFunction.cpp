#include <iostream>
using namespace std;

int addition (int a, int b)
{
    int r;
    r=a+b;
    return r;
}

int subtraction (int a, int b)
{
    int r;
    r=a-b;
    return r;
}

//priklad funkcie ktora nevracia ziadnu hodnotu iba nieco vypisuje
void printmessage ()
{
    cout << "I'm a function!";
}

int main ()
{
    //prvy priklad
    int z;
    z = addition (5,3);
    cout << "The result of 5 + 3 is " << z << '\n';
    cout << '\n';

    //druhy priklad
    int x=5, y=3;
    z = subtraction (7,2);
    cout << "7 - 2 is " << z << '\n';
    cout << "I can get " << subtraction (7,2) <<  " also like this" << '\n';
    cout << "5 - 3 is " << subtraction (x,y) <<  '\n';
    z= 4 + subtraction (x,y);
    cout << "4 + 5 - 3 is " << z << '\n';
    cout << '\n';

    //treti priklad
    printmessage ();
    cout << '\n';

}

