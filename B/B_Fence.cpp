#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    vector<int>sumarr;

     int sum=0;
    for (int j=0; j<k; j++) 
    {
        sum += arr[j];
    }
    sumarr.push_back(sum);

    for (int i=1; i<=n-k; i++) 
    {
        sum=sum-arr[i-1]+arr[i+k-1];
        sumarr.push_back(sum);
    }

    int mine=INT_MAX;
    int minidx=-1;

    for (int k=0; k<sumarr.size(); k++)
    {
        if (sumarr[k]<mine)
        {
            mine=sumarr[k];
            minidx=k;
        }
    }

    cout<<(minidx+1)<<endl;
    return 0;
}