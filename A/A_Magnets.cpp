#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    string s[n];
    for (int i=0; i<n; i++)
    {
        cin>>s[i];
    }
    int c=1;
    string a = s[0];
    for (int i=1; i<n; i++)
    {
        if (a!=s[i])
        {
            c++;
        }
        a=s[i];
    }
    cout<<c<<endl;

    return 0;
}