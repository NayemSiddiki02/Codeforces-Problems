#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;

    int c=0;
    while (x>1)
    {
        if (x%2!=0)
        {
            c++;
        }
        x=x/2;
    }

    cout<<c+1<<endl;

    return 0;
}