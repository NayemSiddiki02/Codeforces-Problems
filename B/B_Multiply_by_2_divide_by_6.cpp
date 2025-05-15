#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    int n;
    while (t--)
    {
        int c=0;
        cin>>n;
        while (n!=1)
        {
            if (n%6==0)
            {
                n /=6;
                c++;
            }
            else 
            {
                n *=2;
                c++;
                if (n%6!=0)
                {
                    c = -1;
                    break;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}