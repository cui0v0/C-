#include <stdio.h>>

int main(){
	int i,t;
	t=1;
	i=3;
	while(i+2<=100){
		t=t*i;
		i=i+2;
		//printf("Times:%d,Num:%d\n",i,t);
	}
	printf("%d\n",t);
	return 0;
}
