#include <stdio.h>
#include <stdlib.h>

int main() {

	int num1, num2, diff;	// ������ ���� 3�� ����

	printf("�ΰ��� ���� �Է� : ");	// ȭ�鿡 ���� ���
	scanf_s("%d %d", &num1, &num2);	// �ΰ��� ���� �Է�

	diff = num1 - num2; // ���� ����
	printf("���� ��� : %d - %d = %d\n", num1, num2, diff);


	return 0;
}