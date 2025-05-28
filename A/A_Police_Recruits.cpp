#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a=0;
    int b=0;
    
    while (n--) 
    {
        int x;
        cin>>x;
        
        if (x== -1) 
        {
            if (a>0) 
            {
                a--;
            } 
            else 
            {
                b++;
            }
        } 
        else 
        {
            a+= x;
        }
    }
    
    cout<<b<<endl;
    return 0;
}