#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int maxProduct = 0;
        for (int i=0; i<=5; i++)
        {
            for (int j=0; i+j<=5; j++)
            {
                int k=5-i-j;
                int aa=a+i;
                int bb=b+j; 
                int cc=c+k;
                int p=aa*bb*cc;
                maxProduct=max(maxProduct, p);
            }
        }
        cout<<maxProduct<<endl;
    }
    return 0;
}