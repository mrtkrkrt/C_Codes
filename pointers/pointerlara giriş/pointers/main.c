#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;

    printf("bir say� girin....\n");
    scanf("%d",&sayi);

    int *sayininadresi;              //pointers lar y�ld�zla g�sterilir

    sayininadresi = &sayi;    //ambresant i�areti adresi g�steriyo

    printf("%d  %x",*sayininadresi,sayininadresi);      // y�zde T , U , P, X �LE YAZDIRILAB�LR SAYINI ADRES�

    return 0;
}
