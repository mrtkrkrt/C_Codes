#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void bubblesort(int dizi[],int boyut){
    for (int i=0;i<boyut;i++){
        for (int j=1;j<boyut-i;j++){
            if (dizi[j-1]> dizi[j]){
                int temp = dizi[j];
                dizi[j]=dizi[j-1];
                dizi[j-1]=temp;
            }
        }
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


    bubblesort(dizi,boyut);

    for (int i=0;i<boyut;i++){
        printf("%d ",dizi[i]);

    }

    return 0;
}
