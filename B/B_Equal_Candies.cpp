#include <iostream>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        int candies [n];
        
        for (int i=0; i<n; i++)
        {
            cin>>candies[i];
        }

        int min=candies[0];
        for (int i=0; i<n; i++)
        {
            if (candies[i]<min)
            {
                min = candies[i];
            }
        }
        int eat=0;
        for (int i=0; i<n; i++)
        {
            if (candies[i]>min)
            {
                eat+=(candies[i]-min);
            }
        }

        cout<<eat<<endl;
    }
    return 0;
}