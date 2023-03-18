#include<iostream>
using namespace std; 
int main() 
{
	float a,b,t;
	cin>>a>>b;
	if(a<b){
		swap(a,b);
		/*
		t=a;
		a=b;
		b=t;
		*/
	}
	cout<<a<<","<<b<<endl;
	//printf("%f,%f",a,b);
	return 0;
}
