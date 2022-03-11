#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#include <conio.h>
#define NMAX 200
using namespace std;
//Interfata programului
int Citire(int n, int a[]); //La intrare: n - numarul de elemente; La iesire: a - tabloul de inaltime; Functia intoarce: 1 - OK; 0 - Eroare
void Afisare(int n, int a[], char s[]); //La intrare: n - numarul de elemente, a - tabloul de inaltime;
int Minimum(int n , int a[]); //La intrare: n - numarul de elemente, a - tabloul de inaltime; La iesire: valoare minima;
int Maximum(int n , int a[]); //La intrare: n - numarul de elemente, a - tabloul de inaltime; La iesire: valoare maxima;
float Media(int n, int a[]); //La intrare: n - numarul de elemente, a - tabloul de inaltime; La iesire: valoare medie;
int Sortare(int n, int a[]);//La intrare: n - numarul de elemente, a - tabloul de inaltime; La iesire: a - tabloul aranjat; Functia intoarce: 1 - OK; 0 - Eroare
int Rotire(int n, int a[]); //La intrare: n - numarul de elemente, a - tabloul de inaltime; La iesire: a - tabloul rotit; Functia intoarce: 1 - OK; 0 - Eroare
int Adougare(int &n, int a[], int val); //La intrare: n - numarul de elemente, a - tabloul de inaltime, val - element adaugat; La iesire: n - mareste cu 1, a - tabloul
int Adaugare(int &n, int a[], int val, char);
int Adaugare(int &n, int a[], int val, int p);//inainte de p- pozitia
int Adaugare(int &n, int a[], int val, int p, char);// dupa p
int Cautare(int n, int a[], int val); //La intrare: n - numarul de elemente, a - tabloul de inaltime, val - element adaugat; La iesire: p - pozitia sau -1
int Stergere(int &n, int a[], int val); //La intrare: n - numarul de elemente, a - tabloul de inaltime, val - element adaugat; La iesire: n - mareste cu 1, a - tabloul
int Clasificare(int &n, int a[], int m, int b[]); //La intrare: n - numarul de elemente, a - tabloul de inaltime, m - numarul de clasificari; La iesire: b - tabloul nou
int Generare(int n, int a[]); //La intrare: n - numarul de elemente; La iesire: a - tabloul de inaltime; Functia intoarce: 1 - OK; 0 - Eroare
int main()
{
    int key;
    int n = 10, m;
    int ncaut;
    int val;
    int inaltime[NMAX] = { 171, 176, 174, 173, 172, 175, 177, 178, 180, 179 };
    char nume [][20] = {" pitic", " inaltimea mica" ,"inaltimea normala" , "inaltimea mare", "gigant"};
    int categorii[] = {0,0,0,0,0};
    cout << "Proiect nr.3 elaborat de Novicov Daniil" << endl;
    /*do
    {
        cout <<"Introduceti cati oameni sunt intr-o echipa: " ;
        cin >> n;
        Citire (n, inaltime);
    } while (n == 0);*/
    cout <<"Introduceti cati oameni sunt intr-o echipa: " ;
    cin >> n ;
    Citire(n, inaltime);
    cout << "Tabloul de inaltime ocupa: " << sizeof(inaltime) << " Bt" << endl;
    do
    {
        system("cls");
        cout << "Proiect nr.3 elaborat de Novicov Daniil" << endl;
        cout << "Tema: Inaltimile sportivilor la o competitie" << endl;
        cout << "\n1. De determinat intr-un tabel de numere inaltimea minima si inaltimea maxima";
        cout << "\n2. De determinat intr-un tabel de numere inaltimea medie";
        cout << "\n3. De aranjat un tabel de inaltimea in ordine crescatoare sau descrescatoare";
        cout << "\n4. De efectuat rotirea la stanga a elementelor tabelului de 5 ori";
        cout << "\n5. De adaugat date in tabelul de numerele";
        cout << "\n6. De sters date din tabelul de numerele";
        cout << "\n7. Clasificare(nr. de sportivi cu inaltimea in limitele indicate)";
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
            case 4:
                Afisare(n, inaltime, " inital");
                Rotire(n, inaltime);
                Afisare(n, inaltime, " rotit");
                break;
            case 5:
                Afisare(n, inaltime, " inital");
                Adaugare(n, inaltime, 178 ,'A');
                Afisare(n, inaltime, " Adaugat");
                break;
            case 6:
                cout << "\n Introduceti ce valoare trebuie de sters: ";
                cin >> ncaut;
                if ((val = Cautare(n, inaltime, ncaut)) != -1)
                Stergere(n, inaltime, /*val*/Cautare(n, inaltime, ncaut));
                Afisare(n, inaltime, " sters");
                break;
            case 7:
                Afisare(n, inaltime , " initial");
                Clasificare(n, inaltime, m, categorii);
                Afisare(m, categorii , nume);

        }
        getch();
    } while(key);

    return 0;
}
int Citire(int n, int a[])
{
    /*if (n == 0)
        return 0;
    for (int i=0; i<n ; i++)
    {
        cout << i << "inaltime: ";
        cin >> a [i];
    }
    return 1;*/
    int key;
    int i;
        cout << "\n 1. De la tastatura";
        cout << "\n 2. De generat aleator";
        cout << "\n 3. De generat intr-un mod special";
        cout << "\n 4. Din fisier";
        cout << "\n 5. Implicit";
        cout << "\n\n\t Alege -> ";
        cin >> key;
        switch(key) {
             case 1:
                 for (i = 0; i < n; i++) {
                 cout << "Inaltimea sportivului cu nr. " << i + 1 << ": ";
                 cin >> a[i];
        }
        break;
             case 2:
                for (i = 0; i < n; i++)
                a[i] = rand() % 20 + 170;
                break;
             case 3:
                for (i = 0; i < n; i++)
                a[i] = i % 20 + 170;
                break;
    }
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
    //1
    /*for (int j = 0; j < 3; j++)
    {
        int temp = a[0];
        for (int i = 0; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[n - 1] = temp;
    }*/
    //2
     int i, b[NMAX];
    for ( i = 0; i < 5; i++ )
        b[i] = a[i];
    for( i = 5; i < n; i++)
        a[i-5]=a[i];
    for ( i = n - 5; i < n ; i++)
        a[i]=b[i- n + 5 ];
    return 1;
}
int Adaugare(int &n, int a[], int val)
{
    for (int i = n; i > 0 ; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
        n++;
}
int Adaugare(int &n, int a[], int val, char)//la capat
{
        a[n++] = val;
}
int Adaugare(int &n, int a[], int val, int p)//la inceput
{
        for (int i = n; i > 0 ; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
        n++;
}
int Adaugare(int &n, int a[], int val, int p, char)//la inceput
{
        for (int i = n; i > 0 ; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
        n++;
}
int Cautare(int n, int a[], int val)
{
     for ( int i = 0; i <= n; i++)
    {
        if (a[i] == val )
            return i;
    }
    return -1 ;
}
int Stergere(int &n, int a[], int val)
{
    if (val != -1)
    {
        for (int i = val; i <= n; i++)
        {
            a[i] = a[i+1];
        }
    }

    return 1;
}
int Clasificare(int n, int a[], int m, int b[])
{
    int i,j, m = 5;
    int limite[] = {150, 160, 170 ,180 ,190};
    for ( i = 0; i < n; i++)
        b[m]=0;
    for ( i = 0; i < n; i++)
         for ( j = 0; j < n; j++)
    if (a[i] <= limite[j]) {
     categorii[j]++;
    break;
    }

    return 1;
}
int Generare(int n, int a[])
{
    return 1;
}

