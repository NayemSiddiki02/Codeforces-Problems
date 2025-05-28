#include <iostream>
using namespace std;

int main ()
{
    int n, m;
    cin>>n>>m;

    if (n>=m)
    {
        int i = (n+1)/2;
        while(i<=n)
        {
            if (i%m==0)
            {
                cout<<i<<endl;
                return 0;
            }
            i++;
        }
    }
    else
    {
        cout<<"-1"<<endl;
        return 0;
    }
}