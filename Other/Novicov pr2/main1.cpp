#include <iostream>
#include <stdlib.h>
using namespace std;
bool Palindrome(int n);
int main()
{
    int numar;
    cout << "Proiect Nr. 2, elaborat de Novicov Daniil" << endl;
    cout << "Tema: Numere palindroame\n";
    cout << "Introduceti numarul intreg: ";
    cin >> numar;
    if(Palindrome(numar))
        cout << "Numarul " << numar << " este Palindrom " << endl;
    else
        cout << "Numarul " << numar << " nu este Palindrom " << endl;
    return 0;
}
bool Palindrome(int n)
{
    int copia = n, invers = 0;
    while(copia != 0)
    {
        invers = invers*10 + copia%10;
        copia = copia/10;
    }
    return (invers == n);
}

