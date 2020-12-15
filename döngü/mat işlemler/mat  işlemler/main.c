#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,sayi3;
    sayi1 = 4;

    //toplama  sayi++  sayi+= 1    sayi= sayi+1;
    //çýkarma  sayi--  sayi-=1     sayi=sayi-1;
    //çarpma           sayi *=5    sayi= sayi*5;
    //bölme            sayi /=5    sayi =sayi/5;
    //mod alma         sayi %= 5   sayi=sayi%5;


    sayi2=sayi1++;      //sayi2=4
    sayi3= ++sayi1;     //sayi3=6   sayi1=6



printf("%d  %d%  %d",sayi1,sayi2,sayi3);
    return 0;
}
