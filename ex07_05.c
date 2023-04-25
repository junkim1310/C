#include <stdio.h>
#define YD 1.093613

int main(void) {

	int m;
	float result;
	printf("거리(m) : ");
	scanf_s("%d", &m);

	printf("입력한 거리 : %d\n", m);
	
	result = m * YD;

	printf("환산한 거리 : %fyd", result);
	


	return 0;
}