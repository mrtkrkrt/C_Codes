int main()
{
    int satir, x;
    scanf("%d", &satir);
    x = satir;
    for(int i = 1; i < satir + 1; i++)
    {
        for(int j = 0; j < i; j++)
            printf("*");
        for(int j = 0; j < x * 2 - 3; j++)
            printf(" ");
        for(int j = 0; j < i; j++)
        {
            if(j == satir - 1)
                break;
            printf("*");
        }
        printf("\n");
        x += -1;
    }
    x+=2;
    for(int i = 1; i < satir; i++)
    {
        for(int j = 0; j < satir - i; j++)
            printf("*");
        for(int j = 0; j < x * 2 - 3; j++)
            printf(" ");
        for(int j = 0; j < satir - i; j++)
        {
            if(j == satir - 1)
                break;
            printf("*");
        }
        printf("\n");
        x += 1;
    }
    return 0;
}
