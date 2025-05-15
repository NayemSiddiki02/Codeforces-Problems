#include <iostream>
using namespace std;

int main() 
{
    int d, sumTime;
    cin >> d >> sumTime;

    int minTime[d], maxTime[d];
    int minTimes = 0, maxTimes = 0;
    for (int i = 0; i < d; i++) 
    {
        cin >> minTime[i] >> maxTime[i];
        minTimes += minTime[i];
        maxTimes += maxTime[i];
    }

    if (sumTime >= minTimes && sumTime <= maxTimes) 
    {
        cout << "YES" << endl;

        int schedule[d];
        for (int i = 0; i < d; i++) 
        {
            schedule[i] = minTime[i];
        }

        int remainingTime = sumTime - minTimes;
        for (int i = 0; i < d && remainingTime > 0; i++) 
        {
            int addTime = maxTime[i] - minTime[i];
            if (addTime > remainingTime) 
            {
                addTime = remainingTime;
            }
            schedule[i] += addTime;
            remainingTime -= addTime;
        }

        for (int i = 0; i < d; i++) 
        {
            cout << schedule[i];
            if (i != d - 1) 
            {
                cout << " ";
            }
        }
        cout << endl;
    } 
    else 
    {
        cout << "NO" << endl;
    }

    return 0;
}

/*#include <iostream>
using namespace std;

int main ()
{
    int d, sumTime;
    cin>>d>>sumTime;

    int minTime[d], maxTime[d];
    int minTimes=0, maxTimes=0;
    for (int i=0; i<d; i++)
    {
        cin>>minTime[i]>>maxTime[i];
        minTimes = minTimes + minTime[i];
        maxTimes = maxTimes + maxTime[i];
    }

    if (sumTime>=minTimes && sumTime<=maxTimes)
    {
        cout<<"YES"<<endl;
        if (d==1)
        {
            cout<<sumTime<<endl;
        }
        else if (maxTime[0]>sumTime)
        {
            cout<<sumTime<<" "<<"0"<<endl;
        }
        else if (maxTime[0]<sumTime)
        {
            cout<<maxTime[0]<<" "<<sumTime-maxTime[0]<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}*/