#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while (t--) 
    {
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for (int i=0;i<n;i++)
            cin>>a[i];

        int c=0;
        bool used=false;
        bool Pass=true;

        for (int i=0;i<n;i++) 
        {
            if (a[i]==0) 
            {
                if (c>0) 
                {
                    c--;
                }
            } 
            else 
            {
                if (c>0) 
                {
                    c--; 
                } 
                else if (!used)
                {
                    used=true;
                    c=x-1;
                } 
                else 
                {
                    Pass=false;
                    break;
                }
            }
        }

        cout<<(Pass ? "YES" : "NO")<<endl;
    }

    return 0;
}