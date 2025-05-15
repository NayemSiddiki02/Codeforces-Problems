#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int a, b, c;
    cin>>a>>b>>c;

    vector <int> result;
    result.push_back(a + b + c);
    result.push_back(a + b * c);
    result.push_back(a * b + c);
    result.push_back(a * b * c);
    result.push_back((a + b) * c);
    result.push_back(a * (b + c));

    int max=result [0];
    for (int i=0; i<result.size(); i++)
    {
        if (max<result[i])
        {
            max=result[i];
        }
    }
    cout<<max<<endl;

    return 0;
}