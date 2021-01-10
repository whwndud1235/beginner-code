#include <stdio.h>

int main()
{
    int M, F;
    int sum = 0;

    while (1)
    {
        scanf("%d %d", &M, &F);
        if (M == 0 && F == 0)
            break;
        sum = M + F;
        
        printf("%d\n", sum);
    }
}
