#include <stdio.h>

int main()
{
    int n, p, i;
    scanf("%d %d", &n, &p);
    int s[n];

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &s[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", -((n * p) - s[i]));
    }
}