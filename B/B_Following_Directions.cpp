#include <iostream>

using namespace std;

int main ()
{
    int t; 
    cin>>t;

    while(t--)
    {
        int n; 
        cin>>n;
        string s; 
        cin>>s;

        int lr=0, ud=0;
        bool found = false;

        for (int i=0;i<n;i++) 
        {
            if (s[i]=='U') 
            {
                ud++;
            } 
            else if (s[i]=='D') 
            {
                ud--;
            } 
            else if (s[i]=='L') 
            {
                lr--;
            } 
            else if (s[i]=='R') 
            {
                lr++;
            }

            if (ud==1 && lr==1) 
            {
                found=true;
                break;
            }
        }

        if (found==true) 
        {
            cout<<"YES"<<endl;
        } 
        else 
        {
            cout<<"NO"<<endl;
        }
    }
}