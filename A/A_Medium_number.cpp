#include <iostream>
using namespace std;

int main() {
    int A, B, C;
int t;
cin>>t;

for (int i=0; i<t; i++)
{
    cin >> A >> B >> C;
    int minNum = A;
    if (B < minNum) 
    {
        minNum = B;
    }
    if (C < minNum) 
    {
        minNum = C;
    }
    
    int maxNum = A;
    if (B > maxNum) 
    {
        maxNum = B;
    }
    if (C > maxNum) 
    {
        maxNum = C;
    }
    
    if (A != minNum && A != maxNum)
    {
        cout<<A<<endl;
    }
    else if (B != minNum && B != maxNum)
    {
        cout<<B<<endl;
    }
    else
    {
        cout<<C<<endl;
    }
}
    
    return 0;
}