#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int c0=0, c1=0;

    for (int i=0; i<n; i++)
    {
        if (s[i]=='0')
        {
            c0++;
        }
        else
        {
            c1++;
        }
    }
    //total no is:
    int total=n-(min(c0,c1))*2;
    cout<<total<<endl;
    return 0;
}