#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[4][4];

    printf("Please enter the information of matrix : \n");

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%d st line %d st column : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    for (int satir =0; satir<4; satir++)
    {

        for (int sutun =0; sutun<4; sutun++)
        {

            for (int i=0; i<3; i++)
            {
                if (matrix[satir][i]>matrix[satir][i+1])
                {
                    int temp;
                    temp = matrix[satir][i+1];
                    matrix[satir][i+1]=matrix[satir][i];
                    matrix[satir][i] = temp;
                }
            }
        }
    }

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
