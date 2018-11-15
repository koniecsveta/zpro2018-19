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
   cout<<"Value of character =" << character <<" Address of character = "<<  &character << endl;

    printf("value = %c, address =%u\n", character, &character);
    cout<<"Value of integer =" << integer <<" Address of integer = "<< &integer << endl;
    cout<<"Value of real =" << real <<" Address of integer = "<<  &real << endl;
    cout<<"Value of biginteger =" << biginteger <<" Address of biginteger = "<< &biginteger << endl;


    int num = 10;
    int * ptr;

    /* Stores the address of num to pointer type */
    ptr = &num;

    cout << "Address of num = " << &num << endl;
    cout << "Value of num = " << num << endl;

    cout << "Address of ptr = " << &ptr << endl;
    cout << "Value of ptr = " <<  ptr << endl;
    cout << "Value pointed by ptr = "  <<  *ptr <<endl;




    return 0;
}