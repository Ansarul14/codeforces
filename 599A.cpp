#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,c,ans,p,q,arr[10];
    while(cin>>a>>b>>c)
    {
       arr[0]=2*a+2*c;
       arr[1]=a+b+c;
       arr[2]=2*a+2*b;
       arr[3]=2*b+2*c;
       sort(arr,arr+4);
       cout<<arr[0]<<endl;
    }
}
