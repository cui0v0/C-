#include <stdio.h>
#include <math.h>

int main() {
	float b, r1, r2, r3, r5, rs;
	float p1, p2, p3, p4, p5;
	b = 1000;
	r1 = 0.015;
	r2 = 0.021;
	r3 = 0.275;
	r5 = 0.03;
	rs = 0.0035;

	p1 = b * (1 + 5 * r5);
	p2 = b * (1 + 2 * r2) * (1 + 3 * r3);
	p3 = b * (1 + 3 * r3) * (1 + 2 * r2);
	p4 = b * pow(1 + 1 * r1, 5);
	p5 = b * pow(1 + rs / 4, 4 * 5);
	printf("法一所得本息和：%f\n", p1);
	printf("法二所得本息和：%f\n", p2);
	printf("法三所得本息和：%f\n", p3);
	printf("法四所得本息和：%f\n", p4);
	printf("法五所得本息和：%f\n", p5);
	return 0;
}