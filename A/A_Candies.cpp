#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        for (int k = 2; ; ++k) 
        {
            long long d=(long long)pow(2, k)-1;

            if (n%d==0) 
            {
                cout<<n/d<<endl;
                break;
            }
        }
    }
    return 0;
}