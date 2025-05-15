#include <iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int X[N];

    for (int i=0; i<N; i++)
    {
        cin>>X[i];
    }
    int maxv=X[0];
    for (int j=0; j<N; j++)
    {
        if (maxv<X[j])
        {
            maxv=X[j];
        }
    }
    cout<<maxv<<endl;


    return 0;
}
