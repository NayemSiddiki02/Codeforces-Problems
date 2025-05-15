#include <iostream>
using namespace std;

void print1ToN (int i, int n)
{
    if (i<n)
    {
        cout<<i<<endl;
        print1ToN (i+1, n);
    }
    else
    {
        cout<<i<<endl;
        return;
    }
}

int main ()
{
    int i = 1; 
    int n;
    cin>>n;

    print1ToN (1, n);

    return 0;
}