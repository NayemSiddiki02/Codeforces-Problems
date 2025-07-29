#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    vector <int> a(n);

    int sum=0, c=0;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort (a.begin(), a.end());
    reverse (a.begin(), a.end());

    int sum2=0;
    for (int i=0; i<n; i++)
    {
        sum2 += a[i];
        c++;
        if (sum2>sum-sum2)
        {
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}