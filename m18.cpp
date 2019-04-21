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
                  //cout<<size<<endl;
                  this->str=new char [(this->size+1)];
                  for(size_t i=0;i<this->size;++i)
                          this->str[i]=str[i];

                  
                }
        }
	
	String(size_t n, char c)
        {
		
		  this->size=(n);
		  //cout<<size<<endl;
		  this->str=new char [(this->size+1)];
		  for(size_t i=0;i<this->size;++i)
			  this->str[i]=c;

		  
		  this->str[(this->size)]=0;
		
	}

	~String()
	{
		delete [] str;
	}

	 /* Реализуйте этот метод. */
	void append(String &other)
	{
          //cout<<str<<endl;
	  //cout<<size<<endl;
	  //String p=other;
	  //String d(str);
	  //cout<<d.str<<endl;
	  
	   
          //delete[] str;
	  char * p=new char [(size+other.size+1)];
	  size_t i=0;
	  for(;i<size;++i)
		  p[i]=str[i];
	  //cout<<this->str<<endl;
	  //this->size=d.size+other.size;
	  for(size_t y=0;y<other.size;++i)
	  {
		  p[i]=other.str[y];
		  ++y;
	  }
	  p[other.size+size]=0;
	  
	  delete [] str;
	  
	  str = p;
	  
	  size+=other.size;		  


	}


	size_t size;
	char *str;
};




	
int main()
{

    String  S1("Hellow");
    String  S2(" World!");

    //cout<<S1.str<<endl;
    //cout<<S1.size<<endl;
    //cout<<S2.str<<endl;
    //cout<<S2.size<<endl;
    S1.append(S2);
    cout<<S1.str<<endl;
    cout<<S1.size<<endl;
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



