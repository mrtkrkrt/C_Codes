#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int basamaksayibul(int sayi){
    int basamaksayi=0;

    if (sayi>0){
        do{
            basamaksayi++;
            sayi=sayi/10;
        }
    while(sayi>0);
    }
    return basamaksayi;

}

int tersine_cevir(int sayi){

    int basamaksayimiz=basamaksayibul(sayi);
    int dizi[basamaksayimiz];
    int basamaksayisi=0;

    do {
        basamaksayisi++;
        dizi[basamaksayisi-1] = sayi % 10;
        sayi=sayi/10;

    }while (sayi>0);

    float sayinintersi=0;

    for (int i=0;i<basamaksayimiz;i++){                                   //float olarak atnýmlamamz hata  payýný azaltýyo
        sayinintersi=sayinintersi+dizi[i]*pow(10,basamaksayimiz-1-i);
    }

    return sayinintersi;
}


int main()
{
   setlocale(LC_ALL,"Turkish");

   int sayi;

   printf("lütfen tersini almak istediðiniz sayýyý girin: ");
   scanf("%d",&sayi);

   printf("%d",basamaksayibul(sayi));
   printf("\n");

   printf("%d",tersine_cevir(sayi));





    return 0;
}
