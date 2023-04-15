#include <stdio.h>

int main() {
	int n, temp;
	double a = 2, b = 1, c;
	for (n = 1; n <= 20; n++) {
		c += (a / b);
		printf("[DEBUG #%d]c now is %f,a=%.0f,b=%.0f\n", n, c, a, b);
		temp = a;
		a += b;
		b = temp;
	}
	printf("Result is %16.10f\n", c);
	return 0;
}