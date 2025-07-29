#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        string res(n, '0');
        int ones_placed = 0;

        // Place 1s in odd positions first (or even), to maintain alternation
        for (int i = 0; i < n && ones_placed < k; i += 2) {
            res[i] = '1';
            ones_placed++;
        }

        // If more 1s needed, place in remaining positions
        for (int i = 1; i < n && ones_placed < k; i += 2) {
            res[i] = '1';
            ones_placed++;
        }

        cout << res << '\n';
    }
    return 0;
}
