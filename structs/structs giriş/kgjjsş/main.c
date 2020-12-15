#include <stdio.h>
#include <stdlib.h>
#include<strings.h>

struct ogrenci{
    char adý[30];
    char soyadý[30];
    char okul[30];
    char bolum[30];
    int okulno;
    int sinif;
    }ogr1;

int main()
{

    strcpy(ogr1.adý,"murat");
    strcpy(ogr1.soyadý,"karakurt");
    strcpy(ogr1.okul,"kocaeli universitesi");
    strcpy(ogr1.bolum,"bilgisayarmuhendisligi");
    ogr1.okulno = 190201052 ;
    ogr1.sinif =  1 ;





    return 0;
}
