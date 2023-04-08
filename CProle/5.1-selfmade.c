#include<stdio.h> 
int main(){
	int i,n,total;
	i=1;
	n=2;
	while(n<=100){
		i=i+n;
		n++;
	}
	printf("从1加到100的数值为：%d\n",i);
	return 0;
}
