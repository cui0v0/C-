#include <stdio.h>
#include <math.h>

int main() {
	float r, h, pi, sq, sy, c, vq, vz;
	pi = 3.1415926;
	printf("请输入圆的半径与圆柱高度：");
	scanf("%f,%f", &r, &h);
	c = 2 * pi * r;
	sy = r * r * pi;
	sq = 4 * pi * r * r;
	vq = 4 / 3 * pi * pow(r, 3);
	vz = pi * r * r * h;
	printf("圆周长为：%5.2f\n", c);
	printf("圆面积为：%5.2f\n", sy);
	printf("圆球表面积为：%5.2f\n", sq);
	printf("圆球体积为：%5.2f\n", vq);
	printf("圆柱体积为：%5.2f\n", vz);
	return 0;
}