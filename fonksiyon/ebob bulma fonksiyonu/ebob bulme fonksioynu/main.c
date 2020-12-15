#include <stdio.h>
int obeb(int x, int y);
int sayi_oku();
int main()
{
    int N, i;
    int obeb_s; // ebob isleminin sonucu
    printf("kac sayi gireceksiniz: ");
    scanf("%d", &N);
    obeb_s = sayi_oku();
    printf("yeni obeb: %d\n", obeb_s);
    for (i = 2 ; i <= N ; i++)
    {
        int sayi = sayi_oku();
        obeb_s = obeb(obeb_s, sayi);
        printf("yeni obeb: %d\n", obeb_s);
    }
    printf("sonuc: %d\n", obeb_s);
    return 0;
}
int sayi_oku()
{
    int x;
    printf("sayi girin: ");
    scanf("%d", &x);
    return x;
}
int obeb(int x, int y)
{
    int i;
    int sonuc = 1;
    for (i = 2 ; i <= x && i <= y ; i++)
    {
        if (x % i == 0 && y % i == 0)
            sonuc = i;
    }
    return sonuc;
}
