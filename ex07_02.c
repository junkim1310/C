// True and False

#include <stdio.h>

int main(void) {

	int a, b;

	printf("���� 2���� ���ʷ� �Է�\n");

	printf("ù ��° ���� : ");
	scanf_s("%d", &a);

	printf("�� ��° ���� : ");
	scanf_s("%d", &b);

	printf("�� �� ū �� : %d\n", a > b ? a : b);
	printf("�� �� ���� �� : %d\n", a < b ? a : b);
	return 0;
}