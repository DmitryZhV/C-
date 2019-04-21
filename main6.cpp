#include <iostream>

using namespace std;

int main()
{

    //int c=0;
    
    int foo(int n);
    int i=foo(3);
    
    //cout<<c<<endl;
    return 0;

        
       
}

int foo(int n)
    {
	cout<<"Yes"<<endl;
	if (n <= 0)
        return 1;
     return foo((n * 2) / 3) + foo(n - 2);
    }

