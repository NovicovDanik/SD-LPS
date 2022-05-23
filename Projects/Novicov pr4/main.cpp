#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#include <conio.h>
#define NMAX 10
using namespace std;
//Interfata programului
int Citire(int n, int a[]);
void Afisare(int l, int c, int a[NMAX][NMAX], char s[]);

//void Afisare(int n, int a[], char s[], char gen);
int Minimum(int l, int c, int a[NMAX][NMAX]);
int Maximum(int l, int c, int a[NMAX][NMAX]);
int Interschimb(int l, int c, int a[NMAX][NMAX]);
int AdaugLinia(int &l, int &c, int a[NMAX][NMAX]);
int Aranjare(int l, int c, int a[NMAX][NMAX]);
int Generare(int s, int b[NMAX][NMAX]);

int main()
{
    int key;
    int n = 10, poz = 5, m = 5;
    int ncaut;
    int val;
    int b[NMAX][NMAX];
    int l = 3 , c = 3;
    int inaltime[NMAX][NMAX] = { {171, 176, 174},{173, 172, 175},{177, 178, 180} };
    char nume [][20] = { " pitic",  " inaltimea mica" ," inaltimea medie" , " inaltimea mare", " gigant"};
    int categorii[] = {0,0,0,0,0,0};
    int gener[NMAX];
    /*cout <<"Introduceti cati oameni sunt intr-o echipa: " ;
    cin >> n ;
    Citire(n, inaltime);*/
    cout << "Tabloul de inaltime ocupa: " << sizeof(inaltime) << " Bt" << endl;
    do
    {
        system("cls");
        cout << "Proiect nr.4 elaborat de Novicov Daniil" << endl;
        cout << "Tema: Inaltimile sportivilor la o competitie" << endl;
        cout << "\n1. De determinat intr-o matrice valorile minima si maxima si pozitiile lor";
        cout << "\n2. De interschimbat 2 linii";
        cout << "\n3. De adaugat o linie si / sau coloana, de completat cu caracteristica conform variantei";
        cout << "\n4. De aranjat o matrice dupa linia sau coloana adaugata";
        cout << "\n5. De generat o matrice conform variantei";
        cout << "\n\n\t Alegeti de la 0 la 5 -> ";
        cin >> key;
        switch(key)
        {
            case 1:
                Afisare(l, c, inaltime, "inital");
                Minimum(l, c, inaltime);
                Maximum(l, c, inaltime);
                break;
            case 2:
                Afisare(l, c, inaltime, "inital");
                Interschimb(l, c, inaltime);
                Afisare(l, c, inaltime, "schimbata");
                break;
            case 3:
                Afisare(l, c, inaltime, "inital");
                AdaugLinia(l, c, inaltime);
                Afisare(l, c, inaltime, "adaugata");
                break;
            case 4:
                Afisare(l, c, inaltime, "inital");
                Aranjare(l, c, inaltime);
                Afisare(l, c, inaltime, "aranjata");
                break;
            case 5:
                Afisare(l, c, inaltime, "inital");
                cout << "n = ";
                cin >> n;
                Generare(n, b);
                Afisare(n, n, b, "generata");
                break;
        }
        getch();
    } while(key);

    return 0;
}
int Citire(int n, int a[])
{
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
                a[i] = rand() % 201 + 50;
                break;
             case 3:
                for (i = 0; i < n; i++)
                a[i] = i % 50 + 150;
                break;
    }
    return 1;
}
void Afisare(int l, int c, int a[NMAX][NMAX], char s[])
{
    cout << "\nMatricea de inaltime " << s << " \n";
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << setw(12) << a[i][j];
        }
        cout << endl;
    }
}
int Minimum(int l, int c, int a[NMAX][NMAX])
{
    int aux;
    for (int i = 0; i < l; i++)
    {
        aux = a[i][0];
        for (int j = 0; j < c; j++)
        {
            if(aux > a[i][j])
                aux = a[i][j];
        }
        cout << "\nInaltimea minima sportivului cu nr." << i+1 << " este: " << aux << endl;
    }
    return aux;
}
int Maximum(int l, int c, int a[NMAX][NMAX])
{
    int aux;
    for (int i = 0; i < l; i++)
    {
        aux = a[i][0];
        for (int j = 0; j < c; j++)
        {
            if(aux < a[i][j])
                aux = a[i][j];
        }
        cout << "\nInaltimea maxima sportivului cu nr." << i+1 << " este: " << aux << endl;
    }
    return aux;
}
int Interschimb(int l, int c, int a[NMAX][NMAX])
{
    int lb, le;

    int temp;
    cout << "Introduceti linia 1 ";
    cin >> lb;
    cout << "Introduceti linia 2 ";
    cin >> le;
    for (int j = 0; j < c; j++)
    {
        temp = a[lb-1][j];
        a[lb-1][j] = a[le-1][j];
        a[le-1][j] = temp;
    }

	return 0;
}
int AdaugLinia(int &l, int &c, int a[NMAX][NMAX])
{
    float AdLinia;
    for (int j = 0; j < c; j++)
    {
        AdLinia = 0;
        for (int i = 0; i < l; i++)
        {
              AdLinia += a[i][j];
;
        }
        AdLinia = (float)(AdLinia/l);
        a[l][j] = AdLinia;
    }
    l++;
    return 1;
}
int Aranjare(int l, int c, int a[NMAX][NMAX])
{
    int aux;
    int key;
            for (int h = 0; h < c-1; h++)
            {
             for (int j = 0; j < c-1; j++)
            {
                if (a[l-1][j] == a[l-1][j+1])
                {


                        for (int i = 0; i < l; i++)
                        {
                            aux = a[i][j];
                            a[i][j] = a[i][j+1];
                            a[i][j+1] = aux;
                        }

                }
                else if (a[l-1][j] < a[l-1][j+1])
                {
                    for (int i = 0; i < l; i++)
                    {
                        aux = a[i][j];
                        a[i][j] = a[i][j+1];
                        a[i][j+1] = aux;
                    }
                }
            }
            }

    return 1;
}
int Generare(int s, int b[NMAX][NMAX])
{
    int aux = 1;
        for(int i = 0; i < s; ++i)
        {
       if(i % 2 == 0)
       {
          for(int j = 0; j < s; ++j)
          {
           b[i][j] = aux;
            aux++;
          }

       }
       else
       {
          for(int j = s; j > 0; )
          {
           b[i][--j] = aux;
            aux++;
          }

       }

        }
    return 1;
}
