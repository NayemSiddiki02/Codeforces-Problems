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

        if (n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sort(a.begin(), a.end());
        bool not_equal = false;
        for (int i=0; i<n; i++)
        {
            if (a[i-1]==a[i])
            {
                not_equal=true;
                break;
            }
        }
        
        if (not_equal==false)
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