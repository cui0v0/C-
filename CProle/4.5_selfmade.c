#include<stdio.h>
int main(){
	int x,y;
	scanf("%d",&x);
	y=(x<0)?-1:y;
	y=(x==0)?0:y;
	y=(x>0)?1:y;
	printf("x=%d,y=%d\n",x,y);
	return 0;
}
