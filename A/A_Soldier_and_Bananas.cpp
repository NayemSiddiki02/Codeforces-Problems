#include <iostream>
using namespace std;

int main ()
{
    int k, n, w;
    cin>>k>>n>>w;

    long long m = 0;
    for (int i=1; i<=w; i++)
    {
        m = m + k*i;
    }
    if (m>n)
    {
        cout<< (m-n) <<endl;
    }
    else
    {
        cout<<0<<endl;
    }

    return 0;
}