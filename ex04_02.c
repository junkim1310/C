#include <stdio.h>

int main(void) {

	int num1, num2;
	num1 = 32767;
	num2 = 32767 + 8;

	printf("signed short�� ��ȿ ���� : -32768 ~ 32767\n");
	printf("1.���� num1 = 32767�� ���� ��� : %7d\n", num1);
	printf("2.���� num1 = 32767 + 8�� �����÷� : %7d\n", num2);

	return 0;
}