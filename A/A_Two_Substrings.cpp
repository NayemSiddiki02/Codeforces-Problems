#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> ab_idx;
    vector<int> ba_idx;

    for (int i = 0; i < n - 1; ++i) 
    {
        if (s[i] == 'A' && s[i+1] == 'B') 
        {
            ab_idx.push_back(i);
        }
        if (s[i] == 'B' && s[i+1] == 'A') 
        {
            ba_idx.push_back(i);
        }
    }

    if (!ab_idx.empty() && !ba_idx.empty()) 
    {
        for (int ab : ab_idx) 
        {
            for (int ba : ba_idx) 
            {
                if (ab + 1 < ba || ba + 1 < ab) 
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}