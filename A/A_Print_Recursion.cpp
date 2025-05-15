#include <iostream>
using namespace std;

void Print_Recursion (int n)
{
    if (n==1)
    {
        cout<<"I love Recursion"<<endl;
        return;
    }
    cout<<"I love Recursion"<<endl;
    Print_Recursion (n-1);
}

int main ()
{
    int n;
    cin>>n;

    Print_Recursion (n);
    return 0;
}