#include <stdio.h>>

int main(){
	int i,t;
	t=1;
	i=2;
	while(i<=100){
		t=t+i;
		i=i++;
		//printf("CurrentNum:%d,TotalNum:%d\n",i,t);
	}
	printf("%d\n",t);
	return 0;
}
