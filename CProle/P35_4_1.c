#include <stdio.h> 

int main(){
	char *str1="��";
	char *str2="����";
	char *str3="";
	str3=str1;
	str1=str2;
	str2=str3;
	printf("a��%d��b��%d",*str1,*str2);
	return 0;
}
