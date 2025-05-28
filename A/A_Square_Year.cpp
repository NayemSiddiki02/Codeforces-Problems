#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;

        int year = 0;
        for (char c : s)
            year=year*10+(c-'0');

        bool found = false;

        for (int x=0; x<=198; x++) 
        {
            if (x*x == year) 
            {
                for (int a=0; a<=x; a++) 
                {
                    int b = x-a;
                    if (a<=99 && b<=99) 
                    {
                        cout<<a<<" "<<b<<endl;
                        found = true;
                        break;
                    }
                }
                if (found) 
                {
                    break;
                }
            }
        }

        if (!found)
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
