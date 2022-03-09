#include <iostream>
#include <stdlib.h>

using namespace std;

using namespace std;
int Pell(int);
int main()
{
    int numar;
    cout << "Proiect Nr. 2, elaborat de Russu Nicolai" << endl;
    cout << "Tema: Numere Pell\n";
    cout << "introduceti numarul intreg: ";
    cin >> numar ;
    if (Pell(numar))
        cout << "Numarul " << numar << " este Pell" << endl;
    else
        cout << "Numarul " << numar << " nu este Pell" <<endl;
    return 0;
}

int Pell(int n)
{
    int a = 1;
    int b = 1;
    int s;
    if (n == 1)
        return true;
    s = a + b * 2;
    while(s < n)
    {
        a = b;
        b = s;
        s = a + b * 2;
    }
    return s == n;
}
