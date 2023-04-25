// True and False

#include <stdio.h>

int main(void) {

	int a, b;

	printf("정수 2개를 차례로 입력\n");

	printf("첫 번째 정수 : ");
	scanf_s("%d", &a);

	printf("두 번째 정수 : ");
	scanf_s("%d", &b);

	printf("둘 중 큰 수 : %d\n", a > b ? a : b);
	printf("둘 중 작은 수 : %d\n", a < b ? a : b);
	return 0;
}