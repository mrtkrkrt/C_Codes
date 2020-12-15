#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void selectionsort(int dizi[],int boyut){

    int enkck;

    for (int i=0;i<boyut;i++){
        enkck= i;
        for (int j=i;j<boyut;j++){
            if (dizi[j]<dizi[enkck]){
                enkck=j;
            }
        }

        int  temp= dizi[i];
        dizi [i]= dizi[enkck];
        dizi[enkck]=temp;
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


    selectionsort(dizi,boyut);

    for (int i=0;i<boyut;i++){
        printf("%d ",dizi[i]);

    }

    return 0;
}
