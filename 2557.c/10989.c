#include <stdio.h>

int main()
{
    int i, N, input,j;
    int arr[100000] = {0, };  //메모리 초과를 피하기 위해 배열선언

    scanf("%d", &N);  //입력받을 정수갯수

    int index; 
    for (i = 0; i < N; i++)
    {
        scanf("%d", &input);  //입력 받고
        arr[input]++;  //바로 인덱스 증가시키기  **포인트** <메모리 초과 피하기>
    }
    for (i = 0; i < 10000; i++)
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