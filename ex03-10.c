#include <stdio.h>
#include <stdlib.h>

int main() {

	int num1, num2, diff;	// 정수형 변수 3개 선언

	printf("두개의 정수 입력 : ");	// 화면에 문장 출력
	scanf_s("%d %d", &num1, &num2);	// 두개의 정수 입력

	diff = num1 - num2; // 덧셈 연산
	printf("뺄셈 결과 : %d - %d = %d\n", num1, num2, diff);


	return 0;
}