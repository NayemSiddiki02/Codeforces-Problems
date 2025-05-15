#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main ()
{
    long long n;
    cin >> n;
    vector<long long> arr;

    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
            if (i != n / i)
            {
                arr.push_back(n / i);
            }
        }
    }

    sort(arr.begin(), arr.end());

    int k;
    cin >> k;

    if (k > 0 && k <= arr.size())
    {
        cout << arr[k - 1] << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}
