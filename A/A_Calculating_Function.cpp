#include <iostream>
using namespace std;

int main ()
{
    long long n;
    cin>>n;

    /*long long sum=0;
    for (long long i=1; i<=n; i++)
    {
        if (i%2!=0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
    }
    cout<<sum<<endl;*/
    if (n%2==0)
    {
        cout<<n/2<<endl;
    }
    else
    {
        cout<<(-1)*(n/2+1)<<endl;
    }



    return 0;
}