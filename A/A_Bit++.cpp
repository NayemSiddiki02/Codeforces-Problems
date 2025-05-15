#include <iostream>
using namespace std;

int main ()
{
   int n;
   cin>>n;
   int c=0;

   for(int i=0; i<n; i++)
   {
    string s;
    cin>>s;
    if (s=="X++"||s=="++X")
    {
        c=c+1;
    }
    else if (s=="X--"||s=="--X")
    {
        c=c-1;
    }
   } 
cout<<c<<endl;
    return 0;
}