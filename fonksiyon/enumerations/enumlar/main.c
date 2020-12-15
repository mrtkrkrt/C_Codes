#include <stdio.h>
#include <stdlib.h>

enum hafta {pazartesi=1,sali,carsamba,persembe,cuma,cumartesi,pazar};

enum aylar {ocak=1,mart=3,haziran=6,eylul=3};

enum mevsimler {ilkbahar=1,yaz,sonbahar,kis};

enum ogrenciokulkaydi {aktif,donmus=1,silinmis=1};

enum macsonucu {kazandi=0,kaybetti=1};

int main()
{
   /* enum ogrenciokulkaydi kayit;
    kayit=aktif;

    if (kayit==0)
    {
        printf("%s\n","ogrenci derslere girebilir");

    }

    else if (kayit==1)
    {
        printf("%s\n","ogrenci derslere giremez");

    }*/


    enum macsonucu sonuc;
    sonuc=kaybetti;
    (sonuc==kazandi) ? printf("kazandi") : printf("kaybetti");

    printf("\n");

    enum aylar ay;

    ay= ocak;

    (ay==0) ? printf("nbr") : printf("mrt");
    return 0;
}
