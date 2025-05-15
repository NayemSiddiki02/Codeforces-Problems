#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    string target = "codeforces";

    while (t--) 
    {
        string s;
        cin >> s;

        int diffCount = 0;
        
        for (int i = 0; i < 10; ++i) 
        {
            if (s[i] != target[i]) 
            {
                diffCount++;
            }
        }
        
        cout << diffCount << endl;
    }

    return 0;
}
