#include <iostream>

using namespace std;

void  strcat(char *to, const char *from)
    {
        
	unsigned i=0;
        unsigned x=0; 
	char c=to[i];
        for(;*to!='\0';*to++)	
	/*while(!c==0)
	{     
	//      
	       i++;
	       c=to[i];
	       cout<<c<<endl;	
	}*/
	{
	}
	// cout<<*to<<endl;   
	 //c=from[x];
        while(*to++=*from++)
	{
	}	
	/*while(!c==0)	 
	 {
		*from++;
		c=*from;
		*to=c;
		*to++;
	       	cout<<c<<endl;    
	 } */ 
	 *to='\0';
     
    }



int main()
{

    //int c=0;
    char a[20]="C-style write";
    const char b[]=" Yes!gsgsggsgsggsgsaaa!";
    //unsigned s=0;
    //int shift=0;
    //size=5;
    //int m=*k;
    strcat( a, b);
    
    cout<<a<<endl;
    //cout<<size<<" "<<a[ ]<<endl;
    
    return 0;

        
       
}



