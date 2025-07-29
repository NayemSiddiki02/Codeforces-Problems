#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    cin.ignore();

    vector<string> name;
    vector<int> score;

    while (n--)
    {
        string s;
        getline(cin, s);

        int space_pos = s.find(' ');
        string s1 = s.substr(0, space_pos); 
        string s2 = s.substr(space_pos + 1); 
        int i = stoi(s2); 

        name.push_back(s1);
        score.push_back(i);
    }

    vector<string> name1;
    vector<int> score1;

    for (int i=0; i<name.size(); i++)
    {
        int pos=-1;
        for (int j=0; j<name1.size(); j++)
        {
            if (name1[j]==name[i])
            {
                pos=j;
                break;
            }
        }

        if (pos==-1)
        {
            name1.push_back(name[i]);
            score1.push_back(score[i]);
        }
        else
        {
            score1[pos]+=score[i];
        }
    }

    int max_score=score1[0];
    for (int i=1; i<score1.size(); i++)
    {
        if (score1[i]>max_score)
        {
            max_score = score1[i];
        }
    }

    vector<int> running_totals(name1.size(), 0);

    string winner="";

    for (int i=0; i<name.size(); i++)
    {
        int pos=-1;
        for (int j=0; j< name1.size(); j++)
        {
            if (name1[j]==name[i])
            {
                pos=j;
                break;
            }
        }

        running_totals[pos] += score[i];

    if (score1[pos] == max_score && running_totals[pos] >= max_score)
        {
            winner=name1[pos];
            break;
        }
    }

    cout<<winner<<endl;

    return 0;
}
