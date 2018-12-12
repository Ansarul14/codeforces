#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll  n,m,i,j,p,q,sum,mx1=-1,pos,mx2=-1;
    cin>>n;
    ll arr1[n+5],arr2[n+5];
    sum=0,p=0;
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
        sum+=arr1[i];
        if(mx1<=arr1[i]){
            mx1=arr1[i];}
    }
    for(i=0;i<n;i++)
    {
        if(mx1==arr1[i])
            p++;
        if(mx2<arr1[i]&&mx2<mx1 &&arr1[i]!=mx1)
            mx2=arr1[i];
    }
    if(p>1)
        mx2=mx1;
    if(p==1)
        mx2=mx2;
    ll c=0,flag,chck;
    for(i=0;i<n;i++)
    {
        pos=sum-arr1[i];
        if(arr1[i]==mx1)
        {
            flag=pos-mx2;
            if(flag==mx2)
            {
                arr2[c++]=i+1;
            }
        }
        else {
            flag=pos-mx1;
            if(flag==mx1)
            {
                arr2[c++]=i+1;
            }
        }
    }
    cout<<c<<endl;
    if(c>0){
    for(i=0;i<c;i++)
        cout<<arr2[i]<<" ";
    }
    else
        cout<<endl;

}
