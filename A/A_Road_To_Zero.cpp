#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        long long x, y;
        cin>>x>>y;
        long long a,b;
        cin>>a>>b;
        long long cost;

        if (b<=2*a)
        {
            cost= min(x,y)*b+(max(x,y)-min(x,y))*a;
        }
        else
        {
            cost=(x+y)*a;
        }
        cout<<cost<<endl;
    }
    return 0;
}