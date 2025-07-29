#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int t;
    cin>>t;

    while(t--)
    {
        string w;
        cin>>w;

        int n=w.length();

        string s1=w.substr(0,n-2);

        cout<<s1<<"i"<<endl;
    }
    return 0;
}