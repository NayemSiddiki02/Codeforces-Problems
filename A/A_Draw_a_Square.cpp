#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    int l, r, d, u;

while (t--)
{
    cin>>l>>r>>d>>u;
    if (l==r && r==d && d==u && u==l)
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