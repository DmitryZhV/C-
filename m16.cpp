#include <iostream>
#include <cstring>
#include <cstddef>

using namespace std;


struct String {

    /* Реализуйте этот конструктор */
	String(const char *str = "")
        {
		if(str!="")
		{
		  this->size=strlen(str);
		  cout<<size<<endl;
		  this->str=new char [(this->size+1)];
		  for(size_t i=0;i<this->size;++i)
			  this->str[i]=str[i];

		  strcat(this->str,str);
		  this->str[(this->size)]=0;
		}
	}
	size_t size;
	char *str;
};




	
int main()
{

    //char str[]="Hellow, World!";
    //cout<<str<<endl;
    String  S1("Hellow ");
    String  S2("World!");

    cout<<S1.str<<endl;
    cout<<S1.size<<endl;
    cout<<S2.str<<endl;
    cout<<S2.size<<endl;
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



