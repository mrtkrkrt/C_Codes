#include <stdio.h>
#include <stdlib.h>
#include<strings.h>

struct ogrenci{
    char ad�[30];
    char soyad�[30];
    char okul[30];
    char bolum[30];
    int okulno;
    int sinif;
    }ogr1;

int main()
{

    strcpy(ogr1.ad�,"murat");
    strcpy(ogr1.soyad�,"karakurt");
    strcpy(ogr1.okul,"kocaeli universitesi");
    strcpy(ogr1.bolum,"bilgisayarmuhendisligi");
    ogr1.okulno = 190201052 ;
    ogr1.sinif =  1 ;





    return 0;
}
