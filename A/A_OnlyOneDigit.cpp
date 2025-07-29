#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int x;
        cin>>x;

        if (x>=0 && x<=9)
        {
            cout<<x<<endl;
        }
        else if (x>=10 && x<=99)
        {
            int a=x/10;
            int b=x%10;
            int y=min(a,b);
            cout<<y<<endl;
        }
        else if (x>=100 && x<=999)
        {
            vector<int>n;
            int a=x/100;
            n.push_back (a);
            int b=x%100;
            int c=b/10;
            n.push_back(c);
            int d=b%10;
            n.push_back(d);
            int y= *min(n.begin(), n.end());
            cout<<y<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
} 
