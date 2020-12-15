#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
         MENÜ           SİPARİŞ KODU      FİYATI
     Başlangıçlar            1             5.5₺
     Ara Sıcaklar            2             7.5₺
     Salatalar               3             12₺
     Ana Yemekler            4             17.75₺
     Tatlılar                5             11.25₺
     İçecekler               6             2.25₺*/



    printf("MENU\t\tSIPARIS KODU\tFIYAT\n");
    printf("baslangiclar\t1\t\t5.5TL\n");
    printf("Ara Sicaklar\t2\t\t7.5TL\n");
    printf("Salatalar\t3\t\t12TL\n");
    printf("Ana Yemekler\t4\t\t17.75TL\n");
    printf("Tatlilar\t5\t\t11.25TL\n");
    printf("Icecekler\t6\t\t2.25TL\n");

    int siparisno;
    float toplam,porsiyon;

menu:
    printf("lutfen yemek istediginiz urunun siparis kodunu giriniz...\n");
    scanf("%d",&siparisno);

    if(siparisno==-1)
    {
        goto cikis;
    }

    if(siparisno>0 && siparisno<7)
    {
        printf("lutfen kac porsiyon istediginizi soyleyin...\n");
        scanf("%.2f",&porsiyon);
    }
    switch(siparisno)
    {

    case 1:
        if (porsiyon>0)
        {
            toplam += porsiyon*5.5;
            printf("Toplam Tutar: %.2f\n",toplam);
        }

        else
        {
            printf("lutfen sifirdan farkli bir deger giriniz...\n");
        }
        break;

    case 2:
        if (porsiyon>0)
        {
            toplam += porsiyon*7.5;
            printf("Toplam Tutar: %.2f\n",toplam);
        }

        else
        {
            printf("lutfen sifirdan farkli bir deger giriniz...\n");
        }
        break;

    case 3:
        if (porsiyon>0)
        {
            toplam += porsiyon*12;
            printf("Toplam Tutar: %.2f\n",toplam);
        }

        else
        {
            printf("lutfen sifirdan farkli bir deger giriniz...\n");
        }
        break;

    case 4:
        if (porsiyon>0)
        {
            toplam += porsiyon*17.75;
            printf("Toplam Tutar: %.2f\n",toplam);
        }

        else
        {
            printf("lutfen sifirdan farkli bir deger giriniz...\n");
        }
        break;
    case 5:
        if (porsiyon>0)
        {
            toplam += porsiyon*11.25;
            printf("Toplam Tutar: %.2f\n",toplam);
        }

        else
        {
            printf("lutfen sifirdan farkli bir deger giriniz...\n");
        }
        break;

    case 6:
        if (porsiyon>0)
        {
            toplam += porsiyon*2.25;
            printf("Toplam Tutar: %.2f\n",toplam);
        }

        else
        {
            printf("lutfen sifirdan farkli bir deger giriniz...\n");
        }
        break;

    default:
        printf("lutfen 1-6 arasinda bir eger giriniz...\n");
        break;




    }
    goto menu;
cikis:
    printf("siparisiniz tamamlandi...\n");
    printf("Toplam Tutar: %.2f\n",toplam);



    return 0;
}
