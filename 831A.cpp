#include<bits/stdc++.h>
using namespace std;
#define l int
main()
{
    l n,m,i,j,p,flag,a[2000],chck,mx;
    while(cin>>n)
    {
        mx=-1;
        for(i=1;i<=n;i++){
            cin>>a[i];
            if (a[i]>mx){
                mx=a[i];
                m=i;}

        }
        flag=1;
        //cout<<mx<<" "<<m;
        for(i=1;i<=n;i++)
        {
            if (a[i]==mx)
            {
                chck=i;break;
            }
        }
        if (n==1)
            cout<<"YES"<<endl;
        else if (n==2)
        {

                cout<<"YES"<<endl;
        }
       else
       {
            for(i=1;i<chck;i++)
            {
                if (a[i]<a[i+1])
                {
                    flag=1;
                }
                else
                {
                    flag=0;break;
                }
            }
            if (flag==1){

                for(i=m;i<n;i++)
                {
                    if (a[i]>a[i+1])
                    {
                        flag=1;
                    }
                    else if (a[i]==mx)
                    {
                        flag=1;
                    }
                    else
                    {
                        flag=0;break;
                    }
                }
                }
                if (flag==1)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;

       }
    }
}
