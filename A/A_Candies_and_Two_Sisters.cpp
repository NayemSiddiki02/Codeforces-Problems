#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        long long n; 
        cin>>n;

        long long x=n/2;
        if (n<3)
        {
            cout<<0<<endl;
        }
        else if (n>2 && n%2==0)
        {
            long long c= n-x-1;
            cout<<c<<endl;
        }
        else if (n>2 && n%2!=0)
        {
            long long c= x;
            cout<<c<<endl;
        }
    }
    return 0;
}