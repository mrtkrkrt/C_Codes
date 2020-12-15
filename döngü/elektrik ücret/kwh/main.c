#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ucret,elektrikmiktari,toplam,ekucret;

    printf("lutfen tuketilen elektrik miktarini giriniz (kWh):");
    scanf("%f",&elektrikmiktari);



    if (elektrikmiktari>=100){
        toplam=elektrikmiktari*1;
        ekucret=toplam/5;
        printf("Ek Ucret: %.2fTL\n",ekucret);
        printf("toplam tuketim bedeli: %.2fTL\n",toplam);
      }


    if (elektrikmiktari>=51 && elektrikmiktari<100){
        toplam=elektrikmiktari*0.75;
        ekucret=toplam/5;
        printf("Ek Ucret: %.2fTL\n",ekucret);
        printf("toplam tuketim bedeli: %.2fTL\n",toplam);
     }

    if (elektrikmiktari<=50){
        toplam=elektrikmiktari*0.5;
        ekucret=toplam/5;
        printf("Ek Ucret: %.2fTL\n",ekucret);
        printf("toplam tuketim bedeli: %.2fTL\n",toplam);
    }






    return 0;
}
