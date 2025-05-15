#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool cl = true;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] < 'A' || s[i] > 'Z')
        {
            cl = false;
            break;
        }
    }

    if (cl==true)
    {
        if (s[0] >= 'A' && s[0] <= 'Z')
        {
            s[0] = s[0] + ('a' - 'A');
        }
        else
        {
            s[0] = s[0] - ('a' - 'A');
        }

        for (int i = 1; i < s.length(); i++)
        {
            s[i] = s[i] + ('a' - 'A');
        }
    }

    cout << s << endl;
    return 0;
}
