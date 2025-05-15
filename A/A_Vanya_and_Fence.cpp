#include <iostream>
using namespace std;

int main ()
{
    int n, h;
    cin>> n>>h;
    int w=0;
    int a;

    for (int i=0; i<n; i++)
    {
        cin>>a;
        if (a>h)
        {
            w=w+2;
        }
        else
        {
            w=w+1;
        }
    }
    cout<<w<<endl;

    return 0;
}