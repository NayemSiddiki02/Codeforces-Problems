#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int c=0;
    int best = arr[0], worst=arr[0];
    for (int i=1; i<n; i++)
    {
        if (arr[i]>best)
        {
            c++;
            best=arr[i];
        }
        else if (arr[i]<worst)
        {
            c++;
            worst=arr[i];
        }
    }
    cout<<c<<endl;

    return 0;
}