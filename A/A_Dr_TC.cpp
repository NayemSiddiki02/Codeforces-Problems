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
        string s;
        cin>>s;
        int c=0;
        for (int i=0; i<n; i++)
        {
            if (s[i]=='0')
            {
                c+=1;
            }
            else
            {
                c+=(n-1);
            }
        }
        cout<<c<<endl;
    }

    return 0;
}