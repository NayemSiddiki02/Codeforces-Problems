#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> even_nums; 
    vector<int>odd_nums;
    long long sum = 0;
    
    for (int i = 0; i < n; i++) 
    {
        int num;
        cin >> num;
        sum += num;
        if (num % 2 == 0) 
        {
            even_nums.push_back(num);
        } 
        else 
        {
            odd_nums.push_back(num);
        }
    }
    
    int min;
    if (odd_nums.size()!=0)
    {
        min = odd_nums [0];
        for (int i=0; i<odd_nums.size(); i++)
        {
            if (min>odd_nums[i])
            {
                min=odd_nums[i];
            }
        }
    }

    if (sum % 2 == 0) 
    {
        cout << sum << endl;
    } 
    else 
    {
        cout << sum - min << endl;
    }
    
    return 0;
}
