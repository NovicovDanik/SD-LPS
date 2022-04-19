#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <conio.h>
#include "nsportivi.h"
void Linia(int, int, int, int);
void Lista1()
{
Sport sport;
     FILE *f;
     int n = 0, np;
     f = fopen("file.in", "rb");
     printf("\n Lista sportivilor petic");
     Linia(201, 205, 209, 187);
     printf("\n%c Nr%c ID %2c Numele sport %2cData nast.%cDisciplina%cInalt%cGreut%cCateg%c",
            186, 179, 179, 179, 179, 179, 179, 179, 186);
     Linia(199, 196, 197, 182);
     while(fread(&sport, sizeof(Sport),1, f)>0)
     {
         np = 0;
         for(int i=0; i < 150; i++)
            //if(sport.inalt[i]>150)
         n++;
         printf("\n%c%2d %c %d %c%-15.15s%c%02d.%02d.%4d%c%-10.10s%c %3d %c %3d %c %3d %5c",
            186, n, 179, sport.id, 179, sport.nume, 179, sport.dn.zi,sport.dn.luna,sport.dn.an, 179, sport.dis ,179, sport.inalt, 179, sport.greu, 179, sport.categoria, 186);
     }
     Linia(200, 205, 207, 188);
     fclose(f);
}
void Lista2()
{

}
void Lista3()
{

}
void Lista4()
{

}
void Lista5()
{

}
