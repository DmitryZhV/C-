#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b, c;
	        
	        // ...
	cin>>a>>b>>c;
	if(a==0)
	{
		cout<<"No real roots"<<endl;
	}else{
	int d=(b*b)-(4*a*c);         
        //cout<<d<<endl;
	if(d<0)
	{
		cout<<"No real roots"<<endl;
	}else{
   		double D=sqrt(double(d));
		double x1=(-b-D)/(2*a);
		double x2=(-b+D)/(2*a);	
		cout<<x1<<" "<<x2<<endl;
	}
	}
	return 0;
}
