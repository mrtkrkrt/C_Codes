#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int sayi;

    printf("bir sayý girin....\n");
    scanf("%d",&sayi);

    int *sayininadresi;              //pointers lar yýldýzla gösterilir

    sayininadresi = &sayi;    //ambresant iþareti adresi gösteriyo

    printf("%d  %x",*sayininadresi,sayininadresi);      // yüzde T , U , P, X ÝLE YAZDIRILABÝLR SAYINI ADRESÝ

    return 0;
}
