#include <stdio.h>

int main()
{
    int T, i, a, b;
    scanf("%d", &T);
    int sum[T];
    for (i = 0; i < T; i++)
    {
        scanf("%d %d", &a, &b);
        sum[i] = a+b;
    }
    for (i = 0; i < T; i++)
    {
        printf("Case #%d: %d\n", i + 1, sum[i]);
    }
    return 0;
}