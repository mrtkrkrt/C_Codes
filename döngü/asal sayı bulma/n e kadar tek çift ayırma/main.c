#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    int i,j;
    int a=0,sayac=0;

    printf("lütfen bir sayyý giriiniz:\n");
    scanf("%d",&a);

    for(i=2;i<a;i++){
    if ((i*i)<=a){
        if(a%i==0){
            sayac++;
            break;
        }
    }


    }

    if (sayac==0){
        printf("girdiðiniz sayý asaldýr...\n");

    }
    else {
        printf("girdiðiniz sayý asal deðildir");
    }
    return 0;
}
