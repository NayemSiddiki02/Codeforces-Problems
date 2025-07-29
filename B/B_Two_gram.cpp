#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<string> ss;

    for (int i=0; i<n-1; i++) 
    {
        ss.push_back(s.substr(i, 2)); 
    }

    int maxc=0;
    string mostFrequent = "";

    for (int i=0;i<ss.size();i++)
    {
        int c = 0;
        for (int j=0; j<ss.size(); j++) 
        {
            if (ss[i]==ss[j])
            {
                c++;
            }
        }
        if (c>maxc) 
        {
            maxc=c;
            mostFrequent = ss[i];
        }
    }

    cout<<mostFrequent<<endl;
    return 0;
}
