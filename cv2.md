Št 4.10.2018

# Podprogram

Funkcia v c++ je pomenovaná skupina príkazov, ktorú možno zavolať z rôznych miest programu.
Syntax definície funkcie:

typ názov (parameter1, parameter2, ...) {príkazy}

- typ = typ hodnoty, ktorý funkcia vracia
- name = identifikátor ktorým funkciu voláme 
- parametere (ľubovoľný počet): Každý parameter je zložený z typu a identifikátora (napr. int x), parametre sú oddelené čiarkou.
Parameter pripomína deklaráciu premennej, pričom v rámci funkcie aj predstavuje premennú - lokálnu premennú funkcie.
Účel parametrov = umožnenie predania hodnoty argumentov funkcii z ľubovoľného miesta, odkiaľ je funkcia volaná

```c++
#include <iostream>
using namespace std;

int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}

int main ()
{
  int z;
  z = addition (5,3);
  cout << "The result is " << z;
}
```

Tento program je rozdelený do 2 funkcií: addition a main. Bez ohľadu na poradie v akom ich definujeme, C++ program vždy 
štartuje zavolaním funkcie main(). Funkcia main() je tiež jediná funkcia, ktorá sa zavolá automaticky - kód všetkých iných 
funkcií sa spustí iba vtedy, ak ho zavoláme z funkcie main (priamo alebo nepriamo).

V príklade sa main začne deklaráciou premennej z typu int. Následne prevedie volanie funkcie addition. Volanie funkcie má veľmi 
podobnú štruktúru ako jej deklarácia. Parametre v deklarácii funkcii korešpondujú s arugumentami predanými vo volaní funkcie.
Volanie predá funkcii dve hodnoty, 5 a 3 - tieto korešpondujú s parametrami a a b v deklarácii funkcie addition.

V momente keď sa funkcia addition zavolá z funkcie main, kontrolu prevezme funkcia addition: beh funkcie main sa zastaví a obnoví
sa až potom, čo prebehne funkcia addition. Pri volaní sa hodnoty argumentov (5 a 3) skopírujú do lokálnych premenných
int a a int b. Následne sa vovnútri funkcie addition deklaruje ďalšia lokálna premenná int r a vyhodnotí sa výraz r=a+b, pričom
výsledok sa priradí do r. To v tomto prípade kde a je 5 a b je 3 znamená, že do r sa priradí 8.

Príkaz

```c++
return r;
```

ukončí funkciu a vráti kontrolu späť do bodu, odkiaľ bola funkcia zavolaná, čo je v tomto prípade funkcia main. Navyše sa vyhodnotí
volanie funkcie - hodnotou špecifikovanou v príkaze return, čo je vo funkcii hodnota lokálnej premennej r a teda 8.

Hodnota volania funkcie (8) sa priradí premennej z (pretože volanie funkcie addition(5,3) sa vyhodnotilo ako 8).

Potom main vypíše hodnotu z zavolaním 

```c++
cout << "The result is " << z;
```
čo sme už preberali na cv1.

Funkciu môžeme v programe volať viacnásobne a argumenty môžeme predávať aj prostredníctvom premenných:

```c++
#include <iostream>
using namespace std;

int subtraction (int a, int b)
{
  int r;
  r=a-b;
  return r;
}

int main ()
{
  int x=5, y=3, z;
  z = subtraction (7,2);
  cout << "The first result is " << z << '\n';
  cout << "The second result is " << subtraction (7,2) << '\n';
  cout << "The third result is " << subtraction (x,y) << '\n';
  z= 4 + subtraction (x,y);
  cout << "The fourth result is " << z << '\n';
}
```
 Ďalej existujú funkcie, ktoré nevracajú žiadnu hodnotu, tj.
 
 ```c++
 // void function example
#include <iostream>
using namespace std;

void printmessage ()
{
  cout << "I'm a function!";
}

int main ()
{
  printmessage ();
}
```

Funkcia main()  je síce typu int a napriek tomu nepíšeme nakoniec výraz
```c++
return 0;
```
Je to preto, že kompilátor predpokladá, že funkcia končí s týmto výrazom implicitne. Dôvody tohto chovania sú historické
a vo všetkých ostatných funkciách musíme písať správny return výraz vracajúci hodnotu príslušného typu.


# Cyklus a rozhodovanie
##Podmienka If

Syntax

if (podmienka) príkaz 

Podmienka je výraz, ktorý sa má vyhodnotiť (či je pravidvý alebo nie).
Ak je podmienka splnená, tj. tento výraz sa vyhodnotí ako true, spustí sa výraz. 
Ak sa výraz vyhodnotí ako false, výraz sa nespustí (ignoruje sa) a program pokračuje ďalej.
 
 ```c++
 if (x == 100)
  cout << "x is 100";
else
  cout << "x is not 100";
  ```
  
Kľúčové slovo else umožňuje spustiť alternatívny výraz v prípade, že podmienka nie je splnená.

Podmienky môžeme spájať:
 ```c++
if (x > 0)
  cout << "x is positive";
else if (x < 0)
  cout << "x is negative";
else
  cout << "x is 0";
 ```
 
 
 
 ##Cyklus
 Cyklus opakuje príkaz určitý počet krát alebo dovtedy, kým je splnená istá podmienka.
 Cykly do programu zavádzame kľučovými slovami while, do, a for.
 
##while 

Syntax 

while (podmienka) príkaz
 
 Cyklus while opakuje príkaz dovtedy, kým je podmienka pravdivá, tj true. Ak po niektorom spustení príkazu začne byť podmienka 
 nepravdivá, cyklus sa ukončí  a program pokračuje ďalej.

 custom countdown using while
#include <iostream>
using namespace std;
 ```c++
int main ()
{
  int n = 10;

  while (n>0) {
    cout << n << ", ";
    --n;
  }

  cout << "liftoff!\n";
}
``` 

##do-while 
syntax

do príkaz while (podmienka);


Chová sa ako while cyklus, s rozdielom že podmienka sa vyhodnocuje až o prevedení príkazu (narozdiel od pred), tj. je garantované
aspoň jedno spustenie príkazu (aj keď by podmienka nikdy nebola splnená)
 ```c++
// echo machine
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str;
  do {
    cout << "Enter text: ";
    getline (cin,str);
    cout << "You entered: " << str << '\n';
  } while (str != "goodbye");
}
  ```
 ##for
 syntax
 for (inicializácia; podmienka; inkrementácia) príkaz;
 
 Podobne ako cyklus while, for cyklus opakuje príkaz kým je podmienka pravdivá. Navyše, poskytuje možnosť inicializácie a 
 inkrementácie premennej využívanej v podmienke po každej iterácii (inicializácia sa spustí pred prvou iteráciou). 
 
 ```c++
 // countdown using a for loop
#include <iostream>
using namespace std;

int main ()
{
  for (int n=10; n>0; n--) {
    cout << n << ", ";
  }
  cout << "liftoff!\n";
}
```
 
  
  
 



ÚLOHA: napíšte funkciu, ktorá vypočíta faktoriál čísla n
