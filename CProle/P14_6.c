#include <stdio.h>

int main() {
	int max(int x, int y, int z);
	int a, b, c;
	scanf("%d,%d,%d", &a, &b, &c);
	c = max(a, b, c);
	printf("三者最大值=%d\n", c);
	return 0;
}

int max(int x, int y, int z) {
	int a;
	if (x >= y & y >= z)
		a = x;
	else if (y >= x & y >= z)
		a = y;
	else if (z >= x & z >= y)
		a = z;
	return (a);
}