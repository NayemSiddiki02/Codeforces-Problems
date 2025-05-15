#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        int a, b;
        cin>>a>>b;
        int move;
        
        if (a%b!=0)
        {
            int c = a/b;
            move = (b*(c+1))-a;
        }
        else
        {
            move =0;
        }

        cout<<move<<endl;
    }
    return 0;
}