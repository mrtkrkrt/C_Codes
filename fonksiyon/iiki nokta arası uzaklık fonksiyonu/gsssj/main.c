#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>

float uzaklik(int x1,int y1,int x2,int y2){
    int a,sonuc;

    a=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    sonuc=pow(a,0.5);

    return sonuc;

}

int main()
{
    setlocale(LC_ALL,"Turkish");

    int x1,x2,y1,y2;

    printf("�lk noktan�n koordinatlar�n� giriniz: ");
    scanf("%d %d",&x1,&y1);

    printf("�kinci noktan�n koordinatlar�nn� giriniz : ");
    scanf("%d %d",&x2,&y2);

    printf("girdi�iniz noktalar aras� uzakl�k : %f",uzaklik(x1,y1,x2,y2));

    return 0;
}
