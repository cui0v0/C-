#include <stdio.h>

int main() {
	int a[10], x, i;
	printf("�������ʼֵx:");
	scanf("%d", &x);
	/*for (i = 0; i <= 9; i++) {
		printf("����������ĵ�%d��ֵ:", i);
		scanf("%d", &a[i]);
	}*/
	i = 0;
	while (i <= 9) {
		printf("����������ĵ�%d��ֵ:", i);
		scanf("%d", &a[i]);
		i++;
	}
	if (x == a[x]) {
		printf("����ĵ�%d��ֵ���ʼֵx��ͬ����Ϊ%d", x, x);
	} else {
		printf("-1");
	}
	return 0;

}