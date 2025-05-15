#include <iostream>
#include <algorithm>

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

        sort (s.begin(), s.end());

        if (s=="Timru" && n==5)
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