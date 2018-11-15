#include <iostream>
#include <string>
#include <utility> // kvoli std::swap, ak nie ste C++11 kompatibilny, tak #include <algorithm>

//pretypovana verzia z minuleho cvicenia
void quick_sort (std::string *a, int n) {
    if (n < 2)
        return;
    std::string  p = a[n / 2];
    std::string *l = a;
    std::string *r = a + n - 1;
    while (l <= r) {
        if (*l < p) {
            l++;
        }
        else if (*r > p) {
            r--;
        }
        else {
            std::string t = *l;
            *l = *r;
            *r = t;
            l++;
            r--;
        }
    }
    quick_sort(a, r - a + 1);
    quick_sort(l, a + n - l);
}


void selection_sort(std::string *array, int length)//selection sort
{
    // prechod vsetkymi prvkami pola
    // (okrem posledneho, pretoze ked sa sem dostaneme, tak pole uz bude zotriedene)
    for (int startIndex = 0; startIndex < length-1; ++startIndex)
    {
        // smallestIndex je index nejmensieho prvku, ne ktory sme doteraz narazili
        int smallestIndex = startIndex;

        // Hladame najmensi prvok v zbytku pola (startujeme na startIndex+1)
        for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {
            // Aj je aktualny prvok mensi ako povodne najdeny najmensi
            if (array[currentIndex] < array[smallestIndex])
                // tak ho nastavime ako novy najmensi prvok
                smallestIndex = currentIndex;
        }

        // Swap start prvku a najmensieho prvku
        std::swap(array[startIndex], array[smallestIndex]);
    }
}

int main()
{
    std::cout << "How many names would you like to enter? ";
    int length;
    std::cin >> length;

    // Alokacia pola, na drzanie mien
    std::string *names = new std::string[length];

    // Vypytame od uzivatela mena
    for (int i = 0; i < length; ++i)
    {
        std::cout << "Enter name #" << i + 1 << ": ";
        std::cin >> names[i];
    }

    // potriedime pole
    //selection_sort(names, length);
    quick_sort(names, length);

    std::cout << "\nHere is your sorted list:\n";
    // vypiseme potriedene pole
    for (int i = 0; i < length; ++i)
        std::cout << "Name #" << i + 1 << ": " << names[i] << '\n';

    delete[] names; //nezabudneme pole vymazat


    return 0;
}