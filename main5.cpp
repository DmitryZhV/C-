#include <iostream>

using namespace std;

int main()
{

    unsigned gcd(unsigned a, unsigned b);
    unsigned a=0;
    unsigned b=0;
    cin>>a>>b;
    unsigned c=0;
    c=gcd(a,b);
    cout<<c<<endl;
    return 0;

        
       
}

unsigned gcd(unsigned a, unsigned b)
    {
       cout<<a<<" "<<b<<endl;
	if(a==0)
       		return b;
	if (b==0)
		return a;
       else 
	       return gcd( b, a % b);       
     
    }

