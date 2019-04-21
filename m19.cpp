#include <iostream>
#include <cstring>
#include <cstddef>

using namespace std;


struct Cls {

    /* Реализуйте этот конструктор */
	
	Cls(char c);
	
	char &get_c(Cls &cls)
	{
		char * d=&cls.c;
		return *d;

	}

	
	private:
	     char c;
	     //double d;
	     //int i;
	 /* Реализуйте этот метод. */
	
	
};




	
int main()
{

    Cls  S1('S');
    char  k=S1.get_c(S1);
    

    //cout<<S1.str<<endl;
    //cout<<S1.size<<endl;
    //cout<<S2.str<<endl;
    //cout<<S2.size<<endl;
    //S1.append(S2);
    cout<<k<<endl;
    //cout<<*k<<endl;
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



