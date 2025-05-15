#include <iostream>
using namespace std;

int main()
{


 int cnt=0;
    int X;
    //cout<<"ENTER A  NUMBER: "<<endl;
    cin>>X;
    if (X==0||X==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
    for (int i=2; i*i<=X;i++)
    {
        if (X%i==0)
        {
            cnt++;
        }
    }

    if(cnt==0)
            cout<<"YES"<<endl;

            else
            cout<<"NO"<<endl;
    }

    return 0;

}
