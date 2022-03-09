#include <iostream>
#include <iomanip>
#define SMAX 200

using namespace std;
int main()
{
    int n = 10; //Numarul de sportivi
    int sport;
    int minim, maxim ;
    int raznita;
    int val, maimic = 0, egal = 0, maimare = 0;
    int jos, sus;
    int contor = 0;
    int gigant = 0 , mare = 0, medie = 0 , mic = 0 , pitic = 0;
    float media;
    cout << "Pr. Nr 1 elaborat de Novicov Daniil" << endl;
    cout << "Tema: Inaltimile sportivilor la o competitie" << endl;
    // 0. Citirea datelor
    cout << "Cati sportivi? " ;
    cin >> n;
    cout << "Introduceti o inaltimea standarta (cm): ";
    cin >> val;
    cout << "Introduceti limitele de inaltimea de jos si de sus (cm): ";
    cin >> jos >> sus;
    cout << "Indica inaltimea (cm):" ;
    media = 0;
    maxim = -SMAX;
    minim = +SMAX;
    int i = 1;
    while ( i <= n )
    {
        cin >> sport;
    //1. De determinat cea mai mică și cea mai mare valoare (valorile minimă și maximă)
        if (sport > maxim)
            maxim = sport;
        media += sport;
        if (sport < minim)
            minim = sport;
    //4. De determinat numarul de valori, egale, mai mici sau mai mari ca o valoare indicata.
        if (sport < val) maimic++;
        else if (sport > val) maimare++;
        else  egal++;
    //5. De determinat o caracteristica, specifica problemei rezolvate
        if (sport <= sus & sport >= jos) contor+=1;

        if (sport >= 195 ) gigant++;
        else if (sport >= 185) mare++;
        else if (sport >= 170) medie++;
        else if (sport >= 150) mic++;
        else pitic++;
        i++;
    }
    //2. De determinat decalajul (diferența între valorile minimă și maximă)
    raznita = maxim - minim;
    //3. De determinat media valorilor
    media /= n;
    cout << "1.\t Inaltimea minima: " << minim << endl;
    cout << "\t Inaltimea maxima: " << maxim << endl;
    cout << "2.\t Decalajul: " << raznita << endl;
    cout << "3.\t Media: " << setprecision(5) << media;
    if (media - (int)media > 0) cout << "0";
    cout << endl;
    cout << "4.\t Numarul de sportivi inalti: " << maimare << "; Numarul de sportivi cu inaltimea mica: " << maimic << "; Egal: " << egal << endl;
    cout << "5.\t Numerele de sportivi de la " << jos << " la " << sus << endl;
    cout <<"\t In total: " << contor << " sportivi" << endl;
    cout <<"Sportiv pitic: " << pitic << endl;
    cout <<"Sportivi cu inaltimea mica: " << mic << endl;
    cout <<"Sportivi cu inaltimea medie: " << medie << endl;
    cout <<"Sportivi cu inaltimea mare: " << mare << endl;
    cout <<"Sportiv gigant: " << gigant << endl;

    return 0;
}
