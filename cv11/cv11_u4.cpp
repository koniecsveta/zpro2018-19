#include <stdio.h>
#include <iostream>
using namespace std;

#define MAX_SIZE 100 // max velkost pola
/*
 * KOPIROVANIE JEDNEHO POLA DO DRUHEHO POMOCOU UKAZATELOV
 * */


void printArray(int arr[], int size);

int main()
{
    int source_arr[MAX_SIZE], dest_arr[MAX_SIZE];
    int size, i;

    int *source_ptr= /*doplnte*/ ;//pointer na source_arr
    int *dest_ptr = /*doplnte*/; //pointer na dest_arr

    int *end_ptr;

    /*
     * doplnte vkladanie velkosti a prvkov do source_arr
     * */

    end_ptr = &source_arr[size - 1]; //nastavenie ukazatela aby ukazoval na posledny prvok source_arr

    /*
     * doplnte vypis source_arr a dest_arr pred kopirovanim pomocou printArray()
     * */


    /*kopirovanie*/
    while(source_ptr <= end_ptr) //cyklus pobezi, kym source_ptr nevyjde za koniec source_arr
    {
        /*doplnte*/;//do hodnoty na ktoru ukazuje dest_ptr priradim hodnotu na ktoru ukazuje source ptr
        /*doplnte*/; //inkrementacia source_ptr
        /*doplnte*/; //inkrementacia dest_ptr
    }



    return 0;
}

void printArray(int *arr, int size)
{
    for (int i; i< size; i++)
    {
       /*doplnte*/
    }
}