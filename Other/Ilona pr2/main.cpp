#include <iostream>
#include <stdlib.h>

using namespace std;
bool Prim(int n);
bool Fibonacci(int n);
int main()
{
    int numar;
    cout << "Proiect Nr. 2, elaborat de Frasiniuc Ilona" << endl;
    cout << "Tema: Numere prime\n";
    //1. De verificat dacă numărul este numar
    cout << "Introduceti numarul intreg: ";
    cin >> numar ;
    if(Fibonacci(numar))
        cout << "Numarul " << numar << " este Fibonacci " << endl;
    else
        cout << "Numarul " << numar << " nu este Fibonacci " << endl;
    return 0;
}
bool Prim(int n)
{
    for(int i=2; i<=n/2; i++)
        if (n % i == 0) return false;
    return true;
}
bool Fibonacci(int n)
{
    int a = 1, b = 1, summa;
    summa = a + b;
    while( summa < n )
    {
      a = b;
      b = summa;
      summa = a + b;
    }
    return summa == n;
}
//1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
//a, b, s
