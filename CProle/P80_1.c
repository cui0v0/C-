#include <stdio.h>
#include <math.h>

int main() {
	float r, p, n;
	r = 0.07;
	n = 10;
	p = pow(1 + r, n);
	printf("增长的百分比为：%f", p);
	return 0;
}