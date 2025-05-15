#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n, k, p;
        cin >> n >> k >> p; 

        int min_sum = n * (-p);
        int max_sum = n * p;

        int min_op;
        if (k < min_sum || k > max_sum) 
        {
            cout << -1 << endl; 
        }
        else if (k >= 0) 
        {
            min_op = (k + p - 1) / p; 
            cout << min_op << endl;
        } 
        else 
        {
            min_op = (-k + p - 1) / p; 
            cout << min_op << endl;
        }
    }

    return 0;
}