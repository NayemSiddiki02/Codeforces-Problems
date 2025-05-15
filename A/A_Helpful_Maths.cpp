#include <iostream>
using namespace std;

int main() 
{
    string str;
    cin >> str;
    
    int c1 = 0, c2 = 0, c3 = 0;
    
    for (int i=0; i<str.length(); i++) 
    {
        if (str[i] == '1') 
        {
            c1++;
        } 
        else if (str[i] == '2') 
        {
            c2++;
        } 
        else if (str[i] == '3') 
        {
            c3++;
        }
    }
    
    bool check = true;
    
    for (int i = 0; i < c1; i++) 
    {
        if (!check) 
        {
            cout << "+";
        }
        cout << "1";
        check = false;
    }
    for (int i = 0; i < c2; i++) 
    {
        if (!check) 
        {
            cout << "+";
        }
        cout << "2";
        check = false;
    }
    for (int i = 0; i < c3; i++) 
    {
        if (!check) 
        {
            cout << "+";
        }
        cout << "3";
        check = false;
    }
    
    return 0;
}