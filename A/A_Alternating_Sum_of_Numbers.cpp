#include <iostream>
using namespace std;

int main ()
{
    int t, n;
    
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n];
        int sum=0;
        for (int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if (i%2!=0)
            {
                sum = sum + arr[i];
            }
            else
            {
                sum = sum - arr[i];
            }
        }
        cout<<sum<<endl;
    }


    return 0;
}