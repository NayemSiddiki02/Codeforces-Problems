#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        int max=0;
        int maxidx=-1;
        for (int i=0; i<n; i++)
        {
            int a, b;
            cin>>a>>b;
            if (a<=10 && max<b)
            {
                max=b;
                maxidx=i;
            }
        }
        cout<<maxidx+1<<endl;
    }
    return 0;
}