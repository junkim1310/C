#include <stdio.h>

int main() {

	int num,result;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	result = num % 2;

	if (result == 0) {
		printf("�Է��� ���� %d�� \"¦��\"�Դϴ�.\n", num);
	}
	else {
		printf("�Է��� ���� %d�� \"Ȧ��\"�Դϴ�.\n",num);
	}


	return 0;
}