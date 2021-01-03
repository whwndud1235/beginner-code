#include <stdio.h>

int main()
{
    int i,j;
    int arr[10];
    int result =0;

    int mod[10] = {0, };

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        mod[i] = arr[i] % 42;
    }
    for (i = 0; i < 10; i++)
    {
        int cnt = 0;
        for (j = 0; j < i; j++)
            {
            if (mod[i] == mod[j])
                cnt++;
            }
            if (cnt ==0)
                result++;
    }
    printf("%d ",result);
}