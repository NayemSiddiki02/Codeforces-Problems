#include <iostream>
using namespace std;

int main ()
{
    char x;
    cin>>x;

    if (x >= 'a' && x <= 'z') 
    {
        x = x - ('a' - 'A');
    }
    else
    {
        x = x + ('a' - 'A');
    }

    cout<<x<<endl;
    return 0;
}