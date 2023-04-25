#include <stdio.h>

int main() {

	int num;

	printf("정수 입력 : ");
	scanf_s("%d", &num);

	if (num >= 0) {
		printf("%d는 양의 정수입니다.\n", num);
		printf("조건문은 참입니다.\n");
	}
	else {
		printf("음의 정수입니다.\n");
		printf("조건은 거짓입니다.\n");
	}


	return 0;
}