#include <stdio.h>
#include <stdlib.h>

int main() {

	int num1, num2, sum;	// ������ ���� 3�� ����

	printf("1.ù ��° ���� �Է� : ");	// ȭ�鿡 ���� ���
	scanf_s("%d", &num1);	// ù ��° ���� �Է�

	printf("2.�� ��° ���� �Է� : ");	// ȭ�鿡 ���� ���
	scanf_s("%d", &num2);	// �� ��° ���� �Է�

	sum = num1 + num2; // ���� ����
	printf("3.���� ��� : %d + %d = %d\n", num1,num2,sum);


	return 0;
}