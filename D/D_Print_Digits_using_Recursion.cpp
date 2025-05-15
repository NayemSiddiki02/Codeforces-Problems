#include <iostream>
using namespace std;

void printDigit (int N) 
{
    if (N < 10) 
    {
        cout << N;
        return;
    }
    printDigit (N/10);
    cout << " " << (N%10);
}


int main() 
{
    int T;
    cin >> T;
    while (T--) 
    {
        int N;
        cin >> N;
        printDigit(N);
        cout << endl;
    }
    return 0;
}
