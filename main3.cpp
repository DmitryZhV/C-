#include <iostream>
using namespace std;

int main()
{
    /* ... */
    bool i=true;
    char c = '\0';
    while (cin.get(c)) {
        if (c==' ')
	{
	  if(i)
		{
			 i=false;
			cout<<c;
    		}
	}else {
	      i=true;
      	      cout <<c;
		}	      
    }

	return 0;
}
