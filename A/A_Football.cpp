#include <iostream>
using namespace std;

int main() 
{
    string s;
    cin>>s;

    int c=1;
    for (int i=1; i<s.length(); i++)
    {
        if (s[i]==s[i-1])
        {
            c++;
            //cout<<"if1 : "<<c<<endl;
            if (c>=7)
            {
                cout<<"YES"<<endl;
                return 0; 
            }
        }
        else
        {
            c=1;
           // cout<<"else "<<c<<endl;
        }
    }
    
    cout<<"NO"<<endl;

    return 0;
}