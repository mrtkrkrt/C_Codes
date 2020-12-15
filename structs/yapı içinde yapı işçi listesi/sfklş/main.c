#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct aclisanbilgisi{

    char makam[20];
    char calistigibirim[20];
    float maas;
    int calisitigisene;
};

struct calisanlar {

    char ad[50];
    char soyad[50];
    int yas;
    struct aclisanbilgisi bilgi;
};

void eleman(struct calisanlar x){
printf("%s %s %d %s %s %f %d\n",x.ad,x.soyad,x.yas,x.bilgi.makam,x.bilgi.calistigibirim,x.bilgi.maas,x.bilgi.calisitigisene);
}

int main()
{
    struct calisanlar calisanlarintamami[3];

    for (int i=0;i<3;i++){
        printf("%d. elemanin bilgilerini giriniz: ",i+1);
        scanf("%s %s %d %s %s %f %d",calisanlarintamami[i].ad,calisanlarintamami[i].soyad,&calisanlarintamami[i].yas,calisanlarintamami[i].bilgi.makam,calisanlarintamami[i].bilgi.calistigibirim,&calisanlarintamami[i].bilgi.maas,&calisanlarintamami[i].bilgi.calistigisene);
    }

    printf("Kaydedilen eleman bilgileri ...\n");

    for (int i=0;i<3;i++){
        eleman(calisanalarintamami[i]);

    }


    return 0;
}
