#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int uniqueCount = 0;
    int i, j;

    cin >> str;

    for (i = 0; i < str.length(); i++)
    {
        bool isUnique = true; 

        for (j = 0; j < i; j++) 
        {
            if (str[i] == str[j]) 
            {
                isUnique = false;
                break; 
            }
        }

        if (isUnique)
        {
            uniqueCount++;
        }
    }

    if (uniqueCount % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
