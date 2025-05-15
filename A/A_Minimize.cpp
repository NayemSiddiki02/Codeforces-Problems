#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        int a, b;
        cin>>a>>b;

        vector <int> arr;

        for (int c=a; c<=b; c++)
        {
            int x=(c-a)+(b-c);
            arr.push_back(x);
        }

        int maxv=arr[0];
        for (int i=0; i<arr.size(); i++)
        {
            if (arr[i]>maxv)
            {
                maxv=arr[i];
            }
        }
        cout<<maxv<<endl;
    }
    return 0;
}