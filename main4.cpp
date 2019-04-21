#include <iostream>

using namespace std;

int main()
{
    long int a=0;
    long int max=1000000000;
    long int log(long int n);
    int c=0;
    cin>>c;
    
    
    for (int x=0; x<c; x++)
    {
	cin>>a;
	if (a<max)
	{
	 long int i=log(a);
          cout << i << endl;
	}
    }
    
    return 0;
}

long int log(long int n)
{
	long int m=2;
	long int i=0;
	while (m<=n)
	{
		m*=2;
		i++;
	}
	return i;
}
