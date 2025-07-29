#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;

        int ca=0, cb=0;
        for (int i=0; i<5; i++)
        {
            if (s[i]=='A')
            {
                ca++;
            }
            else
            {
                cb++;
            }
        }
        if (ca>cb)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
    return 0;
}