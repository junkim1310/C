#include <stdio.h>

int main(void) {

	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	printf("10���� : %d\n", num);
	printf("8���� : %o\n", num);
	printf("16���� : %X\n", num);
	printf("�Է��� ������ �ش��ϴ� ���� : %c\n", num);

	return 0;
}