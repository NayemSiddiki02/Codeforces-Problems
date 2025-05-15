#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    
    while(t--) 
    {
        int n;
        cin >> n; 
        int arr[n];
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }
        
        int a = arr[0];
        
        if (arr[0] != arr[1]) 
        {
            if (arr[0] == arr[2]) 
            {
                a = arr[0];
            } 
            else 
            {
                a = arr[1];
            }
        }
        
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] != a) 
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
