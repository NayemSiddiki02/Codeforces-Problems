#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n, m;
    cin>>n>>m;
    
    vector <int> a(m);
    for (int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    long long t=0, c=1;
    for (int i=0; i<m; i++)
    {
        if (a[i]>=c)
        {
            t+=a[i]-c;
            c=a[i];
        }
        else
        {
            t+=n-c+a[i];
            c=a[i];
        }
    }
    cout<<t<<endl;


    return 0;
}