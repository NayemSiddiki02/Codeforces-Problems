#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    int sa=0, sd=0;
    for (int i=0; i<n; i++)
    {
        if (s[i] == 'A')
        {
            sa++;
        }    
        else if (s[i] == 'D')
        {
            sd++;
        }
    }
    if (sa==sd)
    {
        cout<<"Friendship"<<endl;
    }
    else if (sa>sd)
    {
        cout<<"Anton"<<endl;
    }
    else
    {
        cout<<"Danik"<<endl;
    }
    return 0;
}