#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    string arr [n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    string s1, s2;

    s1=arr[0];
    int c1=0, c2=0;
    for (int i=0; i<n; i++)
    {
        if (s1!=arr[i])
        {
            s2=arr[i];
        }
    }

    for (int i=0; i<n; i++)
    {
        if (s1==arr[i])
        {
            c1++;
        }
        else if (s2==arr[i])
        {
            c2++;
        }
    }

    if (c1>c2)
    {
        cout<<s1<<endl;
    }
    else
    {
        cout<<s2<<endl;
    }
    return 0;
}