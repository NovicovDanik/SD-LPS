#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;
void Inscriere();
void Afisare();
void Adaugare();
void Modificare();

void AranjareAlfabetica();
void AranjareCat();
void AdaugCat();

void Lista1();
void Lista2();
void Lista3();
void Lista4();
void Lista5();

int main()
{
    int opt;
    do
    {
        system("cls");
        cout << "Proiect nr.6 elaborat de Novicov Daniil" << endl;
        cout << "Tema: Structuri. Fisiere Binare. Fisiere Proiect" << endl;
        cout << "1. Inscriere" << endl;
        cout << "2. Afisare" << endl;
        cout << "3. Adaugare" << endl;
        cout << "4. Modificare" << endl;
        cout << "5. Adaug Media" << endl;
        cout << "6. Aranjare 1" << endl;
        cout << "7. Aranjare 2" << endl;
        cout << "8. Lista sportivilor petic" << endl;
        cout << "9. Lista sportivilor cu inaltimea mica" << endl;
        cout << "10. Lista sportivilor cu inaltimea medie" << endl;
        cout << "11. Lista sportivilor cu inaltimea mare" << endl;
        cout << "12. Lista sportivilor gigant" << endl;
        cout << "0. Stop" << endl;
        cout << "\n\t Alege de la 0 la 12 -> ";
        cin>>opt;
        switch(opt)
        {
            case 1: Inscriere();break;
            case 2: Afisare();break;
            case 3: Adaugare();break;
            case 4: Modificare();break;
            case 5: AdaugCat();break;
            case 6: AranjareAlfabetica();break;
            case 7: AranjareCat();break;
            case 8: Lista1();break;
            case 9: Lista2();break;
            case 10: Lista3();break;
            case 11: Lista4();break;
            case 12: Lista5();break;
        }
       getch();
    } while (opt);


    return 0;
}
