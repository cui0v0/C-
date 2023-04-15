#include<stdio.h>
int main(){
	int i,n;
	double temp,t;
	for(i=1;i<=20;i++){
		temp = 1;
		for(n=1;n<=i;n++){
			temp=n*temp;
			//printf("[DEBUG]temp=%.0f,n=%d,i=%d\n",temp,n,i);
		}
		t=t+temp;
		//printf("[DEBUG]t now is %.0f\n",t);
	}
	printf("Result is %.0f\n",t);
	return 0;
}
