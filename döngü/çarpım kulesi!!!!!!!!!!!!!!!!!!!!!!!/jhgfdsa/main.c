#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi1,sayi2,toplam=0,sayac=0;

menu:
    printf("l�tfen birinci say�y� giriniz:\n");
    scanf("%d",&sayi1);
    printf("l�tfen ikinci say�y� girin:\n");
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
        printf("l�tfen 2 tane pozitif tam say� girin:\n");
        goto menu;
    }

    printf("�arp�m kulesi ile hesaplanan sonu�: %d\n",toplam);
    printf("kule y�ksekli�i:%d\n",sayac);
    return 0;
}
