#include <stdio.h>

int main() {

	int num;

	printf("���� �Է� : ");
	scanf_s("%d", &num);

	if (num >= 0) {
		printf("%d�� ���� �����Դϴ�.\n", num);
		printf("���ǹ��� ���Դϴ�.\n");
	}
	else {
		printf("���� �����Դϴ�.\n");
		printf("������ �����Դϴ�.\n");
	}


	return 0;
}