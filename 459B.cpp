#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  n;
    cin>>n;

       long long  m,i,j,mn,mx,p,q,ans;
       map<long long,long long>mp;
       //cout<<arr[101]<<endl;
        mx=0;
        mn=999999999999;
        for(i=1;i<=n;i++)
        {
            cin>>m;
            if (m>mx)
                mx=m;
            if (m<mn)
                mn=m;
            //arr[m]++;
            mp[m]++;
        }
        p=mp[mx];
        q=mp[mn];
            if (mx==mn)
                ans=(n*(n-1))/2;
            else
            ans=p*q;


        cout<<mx-mn<<" "<<ans<<endl;
        mp.clear();


}
