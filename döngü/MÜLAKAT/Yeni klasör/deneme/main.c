#include <stdio.h>
#include <stdlib.h>

int main()
{
    float trafik,motor,ilkyardim,x,y,z;

    printf("trafik yanlis sayisini giriniz: ");
    scanf("%f",&trafik);
    printf("motor yanlis sayisini giriniz:");
    scanf("%f",&motor);
    printf("ilk yardim yanlis sayisini giriniz:");
    scanf("%f",&ilkyardim);
    printf("-----------------------------------------\n");

    x=100-trafik*2;
    y=100-motor*2.5;
    z=100-ilkyardim*10/3;

    printf("trafik puaniniz: %.2f\n",x);
    printf("motor puaniniz: %.2f\n",y);
    printf("ilk yardim puaniniz: %.2f\n",z);

    if (x>=70 && y>=70 && z<=70){
        printf("uzgunuz direksiyon sinavina katilamazsiniz.");
    }


    return 0;
}
