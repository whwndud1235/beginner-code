#include <stdio.h>

int main()
{
    int i, j = 0;
    int input, output;
    int a[5];

    printf("input : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        //input 입력
        input = a[i];
        printf(" %d ", input);
    }
    printf("\n");
    printf("output : ");
    printf("\n");
    for (j = 4; j >= 0; j--)
    {
        output = a[j];
        printf(" %d ", a[j]);
    }
}