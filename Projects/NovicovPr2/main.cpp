#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#define NMAX 1000000
using namespace std;
bool Palindrome(int n);
long unsigned Demlo(int n);
int main()
{
    int numar = 3223;
    int jos = 1, sus = 1000000;
    int contor, cit = 1998, citd = 10;
    cout << "Proiect Nr. 2, elaborat de Novicov Daniil" << endl;
    cout << "Tema: Numere palindroame\n";
    //1. De verificat dacă numarul este palindrom
    cout << "Introduceti numarul intreg, pentru verificare: ";
    //cin >> numar;
    cout << "Introduceti limitele de jos si de sus: ";
    //cin >> jos >> sus;
    cout << "Cite numere palindroame: ";
    //cin >> cit;
    cout << "Cite numere Demlo: ";
    //cin >> citd;

    if(Palindrome(numar))
        cout << "\n1. Numarul " << numar << " este Palindrom " << endl;
    else
        cout << "\n1. Numarul " << numar << " nu este Palindrom " << endl;
    //2. De indicat toate numerele din intervalul [a; b], care satisfac proprietatea de bază

    cout << "\n2. Numerele palindroame de la " << jos << " la " << sus << endl;
    for(numar = jos, contor = 0; numar <= sus; numar++)
        if (Palindrome(numar))
        {
            contor++;
            cout << setw(9) << numar ;
            if (contor % 10 == 0)
                cout << endl;
        }
    if(contor)
        cout << "\nIn total: " << contor << " numere\n";
    else
        cout << "Nu sunt numere palindroame pe interval\n";
    //3. De indicat primele n numere, care satisfac proprietatea de bază

    cout << "\n3. Primele "<< cit << " numere palindroame " << endl;
    for(numar = 1, contor = 0; contor < cit; numar++)
        if (Palindrome(numar))
        {
            contor++;
            cout << setw(9) << numar ;
             if (contor % 10 == 0)
                cout << endl;
        }
    if(contor)
        cout << "\nIn total: " << contor << " numere\n";
    else
        cout << "Nu sunt numere palindroame pe interval";

    //4. De indicat toate numerele din intervalul [a; b], care satisfac proprietatea de bază (varianta optimizată) sau care satisfac a doua proprietate.
    cout << "\n4. Numere Demlo sunt:\n";
    for (numar = 1; numar <= citd; numar++)
    {

        cout << "\t" << Demlo(numar) << endl;

    }
    //5. De determinat cel mai mare număr, care satisface condiţia indicată.
    /*cout << "\n5. Cel mai mare numar palindrom este: ";
    for (numar = NMAX; numar > 0; numar--)
    {
        if (Palindrome(numar))
        {
            cout << numar << endl;
            break;
        }
    }*/
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
int Step (int a, int n)
{
    int p = 1;
    for (int i = 1; i <= n; i++)
        p *= a;
    return p;
}
long unsigned Demlo(int n)
{
    long unsigned power;
    power = (Step(10, n) - 1)/9;
    return power*power;
}


