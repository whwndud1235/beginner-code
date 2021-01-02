#include <stdio.h>

int main(void)
{
    int n;
    int num, count = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        for (int j = 2; j <= num; j++) //1 제외
        {
            if (num == j)
                count++;
            printf("%d %d \n", num, j);
            if (num % j == 0)  // 배수 제외
                break;
        }
    }
    printf("%d", count);

    return 0;
}
