#include <iostream>
#include <vector>

using namespace std;

void solve(int n, int k) 
{
    vector<int> positions;
    for (int i = 1; i <= n; ++i) 
    {
        for (int j = i + 1; j <= n; ++j) 
        {
            positions.push_back((i - 1) * (n - i) + (j - i - 1));
        }
    }
    for (int i = 0; i < positions.size(); ++i) {
        for (int j = i + 1; j < positions.size(); ++j) {
            if (positions[i] > positions[j]) {
                int temp = positions[i];
                positions[i] = positions[j];
                positions[j] = temp;
            }
        }
    }
    int pos1 = 0, pos2 = 0;
    for (int i = 0; i < positions.size(); ++i) {
        if (positions[i] == k - 1) {
            pos1 = i / (n - 1) + 1;
            pos2 = i % (n - 1) + pos1 + 1;
            break;
        }
    }
    string result(n, 'a');
    result[pos1 - 1] = 'b';
    result[pos2 - 1] = 'b';
    cout << result << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}