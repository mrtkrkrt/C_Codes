#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sayi1,sayi2;

  printf("Birbirinin kati oldugunu ogrenmek istediginiz 2 tane tam sayi girin.Once buyuk sayiyi giriniz...\n");
  scanf("%d%d",&sayi1,&sayi2);

  if (sayi1 % sayi2 == 0) {
    printf("%d %d'nin bir carpanidir..\n",sayi1,sayi2);

}

    else {
        printf("%d %d'nin bir carpani degiildir..\a",sayi1,sayi2);

    }
    return 0;
}
