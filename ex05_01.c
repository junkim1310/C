#include <stdio.h>

int main() {

	float r,area;
	printf("���� ������ �Է�: ");
	scanf_s("%f", &r);

	area = r * r * 3.14;

	printf("�������� %f�� ���� ������ %f �Դϴ�.\n", r, area);

	return 0;
}