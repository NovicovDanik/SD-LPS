#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
//#include <conio.h>

using namespace std;
//interfata
int NrCuvinte(char sir[]);
int CuvinteLungMare6(char sir[]);
int NrCuvinteLungMic5(char sir[]);
int NrCuvinte();
int CuvinteLungMare6();
int CuvinteLungMic5();
int TransferCuvinteLungMic5(char sir[]);
int EliminaCuvinteLungMic5(char sir[]);
void ViewFile(char nume[]);
void CopiaRezerva(char nume[]);


int main()
{
    int opt;
    char fraza[81] = "Ana Virlan prieteneste cu Ana Cabac, iar Daniil Novicov - nu.";
    cout << "Proiect nr.5 elaborat de Novicov Daniil" << endl;
    cout << "Tema: Siruri de caractere. Fisiere text" << endl;
    do {
        cout << "\n 1. Numarul de cuvinte dintr-o fraza";
        cout << "\n 2. Cuvintele lungimea cărora e mai mare ca 6 dintr- o fraza";
        cout << "\n 3. Cuvinte lungimea carora e mai mica decat 5";
        cout << "\n 4. Numarul de cuvinte dintr-un fisier";
        cout << "\n 5. Cuvintele lungimea cărora e mai mare ca 6 dintr-un fisier";
        cout << "\n 6. Cuvinte lungimea carora e mai mica decat 5 dintr-un fisier";
        cout << "\n 7. De înscris în alt fişier text cuvintele, care e mai mica decat 5";
        cout << "\n 8. De sters cuvintele de lungime mai mica decat 5";
        cout << "\n 9. Copia de Rezerva a fisierului";
        cout << "\n 0. Stop";
        cout << "\n\n\t Alege de la 0 la 8 -> ";
        cin >> opt;
        switch(opt)
        {
            case 1:
                cout << "Fraza initiala \n";
                puts(fraza);
                if (int n = NrCuvinte(fraza)) cout << "\nIn total " << n << " cuvinte\n";
                else  cout <<"Nu-s cuvinte\n";
                break;
            case 2:
                cout << "Fraza initiala \n";
                puts(fraza);
                if (int n = CuvinteLungMare6(fraza)) cout << "\nIn total " << n << " cuvinte\n";
                else  cout <<"Nu-s cuvinte\n";
                break;
            case 3:
                cout << "Fraza initiala \n";
                puts(fraza);
                if (int n = CuvinteLungMic5(fraza)) cout << "\nIn total " << n << " cuvinte\n";
                else  cout <<"Nu-s cuvinte\n";
                break;
        }
        fflush(stdin); //o4istka bufera
        cout << "Apasa-ma";
    getchar();
    } while(opt);
    return 0;
}


int NrCuvinte(char sir[])
{
    char copia[81], *cuvint;
    int n = 0;
    strcpy(copia, sir);
    if ((cuvint = strtok(copia, " ,.:\n\t-")) == NULL) return 0;
    n = 1;
    while ((cuvint = strtok(NULL, " ,.:\n\t-")) != NULL)
        n++;

    return n;
}
int CuvinteLungMare6(char sir[])
{
    char copia[81], *cuvint;
    int n = 0;
    strcpy(copia, sir);
    if ((cuvint = strtok(copia, " ,.:\n\t-")) == NULL) return 0;
    n = 1;
    while ((cuvint = strtok(NULL, " ,.:\n\t-")) != NULL)
        if (strlen(cuvint) >=5) {
        n++;
        cout << cuvint;
}
    while ((cuvint = strtok(NULL, " ,.:\n\t-")) != NULL)
        if (strlen(cuvint) >=5) {
        n++;
        cout << cuvint;
}
    return n;
}
int CuvinteLungMic5(char sir[])
{
    char copia[81], *cuvint;
    int n = 0;
    strcpy(copia, sir);
    if ((cuvint = strtok(copia, " ,.:\n\t-")) == NULL) return 0;
    n = 1;
    while ((cuvint = strtok(NULL, " ,.:\n\t-")) != NULL)
        if (strlen(cuvint) >=5 ) {
        n++;
        cout << cuvint;
}
    while ((cuvint = strtok(NULL, " ,.:\n\t-")) != NULL)
        if (cstrlen(cuvint) >=5) {
        n++;
        cout << cuvint;
}
    return n;
}
int NrCuvinte()
{
    return 1;
}
int CuvinteLungMare6()
{
    return 1;
}
int NrCuvinteLungMic5()
{
    return 1;
}
int TransferCuvinteLungMic5(char sir[])
{
    return 1;
}
int EliminaCuvinteLungMic5(char sir[])
{
    return 1;
}
void ViewFile(char nume[])
{

}
void CopiaRezerva(char nume[])
{

}


