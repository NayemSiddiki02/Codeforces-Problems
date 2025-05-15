#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        long long u, v;
        cin>>u>>v;
        long long x= -(u*u);
        long long y= (v*v);

        cout<<x<<" "<<y<<endl;
    }
    return 0;
}