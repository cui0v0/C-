#include<stdio.h>
int main(){
	int n1,n2,n3,n;
	printf("Please enter a three digits number:");
	scanf("%d",&n);
	if(n>=1000||n<100){
		printf("[>:(]This number is not a three digits number.\n");
	}else{
		n1=n/100;
		n2=n/10-10*n1;
		n3=n-100*n1-10*n2;
	//printf("[DEBUG]n1=%d,n2=%d,n3=%d\n",n1,n2,n3);
	if(n==n1*n1*n1+n2*n2*n2+n3*n3*n3)
		printf("[:)]This number n=%d matches.\n",n);
	else
		printf("[:(]This number n=%d unmatches.\n",n);
	}
	return 0;
}
