#include<stdio.h>
int main(){
	int a,b,c,t;
	scanf("%d,%d,%d",&a,&b,&c);
	if(c>=b){
		t=b;
		b=c;
		c=t;
	}
	if(c>=a){
		t=a;
		a=c;
		c=t;
	}
	if(b>=a){
		t=a;
		a=b;
		b=t;
	}
	printf("%d,%d,%d\n",a,b,c);
	return 0;
}
