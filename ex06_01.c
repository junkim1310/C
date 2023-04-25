#include <stdio.h>
int main(void) {

	const float EXCHANGE = 1.61;
	float mile,result;

	printf("■ 마일을 킬로미터를 환산하는 프로그램\n");
	printf("마일 입력(소수 둘째 자리) : ");
	scanf_s("%f", &mile);

	result = mile * EXCHANGE;

	printf("%.2f마일은 %.2fkm입니다.\n", mile, result);



	return 0;
}