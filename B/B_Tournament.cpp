#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin>>x;

        int min_digit=9;
        int temp=x;

        while (temp>0)
        {
            int d=temp%10;
            if (d<min_digit)
                min_digit=d;
            temp/=10;
        }

        cout<<min_digit<<endl;
    }

    return 0;
}
