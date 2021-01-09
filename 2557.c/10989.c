#include <stdio.h>

int main()
{

    int i, N, input,j;
    int arr[100000] = {0, };  //

    scanf("%d", &N);

    int index;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &input);
        arr[input]++;
    }
    for (i = 0; i < 10000; i++)
    {
        if (arr[i] == 0)
            continue;

        for (j = 0; j < arr[i]; j++)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}