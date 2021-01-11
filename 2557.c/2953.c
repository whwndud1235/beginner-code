#include <stdio.h>

int main()
{
    int M[5][4];
    int i, j, k;

    int sum[5] ={0, };

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    int max = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            sum[i] += M[i][j];

            if (max < sum[i])
            {
                max = sum[i];
                k = i+1;
            }
        }
    }
    printf("%d %d", k, max);
}
