#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        long long n;
        cin >> n;
        
        if (n % 2050 != 0) 
        {
            cout << -1 << endl;
            continue;
        }
        
        long long m = n / 2050;
        string s = to_string(m);
        int sum = 0;
        for (char c : s) 
        {
            sum += (c - '0');
        }
        cout << sum << endl;
    }
    return 0;
}