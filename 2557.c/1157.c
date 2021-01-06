#include <stdio.h>
#include <string.h>

int main()
{
    int i, j;
    char S[1000000];
    int arr[26] = {
        0,
    };

    scanf("%s", S); //문자주고
    int length = strlen(S);

    int index = 0;

    for (i = 0; i < length; i++)
    {
        if (S[i] <= 'Z')
            index = S[i] - 'A';
        else
            index = S[i] - 'a';
        arr[index]++;
    } //알파벳 들어있는 배열 출력

    int max = arr[0];
    int k = 0;

    for (i = 1; i < 26; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            k = i;               //max 구하고 max index구하고(?)
        }
    } //printf("%d %d\n", max, k);

    //버블정렬
    for (i = 0; i < 26; i++)
    {
        for (j = i + 1; j < 26; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        //printf("%d ", arr[i]);
    }
    //printf("\n"); //버블정렬
    if (arr[25] == arr[24])
        printf("?");
    else
        printf("%c", k + 65);
}