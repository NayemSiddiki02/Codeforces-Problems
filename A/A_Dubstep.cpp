#include <iostream>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    
    string res = "";
    int i = 0, n = s.length();
    bool sp = false;
    
    while (i < n) 
    {
        if (i + 2 < n && s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') 
        {
            if (!sp && res.length() > 0) 
            {
                res += ' ';
                sp = true;
            }
            i += 3;
        } 
        else 
        {
            res += s[i];
            sp = false;
            i++;
        }
    }
    
    cout << res << endl;
    return 0;
}
