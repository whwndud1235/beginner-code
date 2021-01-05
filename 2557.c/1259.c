#include <stdio.h>

int main()
{
    int arr[10];
    int res[10];

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        res[i] = arr[i] % 42;
    } //나머지값 받기.

    // bubble sort
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++) //index 하나 앞에 있는 숫자와 비교
        {
            if (res[i] > res[j]) //index 앞에값이 더 크면
            {
                int temp = res[j]; //  temp = index[1] 값
                res[j] = res[i];   // index[0]  -> index[1]
                res[i] = temp;     // index[1]  ->  index[0]
            }                      // index 0 이 1보다 클때 0,1 위치 변경
        }
    } // 이작업으로 나머지를 크기 순으로 정렬함

    int count = 1;

    for (int i = 0; i < 9; i++)
    {
        if (res[i] == res[i + 1]) //앞뒤 숫자 비교
            continue;             //같으면 증감식으로;
        count++;                  //같지않다면 count++
    }
    printf("%d\n", count); //count 값 출력!
}