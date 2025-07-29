#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        vector<char>vec(s.begin(), s.end());

        while (vec.size()!=0)
        {
            char front=vec.front();
            char back=vec.back();

            if ((front=='0'||front=='1') && (back=='0'||back=='1') && front != back)
            {
                vec.erase(vec.begin());
                vec.pop_back();
            }
            else
            {
                break;
            }
        }

        int result=vec.size();
        cout<<result<<endl;
    }

    return 0;
}
