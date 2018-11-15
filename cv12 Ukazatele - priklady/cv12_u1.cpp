/**
 * C program to swap two arrays using pointers
 */

#include <stdio.h>

#define MAX_SIZE 100    // Max velkost pola


/* deklaracie funkcii */
void inputArray(int *arr, int size);
void printArray(int *arr, int size);
void swapArray(int *sourceArr, int *destArr, int size);




int main()
{
    int sourceArr[MAX_SIZE];
    int destArr[MAX_SIZE];

    int size;


    // nacitanie velkosti pola
    printf("Enter size of array: ");
    scanf("%d", &size);

    // nacitanie prvkov source pola
    printf("Enter %d elements in source array: ", size);
    inputArray(sourceArr, size);


    // nacitanie prvkov destination pola
    printf("Enter %d elements in destination array: ", size);
    inputArray(destArr, size);


    /*
     * vzpis prvkov oboch poli pred swapom
     */
    printf("\n\nSource array before swapping: ");
    printArray(sourceArr, size);

    printf("\nDestination array before swapping: ");
    printArray(destArr, size);


    /* Swap prvkov oboch poli */
    swapArray(sourceArr, destArr, size);


    /*
     * vypis prvkov oboch poli po swape
     */
    printf("\n\nSource array after swapping: ");
    printArray(sourceArr, size);

    printf("\nDestination array after swapping: ");
    printArray(destArr, size);


    return 0;
}



/**
 * Function used to read input from user in an array.
 *
 * @arr     Pointer to array to store input
 * @size    Size of the array
 */
void inputArray(int *arr, int size)
{
    // pointer na poslednz prvok pola
    int *arrEnd = (arr + (size - 1));


    // nacitanie prvkov
    while(arr <= arrEnd)
        scanf("%d", arr++);
}



/**
 * Function used to print elements of array.
 *
 * @arr     Pointer to array, which is to print.
 * @size    Size of the array
 */
void printArray(int *arr, int size)
{
    // Pointer na posledny prvok pola
    int *arrEnd = (arr + (size - 1));


    // vypis prvkov jeden po druhom
    while(arr <= arrEnd)
        printf("%d, ", *(arr++));
}



/**
 * Function to swap elements of two arrays.
 *
 * @sourceArr       Pointer to source array to swap.
 * @destArr         Pointer to destination array to swap.
 * @size            Size of array.
 */
void swapArray(int * sourceArr, int * destArr, int size)
{
    // Pointer na poslednz prvok source pola
    int * sourceArrEnd = /*doplnte*/;

    // Pointer na poslednz prvok destination pola
    int * destArrEnd   = /*doplnte*/;


    /*
     * Swap jednotlivych prvkov oboch poli
     */
    while(sourceArr <= sourceArrEnd && destArr <= destArrEnd)
    {
        /*
         * doplnte samotny swap jednotlivych prvkov oboch poli
         * */


        // inkrementacia source a destination pola
        /*doplnte*/;
        /*doplnte*/;
    }
}