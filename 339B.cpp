#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,i,j,sum,p,q,t;
    while(cin>>n>>m)
    {
        p=1;
        sum=0;

        for(i=1;i<=m;i++)
        {
            cin>>q;
            if (q<p)
            {
                t=n-p;
                sum+=t+q;
                p=q;
            }
            else {
                sum+=q-p;
                p=q;
            }
            //cout<<sum<<endl;;
        }
        cout<<sum<<endl;
    }
}
