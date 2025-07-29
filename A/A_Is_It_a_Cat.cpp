#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

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

        for (char &ss : s)
        {
            ss=tolower(ss);
        }

        string ns ="";
        for (char ss : s) 
        {
            if (ns.empty() || ns.back() != ss)
            {
                ns+=ss;
            }
        }

        if (ns=="meow")
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