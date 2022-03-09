#include <iostream>
#include <stdlib.h>

using namespace std;

bool Perfect(int n, int check = 0);
int main()
{
    int numar;
    int jos = 1, sus = 496;
    int contor, cit = 4;
    cout << "Proiect nr.2 elaborat de Driga Nicolai" << endl;
    cout << "Tema: Numere perfecte\n";
    //1. De verificat dacă numarul este perfect
    cout << "Introduceti un numar natural: ";
    cin >> numar;
    if (Perfect(numar, 1))
        cout << "1. Numarul " << numar << " este perfect\n";
    else
        cout << "1. Numarul " << numar << " nu este perfect\n";
    //2. De indicat toate numerele din intervalul [a; b], care satisfac proprietatea de bază
    cout << "Introduceti limitele de jos si de sus: ";
    cin >> jos >> sus;
    cout << "\n2. Numerele perfecte de la " << jos << " la " << sus << endl;
    for(numar = jos, contor = 0; numar <= sus; numar++)
        if (Perfect(numar))
        {
            cout << numar << " ";
            contor++;
        }
    if(contor)
        cout << "\nIn total: " << contor << " numere\n";
    else
        cout << "Nu sunt numere perfecte pe interval\n";
    //3.
    /*cout << "Cite numere perfecte: ";
    cin >> cit;*/
    cout << "\n3. Primele "<< cit << " numere perfecte " << endl;
    for(numar = 1, contor = 0; contor < cit; numar++)
        if (Perfect(numar))
        {
            cout << numar << " ";
            contor++;
        }
    if(contor)
        cout << "\nIn total: " << contor << " numere\n";
    else
        cout << "Nu sunt numere perfecte pe interval";

    return 0;
}

bool Perfect(int n, int check)
{
    int d, s = 1;
    if (check) cout << s;
    for(d = 2; d <= n/2; d++)
        if(n % d ==0)
        {
            s += d;
            if (check) cout << " + " << d;
        }
    if (check) cout << " = " << s << " ?= " << n  << endl;
    return n == s;
}
