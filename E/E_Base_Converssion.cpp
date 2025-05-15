#include <iostream>
using namespace std;

void baseCon (int n)
{
    if (n==0)
    {
        return;
    }
    baseCon (n/2);
    cout<<(n%2);
}

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if (n==0)
        {
            cout<<0<<endl;
        }
        else
        {
            baseCon (n);
            cout<<endl;
        }
    }
    return 0;
}