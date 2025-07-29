#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t; 

    while (t--) 
    {
        int n;
        cin>>n;

        int result=-1;
        int maxsum=-1;

        for (int x=2; x<=n;x++) 
        {
            int k=n/x;
            int total=x*k*(k+1)/2;

            if (total>maxsum) 
            {
                maxsum=total;
                result=x;
            }
        }

        cout<<result<<endl;
    }

    return 0;
}
