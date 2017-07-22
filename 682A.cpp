#include<bits/stdc++.h>
using namespace std;
main()
{
    long long i,j,n,m,c,k,p,t,s;
    while(cin>>n>>m)
    {
        c=0;
        for(i=1;i<=n;i++){
        j=1;s=0;
        while(1)
        {
            if (j>m)break;
            if ((i+j)%5==0)
            {
                s=1;
                p=j;
                 break;
            }
            j++;
        }
        if (s==1){
        k=m-p;
        t=k/5;
        c=c+t+s;}
        }
        cout<<c<<endl;
    }


}
