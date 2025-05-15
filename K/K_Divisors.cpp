#include <iostream>
using namespace std;

int main ()
{
    int N;
    cin>>N;
    int i;
    for (i=1; i<=N; i++)
    {
        if(N%i==0)
        {
            cout<<i<<endl;
        }
    }




    return 0;
}
