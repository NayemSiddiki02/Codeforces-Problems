#include <iostream>
using namespace std;

int main ()
{
    string s;
    cin>>s;
    string t = "hello";
    int j=0;

    for (int i=0; i<s.length(); i++)
    {
        if (s[i]==t[j])
        {
            j++;
        }
    }
    if (j==t.length())
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }





    return 0;
}