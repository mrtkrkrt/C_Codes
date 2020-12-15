#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct kitap{

    char ad[50];
    char yazar[50];
    int yil;
    float fiyat;
};

//romankiatoalri[2]={{"dokuzuncu hariciye kogusu","peyami safa",1980,23.5},{"suc ve ceza ","dostoyevski",1890,24.5}};

int main()
{
   // printf("%s %s %d %f",romankiatoalri[1].ad,romankiatoalri[1].yazar,romankiatoalri[1].yil,romankiatoalri[1].fiyat);



   struct kitap kitap1;
   char kitapadi[52];
   printf("Bir kitap ismi giriniz : ");
   scanf("%s",kitapadi);
   strcpy(kitap1.ad,kitapadi);
   printf("%s",kitap1.ad);

    return 0;
}
