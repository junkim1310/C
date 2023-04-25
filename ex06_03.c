#include <stdio.h>

int main(void) {

	int val, a;
	
	a = 8;
	val = ++a;

	printf("1. val = %d, a = %d\n", val, a);

	//a = 8;
	val = a++;
	printf("2.val = %d, a = %d\n", val, a);	

	//a = 8;
	val = --a;
	printf("3. val = %d, a = %d\n", val, a);

	//a = 8;
	val = a--;
	printf("4. val = %d, a = %d\n", val, a);




	return 0;
}