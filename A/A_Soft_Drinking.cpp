#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int total_drink=k*l;
    int total_limes=c*d;
    int total_salt=p;

    //to make 1 tost
    int max_total_drink = total_drink/nl;
    int max_total_limes=total_limes/1;
    int max_total_salt=total_salt/np;

    int max_possible_toast = min(min(max_total_drink, max_total_limes), max_total_salt);

    int toasts_per_friend = max_possible_toast / n;

    cout<<toasts_per_friend <<endl;



    return 0;

}