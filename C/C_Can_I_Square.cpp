#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main ()
{
    int t; 
    cin>>t;
    while (t--)
    {
        int n; 
        cin>>n;

        vector <int> arr(n);
        long long arrSum=0;
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
            arrSum +=arr[i];
        }

        long long root = sqrt(arrSum);
        if (root*root==arrSum)
        {
            cout<<"YES"<<endl;
        } 
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}