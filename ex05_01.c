#include <stdio.h>

int main() {

	float r,area;
	printf("원의 반지름 입력: ");
	scanf_s("%f", &r);

	area = r * r * 3.14;

	printf("반지름이 %f인 원의 면적은 %f 입니다.\n", r, area);

	return 0;
}