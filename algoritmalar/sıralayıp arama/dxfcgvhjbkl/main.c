#include <stdio.h>
#include <stdlib.h>

int binarysearch(int dizi[],int enkck,int enyksk,int aranandeger)
{

    while (enkck<=enyksk)
    {
        int mdym = enkck + (enyksk-enkck)/2;

        if (dizi[mdym]==aranandeger)
        {
            return mdym;
        }
        if (dizi[mdym]<aranandeger)
        {
            enkck=mdym+1;
        }
        else
        {
            enyksk= mdym-1;
        }
    }
    return -1;
}

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
    int boyut,aranansa;

    printf("Kac elemanli bir dizi gireceksiniz :");
    scanf("%d",&boyut);

    int dizi[boyut];

    for (int i=0;i<boyut;i++){
        printf("Lutfen dizinin %d. elanini giriniz :",i+1);
        scanf("%d",&dizi[i]);
    }

    selectionsort(dizi,boyut);

    printf("Lutfen aranacak sayiyi girin : ");
    scanf("%d",&aranansa);

    int aramasonuc=binarysearch(dizi,dizi[0],dizi[boyut-1],aranansa);

    if (aramasonuc>=0){
        printf("Aradiginiz sayi %d. indekste bulunmaktadir ",aramasonuc);
    }

    else {
        printf("Girdiginiz dizide boyle bir sayi bulunmamaktadir");
    }
    return 0;
}



