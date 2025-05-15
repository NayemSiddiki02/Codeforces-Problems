#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        vector <int> arr(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }

        int max_val = *max_element(arr.begin(), arr.end());
        vector<int> frequency(max_val + 1, 0);

        for (int i = 0; i < n; i++) 
        {
            frequency[arr[i]]++;
        }

        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (frequency[arr[i]] >= 3)
            {
                cout << arr[i] << endl;
                found = true;
                break;
            }
        }

        if (!found) 
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}