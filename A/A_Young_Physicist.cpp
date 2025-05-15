#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int a, b, c;
    int sa =0, sb=0, sc=0;

    for (int i=0; i<n; i++)
    {
        cin>>a>>b>>c;
        sa +=a;
        sb +=b;
        sc +=c;
    }

    if (sa==0 && sb==0 && sc==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


    return 0;
}