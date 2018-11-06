#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    //1. CREATE, INITIALIZE, USE POINTERS

    /* Simple declarations */
    char character = 'C';
    int integer = 1;
    float real = 10.4f;
    long long biginteger = 989898989ll;

    /* Print variable value with their memory address */
    cout<<"Value of character =" <<  <<" Address of character = "<<  << endl;
    cout<<"Value of integer =" <<  <<" Address of integer = "<<  << endl;
    cout<<"Value of real =" <<  <<" Address of integer = "<<  << endl;
    cout<<"Value of biginteger =" <<  <<" Address of biginteger = "<<  << endl;


    int num = 10;
    int * ptr;

    /* Stores the address of num to pointer type */
    ptr = &num;

    cout << "Address of num = " <<  << endl;
    cout << "Value of num = " <<  << endl;

    cout << "Address of ptr = " <<  << endl;
    cout << "Value of ptr = " <<  << endl;
    cout << "Value pointed by ptr = "  << endl;




    return 0;
}