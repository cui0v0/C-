#include<stdio.h>
int main(void){
	int a[10],i,max;
	for(i=0;i<10;i++)
		scanf("%d\n",&a[i]);
		max=a[0];                               //首先将a[0]视为最大数，将a[0]存入max
	for(i=1;i<10;i++)                       //将其余5个数与max比较，大者存入max
		if(a[i]>max)   
			max=a[i];
	printf("max=%d\n",max);         //输出最大值
	return 0;
}
