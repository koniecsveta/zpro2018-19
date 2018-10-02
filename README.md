# zpro2018-19

VŠEOBECNÉ PRAVIDLÁ

0. Študenti, ktorí už vedia programovať v C++, môžu získať zápočet na prvom cvičení, aj keď zapísať sa môže až na konci semestra.
Podmienkou je, že v priebehu prvého cvičenia naprogramuje (objektovo) jednosmerne zreťazený spojový zoznam, naplní ho dátami
zo súboru a prevedie s ním nejakú operáciu - napr. zoradí prvky zoznamu alebo niečo podobné.

1. Účasť. Tolerované sú max. 4 neúčasti. V prípade choroby alebo iného vážneho dôvodu je možné stanoviť náhradnú domácu prácu.

2. Ak sa študent chystá z nejakých dôvodov presiahnuť tolerovanú neúčasť, môže sa so mnou vopred dohodnúť na náhradnej práci.

3. Študent by mal v priebehu semestra odovzdať zadané doma spracované programy.


DOPORUČENÉ ZDROJE:

http://www.cplusplus.com

https://app.codility.com/programmers/lessons
    
 ---
 
# Ut 2.10.2018

Vyplnenie dotazníku

https://goo.gl/forms/Gk0fqaRUs4e9YLql1



## Hello World!

= typický prvý program začiatočníka, ktorý na obrazovku vypíše "Hello World". Síce veľmi jednoduchý, ale obsahuje všetky 
základné komponenty C++ programu:

```c++

1 // my first program in C++
2 #include <iostream>
3 
4 int main()
5 {
6  std::cout << "Hello World!";
7 }
```

---
Riadok 1: // my first program in C++

Dve lomítka indukujú, že zvyšok riadku obsahuje programátorov komentár, ktorý ale nemá žiadny vplyv na chovanie programu. 
Komentáre sa využívajú na popis kódu (krátke vysvetlenie, pozorovanie...)


komentáre možno písať aj nasledovne /* block comment */


Riadok 2: #include <iostream>
    
Riadky, ktoré sa začínajú znakom # su špeciálne riadky, ktoré preprocesor spracuje ešte pred skompilovaním programu. 
Konkrétne tento riadok inštruuje preprocesor, že má zahrnúť časť štandardného c++ kódu, ktorý umožní výpis
výstupu na obrazovku


Riadok 3: prázdny riadok

Prázdne riadky nemajú na program žiadny efekt, ale môžu zlepšiť čitateľnosť kódu


Riadok 4:  int main ()

Tymto riadkom sa zacina deklaracia funkcie (=zjednodušene skupina príkazov, ktorým dáme nejaký názov). Tu dávame názov
"main" skupine príkazov, ktoré ďalej nasledujú. (viac k funkciám v neskorších hodinách)

Funkcia ktorá je pomenovaná main je vo všetkých c++ programoch špeciálna - je to funkcia, 
ktorá sa zavolá, keď sa program spustí, tj. spustenie všetkých c++ programov sa začína funkciou main.


Riadky 5 and 7: { a }

Indikujú začiatok a koniec definície funkcie. Všetko medzi nimi naz. telo funkcie = definícia toho, čo sa stane keď sa
zavolá funckia main.


Riadok 6: std::cout << "Hello World!";

Príkaz zložený z 3 častí: std::cout identifikuje výstupné zariadenie (obrazovku). Operátor << indikuje, že to čo následuje za
ním bude vložené do std::count. Veta "Hello world!" predstavuje obsah vložený na obrazovku. Každý príkaz končí v C++ znakom ; .


## namespace std

cout je súčasťou štandardnej knižnice a všetky prvky Štandardnej c++ knižnice sú deklarované  v rámci std namespace.



```c++

1 // my second program in C++
2 #include <iostream>
3 using namespace std;
4
5 int main()
6 {
7    cout << "Hello World! ";
8    cout << "I'm a C++ program";
9 }
```


## pouzitie
```c++
#include <iostream>
using namespace std;
int main( ) {
  char name[50];
  cout << "Please enter your name: ";
  cin >> name;
  cout << "Your name is: " << name << endl;
}
```










