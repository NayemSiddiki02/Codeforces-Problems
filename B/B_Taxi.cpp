#include <iostream>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int c1=0, c2=0, c3=0, c4=0;

    for (int i=0; i<n; i++)
    {
        int s;
        cin>>s;
        if (s==4) c4++;
        else if (s==3) c3++;
        else if (s==2) c2++;
        else if (s==1) c1++;
    }

    int texi = c4;

    texi = texi + c3;
    c1= c1-c3;

    texi = texi+c2/2;
    if (c2%2==1)
    {
        texi = texi+1;
        c1 = c1-2;
    }

    if (c1>0 && c1<=4)
    {
        texi = texi+1;
    }
    else if (c1>0 && c1>4)
    {
        texi = texi + (c1+3)/4;
    }

    cout<<texi<<endl;

    return 0;
}