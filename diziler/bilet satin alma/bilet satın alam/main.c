#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int biletsayi=100;
    char biletal;

    for (; biletsayi>0;)
    {
        printf("bilet almak istermisiniz?\n");
        scanf(" %c",&biletal);

        if (biletal=='e' || biletal=='E')
        {
            int alinanbiletsayisi;
            printf("Kaç tane bilet istiyorsunuz?\n");
            scanf("%d",&alinanbiletsayisi);

            if (alinanbiletsayisi<=biletsayi)
            {
                biletsayi-= alinanbiletsayisi;
            }
            else
            {
                printf("Lütfen alýnabilecek toplam bilet sayýsýna göre alýn...\n");
            }

        }
        else
        {
            break;
        }
    }

    if (biletsayi==0)
    {
        printf("Alýnan bilet sayýsý: %d",100-biletsayi);
        printf("biletler tükendi");
    }

    else
    {


        printf("Alýnan bilet sayýsý: %d\n Kalan bilet sayýsý: %d",100-biletsayi,biletsayi);
    }

    return 0;
}





