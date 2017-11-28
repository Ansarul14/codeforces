#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,p,q,mn,mx,t1,t2;
    while(cin>>n)
    {
        mn=10000;
        mx=0;
        for(i=1;i<=n;i++)
        {
            cin>>m;
            if (m>mx){
                p=i;
                mx=m;}
            if (m<=mn){
                q=i;
                mn=m;}
        }
       if (p>q)
       {
           t1=n-q;

           t2=p-2;
           cout<<t1+t2<<endl;
       }
       else
       {
           t1=p-1;
           t2=n-q;
           cout<<t1+t2<<endl;
       }
    }
}
