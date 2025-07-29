#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    string s;
    cin>>s;

    vector <char> c;
    c.push_back(s[0]);

    for (int i=1; i<n; i++)
    {
       if (i%2!=0)
       {
            c.insert(c.begin(), s[i]);
       }
       else
       {
            c.push_back(s[i]);
       }
    }

    if (n%2==0)
    {
        reverse(c.begin(), c.end());
    }

    for (int i=0; i<c.size(); i++)
    {
        cout<<c[i];
    }
    return 0;
}
