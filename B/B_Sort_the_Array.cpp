#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main ()
{
    int n; 
    cin >> n;

    vector<int> arr(n); 
    vector<int> sortedArr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sortedArr[i] = arr[i];
    }

    int c=0;
    sort(sortedArr.begin(), sortedArr.end());

    for (int i=0; i<n; i++)
    {
        if (arr[i]!=sortedArr[i])
        {
            c++;
        }
    }

    int a=-1,b=-1;
    for (int i=0; i<n; i++)
    {
        if (arr[i]!=sortedArr[i])
        {
            c++;
            if (a==-1)
            { 
                a = i;
            }
            b = i;
        }
    }

    if (c==0)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else
    {
        reverse(arr.begin()+a, arr.begin()+b+1);

        if (arr==sortedArr)
        {
            cout<<"yes"<<endl;
            cout<<a+1<<" "<<b+1<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}