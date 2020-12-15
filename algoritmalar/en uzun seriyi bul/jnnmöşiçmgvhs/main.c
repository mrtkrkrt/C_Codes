#include <stdio.h>
#include <stdlib.h>

int find(int dizi[],int boyut){

    int temp1,temp2,sayac=0,enkck=0;

    for (int i=1;i<boyut;i++){
        if(dizi[i]==dizi[i-1]){
            sayac++;

        }
        else{
            if(sayac>enkck){
                enkck=sayac;
                temp2=dizi[i-1];
            }
            sayac=0;
        }



    }
return temp2;

}

int main()
{
    int boyut;

    printf("Enter the array size ,please:");
    scanf("%d",&boyut);

    int dizi[boyut];

    for (int i=0;i<boyut;i++){
        printf("Enter %d. element , please:",i+1);
        scanf("%d",&dizi[i]);
    }

    printf("%d",find(dizi,boyut));

    return 0;
}
