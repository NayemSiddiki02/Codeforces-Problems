#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int s = 0;

        if (a < m) 
        {
            if (c >= (m - a)) 
            {
                s += a + (m - a);
                c -= (m - a);
            } 
            else 
            {
                s += a + c;
                c = 0;
            }
        } 
        else 
        {
            s += m;
        }

        if (b < m) 
        {
            if (c >= (m - b)) 
            {
                s += b + (m - b);
                c -= (m - b);
            } 
            else 
            {
                s += b + c;
            }
        } 
        else 
        {
            s += m;
        }

        cout << s << endl;
    }

    return 0;
}
