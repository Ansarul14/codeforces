#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005],c[100005];
main()
{
    int n,m,i,j,d,sum1,sum2,p,q,s,t,k,ss,ans,r;
    while(cin>>n)
    {
        sum1=0;
        sum2=0;
        p=0;q=0;s=0;

        if (n>=1){
        for(i=1;i<=n;i++)
        {
            cin>>a[i]>>b[i];
            sum1+=a[i];
            sum2+=b[i];
        }
        d=abs(sum1-sum2);
        //c[0]=d;
        k=1;
        r=d;
        m=0;
        for(i=1;i<=n;i++)
        {

                p=b[i];
                q=a[i];

            j=abs(sum1-a[i]+p);
            t=abs(sum2-b[i]+q);

           ss=abs(j-t);
             if (i==1)
             {
                 if (ss>d)
                 {
                     r=ss;
                     ans=i;
                     m++;
                 }
             }
             else
             {
                 if (ss>d&&ss>r)
                 {
                     ans=i;
                     r=ss;
                     m++;
                 }

             }
            }
            if (m>0)
    cout<<ans<<endl;
    else cout<<"0"<<endl;
    }

    }

    return 0;
    }


