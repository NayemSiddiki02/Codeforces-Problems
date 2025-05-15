#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n, d;
        cin >> n >> d;

        cout << "1"; 

        if (d % 3 == 0 || n>=3) 
        {
            cout << " 3";
        }

        if (d == 5) 
        {
            cout << " 5";
        }

        if (d == 7 || n >= 3) 
        {
            cout << " 7";
        }

        if (d%9==0 || n>=6 || (d % 3 == 0 && n >= 3))
        {
            cout << " 9";
        }

        cout << '\n';
    }

    return 0;
}
