#include <stdio.h>
// #define EXCHANGE 1310

int main(void) {

	int dollar, won;
	const int EXCHANGE = 1310;

	printf("�޷��� �Է��Ͻÿ� : ");
	scanf_s("%d", &dollar);

	won = dollar * EXCHANGE;

	printf("%d �޷��� %d�� �Դϴ�.\n", dollar, won);




	return 0;
}