#include <stdio.h>

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);

    if (a - b < 0)
        printf("%lld", -(a - b));
    else
        printf("%lld", a - b);
}