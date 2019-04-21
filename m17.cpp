#include <iostream>
#include <cstring>
#include <cstddef>

using namespace std;


struct String {

    /* Реализуйте этот конструктор */
	String(size_t n, char c)
        {
		
		  this->size=(n);
		  cout<<size<<endl;
		  this->str=new char [(this->size+1)];
		  for(size_t i=0;i<this->size;++i)
			  this->str[i]=c;

		  
		  this->str[(this->size)]=0;
		
	}

	~String()
	{
		delete [] str;
	}
	size_t size;
	char *str;
};




	
int main()
{

    char c='H';
    cout<<c<<endl;
    String  Nstring(10, c); 
    cout<<Nstring.str<<endl;
    cout<<Nstring.size<<endl;
    cout<<Nstring.str[Nstring.size]<<endl;
    cout<<Nstring.str[Nstring.size+1]<<endl;
    //delete [] a;
    /*for(int x=0;x<cols;++x)
	    cout<<c1[x]<<" ";
    cout<<endl;*/
    //int * i=new int(10);
    
    //char * b=resize(a, size, new_size);
    
    //unsigned s=0;
    //int shift=0;
    //size=5;
    //int m=*i;
    //int i=strstr( a, b);
    
    //cout<<s<<endl;
    //cout<<i<<" "<<*i<<endl;
    //delete i;
    //delete [] b;
    
    return 0;

        
       
}



