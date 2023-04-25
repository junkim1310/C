#include <stdio.h>

int main(void) {

	int num1, num2, remain;

	printf("숫자 입력 : ");
	scanf_s("%d", &num1);

	remain = num1%7;
	printf("나머지 = %d\n", remain);


	return 0;
}