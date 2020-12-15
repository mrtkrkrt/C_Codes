#include<stdio.h>


int main()
{


int sayi,yildiz,bosluk;

 int i;

 int j;

 printf("enter the number:");

 scanf("%d",&sayi);

 yildiz=1;

 bosluk=sayi-1;


 for(i=1;i<=sayi;i++)

 {

  for(j=1;j<=bosluk;j++)

  printf(" ");


  for(j=1;j<=yildiz;j++)


  printf("*");


  bosluk--;

  yildiz+=2;

  printf("\n");


 }
 yildiz-=4;

 for(i=1;i<sayi;i++)

 {

  for(j=1;j<=i;j++)

  printf(" ");

  for(j=1;j<=yildiz;j++)

  printf("*");


  yildiz-=2;

  printf("\n");

 }
return 0;

}
