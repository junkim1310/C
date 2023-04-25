#include <stdio.h>

int main(void) {

	int num;

	printf("정수 입력 : ");
	scanf_s("%d", &num);

	printf("10진수 : %d\n", num);
	printf("8진수 : %o\n", num);
	printf("16진수 : %X\n", num);
	printf("입력한 정수에 해당하는 문자 : %c\n", num);

	return 0;
}