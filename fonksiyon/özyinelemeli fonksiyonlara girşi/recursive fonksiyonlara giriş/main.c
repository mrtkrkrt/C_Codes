#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int toplama(int sayi){

    if (sayi !=0){
        return sayi+toplama(sayi-1);
    }

    else {
        return sayi;
    }


}



int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;

    menu:printf("l�tfen pozitif bir tamsay� de�eri girin: \n");
    scanf("%d",&sayi);

    if (sayi<0){
        goto  menu;
    }

    printf("%d",toplama(sayi));

    return 0;
}
