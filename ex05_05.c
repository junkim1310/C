#include <stdio.h>

int main(void) {

	char name[16];

	printf("이름을 입력하세요 : ");
	scanf_s("%s", name,sizeof(name));

	printf("당신의 이름은 %s 이군요!\n", name);



	return 0;
}