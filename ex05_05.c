#include <stdio.h>

int main(void) {

	char name[16];

	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%s", name,sizeof(name));

	printf("����� �̸��� %s �̱���!\n", name);



	return 0;
}