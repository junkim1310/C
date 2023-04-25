#include <stdio.h>

int main(void) {

	int num1, num2;
	float result;

	printf("첫번째 숫자: ");
	scanf_s("%d", &num1);

	printf("두번째 숫자: ");
	scanf_s("%d", &num2);

	result = (float)num1 / num2;

	printf("%d / %d = %f\n", num1, num2, result);



	return 0;
}