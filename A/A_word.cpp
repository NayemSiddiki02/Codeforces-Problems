#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    int uc = 0, lc = 0;

    cin >> s;

    for (int i = 0; i < s.length(); i++) 
    {
        if (s[i] >= 'A' && s[i] <= 'Z') 
        {
            uc++;
        } 
        else if (s[i] >= 'a' && s[i] <= 'z') 
        {
            lc++;
        }
    }

    if (uc > lc) 
    {
        for (int i = 0; i < s.length(); i++) 
        {
            if (s[i] >= 'a' && s[i] <= 'z') 
            {
                s[i] = s[i] - ('a' - 'A');
            }
        }
    } 
    else 
    {
        for (int i = 0; i < s.length(); i++) 
        {
            if (s[i] >= 'A' && s[i] <= 'Z') 
            {
                s[i] = s[i] + ('a' - 'A');
            }
        }
    }

    cout << s << endl;

    return 0;
}
