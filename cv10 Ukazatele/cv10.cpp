#include <stdio.h>


//porovna dve hodnoty typu int
int compare (const void *a, const void *b)
{
    // doplnte kod tejto funkcie
    return -1;
}

// prehodi hodnoty na poziciach first a second
void swap (void *first, void *second, int size)
{
    if (first == second) return;
    int i;
    char *f = (char*)first;
    char *s = (char*)second;
    // doplnte kod tejto funkcie
}

// vysvetlite kod nasledujucej funkcie
void* partition (void *base, int n, int size, void *index, int(*compare)(const void*, const void*))
{
    int i;
    char *store = (char*)base;
    char *basec = (char*)base;
    swap (index, basec + (n - 1)*size, size);
    for (i = 0; i < n - 1; i++)
    {
        if (compare(basec + i*size, basec + (n - 1)*size) <= 0)
        {
            swap(basec + i*size, store, size);
            store += size;
        }
    }
    swap(store, basec + (n - 1)*size, size);
    return store;
}

void my_qsort (void *base, int n, int size, int(*compare)(const void*, const void*))
{
    if (n <= 1) return;
    char* basec = (char*)base;
    char *newp = (char*)partition(base, n, size, basec + ((n - 1) / 2)*size, compare);

    // doplnte volanie funkcie
    // lava podcast aktualnej casti
    //my_qsort( , , size, compare);
    // prava podcast aktualnej casti
    //my_qsort( , , size, compare);
}

int main(int argc, char **argv)
{
    int pole[10] = {1, 3, 2, 1, 6, 4, 8, 2, 3, 5};
    // 3 je vacsie nez 2
    // printf("compare vraci %d\n", compare(&pole[1], &pole[2]));

    // 1 je mensie nez 6
    // printf("compare vraci %d\n", compare(&pole[3], &pole[4]));

    // 1 sa rovna 1
    // printf("compare vraci %d\n", compare(&pole[3], &pole[3]));

    // prehodi prvok 0 a 1
    // swap(&pole[0], &pole[1], sizeof(int));
    my_qsort(pole, 10, sizeof(int), compare);
    int i;
    for (i = 0; i < 10; i++)
        printf("%d\n", pole[i]);
    return 0;
}