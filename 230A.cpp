#include<bits/stdc++.h>
using namespace std;
struct dragons{
    int n,s;
};

bool compare(struct dragons  p,struct dragons q){
   if(p.n!=q.n){
    return p.n<q.n;
   }
   return p.s>q.s;

}
int main()
{
    struct dragons arr[10000];
    int i,j,k,a,b,flag=0;
    cin>>a>>b;

    for(i=0;i<b;i++)
    {
        cin>>arr[i].n>>arr[i].s;
    }
    sort(arr,arr+b,compare);
    for(i=0;i<b;i++)
    {
        if(a>arr[i].n){
            a=a+arr[i].s;
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
