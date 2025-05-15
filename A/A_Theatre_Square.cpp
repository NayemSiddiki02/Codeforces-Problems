#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    double n, m, a;
    cout<<"input:";
    cin>>n>>m>>a;
    long long x, y, b;
    //for leanth
    x=ceil(n/a);
    y=ceil(m/a);
    b=x*y;


    cout<<b<<endl;



    return 0;
}
