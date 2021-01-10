#include <stdio.h>

int main()
{
    int T, i;
    scanf("%d", &T);
    int sum[T], a[T], b[T];

    for (i = 0; i < T; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
        sum[i] = a[i] + b[i];
    }
    for (i = 0; i < T; i++)
    {
        printf("Case #%d: %d + %d = %d\n", i + 1, a[i], b[i], sum[i]);
    }
    return 0;
}