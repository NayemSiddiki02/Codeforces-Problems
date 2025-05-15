#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int a;

    for (int i=0; i<n; i++)
    {
        int s=0;
        cin>>a;
        s= s+ (a/10) +a%10;
        cout<<s<<endl;
        
    }
    
    return 0;
}