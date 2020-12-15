#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

void degistir(int *sa1,int *sa2){

    int temp= *sa1;
    *sa1 = *sa2;
    *sa2 = temp;


}
int main()
{
    setlocale(LC_ALL,"Turkish");

    int x,y;

    printf("Lütfen deðiþtirmek istediðiniz iki sayýyý girin : ");
    scanf("%d %d",&x,&y);

    printf("sayi 1 = %d , sayi 2 = %d\n",x,y);
    degistir(&x,&y);
    printf("sayi 1 = %d , sayi 2 = %d",x,y);




    return 0;
}
