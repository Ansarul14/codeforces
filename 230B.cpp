#include<bits/stdc++.h>
using namespace std;

 bool prime [10000000]={0};
 #define N 10000000
main()
{
     long long  n,m,i,j,c,p,q;
      prime[2]=0;
      for(i=3;i<=sqrt(N);i+=2)
      {
          if (!prime[i])
          {
              for(j=i*i;j<=N;j+=2*i)
                prime[j]=1;
          }
      }
    while(cin>>n)
    {
        //cout<<n<<endl;
        for(i=1;i<=n;i++){

           cin>>m;
           if (m==1)cout<<"NO"<<endl;
           else{
           // m=a[i];
           p=sqrt(m);
           if (p*p==m&&prime[p]==0)
           {
               if (m==4)
               cout<<"YES"<<endl;
               else{
                if (p%2!=0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
               }
           }
           else
            cout<<"NO"<<endl;}


        }

    }
    }

