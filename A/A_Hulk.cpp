#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    string s="I hate";
    string s1=" it";
    string s2=" that ";
    string s3 = "I love";
    string s4="I hate";
 
    for (int i=2; i<=n;i++)
    {
        if (i%2==0)
        {
            s=s+s2+s3;
        }
        else
        {
            s=s+s2+s4;
        }
    }
    string ss=s+s1;
    cout<<ss<<endl;
    return 0;
}