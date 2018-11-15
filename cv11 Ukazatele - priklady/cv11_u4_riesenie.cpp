#include <stdio.h>
#include <iostream>


#include <stdio.h>

using namespace std;


#define MAX_SIZE 100 // max velkost pola
/*
 * KOPIROVANIE JEDNEHO POLA DO DRUHEHO POMOCOU UKAZATELOV
 * */

int size, i;
int source_arr[MAX_SIZE], dest_arr[MAX_SIZE];
void printArray(int arr[], int size);



int main()
{



    int *source_ptr = &source_arr[0] /*doplnte*/ ;//pointer na source_arr
    int *dest_ptr = &dest_arr[0] /*doplnte*/; //pointer na dest_arr


    int *end_ptr;

    /*
     * doplnte vkladanie velkosti a prvkov do source_arr
     * */
    cout << "enter size of array" << endl;
        cin >> size ;




    cout << "enter elements of array" << endl;

    for(i=0; i<size ; i++)
    {
        cin >> *source_ptr /*doplnte*/;//nacita hodnotu tam, kam ukazuje ukazatl
        source_ptr++/*doplnte*/;//posunie ukazatel na dalsi element pola
    }



    end_ptr = &source_arr[size - 1]; //nastavenie ukazatela aby ukazoval na posledny prvok source_arr
    source_ptr = &source_arr[0];


    /*
     * doplnte vypis source_arr a dest_arr pred kopirovanim pomocou printArray()
     * */





    cout << "source array elements: ";
    printArray(source_ptr,size) ;

    cout << "destination array elements: ";
    printArray(dest_ptr, size) ;



    /*kopirovanie*/
    while(source_ptr <= end_ptr) //cyklus pobezi, kym source_ptr nevyjde za koniec source_arr
    {
        *dest_ptr = *source_ptr/*doplnte*/;//do hodnoty na ktoru ukazuje dest_ptr priradim hodnotu na ktoru ukazuje source ptr
        source_ptr++ /*doplnte*/; //inkrementacia source_ptr
        dest_ptr++ /*doplnte*/; //inkrementacia dest_ptr
    }

    source_ptr = &source_arr[0];
    dest_ptr = &dest_arr[0];
    //doplnit vypis source_arr a dest_arr po kopirovani pomocou printArray()
   printArray(source_ptr, size) ;
    printArray(dest_ptr, size);


}

void printArray(int *arr, int size)
{
    for(i=0; i<size ; i++)
    {
        cout << *arr << endl/*doplnte*/;
        arr++/*doplnte*/;//posunie ukazatel na dalsi element pola
    }

}