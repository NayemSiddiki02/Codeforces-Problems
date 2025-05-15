#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        long long n;
        cin >> n;
        
        if (n % 2 != 0) 
        {
            cout << "YES" << endl;
        }
        else
        {
            while (n%2 == 0)
            {
                n/=2;
            }

            if(n>1)
            {
                cout<<"Yes"<<endl;
            }
            else 
            {
                cout<<"No"<<endl;
            }

            /*int c = 0;
            for (long long j = 2; j * j <= n; j++)
            {
                if (n % j == 0)
                {
                    long long vagfol = n / j;
                    if (vagfol % 2 == 0 && vagfol != 1)
                    {
                        c++;
                        break;
                    }
                }
            }
            
            if (c > 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            } */
        }
    }

    return 0;
}
