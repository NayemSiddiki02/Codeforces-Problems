#include <iostream>
using namespace std;

long long computeSqrt(long long a) 
{
    if (a < 2) 
    {
        return a; 
    }

    long long left = 1, right = a;
    long long result = 0;

    while (left <= right) 
    {
        long long mid = left + (right - left) / 2;

        if (mid <= a / mid) 
        {
            left = mid + 1;
            result = mid; 
        } 
        else 
        {
            right = mid - 1;
        }
    }

    return result;
}

bool isPrime(long long num) 
{
    if (num < 2) 
    {
        return false;
    }
    for (long long i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    int n;
    cin >> n;

    while (n--) 
    {
        long long a;
        cin >> a;

        bool found = false;
        if (a >= 4) 
        {
            long long sqrt_a = computeSqrt(a); 
            if (sqrt_a * sqrt_a == a) 
            {
                if (isPrime(sqrt_a) == true) 
                {
                    found = true;
                } 
                else 
                {
                    found = false;
                }
            }
        }

        if (found==true) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}



/*#include <iostream>
using namespace std;

bool isPrime(long long num) 
{
    if (num < 2) 
    {
        return false;
    }
    for (long long i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    int n;
    cin >> n;

    while (n--) 
    {
        long long a;
        cin >> a;

        bool found = false;
        if (a >= 4) 
        {
            long long first = 2, last = a, mid;
            while (first <= last) 
            {
                mid = (first + last) / 2;

                if (mid > a / mid) 
                {
                    last = mid - 1;
                } 
                else 
                {
                    if (mid * mid == a) 
                    {
                        found = isPrime(mid);
                        break;
                    }
                    first = mid + 1;
                }
            }
        }

        if (found == true) 
        {
            cout << "YES" << endl;
        } 
        else 
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
*/