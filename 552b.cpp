#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dou double
int main()
{
    ll n,m,i,j,ans,c;
    dou p,q,s;
    while(cin>>n)
    {
        p=n;
        q=log10(n);
        s=floor(q)+1;
        m=s;
        if (n<10)
            cout<<n<<endl;
        else
        {
            ans=10;
            ll sum=10;c=2;
            for(i=1;i<m;i++)
            {
               if (i==m-1)
               {
                  ans+=abs(n-sum)*c+1;
               }
               else
               {
                   j=sum*10;
                   ans+=abs(j-sum)*c+1;
               }
               sum=sum*10;
               c++;
            }
            cout<<ans<<endl;
        }

    }
}
