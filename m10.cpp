#include <iostream>

using namespace std;

unsigned strlen(const char *str)
    {
        
	unsigned i=0;
        //i++; 
	char c=str[i];
	
	while(!c==0)
	{     
	//      
	       ++i;
	       c=str[i];
	       cout<<i<<' '<<c<<endl;	
	}
	    
	    
	//cout<<c<<endl;    
	    
	 return i;
     
    }



int main()
{

    //int c=0;
    const char a[20]="C-style write";
    unsigned s=0;
    //int shift=0;
    //size=5;
    //int m=*k;
    s=strlen( a);
    
    cout<<s<<endl;
    //cout<<size<<" "<<a[ ]<<endl;
    
    return 0;

        
       
}



