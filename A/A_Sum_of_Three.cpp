#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        if (n < 7) 
        {
            cout<<"NO"<<endl;
            continue;
        }

        int x=1, y=2, z=n-3;
        if (z>0 && z!=x && z!=y && z%3!=0) 
        {
            cout << "YES"<<endl;
            cout<<x<<" "<<y<<" "<<z<<endl;
            continue;
        }

        x=1; y=4; z=n-5;
        if (z>0 && z!=x && z!=y && z%3!=0) 
        {
            cout<<"YES"<<endl; 
            cout<<x<<" "<<y<<" "<<z<<endl;
            continue;
        }

        cout << "NO\n";
    }
    return 0;
}
