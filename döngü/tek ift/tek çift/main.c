#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi1;

   printf("lutfen tek mi cift mi oldugunu ogrenmek istediginiz sayiyi girin..\n");  //t�rnak i�inde yazd�rmak isytiyosan yan�na ters slash koy
   scanf("%d",&sayi1);                  //y�zde i�areti koymak istiyosan iki tane y�zde i�areti koy

   if (sayi1 % 2 == 0){
    printf("yazdiginiz sayi cift");
}
   else
        printf("yazdiginiz sayi tek");





       return 0;
}
