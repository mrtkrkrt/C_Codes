#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void insertionsort(int dizi[],int boyut){

   int eleman,oncesi;

   for (int i=1;i<boyut;i++){
        eleman = dizi[i];
        oncesi =i-1;

        while (oncesi>=0 && dizi[oncesi]>eleman){
            dizi[oncesi+1] = dizi [oncesi];
            oncesi--;
        }
        dizi[oncesi+1] = eleman;
   }


}

int main()
{
    int dizi[MAX],boyut;

    printf("Kac elemanli bir dizi gireceksiniz :");
    scanf("%d",&boyut);

    for (int i=0;i<boyut;i++){
        printf("%d. elemani giriniz :",i+1);
        scanf("%d",&dizi[i]);
    }


    insertionsort(dizi,boyut);

    for (int i=0;i<boyut;i++){
        printf("%d ",dizi[i]);

    }

    return 0;
}
