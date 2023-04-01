#include<stdio.h>
int main(){
	int i,c;
	float r1,r2,r3,r4,r5,r6,a; 
	//for debug
	float a1,a2,a3,a4,a5,a6; 
	r1=10;
	r2=7.5;
	r3=5;
	r4=3;
	r5=1.5;
	r6=1;
	printf("Enter your profits amount here:\n");
	scanf("%d",&i);
	c = i / 100000;
	if(c>10) c=11;
	switch(c){
		case 0:
			a1=r1/100*i;
			a=a1;
			break;
		case 1: 
			a1=r1/100*100000;
			a2=r2/100*(i-100000);
			a=a1+a2;
		break;
		case 2: 
		case 3:
		case 4: 
			a1=r1/100*100000;
			a2=r2/100*100000;
			a3=r3/100*(i-200000);
			a=a1+a2+a3;
			break;
		case 5:
		case 6:
			a1=r1/100*100000;
			a2=r2/100*100000;
			a3=r3/100*200000;
			a4=r4/100*(i-400000);
			a=a1+a2+a3+a4;
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			a1=r1/100*100000;
			a2=r2/100*100000;
			a3=r3/100*200000;
			a4=r4/100*200000;
			a5=r5/100*(i-600000);
			a=a1+a2+a3+a4+a5;
			break;
		case 11: 
			a1=r1/100*100000;
			a2=r2/100*100000;
			a3=r3/100*200000;
			a4=r4/100*200000;
			a5=r5/100*400000;
			a6=r6/100*(i-1000000);
			a=a1+a2+a3+a4+a5+a6;
		break;
	}
	printf("Total award price is: %f\n",a);
	printf("[Debug]Part1=%f,Part2=%f,Part3=%f,Part4=%f,Part5=%f,Part6=%f",a1,a2,a3,a4,a5,a6);
	return 0;
}
