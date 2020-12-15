#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi1;

   printf("lutfen tek mi cift mi oldugunu ogrenmek istediginiz sayiyi girin..\n");  //týrnak içinde yazdýrmak isytiyosan yanýna ters slash koy
   scanf("%d",&sayi1);                  //yüzde iþareti koymak istiyosan iki tane yüzde iþareti koy

   if (sayi1 % 2 == 0){
    printf("yazdiginiz sayi cift");
}
   else
        printf("yazdiginiz sayi tek");





       return 0;
}
