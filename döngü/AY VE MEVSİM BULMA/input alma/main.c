#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ayinnumarasi;
    char ayinmevsimi;

    printf("ogrenmek istediginiz ayin numarasini giriniz...\n");
    scanf("%d",&ayinnumarasi);

    switch (ayinnumarasi) {

        case 1:
             printf("%d numarali ay: ocak\n",ayinnumarasi);
             ayinmevsimi = 'K';
             break;
        case 2:
            printf("%d numarali ay: subat\n",ayinnumarasi);
            ayinmevsimi = 'K';
            break;
        case 3:
            printf("%d numarali ay: mart\n",ayinnumarasi);
            ayinmevsimi = 'I';
             break;
        case 4:
            printf("%d numarali ay: nisan\n",ayinnumarasi);
            ayinmevsimi = 'I';
            break;
        case 5:
            printf("%d numarali ay: mayis\n",ayinnumarasi);
            ayinmevsimi = 'I';
             break;
        case 6:
            printf("%d numarali ay: haziran\n",ayinnumarasi);
            ayinmevsimi = 'Y';
             break;
        case 7:
            printf("%d numarali ay: temmuz\n",ayinnumarasi);
            ayinmevsimi = 'Y';
            break;
        case 8:
            printf("%d numarali ay: agustos\n",ayinnumarasi);
            ayinmevsimi = 'Y';
            break;
        case 9:
            printf("%d numarali ay: eylul\n",ayinnumarasi);
            ayinmevsimi = 'S';
             break;
        case 10:
            printf("%d numarali ay: ekim\n",ayinnumarasi);
            ayinmevsimi = 'S';
            break;
        case 11:
            printf("%d numarali ay: kasim\n",ayinnumarasi);
            ayinmevsimi = 'S';
            break;
        case 12:
            printf("%d numarali ay: aralik\n",ayinnumarasi);
            ayinmevsimi = 'K';
            break;
        default :
            printf("lutfen 1-12 arasinda bir deger giriniz");

}

        if (ayinmevsimi=='I')
                printf("ILKBAHAR MEVSIMI\n");

        else if (ayinmevsimi=='K')
            printf("KIS MEVSIMI\n");

        else if (ayinmevsimi=='S')
            printf("SONBAHAR MEVSIMI\n");

        else if (ayinmevsimi=='Y')
            printf("YAZ MEVSIMI\n");




    return 0;
}
