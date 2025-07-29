#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;

    while (t--) 
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int c=0;
        int chararray [26]={0};

        for (char ch : s) 
        {
            int i=ch-'A';

            if (chararray[i]==0) 
            {
                c+=2;
                chararray[i]=1;
            }
            else 
            {
                c+=1;
            }
        }

        cout<<c<<endl;
    }

    return 0;
}
