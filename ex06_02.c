#include <stdio.h>

int main(void) {

	int num1, num2, remain;

	printf("���� �Է� : ");
	scanf_s("%d", &num1);

	remain = num1%7;
	printf("������ = %d\n", remain);


	return 0;
}