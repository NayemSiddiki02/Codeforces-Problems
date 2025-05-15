#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr [n];
    for (int i= 1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int a=0, b=0;
    int x, y;
    for (int i =1; i<=n; i++)
    {
        if (arr[i]%2==0)
        {
            a++;
            x=i;
        }
        else
        {
            b++;
            y=i;
        }
    }
if (a==1)
    {
        cout<<x<<endl;
    }
    else if (b==1)
    {
        cout<<y<<endl;
    }



    return 0;
}