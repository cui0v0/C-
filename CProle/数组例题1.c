#include <stdio.h>

int main() {
	int a[10], x, i;
	printf("请输入初始值x:");
	scanf("%d", &x);
	/*for (i = 0; i <= 9; i++) {
		printf("请输入数组的第%d个值:", i);
		scanf("%d", &a[i]);
	}*/
	i = 0;
	while (i <= 9) {
		printf("请输入数组的第%d个值:", i);
		scanf("%d", &a[i]);
		i++;
	}
	if (x == a[x]) {
		printf("数组的第%d个值与初始值x相同，都为%d", x, x);
	} else {
		printf("-1");
	}
	return 0;

}