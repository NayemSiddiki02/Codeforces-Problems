#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    
    int max = 1, cur = 1;
    
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] >= arr[i - 1]) 
        {
            cur++;
        } 
        else 
        {
            if (cur > max) 
            {
                max = cur;
            }
            cur = 1;
        }
    }
    
    if (cur > max) 
    {
        max = cur;
    }
    
    cout << max << endl;
    return 0;
}
