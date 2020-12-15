#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct calisanlar{

    char ad[50];
    char soyad[50];
    char isebaslama[20];
    float maas;
    int primsayisi;
    char cinsiyet;

};

void elemangoster (struct calisanlar *eleman){
   printf("%s %s %s %f %d %c",eleman->ad,eleman->soyad,eleman->isebaslama,eleman->maas,eleman->primsayisi,eleman->cinsiyet );   //böyle yazarsnpointer almak zorundasýn
         //böyle yazýnca pointer almasanda olur

}

int main()
{
    struct calisanlar calisan1;
    printf("Lutfen calisanin bilgilerini giriniz : ");
    scanf("%s %s %s %f %d %c",&calisan1.ad,&calisan1.soyad,&calisan1.isebaslama,&calisan1.maas,&calisan1.primsayisi,&calisan1.cinsiyet);   //& koymasanda alýr dýkýntýn olmaz..float ve integer hariç

    struct calisanlar *calisanadres =  &calisan1;

    printf("calisan bilgileri\n");
    printf("%s %s %s %f %d %c\n",(*calisanadres).ad,(*calisanadres).soyad,(*calisanadres).isebaslama,(*calisanadres).maas,(*calisanadres).primsayisi,(*calisanadres).cinsiyet );
    printf("%s %s %s %f %d %c\n",calisanadres->ad,calisanadres->soyad,calisanadres->isebaslama,calisanadres->maas,calisanadres->primsayisi,calisanadres->cinsiyet );
    elemangoster(&calisan1);

    struct calisanlar calisan2;
    printf("Lutfen calisanin bilgilerini giriniz :");
    scanf("%s %s %s %f %d %c",&calisan2.ad,&calisan2.soyad,&calisan2.isebaslama,&calisan2.maas,&calisan2.primsayisi,&calisan2.cinsiyet);

    printf("Girdiginiz caslainin bilgileri : ");
    printf("%s %s %s %f %d %c",calisan2.ad,calisan2.soyad,calisan2.isebaslama,calisan2.maas,calisan2.primsayisi,calisan2.cinsiyet);
    return 0;
}
