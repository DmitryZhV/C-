#include <iostream>

using namespace std;

void swap(int * a, int * b)
    {
      int c = *a;
      *a=*b;
      *b=c;
    }



int main()
{

    //int c=0;
    
    int m=0;
    int k=0;
    cin>>m>>k;
    swap(&m,&k);
    cout<<m<<" "<<k<<endl;
    return 0;

        
       
}

int foo(int n)
    {
	cout<<"Yes"<<endl;
	if (n <= 0)
        return 1;
     return foo((n * 2) / 3) + foo(n - 2);
    }

