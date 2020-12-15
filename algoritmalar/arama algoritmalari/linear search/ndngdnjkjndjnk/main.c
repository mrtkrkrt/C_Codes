#include <stdio.h>
#include <stdlib.h>

int linearsearch (int dizi[],int boyut,int x){
    for (int i=0;i<boyut;i++){
        if (dizi [i]==x){
            return i;
        }
    }

    return -1;

}

int main()
{
    int boyut,dizi[100],aranansayi;

    printf("Lutfen dizinin boyutunu girin : ");
    scanf("%d",&boyut);

    for (int i=0;i<boyut;i++){
        printf("dizinin %d. elemanini giriniz :",i+1);
        scanf("%d",&dizi[i]);
    }

    printf("Lutfen bulmak istediginiz sayiyi girin :");
    scanf("%d",&aranansayi);

    if (linearsearch(dizi,boyut,aranansayi)== -1){
        printf("Aradiginiz sayi girdiginiz dizide bulunmamaktadir");

    }

    else {
        printf("Aradiginiz sayi %d. indekste bulunmaktadir",linearsearch(dizi,boyut,aranansayi));
    }

    return 0;
}
