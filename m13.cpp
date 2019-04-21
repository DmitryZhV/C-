#include <iostream>
#include <cstring>

using namespace std;

char * resize(const char *str, unsigned size, unsigned new_size)
    {
        
	char * new_str = new char [new_size];
		//new_str	  
      	for(unsigned i=0;i<size&&i<new_size;i++)
		new_str[i]=str[i];
	delete [] str;
	return new_str;
     
    }



int main()
{

    unsigned size=10;
    unsigned new_size=20;	
    char * a= new char [size];
    char c[]="String";
    for(int s=0;s<size;s++)
    	   a[s]=c[s];
    int * i=new int(10);
    
    char * b=resize(a, size, new_size);
    for(int x=0;x<new_size;x++)
	    cout<<b[x];
    cout<<endl;
    //unsigned s=0;
    //int shift=0;
    //size=5;
    //int m=*i;
    //int i=strstr( a, b);
    
    //cout<<s<<endl;
    cout<<i<<" "<<*i<<endl;
    delete i;
    delete [] a;
    delete [] b;
    return 0;

        
       
}



