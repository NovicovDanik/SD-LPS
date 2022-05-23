#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include "nsportivi.h"
void AranjareAlfabetica()
{
  FILE *f;
    Sport sportivi[100];
    Sport spor, aux;
    char fam[15];
    int i = 0;
    int cit = 0;
    f = fopen("file.in", "rb");
    while(fread(&spor, sizeof(Sport), 1, f) > 0)
    {
        sportivi[i] = spor;
        i++;
        cit = i;
    }
    fclose(f);
    for(i = 0; i < cit; i++)
    {
        bool flag = true;
        for(int j = 0; j < cit - (i+1); j++)
        {
            int cmp = strcmp(sportivi[j].nume, sportivi[j+1].nume);
            if (cmp > 0)
            {
                flag = false;
                aux = sportivi[j];
                sportivi[j] = sportivi[j+1];
                sportivi[j+1] = aux;
            }
        }
        if (flag) break;
    }
    f = fopen("file.in", "wb");
    for (i = 0; i < cit; i++)
    {
       fwrite(&sportivi[i], sizeof(Sport), 1, f);
    }
    fclose(f);
    printf("\nAranjarea a fost facuta");
}
void AranjareCat()
{
    FILE *f;
    Sport sportivi[100];
    Sport spor, aux;
    char fam[15];
    int i = 0;
    int cit = 0;
    f = fopen("file.in", "rb");
    while(fread(&spor, sizeof(Sport), 1, f) > 0)
    {
        sportivi[i] = spor;
        i++;
        cit = i;
    }
    fclose(f);
    for(i = 0; i < cit; i++)
    {
        bool flag = true;
        for(int j = 0; j < cit - (i+1); j++)
        {

            if (sportivi[j].categoria > sportivi[j+1].categoria)
            {
                flag = false;
                aux = sportivi[j];
                sportivi[j] = sportivi[j+1];
                sportivi[j+1] = aux;
            }
        }
        if (flag) break;
    }
    f = fopen("file.in", "wb");
    for (i = 0; i < cit; i++)
    {
       fwrite(&sportivi[i], sizeof(Sport), 1, f);
    }
    fclose(f);
    printf("\nAranjarea a fost facuta");
}
void AdaugCat()
{
    FILE *f;
    Sport sportivi[100];
    Sport sport;
    char fam[15];
    int i = 0;
    int cit = 0;
    f = fopen("file.in", "rb");
    while(fread(&sport, sizeof(Sport), 1, f) > 0)
    {
        sportivi[i] = sport;
        if (sportivi[i].inalt >= 185) sportivi[i].categoria = 1;
        else if (sportivi[i].inalt >= 170 && sportivi[i].inalt < 185 ) sportivi[i].categoria = 2;
        else if (sportivi[i].inalt < 170 ) sportivi[i].categoria = 3;
        i++;
        cit = i;
    }
    fclose(f);
    f = fopen("file.in", "wb");
    for (i = 0; i < cit; i++)
    {
       fwrite(&sportivi[i], sizeof(sport), 1, f);
    }
    fclose(f);
    printf("\nCategoriile au fost adaugate");
}
