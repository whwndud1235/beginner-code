#include <stdio.h>
#include <string.h>

int main()
{
    int T, R;
    int i, j;
    char S[20];

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d %s", &R, S);
        for (i = 0; i < strlen(S); i++)
            for (j = 0; j < R; j++)
            {
                printf("%c", S[i]);
            }
            printf("\n");
    }
    return 0;
}