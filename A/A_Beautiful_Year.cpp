#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin>>n;

    for (int i=0; ;i++)
    {
        n++;
        int a = n%10;            
        int b = (n/10)%10;  
        int c = (n/100)%10;   
        int d = (n/1000)%10;  
        if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            //int p=d*1000+c*100+b*10+a;
            cout<<n<<endl;
            break;
        }
    }
    return 0;
}