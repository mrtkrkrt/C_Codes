#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,buyuk,kucuk,kalan;

    do
    {
        printf("ebobunu bulmak istediginiz 2 pozitif tam sayi giriniz.\n");
        scanf("%d %d",&sayi1,&sayi2);
    }
    while (sayi1<=0 || sayi2<=0);

    if (sayi1>sayi2)
    {
        buyuk = sayi1;
        kucuk=sayi2;
        sayi2;
    }

    else
    {
        buyuk=sayi2;
        kucuk=sayi1;
    }

    kalan = buyuk%kucuk;


    while (kalan!=0)
    {
        if (kalan>=kucuk){
            buyuk=kalan;
        }
        else {
            buyuk=kucuk;
            kucuk=kalan;
        }
        kalan =buyuk%kucuk;

    }

printf("ebob (sayi1,sayi2)= %d",sayi1,sayi2,kucuk);




    return 0;

}
