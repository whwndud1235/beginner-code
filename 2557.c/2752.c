#include <stdio.h>

int main()
{
    int num[3];
    int i, j;

    int temp;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d ", num[i]);
    }
    return 0;
}
