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
            printf("Ka� tane bilet istiyorsunuz?\n");
            scanf("%d",&alinanbiletsayisi);

            if (alinanbiletsayisi<=biletsayi)
            {
                biletsayi-= alinanbiletsayisi;
            }
            else
            {
                printf("L�tfen al�nabilecek toplam bilet say�s�na g�re al�n...\n");
            }

        }
        else
        {
            break;
        }
    }

    if (biletsayi==0)
    {
        printf("Al�nan bilet say�s�: %d",100-biletsayi);
        printf("biletler t�kendi");
    }

    else
    {


        printf("Al�nan bilet say�s�: %d\n Kalan bilet say�s�: %d",100-biletsayi,biletsayi);
    }

    return 0;
}





