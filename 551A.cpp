#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,i,j,arr[2005],arr1[2005],p,q;
    while(cin>>n)
    {
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            arr1[i]=arr[i];
        }
        sort(arr,arr+n);
        map<ll,ll>mp;
        for(i=0;i<n;i++)
        {
            p=arr[i];
            mp[p]=i+1;

        }
        ll ans,t;
        for(i=0;i<n;i++)
        {
            q=arr1[i];
            t=mp[q];

            ans=abs(n-t)+1;
         cout<<ans<<" ";
        }
        cout<<endl;
        mp.clear();
    }
}
