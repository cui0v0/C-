#include<stdio.h>
int main(){
	int x,y;
	scanf("%d",&x);
	y=(x<1)?x:y;
	y=(x>=1&&x<10)?(2*x-1):y;
	y=(x>=10)?(3*x-11):y;
	printf("x=%d,y=%d\n",x,y);
	return 0;
}
