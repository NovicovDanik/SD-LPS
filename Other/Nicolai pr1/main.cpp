#include <iostream>


using namespace std;

int main()
{

 int nota1, nota2;
    int maximum, minimum;
    int decalaj;
    float media;
    int val, maiMic = 0, egal = 0, maiMare = 0;
    float reusit = 0, calit = 0;
    cout << "Proiect nr.1 elaborat de Driga Nicolai" << endl;
    cout << "Tema: Notele studentilor\n";

    //0. Citirea datelor
    cout << "\nIntroduceti notele 2 studentilor: ";
    cin >> nota1 >> nota2;

    //1. De determinat cea mai mica ?i cea mai mare valoare (valorile minima ?i maxima).
    if (nota1 < nota2)
    {
        minimum = nota1;
        maximum = nota2;
    }
    else
    {
        minimum = nota2;
        maximum = nota1;
    }

    //2. De determinat decalajul (diferen?a intre valorile minima ?i maxima).
    decalaj = maximum - minimum;

    //3. De determinat media valorilor.
    media = (float)(nota1 + nota2)/2;

    //4. De determinat numarul de valori, egale, mai mici sau mai mari ca o valoare indicata.
    cout << "Introduceti o valoare: ";
    cin >> val;
    if (nota1 < val) maiMic++;
    else
        if (nota1 > val) maiMare++;
        else egal++;
    if (nota2 < val) maiMic++;
    else
        if (nota2 > val) maiMare++;
        else egal++;

    //5. De determinat o caracteristica, specifica problemei rezolvate.
    if (nota1 >= 5) reusit++;
    if (nota2 >= 5) reusit++;
    reusit = (reusit / 2) * 100;
    if (nota1 >= 8) calit++;
    if (nota2 >= 8) calit++;
    calit = (calit / 2) * 100;
    cout << "\n1. Cea mai mare nota este: " << maximum << " Cea mai mica nota este: " << minimum << endl;
    cout << "2. Decalajul notelor este egal: " << decalaj << endl;
    cout << "3. Media notelor este egala: " << media << endl;
    cout << "4. Mai mare decat valoare: " << maiMare << "; Mai mic decat valoare: " << maiMic << "; Egal cu valoare: " << egal << endl;
    cout << "5. %reusitei: " << reusit << "; %calitatii: " << calit << endl;
    return 0;
}
