#include <stdio.h>

int main() {
	int a, b = 0;

	scanf_s("%d %d", &a, &b);
	int sum = a+b;
	int sub = a-b;
	int mul = a*b;
	int div = a/b;
	int mod = a%b;

	printf("%d \n", sum);
	printf("%d \n", sub);
	printf("%d \n", mul);
	printf("%d \n", div);
	printf("%d \n", mod);

}