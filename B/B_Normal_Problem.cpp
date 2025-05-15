#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        string s1, s2 = "";
        cin >> s1;
        
        for (int i = s1.length() - 1; i >= 0; i--) 
        {
            if (s1[i] == 'p') 
            {
                s2 += 'q';
            } 
            else if (s1[i] == 'q') 
            {
                s2 += 'p';
            } 
            else 
            {
                s2 += 'w';
            }
        }
        cout << s2 << endl;
    }
    return 0;
}
