#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    for (int i=0; i<t; i++)
    {
    string s;
    cin>>s;

    string hh = s.substr (0,2);
    string mm = s.substr (2, 6);

    int hour = (hh[0] - '0') * 10 + (hh[1] - '0');

    if (hour == 0)
    {
        cout<< (hour + 12) <<mm<<" AM" << endl;
    }
    else if (hour >= 12)
    {
        if (hour==12)
        {
            cout<<hour<<mm<< " PM" <<  endl;
        }
        else if (hour<=21)
        {
            cout <<"0"<<(hour-12) << mm << " PM" << endl;
        }
        else
        {
            cout << (hour-12) << mm << " PM" << endl;
        }
    }
    else
    {
        if (hour<10)
        {
            cout <<"0"<<hour << mm << " AM" << endl;
        }
        else
        {
            cout <<hour << mm << " AM" << endl;
        }
    }
}

return 0;
}