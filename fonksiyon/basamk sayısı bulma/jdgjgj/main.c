#include <stdio.h>
int basmak_bul(int x);
int main()
{
    int sayi;
    printf("sayi girin:");
    scanf("%d", &sayi);

    printf("%d\n",basmak_bul(sayi));

    return 0;
}
int basmak_bul(int x)
{
    int S = 0;
    int sayc=0;
    while (x > 0)
    {
        int b = x % 10;
        S = (S * 10) + b;
        x /= 10;
        sayc++;
    }
    return sayc;
}
