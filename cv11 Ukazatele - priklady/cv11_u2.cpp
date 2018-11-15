#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;

    ptr1 = &num1/*doplnte*/; // ptr1 stores the address of num1
    ptr2 = &num2/*doplnte*/; // ptr2 stores the address of num2


    printf("Enter number 1: ");
    cin >> num1/*doplnte*/ ;

    printf("Enter number 2: ");
    cin >> *ptr2/*doplnte*/;

    sum = *ptr1 + *ptr2;

    printf("Sum = %d", sum);

    return 0;
}