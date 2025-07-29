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

        int maxi=0, cur=0;
        for (int i : a) 
        {
            if (i==0) 
            {
                cur++;
                maxi= max (maxi, cur);
            } 
            else 
            {
                cur=0;
            }
        }
        
        cout<<maxi<<endl;
    }
    return 0;
}