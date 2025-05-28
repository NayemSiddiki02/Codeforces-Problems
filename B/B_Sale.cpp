#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int n,m;
    cin>>n>>m;

    vector<int>arr(n);
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());

    int s=0;
    for (int i=0; i<m; i++)
    {
        if (arr[i]<0)
        {
            s=(s+arr[i]);
        }
    }
    int ss= (-1)*s;
    cout<<ss<<endl;
    return 0;
}