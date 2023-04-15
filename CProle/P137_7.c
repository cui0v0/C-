#include<stdio.h>
int main(){
	double i=1,temp1=0,temp2=0,temp3=0,t;
	//module k++
	while(i<=100){
		temp1+=i;
		i++;
	}
	//printf("[DEBUG]Temp1=%.0f\n",temp1);
	i=1;
	//module k^2
	while(i<=50){
		temp2+=i*i;
		i++;
	}
	//printf("[DEBUG]Temp2=%.0f\n",temp2);
	i=1;
	//module 1/k
	while(i<=10){
		temp3+=1/i;
		//printf("[DEBUG]i=%.0f,1/i=%.2f,Temp3 now is %.2f\n",i,1/i,temp3);
		i++;
	}
	//printf("[DEBUG]Temp3=%.2f\n",temp3);
	t=temp1+temp2+temp3;
	printf("Result is %.2f",t);
}
