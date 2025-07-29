#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    vector<int>sc;
    vector<int>dc; 

    int l=0, r=n-1;
    bool turn = true;

    while (l<=r)
    {
        int chosen;
        if (arr[l] > arr[r])
        {
            chosen = arr[l];
            l++;
        }
        else
        {
            chosen = arr[r];
            r--;
        }

        if (turn==true)
        {
            sc.push_back(chosen);
        }
        else
        {
            dc.push_back(chosen);
        }
        turn = !turn;
    }

    int scSum = 0, dcSum = 0;

    for (int val : sc)
    {
        scSum += val;
    }
    for (int val : dc)
    {
        dcSum += val;
    }

    cout << scSum << " " << dcSum << endl;
    return 0;
}
