#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        int ca=0, cb=0, cc=0;
        for (int i=0; i<3; i++)
        {
            if (a[i]=='A')
            {
                ca++;
            }
            else if (a[i]=='B')
            {
                cb++;
            }
            else if (a[i]=='C')
            { 
                cc++;
            }
        }
        for (int i=0; i<3; i++)
        {
            if (b[i]=='A')
            {
                ca++;
            }
            else if (b[i]=='B')
            {
                cb++;
            }
            else if (b[i]=='C')
            { 
                cc++;
            }
        }
        for (int i=0; i<3; i++)
        {
            if (c[i]=='A')
            {
                ca++;
            }
            else if (c[i]=='B')
            {
                cb++;
            }
            else if (c[i]=='C')
            { 
                cc++;
            }
        }
        if (ca==2 && cb==3 && cc==3)
        {
            cout<<"A"<<endl;
        }
        else if (ca==3&&cb==2&&cc==3)
        {
            cout<<"B"<<endl;
        }
        else if (ca==3&&cb==3&&cc==2)
        {
            cout<<"C"<<endl;
        }
    }
    

    return 0;
}