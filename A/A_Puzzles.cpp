#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int arr[m];
    for (int i=0; i<m; i++)
    {
        cin>>arr[i];
    }

    sort (arr, arr+m);

    int min_sum = INT_MAX;
    for (int i=0; i<=m-n; i++) 
    {
        int sum = arr[i+n-1] - arr[i];
        if (sum<min_sum) 
        {
            min_sum=sum;
        }
    }

    cout<<min_sum<<endl;
    return 0;
}