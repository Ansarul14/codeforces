#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,pos,chck,ans;
    while(cin>>n){
    int arr[n+5];
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    ans=0,pos=0;
    for(i=2;i<n;i++)
    {
        if(arr[i]==0&&arr[i-1]==1 &&arr[i+1]==1)
        {

                if(pos==i-1)
                    ans=ans;
                else
                {
                    ans=ans+1;
                    pos=i+1;
                }

        }
    }
    cout<<ans<<endl;}
}
