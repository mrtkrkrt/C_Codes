#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int faktoriyel(int sayi){
        if (sayi>=1){
            return sayi*faktoriyel(sayi-1);
        }

        else {
            return 1;
        }


}

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;

    printf("l�tfen fakt�riyelini almak istedi�iniz say�y� girin. \n");
    scanf("%d",&sayi);

    while (sayi<0){
            printf("l�tfen fakt�riyelini almak istedi�iniz say�y� girin. \n");
            scanf("%d",&sayi);


    }

    printf("%d fakt�riyel = %d",sayi,faktoriyel(sayi));

    return 0;
}
