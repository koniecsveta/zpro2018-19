#include <stdio.h>
#include <iostream>
using namespace std;

#define MAX_SIZE 100 // max nvelkost pola

int main()
{
int arr[MAX_SIZE];
int N, i;
int * ptr = arr; // pointer na arr[0]

cout << "enter size of array" << endl;
cin >> N;


    cout << "enter elements of array" << endl;

    for(i=0; i<N ; i++)
    {
        cin >> /*doplnte*/;//nacita hodnotu tam, kam ukazuje ukazatl
        /*doplnte*/;//posunie ukazatel na dalsi element pola
    }

    ptr = arr;//ukazatel znovu ukazuje na prvy element pola

    cout << "array elements: ";

    for(i=0; i<N ; i++)
    {
        cout << /* doplnte*/;//vypis hodnoty na ktoru ukazuje zkazatel
        /* doplnte*/;//posun ukazatela na dalsi element pola
    }


    return 0;
}