#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,onbinler,binler,yuzler,onlar,birler;

    printf("5 basamkli bir sayi giriniz...\a\n");
    scanf("%d",&sayi);

    onbinler=sayi/10000;
    binler=(sayi%10000)/1000;       //işlem sağdan sola yapıldığı için paranteze aldık.
    yuzler=(sayi%1000)/100;
    onlar=(sayi%100)/10;
    birler=sayi%10;


    printf("sayinin onbinler basamaginin degeri: %d\n",onbinler);
    printf("sayinin binler basamaginin degeri: %d\n",binler);
    printf("sayinin yuzler basamaginin degeri: %d\n",yuzler);
    printf("sayinin onlar basamaginin degeri: %d\n",onlar);
    printf("sayinin birler basamaginin degeri: %d\n",birler);
    printf("%d     %d    %d     %d     %d\n",onbinler,binler,yuzler,onlar,birler);


    return 0;
}
