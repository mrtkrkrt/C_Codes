#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    float sayi,buyuk=0;
    char devam;

    do {
    printf("l�tfen b�y�k olup olmad���n� ��renmek isstedi��iniz say�y� girin...\n");
    scanf("%f",&sayi);

    if (sayi>buyuk){
        buyuk=sayi;
        printf("buyuk say�: %f\n",sayi);

    }

    else{
        printf("b�y�k say�m�z hala de�i�medi.b�y�k say�= %f\n",buyuk);
    }
        printf("b�y�k say�y� bulmaya devam etmek istermisiniz? [e/E]\n");
        scanf(" %c",&devam);


    }while ( devam=='e'|| devam=='E');
        printf("program�m�z sonland�...\n");











    return 0;
}
