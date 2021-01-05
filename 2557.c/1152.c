#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000000];  //문자열 길이때매
    int count = 1;

    scanf("%[^\n]s", input);  //엔터 제외 문자열 받기

    for (int i = 0; i < strlen(input); i++)   //문자열 길이만큼~
    {
        if (input[i] == ' ')  //인덱스에 공백이 있을 때
        {
            if (i != 0 && i != strlen(input) - 1)  //맨앞 맨뒤가 공백인건 제외
                count++;  //(인덱스에 공백이 있는데 맨앞 맨뒤가 공백이 아니라면 count++;)
        }
    }

    if (strlen(input) == 1 && input[0] == ' ')  //길이가 한줄인데 공백만 있는것은 제외
        count = 0;

    printf("%d", count);
}