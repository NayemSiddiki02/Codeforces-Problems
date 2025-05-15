#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin >> t; 

    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> print;
        int place = 1;

        while (n > 0) 
        {
            int storenum = n % 10;
            if (storenum != 0) {
                print.push_back(storenum * place);
            }
            n /= 10;
            place *= 10;
        }

        cout << print.size() << endl;
        for (int val : print) 
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
