#include <stdio.h>
int main(void) {

	const float EXCHANGE = 1.61;
	float mile,result;

	printf("�� ������ ų�ι��͸� ȯ���ϴ� ���α׷�\n");
	printf("���� �Է�(�Ҽ� ��° �ڸ�) : ");
	scanf_s("%f", &mile);

	result = mile * EXCHANGE;

	printf("%.2f������ %.2fkm�Դϴ�.\n", mile, result);



	return 0;
}