#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[5]={100, 20, 10, 5,1};

    int c=0;
    int i=0;
    while (i<5)
    {
        if (arr[i]<=n)
        {
            n-=arr[i];
            c++;
        }
        else
        {
            i++;
        }
    }
    cout<<c<<endl;

    return 0;
}