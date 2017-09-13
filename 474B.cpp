#include<bits/stdc++.h>
using namespace std;


int main()
{
     int n,m,i,j,p,q,mid,high,low;
      int a[100006],b[100005],sum=0;
    cin>>n;
    sum=0;
    a[0]=1;
    for(i=0;i<n;i++)
    {
        cin>>m;
        sum+=m;
        b[i]+=sum;
        if (i<n-1)
            a[i+1]=m+a[i];
    }

    cin>>m;
    //2 9 12 16 25
    for(i=1;i<=m;i++)
    {
        cin>>p;
        low=0,high=n;
        int flag=1,tmp=1,chck1=0,chck2=0;
        while(low<=high)
        {

            mid=(low+high)/2;
            if (p==b[mid])
            {
                q=mid;break;
            }
            else if (p<b[mid])
            {

                if (p>=a[mid]&&p<b[mid]){
                    q=mid;break;
                }
                else {
                    high=mid-1;
                }


            }
            else {
                  low=mid+1;
            }

        }
        cout<<q+1<<endl;

    }
}
