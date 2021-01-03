#include <stdio.h>
#include <string.h>

int main(void)
{

    int T, R;
    char S[20]; // 적어도 1, 20글자 넘지 않기때문

    scanf("%d", &T); //test case 갯수

    for (int i = 0; i < T; i++) //테이스 케이스 만큼 반복
    {

        scanf("%d %s", &R, S);   //반복횟수 , 반복할 문자열 S

        for (int i = 0; i < strlen(S); i++)  //문자열 길이
            for (int j = 0; j < R; j++)
                printf("%c", S[i]);

        printf("\n");
    }
}