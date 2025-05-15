#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> frequency(26, 0);
    char c;
    for (int i = 0; i < n; ++i) 
    {
        cin >> c;
        frequency[c - 'a']++;
    }
    for (int i = 0; i < 26; ++i) 
    {
        while (frequency[i] > 0) 
        {
            cout << char(i + 'a');
            frequency[i]--;
        }
    }
    cout << endl;
    return 0;
}