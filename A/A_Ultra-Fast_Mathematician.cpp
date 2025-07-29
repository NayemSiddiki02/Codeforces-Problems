#include <iostream>
using namespace std;

int main ()
{
    string s1, s2;
    cin>>s1>>s2;

    vector <char> s;

    for (int i=0; i<s1.length(); i++)
    {
        if (s1[i]==s2[i])
        {
            s.push_back('0');
        }
        else
        {
            s.push_back('1');
        }
    }

    for (char c : s)
    {
        cout<<c;
    }

    return 0;

}