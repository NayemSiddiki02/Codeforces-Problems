#include <iostream>
using namespace std;

int main ()
{
    int t, n;
    cin>>t;
    int a, b=1, c=0;
    while (t--)
    {
        cin>>n;

        while (b!=n)
        {
            a=n-b;
            b++;
            c++;
        }
    cout<<c<<endl;
    }

}