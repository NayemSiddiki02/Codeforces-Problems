#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() 
{
    int n;     
    int l;       
    cin>>n>>l;

    vector<int> a(n);
    for (int i=0; i<n; i++) 
    {
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    vector<double>gaparr;
    double gap1 = a[0] - 0;
    gaparr.push_back(gap1);
    for (int i = 1; i < n; ++i) 
    {
        double gap=(a[i]-a[i-1])/2.0;
        gaparr.push_back(gap);
    }
    double endL=l-a[n-1];
    gaparr.push_back(endL);

    double d=*max_element(gaparr.begin(), gaparr.end());


    cout<<fixed<<setprecision(10)<<d<<endl;

    return 0;
}
