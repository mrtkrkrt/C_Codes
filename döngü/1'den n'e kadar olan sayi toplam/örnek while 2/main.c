#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,x=1;
    int toplam=0;


    printf("lutfen kaca kadar bastirmak istiyosaniz o degeri girin...\n");
    scanf("%d",&sayi);

    int kullanicisayisi = sayi;
    while (sayi>0){
        printf("%d\n",x);
        toplam = toplam+x;
        x++;
        sayi--;
    }

    printf("girdiginiz sayilarin toplami :%d\n",toplam);


    return 0;
}
