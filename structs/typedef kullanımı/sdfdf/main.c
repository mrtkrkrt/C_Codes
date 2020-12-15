#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct ogrenciler
{

    int okulno;
    char isim[20];
    char soyisim[20];
    int sinif;
    char sube;
    double genelort;
} ogrenci;

int main()
{
    ogrenci ogrenci1;
    ogrenci ogrenci2;


    ogrenci1.okulno = 452;
    ogrenci2.okulno = 451;

    strcpy(ogrenci1.isim,"osman");
    strcpy(ogrenci2.isim,"mehmet");

    strcpy(ogrenci1.soyisim,"karakurt");
    strcpy(ogrenci2.soyisim,"academy");

    ogrenci1.sinif = 12;
    ogrenci2.sinif = 12;

    ogrenci1.sube = 'C';
    ogrenci2.sube = 'B';

    ogrenci1.genelort = 85.4;
    ogrenci2.genelort = 65.9;


    return 0;
}
