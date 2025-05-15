#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int i = 0, j = 0;

    for (int x = 0; x < 5; x++) 
    {
        for (int y = 0; y < 5; y++)
        {
            cin >> arr[x][y];
            if (arr[x][y] == 1) 
            {
                i = x; 
                j = y; 
            }
        }
    }

    int c = 0;

    while (i != 2)
    {
        if (i < 2)
        {
            swap(arr[i][j], arr[i + 1][j]);
            i++;
        }
        else
        {
            swap(arr[i][j], arr[i - 1][j]);
            i--;
        }
        c++;
    }

    while (j != 2)
    {
        if (j < 2)
        {
            swap(arr[i][j], arr[i][j + 1]);
            j++;
        }
        else
        {
            swap(arr[i][j], arr[i][j - 1]);
            j--;
        }
        c++;
    }

    cout << c << endl;

    return 0;
}
