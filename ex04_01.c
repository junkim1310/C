#include <stdio.h>

int main(void) {

	int kor, eng, math, sum;
	float avg;

	printf("1.���� ���� : ");
	scanf_s("%d", &kor);

	printf("2.���� ���� : ");
	scanf_s("%d", &eng);

	printf("3.���� ���� : ");
	scanf_s("%d", &math);

	sum = kor + eng + math;
	printf("���� : %6d\n", sum);

	avg = sum / 3.0;
	printf("��� ���� : %7.2f\n", avg);


	return 0;
}