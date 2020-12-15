
#include<stdio.h>


int main()
{

    int sayi,engenc=100,sayac=0;

   while (1){

    printf("yasi giriniz (durdurmak icin 0):");
    scanf("%d",&sayi);
     if (sayi==0){
        break;
     }

     if (sayi<0 || sayi>=100){
        printf("hata!!!lutfen yas degerine dikkat ediniz:");
        scanf("%d",&sayi);
     }

      if (sayi>0 && sayi<100){

       if (sayi==engenc){
        sayac++;
       }

    if (sayi<engenc){
        engenc=sayi;
        sayac=1;

        }
      }


   }
    printf("----------------------------------------------------------\n");
    printf("en genc katilimci yasi: %d\n",engenc);
    printf("bu yasta toplam %d kisi giris yapti",sayac);


return 0;

}
