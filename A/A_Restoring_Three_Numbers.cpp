#include <iostream>
using namespace std;

int main ()
{
    int s1, s2, s3, s4;
    cin>>s1>>s2>>s3>>s4;

    int total, a, b, c;
    if ((s1+s2+s3)/2 == s4)
    {
        total = s4;
        a=total -s1;
        b=total -s2;
        c=total -s3;
    }
    else if ((s1+s2+s4)/2 == s3)
    {
        total = s3;
        a=total -s1;
        b=total -s2;
        c=total -s4;
    }
    else if ((s1+s3+s4)/2 == s2)
    {
        total = s2;
        a=total -s1;
        b=total -s3;
        c=total -s4;
    }
    else
    {
        total = s1;
        a=total -s2;
        b=total -s3;
        c=total -s4;
    }

    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}