#include <iostream>

using namespace std;
int main()
{
    int tara1, tara2;
    int minim, maxim;
    int raznita;
    float media;
    cout << "Pr. Nr 1 elaborat de Gavtilita Dorin" << endl;
    cout << "Tema: Populatia Tarilor" << endl;
    // 0. Citirea datelor
    cout << "Indica populatia 2 tari:";
    cin >> tara1 >> tara2;
    // 1. De determinat cea mai mică și cea mai mare valoare (valorile minimă și maximă)
    if (tara1 > tara2){
     minim = tara2;
     maxim = tara1;
    }
    else {
     minim = tara1;
     maxim = tara2;
    }
    //2. De determinat decalajul (diferența între valorile minimă și maximă)
    raznita = maxim - minim;
    //3. De determinat media valorilor
    media = (float)(tara1 + tara2)/2;
    cout << "1.\t Samoe malenikoe naselenie: " << minim << endl;
    cout << "\t Samoe bolishoe naselenie: " << maxim << endl;
    cout << "2.\t Razinta: " << raznita << endl;
    cout << "3.\t Srednee: " << media << endl;
    return 0;
}
