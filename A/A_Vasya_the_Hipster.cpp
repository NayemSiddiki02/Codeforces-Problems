#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
    int a,b;
    cin>>a>>b;

    int diffSocks=min(a,b);
    int sameSocks=(max(a,b)-diffSocks)/2;

    cout<<diffSocks<<" "<<sameSocks<<endl;

    return 0;
}