#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
#define NMAX 100
using namespace std;
//Interfata programului
int Citire(int n, int a[]); //La intrare: n - numarul de elemente; La iesire: a - tabloul de inaltime; Functia intoarce: 1 - OK; 0 - Eroare
void Afisare(int n, int a[], char s[]); //La intrare: n - numarul de elemente, a - tabloul de inaltime;
int Minimum(int n , int a[]); //La intrare: n - numarul de elemente, a - tabloul de inaltime; La iesire: valoare minima;
int Maximum(int n , int a[]); //La intrare: n - numarul de elemente, a - tabloul de inaltime; La iesire: valoare maxima;
float Media(int n, int a[]); //La intrare: n - numarul de elemente, a - tabloul de inaltime; La iesire: valoare medie;
int Sortare(int n, int a[]);//La intrare: n - numarul de elemente, a - tabloul de inaltime; La iesire: a - tabloul aranjat; Functia intoarce: 1 - OK; 0 - Eroare
int Rotire(int n, int a[]); //La intrare: n - numarul de elemente, a - tabloul de inaltime; La iesire: a - tabloul rotit; Functia intoarce: 1 - OK; 0 - Eroare
int Adougare(int *n, int a[], int val); //La intrare: n - numarul de elemente, a - tabloul de inaltime, val - element adaugat; La iesire: n - mareste cu 1, a - tabloul
int Cautare(int n, int a[], int val); //La intrare: n - numarul de elemente, a - tabloul de inaltime, val - element adaugat; La iesire: p - pozitia sau -1
int Stergere(int &n, int a[], int val); //La intrare: n - numarul de elemente, a - tabloul de inaltime, val - element adaugat; La iesire: n - mareste cu 1, a - tabloul
int Clasificare(int &n, int a[], int m, int b[]); //La intrare: n - numarul de elemente, a - tabloul de inaltime, m - numarul de clasificari; La iesire: b - tabloul nou
int Generare(int n, int a[]); //La intrare: n - numarul de elemente; La iesire: a - tabloul de inaltime; Functia intoarce: 1 - OK; 0 - Eroare
int main()
{
    int key;
    int n = 10;
    int inaltime[NMAX] = { 171, 170, 174, 173, 172, 175, 177, 178, 180, 179 };

    //Citire(n, inaltime)
    cout << "Tabloul de inaltime ocupa: " << sizeof(inaltime) << " Bt" << endl;
    do
    {
        system("cls");
        cout << "Proiect nr.3 elaborat de Novicov Daniil" << endl;
        cout << "Tema: Inaltimile sportivilor la o competitie" << endl;
        cout << "\n1. De determinat intr-un tabel de numere inaltimea minima şi inaltimea maxima";
        cout << "\n2. De determinat intr-un tabel de numere inaltimea medie";
        cout << "\n3. De aranjat un tabel de inaltimea in ordine crescatoare sau descrescatoare";
        cout << "\n4. De efectuat rotirea la stanga a elementelor tabelului de 5 ori";
        cout << "\n5. De adăugat date în tabelul de numerele";
        cout << "\n6. De sters date din tabelul de numerele";
        cout << "\n7. Clasificare(nr. de sportivi cu inalțimea in limitele indicate)";
        cout << "\n8. Generare";
        cout << "\n0. Stop";
        cout << "\n\n\t Alegeti de la 0 la 8 -> ";
        cin >> key;
        switch(key)
        {
            case 1:
                Afisare(n, inaltime, " inital");
                cout <<"\nCea mai mica inaltimea este: " << Minimum(n, inaltime);
                cout <<"\nCea mai mare inaltimea este: " << Maximum(n, inaltime);
                break;
            case 2:
                Afisare (n,inaltime, " inital");
                cout << "\nInaltimea media este: " << Media(n, inaltime);
                break;
            case 3:
                Afisare (n, inaltime, " inital");
                Sortare (n, inaltime);
                Afisare (n, inaltime, " aranjat");
                break;
        }
        getch();
    } while(key);

    return 0;
}
int Citire(int n, int a[])
{
    return 1;
}
void Afisare(int n, int a[] ,char s[])
{
    cout << "\nTabloul de inaltime" << s <<"\n";
    for (int i = 0 ; i < n; i++)
        cout << setw(12) << a[i];
        cout << endl;
}
int Minimum(int n , int a[])
{
    int aux = a[0];
    if (n <= 0) return 0;
    for(int i = 1; i < n; i++)
        if (a[i] < aux) aux = a[i];
    return aux;
}
int Maximum(int n , int a[])
{
    int aux = a[0];
    if (n <= 0) return 0;
    for(int i = 1; i < n; i++)
        if (a[i] > aux) aux = a[i];
    return aux;
}
float Media(int n, int a[])
{
    int aux = a[0];
    if (n <= 0) return 0;
    for(int i = 1; i < n; i++)
        aux += a[i];
    aux /= n;
    return aux;
}
int Sortare(int n, int a[])
{
    int k = 0, aux;
    bool change;
    do
    {
       change = false; k++;
        for(int i = 0; i < n-k; i++)
            if (a[i] < a[i+1])
       {
          aux = a[i];
          a[i] = a[i+1];
          a[i+1] = aux;
          change = true;
       }
    } while (change);
    return 1;
}
int Rotire(int n, int a[])
{
    return 1;
}
int Adougare(int *n, int a[], int val)
{
    return 1;
}
int Cautare(int n, int a[], int val)
{
    return 1;
}
int Stergere(int &n, int a[], int val)
{
    return 1;
}
int Clasificare(int &n, int a[], int m, int b[])
{
    return 1;
}
int Generare(int n, int a[])
{
    return 1;
}

