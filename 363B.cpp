#include<bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
   map<ll,ll>mp;
   int arr[500005];
   ll n,m,i,j,sum,k,p,s;
   cin>>n>>k;
   sum=0;
   mp[0]=0;
   for(i=1;i<=n;i++)
   {
       cin>>m;
       arr[i]=m;
       sum+=m;
       mp[i]=sum;
   }
   mp[n+1]=0;
   map<ll,ll>::iterator it;
   p=k;
   s=100000000000000000;
   ll ans,q,t;
   for(i=1;;i++)
   {

       if (p<=n)
       {
           t=mp[i-1];
           q=mp[p];
           j=abs(t-q);
            cout<<j<<endl;
           if (j<s)
           {
               ans=i;
               s=j;
           }
        p++;
       }
       else break;
   }
   cout<<ans<<endl;
   mp.clear();

}
