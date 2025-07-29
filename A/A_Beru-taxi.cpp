#include <iostream>
#include <vector>
#include<iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

int main ()
{
    int a, b; //coordinates of Vasiliy's home
    cin>>a>>b;

    int n;
    cin>>n; //the number of available Beru-taxi cars nearby

    vector <double> arr;

    while (n--)
    {
        int x, y, v; //the coordinates of the i-th car (x,y) and its speed
        cin>>x>>y>>v;

        double d=sqrt((a-x)*(a-x)+(b-y)*(b-y));
        double t=d/v;
        arr.push_back(t);
    }
    double print=*min_element(arr.begin(), arr.end());
    cout << fixed << setprecision(9) << print << endl;

    return 0;
}