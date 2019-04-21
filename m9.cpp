#include <iostream>

using namespace std;

void rotate(int a[], unsigned size, int shift)
    {
     if(shift<size)
     { 
	for(int y=0;y<shift;y++)
	{     
	//      
	        int f=a[0];
		for(unsigned i=1; i<size; i++)
		{
			int f=a[i];
			a[i-1]=f;
			
		}
		a[size-1]=f;
	}
	    
	    
	    
	    
	 for(unsigned i=0;i<size;i++)
           {
	      cout<<a[i];
            }
     }
     
    }



int main()
{

    //int c=0;
    
    int a[]={1,2,3,4,5};
    unsigned size=0;
    int shift=0;
    size=5;
    //int m=*k;
    rotate( a, size, shift);
    cout<<endl;
    //cout<<size<<" "<<a[ ]<<endl;
    
    return 0;

        
       
}

int foo(int n)
    {
	cout<<"Yes"<<endl;
	if (n <= 0)
        return 1;
     return foo((n * 2) / 3) + foo(n - 2);
    }

