#include <stdio.h>
// #define EXCHANGE 1310

int main(void) {

	int dollar, won;
	const int EXCHANGE = 1310;

	printf("달러를 입력하시오 : ");
	scanf_s("%d", &dollar);

	won = dollar * EXCHANGE;

	printf("%d 달러는 %d원 입니다.\n", dollar, won);




	return 0;
}