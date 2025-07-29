#include <iostream>
#include <vector>

using namespace std;


int main ()
{
    int n;
    cin>>n;

    vector <int> arr;
    int p; 
    cin>>p;
    for (int i =0; i<p;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    int q;
    cin>>q; 
    for (int j=0; j<q; j++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    if (!arr.empty()) 
    {
    sort(arr.begin(), arr.end());

    vector <int> arrpq;
    arrpq.push_back(arr[0]);
    for (int k=1; k<arr.size(); k++)
    {
        if (arr[k]!=arr[k-1])
        {
            arrpq.push_back(arr[k]);
        }
    }


    if (arrpq.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}
else 
{
    cout << "Oh, my keyboard!" << endl;
}
    return 0;

}