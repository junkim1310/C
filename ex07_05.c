#include <stdio.h>
#define YD 1.093613

int main(void) {

	int m;
	float result;
	printf("�Ÿ�(m) : ");
	scanf_s("%d", &m);

	printf("�Է��� �Ÿ� : %d\n", m);
	
	result = m * YD;

	printf("ȯ���� �Ÿ� : %fyd", result);
	


	return 0;
}