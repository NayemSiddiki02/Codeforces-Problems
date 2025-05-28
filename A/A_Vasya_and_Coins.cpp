#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        int a, b;
        cin>>a>>b;

        if ((a==0 && b==0)||(a==0 && b!=0))
        {
            cout<<"1"<<endl;
        } 
        else
        {
            int c=1*a+2*b+1;
            cout<<c<<endl;
        }
    }
    return 0;
}