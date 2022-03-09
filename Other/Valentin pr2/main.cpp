#include <iostream>
#include <stdlib.h>

using namespace std;
bool Divizibil(int n, int k);
int main()
{
    int numar, divizor;
    cout << "Proiect Nr. 2, elaborat de Caminceanu Valentin" << endl;
    cout << "Tema: Numere divizibile\n";
    //1. De verificat dacă numărul este divizibil
    cout << "Introduceti un numar natural: ";
    cin >> numar;
    cout << "Introduceti divizorul: ";
    cin >> divizor;
    if(Divizibil(numar, divizor))
        cout << "Numarul " << numar << " este divizibil la " << divizor << endl;
    else
        cout << "Numarul " << numar << " nu e divizibil la " << divizor << endl;
    return 0;
}
bool Divizibil(int n, int k)
{
    return (n % k == 0);
}
