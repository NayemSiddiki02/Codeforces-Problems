//Nayem Siddiki

#include <iostream>
using namespace std;

int main()
{


    long long A, B, K;
      scanf("%lld %lld %lld",&A,&B,&K);
    //cout<<"Takahashi has A cookies"<<endl;
    //cin>>A>>B>>K;
    //cout<<"Aoki has B cookies"<<endl;
    //cin>>B;
    //cout<< "Takahashi will do the following action K times: "<<endl;
    //cin>>K;

    if (K<=A)
    {
        A=A-K;
    }
    else
    {
        K=K-A;
        A=0;
        if (K<=B)
        {
            B=B-K;
        }
        else
        {
            B=0;
        }
    }

    cout<<A<<" "<<B<<endl;

    return 0;
}
