#include <iostream>

using namespace std;
int main()
{
    int sport1, sport2;
    int minim, maxim;
    int raznita;
    int val, maiMic = 0, egal = 0, maiMare = 0;
    int jos, sus;
    int contor=0;
    float media;
    cout << "Pr. Nr 1 elaborat de Novicov Daniil" << endl;
    cout << "Tema: Inaltimile sportivilor la o competitie" << endl;
    // 0. Citirea datelor
    cout << "Indica inaltimea a 2 sportivi:";
    cin >> sport1 >> sport2;
    // 1. De determinat cea mai mică și cea mai mare valoare (valorile minimă și maximă)
    if (sport1 > sport2)
    {
     minim = sport2;
     maxim = sport1;
    }
    else
    {
     minim = sport1;
     maxim = sport2;
    }
    //2. De determinat decalajul (diferența între valorile minimă și maximă)
    raznita = maxim - minim;
    //3. De determinat media valorilor
    media = (float)(sport1 + sport2)/2;
    cout << "1.\t Inaltimea minima: " << minim << endl;
    cout << "\t Inaltimea maxima: " << maxim << endl;
    cout << "2.\t Decalajul: " << raznita << endl;
    cout << "3.\t Media: " << media << endl;
    //4. De determinat numarul de valori, egale, mai mici sau mai mari ca o valoare indicata.
    cout << "Introduceti o valoare: ";
    cin >> val;
    if (sport1 < val) maiMic++;
    else
        if (sport1 > val) maiMare++;
        else egal++;
    if (sport2 < val) maiMic++;
    else
        if (sport2 > val) maiMare++;
        else egal++;
    cout << "4.\t Mai mare decat valoare: " << maiMare << "; Mai mic decat valoare: " << maiMic << "; Egal cu valoare: " << egal << endl;
    //5. De determinat o caracteristica, specifica problemei rezolvate
    cout << "Introduceti limitele de jos si de sus: ";
    cin >> jos >> sus;
    cout << "5.\t Numerele de sportivi de la " << jos << " la " << sus << endl;
    if (sport1 <= sus & sport1 >= jos) contor+=1;
    if (sport2 <= sus & sport2 >= jos) contor+=1;
    cout <<"\t In total: " << contor << " numere";

    return 0;
}
