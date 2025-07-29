#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int x;
        cin>>x;

        if (x<=9)
        {
            cout<<x<<endl;
        }
        else if (x>9 && x<=45)
        {
            vector <int> arr;
            for (int i=9; i>0; i--)
            {
                if (x >= i)
                {
                    x-=i;
                    arr.push_back(i);
                }
            }
            sort(arr.begin(), arr.end());
            for(int i=0; i<arr.size(); i++)
            {
                cout<<arr[i];
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}