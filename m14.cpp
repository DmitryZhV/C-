#include <iostream>
#include <cstring>

using namespace std;

int ** transporte(const int * const * m, unsigned rows, unsigned cols)
    {
        //строим новый масив
	int ** mcr= new int * [cols];
	mcr[0] = new int [cols * rows];
	for (unsigned i=1; i != cols; ++i)
		mcr[i]=mcr[i-1]+rows;
	//перегружаем масив
	for(unsigned i=0;i<rows;++i)
	{
		for(unsigned r=0;r<cols;++r)
		{
			mcr[r][i]=m[i][r];
			cout<<mcr[r][i]<<" ";
		}
		cout<<endl;	
	}
        //delete [] m;
	return mcr;
     
    }


void setString(int * c, int ** a, int cols, int row)
{
	for(int s=0;s<cols;++s)
	{
		a[row][s]=c[s];
		//cout<< a[row][s]<<" ";
	}
		//cout<<endl;
}	
int main()
{

    unsigned row=7;
    unsigned cols=10;	
    int ** a= new int * [row];
    a[0] = new int [row*cols];
    for(unsigned i=1; i!=row; ++i)
	    a[i]=a[i-1]+cols;
    
    int c1[]={1,2,3,4,5,6,7,99,28,44};
    int c2[]={8,9,10,11,12,13,14,256,4567,2};
    int c3[]={15,16,17,18,19,20,21};
    int c4[]={22,23,24,25,26,27,28};
    //	   a[0][s]=c[s];
    setString(c1,a,cols,0);
    setString(c2,a,cols,1);
    setString(c3,a,cols,2);
    setString(c4,a,cols,3);
    int ** b=transporte( a, row, cols);
    //delete [] a;
    /*for(int x=0;x<cols;++x)
	    cout<<c1[x]<<" ";
    cout<<endl;*/
    //int * i=new int(10);
    
    //char * b=resize(a, size, new_size);
    for(int y=0;y<cols;++y)
    {
    	for(int x=0;x<row;++x)
	    cout<<b[y][x]<<" ";

        cout<<endl;
    }
    //unsigned s=0;
    //int shift=0;
    //size=5;
    //int m=*i;
    //int i=strstr( a, b);
    
    //cout<<s<<endl;
    //cout<<i<<" "<<*i<<endl;
    //delete i;
    delete [] b;
    delete [] a;
    return 0;

        
       
}



