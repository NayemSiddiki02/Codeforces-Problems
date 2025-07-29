#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,l,r;
        cin>>n>>m>>l>>r;

        int left,right;
        int ll=abs(l);
        if(m >= ll)
        {
            m= m-ll; 
            left=l; 
            right=m;     
        }
        else
        {
            left=-m; 
            right=0; 
        }

        cout<<left<<" "<<right<<endl;
    }
    return 0;
}
