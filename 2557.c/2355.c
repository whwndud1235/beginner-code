#include <stdio.h>

int main()
{
    long long a, b;
    long long sum = 0;
    scanf("%lld %lld", &a, &b);

    if (a <= b)
    {
        sum = ((a + b) * (b - a + 1) / 2);
        printf("%lld", sum);
    }
    if (a > b)
    {
        sum = ((a + b) * (a - b + 1) / 2);
        printf("%lld", sum);
    }
}