#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    /*int sayi;


    printf("ka�a kadar 5in katlar�n� basrt�ral�m...\n");
    printf("l�tfen bir sayi giriniz..\n");
    scanf("%d",&sayi);

    if(sayi>=0){
        for (int i=0;i<=sayi;i+=5){
            printf("%d\n",i);
        }

    }
    else {
        for (int i=0;i>sayi;i-=5){
            printf("%d\n",i);
        }
    }*/

    int sayi,toplam=0;

    printf("l�tfen bir say� giriniz..\n");
    scanf("%d\n",&sayi);

    for (int i=0; i<=sayi; i++)
    {
        toplam+=i;
    }
    printf("%d\n",toplam);
    return 0;
}
