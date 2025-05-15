#include <iostream>
using namespace std;

int main ()
{
    int n, k;
    cin>>n>>k;
    int arr [n];

    for (int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
int c=0;
    for (int i=1; i<=n; i++)
    {
        if (arr[k]==0)
        {
        if (arr[i]> arr[k] && arr[i]>0 )//&& arr[k]==0)
            {
                c++;
            }
        }
        else if (arr[i]>= arr[k])
        {
            c++;
            
        }
    }
    cout<<c<<endl;

    return 0;
}