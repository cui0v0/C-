#include<stdio.h>
int main(void){
	int a[10],i,max;
	for(i=0;i<10;i++)
		scanf("%d\n",&a[i]);
		max=a[0];                               //���Ƚ�a[0]��Ϊ���������a[0]����max
	for(i=1;i<10;i++)                       //������5������max�Ƚϣ����ߴ���max
		if(a[i]>max)   
			max=a[i];
	printf("max=%d\n",max);         //������ֵ
	return 0;
}
