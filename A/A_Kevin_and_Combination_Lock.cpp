#include <iostream>
using namespace std;

int main ()
{
    int t, x, c;
    cin>>t;
    while (t--)
    {
    cin>>x;
    while (x!=0)
    {
        x=x-33;
        c=x;
    }
    if (c==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }

    return 0;
}