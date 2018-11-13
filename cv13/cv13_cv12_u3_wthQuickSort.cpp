/**
 * C program to search an element in array using pointers
 */

#include <stdio.h>
#include <iostream>
using namespace std;

#define MAX_SIZE 100


/* deklaracie funkcii */
void inputArray(int * arr, int size);
int search(int * arr, int size, int toSearch);
void quick_sort(int *left, int *right);
int partition( int *a, int low, int high );
void swap(int *x, int *y);
void printArray(int *arr, int size);



int main()
{
    int array[MAX_SIZE];
    int size, toSearch, searchIndex;


    /*
     * nacitanie velkosti pola a jeho prvkov
     */
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter elements in array: ");
    inputArray(array, size);


    // nacitanie prvku, ktory chcem hladat
    printf("Enter element to search: ");
    scanf("%d", &toSearch);


    // volanie search funkcie na najdenie hladaneho prvku v poli
    searchIndex = search(array, size, toSearch);


    // vypis vysledkov hladania
    if(searchIndex == -1)
        printf("%d does not exists in array.", toSearch);
    else
        printf("%d is found at %d position.", toSearch, searchIndex + 1);


    //vypis pola pred sortom
    printArray(array, size);

    //sort
    quick_sort(array, (array + size-1));

    printArray(array, size);


    int a=1;

    return 0;
}




/**
 * Function to input elements in array.
 *
 * @arr     Pointer to integer array
 * @size    Size of the array
 */
void inputArray(int * arr, int size)
{
    // pointer na posledny prvok pola
    int* arrEnd = (arr + size - 1);


    // iterujem kym nedojdem na posledny prvok pola
    while(arr <= arrEnd)
    {
        scanf("%d", arr++);
    }
}




/**
 * Function to perform linear search in array. The function
 * returns an integer between 0 to size-1 specifying first
 * index of successful searched element in array.
 *
 * @arr      Pointer to integer array.
 * @size     Size of the array.
 * @toSearch Element to search within array.
 *
 * @return   Returns -1 if element does not exists in array,
 *           otherwise returns element index.
 */
int search(int * arr, int size, int toSearch)
{
    int index = 0;

    // pointer na posledny prvok arr[size - 1]
    int * arrEnd = (arr + size - 1);


    /*
     * iterujem od zaciatku pola do posledneho prvku (arr <= arrEnd),
     * kym aktualny prvok pola nie je akurat ten, ktory hladam
     */
    while(arr <= arrEnd && *arr != toSearch) {
        arr++;
        index++;
    }


    // ak sa prvok nasiel, vratim jeho index
    if(arr <= arrEnd)
        return index;

    return -1;
}



void swap(int *x, int *y){

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int *arr, int size)
{
    for(int i=0;i<size;i++)
    {
        cout<< *arr <<", " ;
        arr++;
    }
    cout << endl;
}

int* choose_pivot(int *left, int *right) {
    return &left[(right - left)/2];
}

int* partition(int *left, int *right, int *pivot) {
    int *i, *q;
    q = right;
    i = left ;
    while ( q > pivot ) {
        while ( pivot < i )
            pivot++;
        while ( q > i )
            q--;
        if ( *q > *pivot ) {
            swap(pivot,q);
        }
    }
    swap(left, q);
    return q ;
}

void quick_sort(int *left, int *right) {
    if(left >= right)
        return;

    int *pivot = partition(left, right, choose_pivot(left, right));
    quick_sort(left, pivot-1);
    quick_sort(pivot + 1, right);
}