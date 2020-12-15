#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int sayi;
   printf("lutfen bir sayi giriniz...\n");
   scanf("%d",&sayi);

   if (sayi%10==0)
    printf("yazdiginiz sayi ona bolunebiliyor...\n");

    else
    printf("yazdiginiz sayi ona bolunemiyor");*/


    char cinsiyet;
    float boy;

    printf("lutfen cinsiyetinizi girin(k/e)...\n");
    scanf("%c",&cinsiyet);

     printf("lutfen boyunuzu girin...\n");
    scanf("%f",&boy);

    if ((cinsiyet == 'e' || cinsiyet == 'E') && boy>160){
    printf("tebrikler boy mulakatini gectiniz...\n");
    }
    else if ((cinsiyet == 'k' || cinsiyet == 'K' )&& boy>150){
    printf("tebrikler boy mulakatini gectiniz...\n");
    }
    else{
        printf("maalesef elendiniz...\n");
    }

   /* if ( cinsiyet == 'e' || cinsiyet == 'E')
        printf("siz erkeksiniz");

    if ( cinsiyet == 'k' || cinsiyet == 'K')
            printf("siz kadinsiniz");

    else
        printf("lutfen e ya da k degeri giriniz...\n");
*/





    return 0;
}
