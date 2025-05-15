#include <iostream>
using namespace std;

int main ()
{
    int n, m, a, b;
    cin>>n>>m>>a>>b;

    int s11=n*a;

    int x=n/m;
    int s1=x*b;
    int s2;
    if (m*x!=n)
    {
        s2=(n-(m*x))*a;
    }
    else
    {
        s2=0;
    }
    int s12=s1+s2;

    int s13 =((n + m)/m)*b;

    int minimum;

    if (s11 <= s12 && s11 <= s13) 
    {
        minimum = s11;
    } 
    else if (s12 <= s11 && s12 <= s13) 
    {
        minimum = s12;
    } 
    else 
    {
        minimum = s13;
    }

    cout<<minimum<<endl;
    
    return 0;
}