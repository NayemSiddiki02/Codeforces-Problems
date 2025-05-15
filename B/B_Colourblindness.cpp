#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        string a, b;
        cin>>a;
        cin>>b;
        string c="", d="";
        for (int i=0; i<n; i++)
        {
            if (a[i] == 'G')
            {
                c += 'B';
            }
            else
            {
                c += a[i];
            }
        }

        for (int i=0; i<n; i++)
        {
            if (b[i] == 'G')
            {
                d += 'B';
            }
            else
            {
                d += b[i];
            }
        }

        if (c==d)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}