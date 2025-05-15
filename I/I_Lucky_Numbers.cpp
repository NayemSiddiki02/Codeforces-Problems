#include <iostream>
using namespace std;

int main ()
{
    int N;
    cin >> N;

    int a = N % 10;
    int b = N / 10;

    if (a == 0 || b == 0)
    {
        cout << "YES" << endl; 
    }
    else if (b % a == 0 || a % b == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
