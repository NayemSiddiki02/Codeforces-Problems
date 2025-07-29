#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        vector <int> a(n);
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int maxp = 0;

        for (int i=0; i<n; i++) 
        {
            int p=1;
            for (int j=0; j<n; j++) 
            {
                if (j==i)
                {
                    p*=(a[j]+1);
                }
                else
                {
                    p*=a[j];
                }
            }
            maxp = max(maxp, p);
        }
        cout<<maxp<<endl;
    }
    return 0;
}