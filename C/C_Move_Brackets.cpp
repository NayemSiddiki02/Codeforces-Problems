#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int c=0;
        int minc=0;
        for (int i=0; i<s.length(); i++)
        {
            if (s[i]=='(')
            {
                c++;
            }
            else if (s[i]==')')
            {
                c--;
            }
            minc=min(minc, c);
        }
        cout<<-minc<<endl;
    }
    return 0;
}