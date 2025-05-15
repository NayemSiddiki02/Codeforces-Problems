#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;
        int fs=0, ls=0;
        for (int i=0; i<6; i++)
        {
            if (i<3)
            {
                int x = s[i]-'0';
                fs=fs+ x;
            }
            else
            {
                int y = s[i]-'0';
                ls=ls+ y;
            }
        }
        if (fs==ls)
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