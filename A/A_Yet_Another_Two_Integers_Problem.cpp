#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int a, b;
        cin >> a >> b;
        int d;
        if (a > b) 
        {
            d = a - b;
        } 
        else 
        {
            d = b - a;
        }
        int m = d/10;
        if (d%10 != 0) 
        {
            m++;
        }
        cout << m << endl;
    }
    return 0;
}