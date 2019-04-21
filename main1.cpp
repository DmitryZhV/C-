#include <iostream>

using namespace std;

int main()
{
    #define max(x,p,r) ((x)>(p) ? (r=x) : (r=p))
    int a;
    int b;
    int m;

    cin>>a>>b;
    max(a<b?a:b,a<b?b:a,m);


    cout << m << endl;
    return 0;
}
