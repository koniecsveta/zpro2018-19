#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{

    //1. CREATE, INITIALIZE, USE POINTERS

    /* Simple declarations */
    char character = 'C';
    int integer = 1;

    char pole[] = "aaaaaaa";


    cout << pole <<endl;

    *(pole + 1) ='z';

    cout << pole <<endl;
    cout << static_cast<void *>(&pole) <<endl;

    /* Print variable value with their memory address */
    cout<<"Value of character =" << character <<" Address of character = "<< static_cast<void *>(&character) << endl;
    cout<<"Value of character =" << character <<" Address of character = "<< &character << endl;
    cout<<"Value of integer =" << integer <<" Address of integer = "<< &integer << endl;





    return 0;

    return 0;
}