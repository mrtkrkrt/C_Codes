#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int faktoriyel=1;

    printf("lutfen faktoriyelini almami istediginiz sayiyi girin:  ");
    scanf("%d",&sayi);

    int kullanicisayisi=sayi;

    if (sayi>=0){

    while(sayi>=0){
        if (sayi==0){
             faktoriyel*=1;
            }

    else {
        faktoriyel *= sayi;
    }
        sayi--;
    }

    printf("%d! = %d\n",kullanicisayisi,faktoriyel);
    }
    else {
        printf("lutfen sifirdan buyk bir deger giriniz.");
    }
































    return 0;
}
