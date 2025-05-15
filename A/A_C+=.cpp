#include <iostream>
using namespace std;

int main ()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a, b, n;
        cin >> a >> b >> n;

        int c = 0;
        while (max(a, b) <= n)
        {
            if (a > b) 
            {
                swap(a, b);
            }
            a += b;
            c++;
        }

        cout << c << endl;
    }
    return 0;
}
