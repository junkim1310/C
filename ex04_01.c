#include <stdio.h>

int main(void) {

	int kor, eng, math, sum;
	float avg;

	printf("1.국어 점수 : ");
	scanf_s("%d", &kor);

	printf("2.영어 점수 : ");
	scanf_s("%d", &eng);

	printf("3.수학 점수 : ");
	scanf_s("%d", &math);

	sum = kor + eng + math;
	printf("총점 : %6d\n", sum);

	avg = sum / 3.0;
	printf("평균 점수 : %7.2f\n", avg);


	return 0;
}