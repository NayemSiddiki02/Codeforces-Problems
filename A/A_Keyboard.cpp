#include <iostream>
using namespace std;

int main() 
{
    char d;
    string t;
    cin >> d >> t;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string result = "";

    for (int i = 0; i < t.size(); i++) 
    {
        for (int j = 0; j < keyboard.size(); j++) 
        {
            if (keyboard[j] == t[i]) 
            {
                if (d == 'R') 
                {
                    result += keyboard[j - 1];
                } 
                else 
                {
                    result += keyboard[j + 1];
                }
                break;
            }
        }
    }

    cout << result << endl;
    return 0;
}
