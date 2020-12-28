#include<stdio.h>

int main(){
    int a[9];
    int i;
    for(i = 0; i < 9; i++){
        scanf("%d", &a[i]); // 배열 입력 받기(9개 숫자)
    }

    int num = 0; // 최댓값의 index
    int max = 0; 

    for(int i = 0; i < 9; i++){
        if(a[i] > max){ // max보다 숫자가 크면
            max = a[i]; // max값 바꿔주기
            num = i; // max의 index도 바꿔주기
        }
    }

    printf("%d\n", max);
    printf("%d", num+1);

    return 0;
}