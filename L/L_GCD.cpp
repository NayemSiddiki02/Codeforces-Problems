#include <iostream>
using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    int gcd = 1;
    for (int i = 1; i <= A && i <= B; i++) {
        if (A % i == 0 && B % i == 0) {
            gcd = i;
        }
    }

    cout << gcd << endl;

    return 0;
}
