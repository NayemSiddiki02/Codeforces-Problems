#include <iostream>
using namespace std;

int main ()
{
    int n, m;
    cin >>n>>m;


    if (n==m&&(n%2==0 && n%2==0))
    {
        cout<<"Malvika"<<endl;
    }
    else if (n==m&&(n%2!=0 && n%2!=0))
    {
        cout<<"Akshat"<<endl;
    }
    else if (n==1 || m==1)
    {
        cout<<"Akshat"<<endl;
    }
    else
    {
            if (n < m)
        {
            if (n % 2 == 0)
            {
                cout << "Malvika" << endl;
            }
            else
            {
                cout << "Akshat" << endl;
            }
        }
        else
        {
            if (m % 2 == 0)
            {
                cout << "Malvika" << endl;
            }
            else
            {
                cout << "Akshat" << endl;
            }
        }
    }

    return 0;
}