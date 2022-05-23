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
     printf("\n Lista sportivilor pitic");
     Linia(201, 205, 209, 187);
     printf("\n%c Nr%c ID %2c Numele sportivilor %6cData nasterii%3cDisciplina%6cInalt%cGreut%cCateg%c",
            186, 179, 179, 179, 179, 179, 179, 179, 186);
     Linia(199, 196, 197, 182);
     while(fread(&sport, sizeof(Sport),1, f)>0)
     {

            if(sport.inalt <= 150)
            {
                n++;
                printf("\n%c%3d%c %d %c%-25.25s%c%02d.%02d.%4d%6c%-15.15s%c %3d %c %3d %c  %d  %c",
            186, n, 179, sport.id, 179, sport.nume, 179, sport.dn.zi,sport.dn.luna,sport.dn.an, 179, sport.dis ,179, sport.inalt, 179, sport.greu, 179, sport.categoria, 186);
            }

     }
     Linia(200, 205, 207, 188);
     fclose(f);
}
void Lista2()
{
    Sport sport;
     FILE *f;
     int n = 0, np;
     f = fopen("file.in", "rb");
     printf("\n Lista sportivilor cu inaltimea mica");
     Linia(201, 205, 209, 187);
     printf("\n%c Nr%c ID %2c Numele sportivilor %6cData nasterii%3cDisciplina%6cInalt%cGreut%cCateg%c",
            186, 179, 179, 179, 179, 179, 179, 179, 186);
     Linia(199, 196, 197, 182);
     while(fread(&sport, sizeof(Sport),1, f)>0)
     {

            if(sport.inalt >= 150 && sport.inalt <= 170)
            {
                n++;
                printf("\n%c%3d%c %d %c%-25.25s%c%02d.%02d.%4d%6c%-15.15s%c %3d %c %3d %c  %d  %c",
            186, n, 179, sport.id, 179, sport.nume, 179, sport.dn.zi,sport.dn.luna,sport.dn.an, 179, sport.dis ,179, sport.inalt, 179, sport.greu, 179, sport.categoria, 186);
            }

     }
     Linia(200, 205, 207, 188);
     fclose(f);
}
void Lista3()
{
    Sport sport;
     FILE *f;
     int n = 0, np;
     f = fopen("file.in", "rb");
     printf("\n Lista sportivilor cu inaltimea medie");
     Linia(201, 205, 209, 187);
     printf("\n%c Nr%c ID %2c Numele sportivilor %6cData nasterii%3cDisciplina%6cInalt%cGreut%cCateg%c",
            186, 179, 179, 179, 179, 179, 179, 179, 186);
     Linia(199, 196, 197, 182);
     while(fread(&sport, sizeof(Sport),1, f)>0)
     {

            if(sport.inalt >= 170 && sport.inalt <= 185)
            {
                n++;
                printf("\n%c%3d%c %d %c%-25.25s%c%02d.%02d.%4d%6c%-15.15s%c %3d %c %3d %c  %d  %c",
            186, n, 179, sport.id, 179, sport.nume, 179, sport.dn.zi,sport.dn.luna,sport.dn.an, 179, sport.dis ,179, sport.inalt, 179, sport.greu, 179, sport.categoria, 186);
            }

     }
     Linia(200, 205, 207, 188);
     fclose(f);
}
void Lista4()
{
    Sport sport;
     FILE *f;
     int n = 0, np;
     f = fopen("file.in", "rb");
     printf("\n Lista sportivilor cu inaltimea mare");
     Linia(201, 205, 209, 187);
     printf("\n%c Nr%c ID %2c Numele sportivilor %6cData nasterii%3cDisciplina%6cInalt%cGreut%cCateg%c",
            186, 179, 179, 179, 179, 179, 179, 179, 186);
     Linia(199, 196, 197, 182);
     while(fread(&sport, sizeof(Sport),1, f)>0)
     {

            if(sport.inalt >= 185 && sport.inalt <= 195)
            {
                n++;
                printf("\n%c%3d%c %d %c%-25.25s%c%02d.%02d.%4d%6c%-15.15s%c %3d %c %3d %c  %d  %c",
            186, n, 179, sport.id, 179, sport.nume, 179, sport.dn.zi,sport.dn.luna,sport.dn.an, 179, sport.dis ,179, sport.inalt, 179, sport.greu, 179, sport.categoria, 186);
            }

     }
     Linia(200, 205, 207, 188);
     fclose(f);
}
void Lista5()
{
    Sport sport;
     FILE *f;
     int n = 0, np;
     f = fopen("file.in", "rb");
     printf("\n Lista sportivilor gigant");
     Linia(201, 205, 209, 187);
     printf("\n%c Nr%c ID %2c Numele sportivilor %6cData nasterii%3cDisciplina%6cInalt%cGreut%cCateg%c",
            186, 179, 179, 179, 179, 179, 179, 179, 186);
     Linia(199, 196, 197, 182);
     while(fread(&sport, sizeof(Sport),1, f)>0)
     {

            if(sport.inalt > 195)
            {
                n++;
                printf("\n%c%3d%c %d %c%-25.25s%c%02d.%02d.%4d%6c%-15.15s%c %3d %c %3d %c  %d  %c",
            186, n, 179, sport.id, 179, sport.nume, 179, sport.dn.zi,sport.dn.luna,sport.dn.an, 179, sport.dis ,179, sport.inalt, 179, sport.greu, 179, sport.categoria, 186);
            }

     }
     Linia(200, 205, 207, 188);
     fclose(f);
}
