#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double n,m;
    ll a,b,k,p,ans,i,t,flag;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>k;
        n=k/2;
        if(k%2==0){
            flag=k/2;}
        else {
           flag=k/2;
           flag=flag+1;}

        p=flag*a;
        ll chck=k-flag;
        ans=p-(b*chck);
        cout<<ans<<endl;
    }
}
