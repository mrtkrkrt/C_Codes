#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    float sayi,buyuk=0;
    char devam;

    do {
    printf("lütfen büyük olup olmadýðýný öðrenmek isstediððiniz sayýyý girin...\n");
    scanf("%f",&sayi);

    if (sayi>buyuk){
        buyuk=sayi;
        printf("buyuk sayý: %f\n",sayi);

    }

    else{
        printf("büyük sayýmýz hala deðiþmedi.büyük sayý= %f\n",buyuk);
    }
        printf("büyük sayýyý bulmaya devam etmek istermisiniz? [e/E]\n");
        scanf(" %c",&devam);


    }while ( devam=='e'|| devam=='E');
        printf("programýmýz sonlandý...\n");











    return 0;
}
