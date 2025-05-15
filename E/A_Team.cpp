#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int d=0;
    for (int i=0; i<n; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        if (a==1 && b==1)
        {
            d=d+1;
        }
        else if (b==1 && c==1)
        {
            d=d+1;
        }
        else if (c==1 && a==1)
        {
            d=d+1;
        }
    }
cout<<d<<endl;


    return 0;
}