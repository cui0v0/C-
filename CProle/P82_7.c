#include <stdio.h>
#include <math.h>

int main() {
	float r, h, pi, sq, sy, c, vq, vz;
	pi = 3.1415926;
	printf("������Բ�İ뾶��Բ���߶ȣ�");
	scanf("%f,%f", &r, &h);
	c = 2 * pi * r;
	sy = r * r * pi;
	sq = 4 * pi * r * r;
	vq = 4 / 3 * pi * pow(r, 3);
	vz = pi * r * r * h;
	printf("Բ�ܳ�Ϊ��%5.2f\n", c);
	printf("Բ���Ϊ��%5.2f\n", sy);
	printf("Բ������Ϊ��%5.2f\n", sq);
	printf("Բ�����Ϊ��%5.2f\n", vq);
	printf("Բ�����Ϊ��%5.2f\n", vz);
	return 0;
}