#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    if (n>=0)
    {
        cout<<n<<endl;
    }
    else 
    {
        int s=n;
        int a, b;
        a=s%10;
        s/=10;
        int ss=s;
        b=s%10;
        s/=10;

        int sss=s*10+a;

        if (ss>sss)
        {
            cout<<ss<<endl;
        }
        else
        {
            cout<<sss<<endl;
        }
    }
    return 0;
}