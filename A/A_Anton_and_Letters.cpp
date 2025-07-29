#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int n=s.length();

    if (n==2)
    {
        cout<<0<<endl;
    }
    else if(n==3)
    {
        cout<<1<<endl;
    }
    else
    {
        vector<char>c;
        for(int i=1; i<n-1; i++)
        {
            if (s[i]>='a' && s[i]<='z')
            {
                c.push_back(s[i]);
            }
        }
        sort(c.begin(), c.end());
        vector <char>cc;
        cc.push_back(s[0]);
        for (int i=1; i<c.size(); i++)
        {
            if (c[i]!=c[i-1])
            {
                cc.push_back(s[i]);
            }
        }
        cout<<cc.size()<<endl;
    }
    return 0;
}