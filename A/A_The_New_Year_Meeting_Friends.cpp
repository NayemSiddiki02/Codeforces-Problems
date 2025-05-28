#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int arr[3];
    for (int i=0; i<3;i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr + 3);

    int mp= arr[1];

    int tsum=0;
    for (int i=0; i<3; i++)
    {
        if (arr[i]<mp)
        {
            tsum+= mp-arr[i];
        }
        else
        {
            tsum+= arr[i]-mp;
        }
    }
    cout<<tsum<<endl;
    return 0;
}