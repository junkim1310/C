#include <stdio.h>

int main(void)
{
	int a, b, c, result;

	printf("���� 3���� �Է��Ͻÿ�(�����ڴ� �޸� ���) : ");
	scanf_s("%d, %d, %d", &a, &b, &c);

	printf("�Է��� ���� : %d, %d, %d\n", a, b, c);
	
	result = a > b ? a : b;
	result = result > c ? result : c;
	printf("�ִ� : %d", result);

	return 0;
}