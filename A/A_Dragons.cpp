#include <iostream>

using namespace std;

int main ()
{
    int s, n;
    cin>>s>>n;

    vector<int>xx;
    vector<int>yy;

    for (int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;

        xx.push_back(x);
        yy.push_back(y);
    }

    
    bool counter =false;
    while (n--)
    {
        int x,y;
        cin>>x>>y;
        if (x<s)
        {
            s+=y;
            counter =false;
        }
        else
        {
            cout<<"NO"<<endl;
            counter=true;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}