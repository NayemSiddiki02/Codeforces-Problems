#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;

        int sc=0;

        // 1. a1 vs b1, a2 vs b2
        int s1=0,s2=0;
        if (a1>b1)
        { 
            s1++;
        }
        else if (a1<b1) 
        {
            s2++;
        }
        if (a2>b2) 
        {
            s1++;
        }
        else if (a2<b2) 
        {
            s2++;
        }
        if (s1>s2) 
        {
            sc++;
        }

        // 2. a1 vs b2, a2 vs b1
        s1=0, s2=0;
        if (a1>b2) 
        {
            s1++;
        }
        else if (a1<b2) 
        {
            s2++;
        }
        if (a2>b1) 
        {
            s1++;
        }
        else if (a2<b1) 
        {
            s2++;
        }
        if (s1>s2) 
        {
            sc++;
        }

        // 3. a2 vs b1, a1 vs b2
        s1=0,s2=0;
        if (a2>b1) 
        {
            s1++;
        }
        else if (a2<b1) 
        {
            s2++;
        }
        if (a1>b2) 
        {
            s1++;
        }
        else if (a1<b2) 
        {
            s2++;
        }
        if (s1>s2) 
        {
            sc++;
        }

        // 4. a2 vs b2, a1 vs b1
        s1=0, s2=0;
        if (a2>b2) 
        {
            s1++;
        }
        else if (a2<b2) 
        {
            s2++;
        }
        if (a1>b1) 
        {
            s1++;
        }
        else if (a1<b1) 
        {
            s2++;
        }
        if (s1>s2) 
        {
            sc++;
        }



        cout<<sc<<endl;
    }
    return 0;
}