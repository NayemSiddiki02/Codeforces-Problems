#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    int c=0;
    vector <int> capacity;
    
    for (int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;

        c+=(-a+b);
        capacity.push_back(c);
    }
    int ca=*max_element(capacity.begin(), capacity.end());
    cout<<ca<<endl;

    return 0;
}