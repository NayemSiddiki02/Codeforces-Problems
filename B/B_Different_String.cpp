#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        bool isAllSame = true;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] != s[0])
            {
                isAllSame = false;
                break;
            }
        }

        if (isAllSame)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            string s2 = s.substr(1) + s[0];
            cout << s2 << endl;
        }
    }

    return 0;
}
