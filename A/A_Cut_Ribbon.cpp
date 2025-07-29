#include <iostream>
using namespace std;

int main() 
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int maxNum, midNum, minNum;

    if (a >= b && a >= c) 
    {
        maxNum = a;
        if (b >= c) 
        {
            midNum = b;
            minNum = c;
        } 
        else 
        {
            midNum = c;
            minNum = b;
        }
    } 
    else if (b >= a && b >= c) 
    {
        maxNum = b;
        if (a >= c) 
        {
            midNum = a;
            minNum = c;
        } 
        else 
        {
            midNum = c;
            minNum = a;
        }
    } 
    else 
    {
        maxNum = c;
        if (a >= b) 
        {
            midNum = a;
            minNum = b;
        } 
        else 
        {
            midNum = b;
            minNum = a;
        }
    }

    int m = 0;

    while (n > 0) 
    {
        if (n >= minNum) 
        {
            n -= minNum;
            m++;
        } 
        else if (n >= midNum) 
        {
            n -= midNum;
            m++;
        } 
        else if (n >= maxNum) 
        {
            n -= maxNum;
            m++;
        }
        else 
        {
            break; 
        }
    }

    cout << m << endl;

    return 0;
}