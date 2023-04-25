#include <stdio.h>

int main(void)
{
	int a, b, c, result;

	printf("정수 3개를 입력하시오(구분자는 콤마 사용) : ");
	scanf_s("%d, %d, %d", &a, &b, &c);

	printf("입력한 정수 : %d, %d, %d\n", a, b, c);
	
	result = a > b ? a : b;
	result = result > c ? result : c;
	printf("최댓값 : %d", result);

	return 0;
}