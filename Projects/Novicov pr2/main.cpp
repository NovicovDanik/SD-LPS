#include <iostream>
#include <stdlib.h>
using namespace std;
bool Palindrome(int n);
int main()
{
    int numar;
    int jos, sus;
    int contor, cit;
    cout << "Proiect Nr. 2, elaborat de Novicov Daniil" << endl;
    cout << "Tema: Numere palindroame\n";
    //1. De verificat dacă numarul este palindrom
    cout << "Introduceti numarul intreg: ";
    cin >> numar;
    if(Palindrome(numar))
        cout << "Numarul " << numar << " este Palindrom " << endl;
    else
        cout << "Numarul " << numar << " nu este Palindrom " << endl;
    //2. De indicat toate numerele din intervalul [a; b], care satisfac proprietatea de bază
    cout << "Introduceti limitele de jos si de sus: ";
    cin >> jos >> sus;
    cout << "\n2. Numerele palindroame de la " << jos << " la " << sus << endl;
    for(numar = jos, contor = 0; numar <= sus; numar++)
        if (Palindrome(numar))
        {
            cout << numar << " ";
            contor++;
        }
    if(contor)
        cout << "\nIn total: " << contor << " numere\n";
    else
        cout << "Nu sunt numere palindroame pe interval\n";
    //3. De indicat primele n numere, care satisfac proprietatea de bază
    cout << "Cite numere palindroame: ";
    cin >> cit;
    cout << "\n3. Primele "<< cit << " numere palindroame " << endl;
    for(numar=0, contor = 0; contor < cit; numar++)
        if (Palindrome(numar))
        {
            cout << numar << " ";
            contor++;
        }
    if(contor)
        cout << "\nIn total: " << contor << " numere\n";
    else
        cout << "Nu sunt numere palindroame pe interval";

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
