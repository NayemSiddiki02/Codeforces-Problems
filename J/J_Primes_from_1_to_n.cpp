#include <iostream>
using namespace std;

int main()
{


 int cnt=0;
    int N;
    cin>>N;

    for (int X=2; X<=N; X++)
    {
    bool prime = true;
    for (int i=2; i*i<=X;i++)
    {
        if (X%i==0)
        {
            prime=false;
            break;
        }
    }
    if (prime==true)
    {
        cout<<X<<" ";
    }
    }

    return 0;
    }
