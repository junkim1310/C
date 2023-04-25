#include <stdio.h>

int main(void) {

	int rain;

	printf("강수율을 입력하시오 : ");
	scanf_s("%d", &rain);

	if (rain >= 70) {

		printf("우산을 준비하세요.\n");
	}



	return 0;
}