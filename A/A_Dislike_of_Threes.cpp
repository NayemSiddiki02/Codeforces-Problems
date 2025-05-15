#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    int arr[1000];
    
    int index = 1, m = 1;
    while (index <= 1000) 
    {
        if (m % 3 != 0 && m % 10 != 3) 
        {
            arr[index] = m;
            index++;
        }
        m++;
    }

    int k;
    while (t--)
    {
        cin >> k;
        cout << arr[k] << endl;
    }

    return 0;
}
