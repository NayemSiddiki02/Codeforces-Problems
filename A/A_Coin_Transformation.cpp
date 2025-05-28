#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        long long c=1;
        while (n>3)
        {
            n/=4;
            c*=2;
        }
        cout << c << endl;
    }
    return 0;
}