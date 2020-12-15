#include <stdio.h>
#include <stdlib.h>
#define yazdir printf  //printf i yazdir fonksiyonuna çeviriryo

void enbuyuksayi(int dizi[],int boyut){

    int enbuyukdeger=0;

    for (int i=0;i<boyut;i++){
        if (dizi[i]>enbuyukdeger){
            enbuyukdeger = dizi[i];
        }
    }

    yazdir("en buyuk deger: %d",enbuyukdeger);


}

int main()
{
    int dizi[]={2,4,6,8,120};
    int boyut=sizeof(dizi)/sizeof(dizi[0]);
    yazdir("dizimizin boyutu: %d\n",boyut);
    enbuyuksayi(dizi,boyut);
    return 0;
}
