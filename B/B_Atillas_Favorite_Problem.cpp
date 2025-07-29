#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n; 
        cin>>n;
        
        string s;
        cin>>s;
        
        sort (s.begin(), s.end());

        int x= s[n-1]-'a';

        cout<<x+1<<endl;

    }
    return 0;
}