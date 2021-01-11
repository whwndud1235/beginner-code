#include <stdio.h>

int main()
{
    int M, F, i;
    int sum[1000];
    int count = 0;
    while (1)
    {
        scanf("%d %d", &M, &F);
        if (M == 0 && F == 0)
            break;
        sum[count] = M + F;
        count++;
    }
    for (i = 0; i < count; i++)
    {
        printf("%d\n", sum[i]);
    }
}
