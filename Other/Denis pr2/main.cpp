#include <iostream>
#include <stdlib.h>

using namespace std;
bool Prim(int n);
int main()
{
    int numar;
    cout << "Proiect Nr. 2, elaborat de Adam Denis" << endl;
    cout << "Tema: Numere prime\n";
    //1. De verificat dacă numărul este numar
    cout << "Introduceti numarul intreg: ";
    cin >> numar ;
    if(Prim(numar))
        cout << "Numarul " << numar << " este prim " << endl;
    else
        cout << "Numarul " << numar << " nu este prim " << endl;
    return 0;
}
bool Prim(int n)
{
    for(int i=2; i<=n/2; i++)
        if (n % i == 0) return false;
    return true;

}
