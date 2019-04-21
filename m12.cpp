#include <iostream>

using namespace std;

int  strstr(const char *text, const char *pattern)
    {
        
	/*int i=0;
        for(;text[i]!=*pattern&&text[i];++i)	
	{    
	 	   
	       
	       	
	}
          if(text[i])
	   {

	   }else return -1;
	while(*text==*pattern||*pattern!='\0')
	{
		*text++;
		*pattern++;
		
	}*/	
	//cout<<i<<endl;   
	 //c=from[x];
        //while(*to++=*from++)
	//{
	//}*/	
	/*while(!c==0)	 
	 {
		*from++;
		c=*from;
		*to=c;
		*to++;
	       	cout<<c<<endl;    
	 } */ 
	 //*to='\0';
	 //return i;

    int out = 0;
    bool is_ok = false;
    if(*pattern)
        do {
            while(text[out] && text[out] != *pattern) ++out;
            if(text[out]) {
                int i = 1;
                is_ok = true;
                while(is_ok && pattern[i]) {
                    if(text[out + i] && text[out + i] == pattern[i])
                        ++i;
                    else
                        is_ok = false;
                }
            }
        } while(!is_ok && text[++out]);
    else
        is_ok = true;
 
    return is_ok ? out : -1;
     
    }



int main()
{

    //int c=0;
	
    const char a[20]="C-stwryle write";
    const char b[]="write";
    //unsigned s=0;
    //int shift=0;
    //size=5;
    //int m=*i;
    int i=strstr( a, b);
    
    cout<<i<<endl;
    //cout<<size<<" "<<a[ ]<<endl;
    
    return 0;

        
       
}



