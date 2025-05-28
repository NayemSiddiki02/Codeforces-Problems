#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    if (n<26)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for (int i = 0; i < s.length(); i++) 
    {
        s[i] = tolower(s[i]);
    }

    sort(s.begin(), s.end());

    string ss="";
    ss += s[0];

    for (int i=1; i<s.length(); i++)
    {
        if (s[i]!=s[i-1])
        {
            ss+=s[i];
        }
    }

    string sss="abcdefghijklmnopqrstuvwxyz";
    if (ss==sss)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}