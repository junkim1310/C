#include <stdio.h>
int main(void) {

	char ch,add;
	ch = 'A';
	add = ch + 5;


	printf("알파벳 출력 : %c\n", ch);
	printf("5를 더한 알파벳 출력 : %c\n", add);
	printf("아스키코드 값 출력 : %d\n", add);

	return 0;
}