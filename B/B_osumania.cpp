#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
    
        int n;
        cin>>n;

        char arr [n][4];
        vector <int> arr2;

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<4;j++)
            {
                cin>>arr[i][j];
            }
        }

        for (int i=0; i<n; i++)
        {
            for (int j=0; j<4;j++)
            {
                if (arr[i][j]=='#')
                {
                    int x=j+1;
                    arr2.push_back(x);
                    break;
                }
            }
        }

        reverse(arr2.begin(), arr2.end());

        for (int i : arr2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}