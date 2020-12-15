#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1,sayi2,toplam=0,sayac=0;

menu:
    printf("lütfen birinci sayýyý giriniz:\n");
    scanf("%d",&sayi1);
    printf("lütfen ikinci sayýyý girin:\n");
    scanf("%d",&sayi2);
    printf("-----------------------------------------\n");

    if (sayi1>0 && sayi2>0)
    {
        for (int i=1; i<=sayi1;)
        {
            if (sayi1%2==0)
            {
                sayi2=sayi2*2;
                sayi1=sayi1/2;
                sayac++;
            }
            if(sayi1%2!=0)
            {
                toplam+=sayi2;
                sayi2=sayi2*2;
                sayi1=(sayi1-1)/2;
                sayac++;
            }
        }
    }

    else
    {
        printf("lütfen 2 tane pozitif tam sayý girin:\n");
        goto menu;
    }

    printf("çarpým kulesi ile hesaplanan sonuç: %d\n",toplam);
    printf("kule yüksekliði:%d\n",sayac);
    return 0;
}
