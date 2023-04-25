// 주소 참조 연산자

#include <stdio.h>

int main(void) {

	int a = 35,val;
	int* addr;

	addr = &a;
	val = *addr;

	printf("a = 35일 때 \n");
	printf("1. 변수 a의 주소 : %p\n",addr);
	//printf("2. 변수 a의 주소(16진수) : %X\n",addr);
	printf("2. 포인터 변수 *addr에 저장된 값 : %d\n",val);




	return 0;
}