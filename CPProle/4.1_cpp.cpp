#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a,b,c,disc,x1,x2,p,q;
	cin>>a>>b>>c;
	//scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc<0){
		cout<<"This equation hasn't real roots.\n"<<endl;
		//printf("This equation hasn't real roots.\n");
	}else{
		p=-b/(2.0*a);
		q=sqrt(disc)/(2.0*a);
		x1=p+q;x2=p-q;
		cout<<"real roots:\nx1=  "<<x1<<"\nx2=  "<<x2<<endl;
		//printf("real roots:\nx1=%7.2f\nx2=%7.2f\n",x1,x2);
	}
	return 0;
}
