#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;

        int n=s.length();

        if (n%2==0 && (s.substr(0, n/2)==s.substr(n/2, n)))
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