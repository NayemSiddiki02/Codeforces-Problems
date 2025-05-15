#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    bool easy = true;

    for (int i=0; i<n; i++)
    {
        if (arr[i]==1)
        {
            easy=false;
        }
    }
    if (easy==false)
    {
        cout<<"HARD"<<endl;
    }
    else
    {
        cout<<"EASY"<<endl;
    }


    return 0;
}