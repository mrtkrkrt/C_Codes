#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
int main()
{
    int i,j;
    int a=0,sayac=0;

    printf("l�tfen bir sayy� giriiniz:\n");
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
        printf("girdi�iniz say� asald�r...\n");

    }
    else {
        printf("girdi�iniz say� asal de�ildir");
    }
    return 0;
}
