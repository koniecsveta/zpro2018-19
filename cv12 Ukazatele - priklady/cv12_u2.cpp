/**
 * C program to reverse an array using pointers
 */

#include <stdio.h>

#define MAX_SIZE 100

/* deklaracia funkcie */
void printArr(int *arr, int size);


int main()
{
    int arr[MAX_SIZE];
    int size;
    int *left = arr;  // Pointer na arr[0]
    int *right;


    // nacitanie velkosti pola
    printf("Enter size of array: ");
    scanf("%d", &size);

    right = &arr[size - 1];  // Pointer na koniec pola, tj arr[size - 1]

    /*
     * nacitanie elementov pola
     */
    printf("Enter elements in array: ");
    while(left <= right)
    {
        scanf("%d", left++);
    }


    printf("\nArray before reverse: ");
    printArr(arr, size);


    // nastavime left aby ukazoval na zaciatok arr, tj arr[0]
    left = arr;


    // cyklus na prevratenie pola
    while(left < right)
    {
        /*
         * Swap prvku z left na right.
         */


        // inkrementacia left pointra a dekrementacia right  pointra

    }


    printf("\nArray after reverse: ");
    printArr(arr, size);


    return 0;
}



/**
 * Function to print array using pointer.
 *
 * @arr     Pointer to array.
 * @size    Size of the array.
 */
void printArr(int * arr, int size)
{
    // Pointer na arr[size - 1]
    int * arrEnd = (arr + size - 1);

    /* cyklim kym dojdem na posledny prvok pola */
    while(arr <= arrEnd)
    {
        printf("%d, ", *arr);

        //posuniem pointer na dalsi prvok pola
        arr++;
    }
}