   #include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll k2,k3,k5,k6,n,m,mn1,mn;
    ll ans;
    while(cin>>k2>>k3>>k5>>k6)
    {
        mn1=min(k2,k5);
        mn=min(mn1,k6);
        ans=mn*256;
        n=abs(k2-mn);
        if (n>0)
        {
            mn=min(n,k3);
            ans=ans+mn*32;
        }
        cout<<ans<<endl;
    }
}
