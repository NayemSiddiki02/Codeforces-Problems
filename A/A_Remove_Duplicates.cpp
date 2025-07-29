#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    vector<int>a(n);
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    vector<int>f;
   for (int i=n-1;i>=0;i--)
    {
        bool found = false;
        for (int j=0;j<f.size();j++)
        {
            if (a[i]==f[j])
            {
                found=true;
                break;
            }
        }
        if (!found)
        {
            f.push_back(a[i]);
        }
    }

    reverse(f.begin(), f.end());

    int x=f.size();
    cout<<x<<endl;
    for (int i=0; i<f.size(); i++)
    {
        cout<<f[i]<<" ";
    }
    return 0;
}