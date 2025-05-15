#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int len = s.length();
    char c[len];

    for (int i = 0; i < len; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            c[i] = s[i] + ('a' - 'A');
        }
        else
        {
            c[i] = s[i];
        }
    }

    for (int k = 0; k < len; k++)
    {
        if (c[k] != 'a' && c[k] != 'o' && c[k] != 'y' && c[k] != 'e' && c[k] != 'u' && c[k] != 'i')
        {
            cout << '.'<< c[k];
        }
    }

    cout << endl;
    return 0;
}
