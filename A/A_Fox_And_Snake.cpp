#include <iostream>
using namespace std;

int main ()
{
    int n,m;
    cin>>n>>m;

    for (int i=0; i<n; i++)
    {
        if (i%2==0)
        {
            for (int j=0; j<m; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else if (i==1||i%4==1)
        {
             for (int j=0; j<m-1; j++)
            {
                cout<<".";
            }
            cout<<"#";
            cout<<endl;
        }
        else if (i==3||i%4==3)
        {
           cout<<"#";
            for (int j=1; j<m; j++)
            {
                cout<<".";
            }
            cout<<endl;
        }
    }

    return 0;
}