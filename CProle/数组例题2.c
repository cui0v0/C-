#include <stdio.h>

int main() {
	int a[8], i, temp;
	for (i = 1; i <= 8; i++) {
		printf("�������%d����ֵ��", i);
		scanf("%d", &a[i]);
	}
	temp = a[1];
	a[1] = a[8];
	a[8] = temp;
	printf("�����ڵ���ֵ���£�\n");
	for (i = 1; i <= 8; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}