#include <stdio.h>

int main()
{
    int i, N, input,j;
    int arr[10001] = {0, };  //메모리 초과를 피하기 위해 배열선언

    scanf("%d", &N);  //입력받을 정수갯수

    for (i = 0; i < N; i++)
    {
        scanf("%d", &input);  //정수의 갯수만큼 입력을 받고
        arr[input]++;  //입력 받자마자 바로 더해주기 **포인트** <메모리 초과 피하기>
    }
    for (i = 0; i < 1000; i++)
    {
        if (arr[i] == 0)  // 0이면 출력 x
            continue;     
        for (j = 0; j < arr[i]; j++)  //index 값만큼 반복 출력 (for문에 배열쓰기 메모*)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}