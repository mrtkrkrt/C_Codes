#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char sifre[80];
    char sifredogrulama[80];
    int i,yanlis;

    while (1)
    {
        i=0;
        yanlis=0;
        printf("Lutfen sifrenizi giriniz(En fazla seksen karakter)...\n");
        scanf("%s",&sifre);
        printf("Lutfen sifrenizi tekrar giriniz...\n");
        scanf("%s",&sifredogrulama);

        while (!(sifre[i]=='\0'&&sifredogrulama[i]=='\0'))
        {
            if (sifre[i]!=sifredogrulama[i])
            {
                printf("Hatali giris yaptiniz...\n");
                yanlis=1;
                break;
            }
            else


            {
                i++;
            }

        }

        if (yanlis==0)
        {
            goto cikis;
        }
    }
cikis:

    printf("SIFRE OLUSTURMA ISLEMINNIZ BASARIYLA GERCEKLESTIRILDI...\n");


    return 0;
}
