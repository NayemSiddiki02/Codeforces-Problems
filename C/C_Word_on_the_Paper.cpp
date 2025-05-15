#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int t;
    cin>>t;

    while (t--)
    {
        char c [8][8];
        for (int i=0; i<8; i++)
        {
            for (int j=0; j<8; j++)
            {
                cin>>c[i][j];
            }
        }

        vector <char> word;
        for (int i=0; i<8; i++)
        {
            for (int j=0; j<8; j++)
            {
                if (c[i][j]!='.')
                {
                    word.push_back(c[i][j]); 
                }
            }
        }
        for (int i=0; i<word.size(); i++)
        {
            cout<<word[i];
        }
        cout<<endl;
    }
    return 0;
}