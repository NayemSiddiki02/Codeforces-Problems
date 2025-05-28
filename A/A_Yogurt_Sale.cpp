#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n, a, b;
        cin>>n>>a>>b;
        int s=0;
        if (b<2*a)
        {
            if (n%2==0)
            {
                s+= (b*n)/2;
            }
            else
            {
                s+= (b*(n-1))/2+a;
            }
        }
        else
        {
            s+=n*a;
        }
        cout<<s<<endl;
    }
    return 0;
}