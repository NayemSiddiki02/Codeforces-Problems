#include <iostream>
using namespace std;

int main() 
{
    long long x;
    cin >> x;

    long long r = 0, p = 1;

    while (x > 0) 
    {
        int d = x % 10;
        int in = 9 - d;

        if (in < d && !(x < 10 && in == 0)) 
        {
            d = in;
        }

        r +=d*p;
        p *=10;
        x /=10;
    }

    cout<<r<< endl;
    return 0;
}
