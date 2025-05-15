#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    bool lucky = true;
    int temp = n; 

    while (temp != 0) 
    {
        int a = temp % 10;
        if (a != 4 && a != 7) 
        {
            lucky = false;
            break;
        }
        temp /= 10;
    }

    int ln [] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    bool divisible = false;
    for (int lnm : ln) 
    {
        if (n % lnm == 0) 
        {
            divisible = true;
            break;
        }
    }

    if (lucky || divisible) 
    {
        cout << "YES" << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
