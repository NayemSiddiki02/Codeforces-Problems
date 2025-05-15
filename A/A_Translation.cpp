#include <iostream>
#include <string>
using namespace std;

int main()
{
    string t, s, u;
    cin>>t>>s;
    
    for (int i=s.length()-1; i>=0; i--)
    {
        u +=s[i];
    }
    
    if (u==t)
    {
       cout<<"YES"<<endl;
    }
    else
    {
       cout<<"NO"<<endl;
    }

    return 0;
}