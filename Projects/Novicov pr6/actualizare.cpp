#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include "nsportivi.h"
void Inscriere()
{
    FILE *ft, *f;
    Sport sport;
    char fam[15];
    ft = fopen("file.txt", "r");
    f = fopen("file.in", "wb");
    while(fscanf(ft, "%d %s %s %d %d %d %s %d %d",
                &sport.id, sport.nume, fam, &sport.dn.zi, &sport.dn.luna, &sport.dn.an,
                &sport.dis, &sport.inalt, &sport.greu)!= EOF)
    {
        strcat(sport.nume, " ");
        strcat(sport.nume, fam);
        printf("\n%s", sport.nume);
        fwrite(&sport, sizeof(Sport),1, f);
    }
    printf("\nOk");
    fclose(ft);
    fclose(f);
}
void Linia (int st, int lin, int mij, int dr)
{
    int i;
    printf("\n%c", st);
    for (i=1; i<=3; i++) printf("%c", lin); printf("%c", mij);
    for (i=1; i<=5; i++) printf("%c", lin); printf("%c", mij);
    for (i=1; i<=25; i++) printf("%c", lin); printf("%c", mij);
    for (i=1; i<=15; i++) printf("%c", lin); printf("%c", mij);
    for (i=1; i<=15; i++) printf("%c", lin); printf("%c", mij);
    for (i=1; i<=5; i++) printf("%c", lin); printf("%c", mij);
    for (i=1; i<=5; i++) printf("%c", lin); printf("%c", mij);
    for (i=1; i<=5; i++) printf("%c", lin); printf("%c", dr);
}
void Afisare()
{
    Sport sport;
     FILE *f;
     int n = 0;
     f = fopen("file.in", "rb");
     printf("\n Lista initiala a sportivilor");
     Linia(201, 205, 209, 187);
     printf("\n%c Nr%c ID %2c Numele sportivilor %6cData nasterii%3cDisciplina%6cInalt%cGreut%cCateg%c",
            186, 179, 179, 179, 179, 179, 179, 179, 186);
     Linia(199, 196, 197, 182);
     while(fread(&sport, sizeof(Sport),1, f)>0)
     {
         n++;
         printf("\n%c%3d%c %d %c%-25.25s%c%02d.%02d.%4d%6c%-15.15s%c %3d %c %3d %c %d %c",
            186, n, 179, sport.id, 179, sport.nume, 179, sport.dn.zi,sport.dn.luna,sport.dn.an, 179, sport.dis ,179, sport.inalt, 179, sport.greu, 179, sport.categoria, 186);
     }
     Linia(200, 205, 207, 188);
     fclose(f);
}
void Adaugare()
{
    FILE *ft, *f;
    Sport sport;
    char fam[15];
    ft = fopen("file2.txt", "r");
    f = fopen("file.in", "ab");
    while(fscanf(ft, "%d %s %s %d %d %d %s %d %d",
                &sport.id, sport.nume, fam, &sport.dn.zi, &sport.dn.luna, &sport.dn.an,
                &sport.dis, &sport.inalt, &sport.greu)!= EOF)
    {
        strcat(sport.nume, " ");
        strcat(sport.nume, fam);
        printf("\n%s", sport.nume);
        fwrite(&sport, sizeof(Sport),1, f);
    }
    printf("\nOk");
    fclose(ft);
    fclose(f);
}
void Modificare()
{
    FILE *f;
    Sport sportivi[100];
    Sport sport;
    char fam[15];
    int i = 0;
    f = fopen("file.in", "rb");

    while(fread(&sport, sizeof(Sport), 1, f) > 0)
    {
      sportivi[i] = sport;
      i++;
    }
    printf("\nOk");
    fclose(f);
}
