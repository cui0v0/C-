#include<stdio.h>
int main(){
	double temp_f,temp_c;
	printf("Please input the value of Fahrenheit degree:");
	scanf("%lf",&temp_f);
	temp_c=(5.0/9)*(temp_f-32);      
	printf("%f\n",temp_f);
	printf("Temperature in Celsius degree is:%f\n",temp_c);
	return 0;
}
