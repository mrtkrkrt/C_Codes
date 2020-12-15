#include <stdio.h>
#include <stdlib.h>
#include<locale.h>
#include<math.h>

void takimlar()
{

    printf("fenerbahçe\n");
    printf("beþiktaþ\n");
    printf("galatasaray\n");
    printf("trabzonspor\n");

}

int sayininikikatifonksiyonu(int sayi)
{

    printf("%d",sayi*2);
    return sayi*2;

}

float karekokunual (int sayi)
{

    return sqrt(sayi);
}

double karesinial(double sayi)
{
    return sayi*sayi;
}

char ilkharfinial(char dizi[])
{
    return dizi [0];

}

void altsatiragec()
{
    printf("\n");
}

int sifirdanbuyukmu(int sayi)
{
    if (sayi>0)
    {
        return 0;
    }

    else
    {
        return 1;
    }

}

int main()
{
    setlocale(LC_ALL,"Turkish");

    takimlar();

    sayininikikatifonksiyonu(5);
    altsatiragec();

    printf("%f",karekokunual(5));
    altsatiragec();

    printf("%lf",karesinial(10.1));
    altsatiragec();

    printf("%c",ilkharfinial("murat"));
    altsatiragec();

    int sayi;
    printf("lütfen pozitif mi negatif mi olmasýný öðrenmek istediðiniz sayýyý girin:\n");
    scanf("%d",&sayi);

    if (sifirdanbuyukmu(sayi)==0){
        printf("%d pozitiftir",sayi);
        altsatiragec();
    }

    if (sifirdanbuyukmu(sayi)==1) {
        printf("%d negatiftir",sayi);
        altsatiragec();

    }


    return 0;

}
