#include <stdio.h>

int main(void) {


	unsigned short a, b, result;
	printf("1.ù ��° ���� �Է� : ");
	scanf_s("%hu", &a);
	printf("2.�� ��° ���� �Է� : ");
	scanf_s("%hu", &b);

	result = a - b;
	printf("���� ���� : %hu - %hu = %hu\n", a, b, result);


	return 0;
}