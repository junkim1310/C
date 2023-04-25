// 자리수 지정 출력

#include <stdio.h>
int main() {

	printf("|%f| \n", 358.123456);		
	printf("|%.2f| \n", 358.123456);	 
	printf("|%6.1f| \n", 358.123456);
	printf("|%-6.1f| \n", 358.123456);
	printf("|%7.3f| \n", 358.123456);
	printf("|%010.3f| \n", 358.123456);
	
	return 0;
}