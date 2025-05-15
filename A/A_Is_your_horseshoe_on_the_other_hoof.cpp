#include <iostream>
using namespace std;

int main ()
{
        int s[4];
        for (int i=0; i<4; i++)
        {
            cin>>s[i];
        }

        int un = 0;

    for (int i=0; i<4; i++) 
    {
        bool isUnique = true;
        for (int j=0; j<i; j++) 
        {
            if (s[i] ==s[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique) 
        {
            un++;
        }
    }

    int shoe=4-un;
    cout<<shoe<<endl;

    return 0;
}