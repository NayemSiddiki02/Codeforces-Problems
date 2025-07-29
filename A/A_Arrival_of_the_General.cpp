#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int maxn=0;
    int maxi=-1;
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
        if (arr[i]>maxn)
        {
            maxn=arr[i];
            maxi=i;
        }
    }

    int c=0;
    c+=maxi;

    for (int i = maxi; i > 0; i--)
    {
        swap(arr[i], arr[i - 1]);
    }

    int minn=INT_MAX;
    int mini=-1;
    for (int i=0; i<n; i++)
    {
        if (arr[i]<=minn)
        {
            minn=arr[i];
            mini=i;
        }
    }

    c+=n-1-mini;

    cout<<c<<endl;
    return 0;
}